#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a,int &b,int &c,int &d) {
	int y = rand()%4;
	if(y == 0){
		a = 50;
		b = 100;
		c = 500;
		d = 1000;
	} else if (y == 1) {
		a = 100;
		b = 500;
		c = 1000;
		d = 50;
	} else if (y == 2) {
		a = 500;
		b = 1000;
		c = 50;
		d = 100;
	} else if (y == 3) {
		a = 1000;
		b = 50;
		c = 100;
		d = 500;
	}
}