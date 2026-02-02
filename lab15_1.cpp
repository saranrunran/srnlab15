#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	int *y = (int *)&b;
	int **z = &x;

	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

	cout << &a << " " << (int *)&b << " " << (int *)&c << " " << &x << " " << &y << " " << &z << endl;
	
	c = 'F';

	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

	*((char*)y) = 'W';

	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

	*x = 6;

	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

	**z = 7;

	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

	return 0;
}
