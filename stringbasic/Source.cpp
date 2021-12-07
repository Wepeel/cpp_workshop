#include "String.h"


int main() {
	String empty;
	empty.print();
	String helloworld("Hello World");
	helloworld.print();

	empty = helloworld;
	empty.print();

	helloworld.resetString();
	helloworld.print();
	empty.print();

	return 0;
}