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

	String random("HELLLD");
	String rest("O WOR");
	random.insert(rest, 4);
	random.print();

	String bat("bat");
	String super("super");
	String batman("batarang batman crobat");
	batman.replace(bat, super);
	batman.print();

	return 0;
}