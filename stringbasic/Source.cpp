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

	helloworld.changeString("BYE WORLD");
	helloworld.print();
	String newString(helloworld);
	newString.print();
	newString.resetString();

	newString.print();

	return 0;
}