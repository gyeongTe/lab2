/* ditest */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

int main() {
	void *handle;
	int (*add)(int, int), (*minus)(int, int), (*multiply)(int , int),
	    (*divide)(int, int);
	char *error;

	handle = dlopen("./lib/libshare.so",RTLD_LAZY);

	if(!handle){
		fputs(dlerror(), stderr);
		exit(1);
	}

	char* str = (char*)malloc(10*sizeof(char));
	int num1, num2;

	printf("Please enter a four-pronged operaion.:");
	scanf("%s", str);

	printf("Please enter two numbers.:");
	scanf("%d %d", &num1, &num2);

	if(strcmp(str, "add")==0) {
		add = dlsym(handle, "add");
		if((error = dlerror()) != NULL){
			fprintf(stderr, "%s", error);
			exit(1);
		}
		printf("add = %d\n", (*add)(num1, num2));
	}
	else if(strcmp(str, "min")==0) {
		minus = dlsym(handle, "minus");
		if((error = dlerror()) != NULL){
			fprintf(stderr, "%s", error);
			exit(1);
		}
		printf("minus = %d\n", (*minus)(num1, num2));
	}
	else if(strcmp(str, "mul")==0) {
		multiply = dlsym(handle, "multiply");
		if((error = dlerror())!=NULL){
			fprintf(stderr, "%s", error);
			exit(1);
		}
		printf("multiply = %d\n", (*multiply)(num1, num2));
	}
	else if(strcmp(str, "div")==0){
		divide = dlsym(handle, "divide");
		if((error = dlerror()) != NULL){
			fprintf(stderr, "%s", error);
			exit(1);
	}
	printf("divide = %d\n", (*divide)(num1, num2));
	}	

dlclose(handle);
free(str);
}

