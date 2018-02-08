#include "Vector.hpp"
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	Vector a;
	cout << "Initialize with default consturctor" << endl;
	cout << a << endl << endl;

	Vector b(1.1, 2.2, 3.3);
	cout << "Initialize with overloaded constructor" << endl;
	cout << b << endl << endl;

	b.clear();
	cout << "Clear Vector above" << endl;
	cout << b << endl << endl;

	b.set_X(1.1); b.set_Y(2.2); b.set_Z(3.3);
	cout << "X : 1.1 , Y : 2.2, Z : 3.3" << endl << endl;

	Vector c(b);

	cout << b + c << endl << endl;
	b += c;
	cout << b << endl << endl;
	cout << b - c << endl << endl;
	b -= c;
	cout << b << endl << endl;

	b++;
	cout << b << endl;
	++b;
	cout << b << endl;

	--b;
	cout << b << endl;
	b--;
	cout << b << endl << endl;

	cout << b * c << endl;

	cout << b * 2 << endl << endl;

	cout << "b[0]: " << b[0];
	cout << "b[1]: " << b[1];
	cout << "b[2]: " << b[2];

	cout << "Press any button to exit";
	_getch();
	return 0;
}