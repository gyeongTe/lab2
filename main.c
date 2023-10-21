/* main.c */

#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <string.h>

int main() {
	char math[10];
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	printf("Please enter a four-pronged operaion.: ");
	scanf("%s", math);

	printf("Please enter two numbers.: ");
	scanf("%d %d", &num1, &num2);

	if(strcmp(math, "add")==0){
		result = add(num1, num2);
		printf("add = %d\n", result);
	}
	else if(strcmp(math, "min")==0){
		result = minus(num1, num2);
		printf("min = %d\n", result);
	}
	else if(strcmp(math, "mul")==0){
		result = multiply(num1, num2);
		printf("mul = %d\n", result);
	}
	else if(strcmp(math, "div")==0){
		result = divide(num1, num2);
		printf("div = %d\n", result);
	}
}

