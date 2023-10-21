calculate : main.o ./lib/add.o ./lib/minus.o ./lib/multiply.o ./lib/divide.o
	gcc -o calculate main.o ./lib/add.o ./lib/minus.o ./lib/multiply.o ./lib/divide.o -I./lib -L./lib

main.o : main.c
	gcc -c main.c -I./lib
./lib/add.o : ./lib/add.c
	gcc -c ./lib/add.c

./lib/substract.o : ./lib/minus.c
	gcc -c ./lib/minus.c

./lib/multiply.o : ./lib/multiply.c
	gcc -c ./lib/multiply.c

./lib/divide.o : ./lib/divide.c
	gcc -c ./lib/dicide.c

clean:
	rm -f calculate main.o ./lib/add.o ./lib/minus.o ./lib/multiply.o ./lib/divide.o
