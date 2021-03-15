#include <iostream>

using namespace std;

float squared(float x){
	
	return x*x;
}

int main(){

	float x2;
	x2 = squared(4);
	cout << "4 squared = " << x2 << endl;

	x2 = squared(9);
	cout << "9 squared = " << x2 << endl;

	x2 = squared(10);
	cout << "10 squared = " << x2 << endl;

	x2 = squared(24);
	cout << "24 squared = " << x2 << endl;
	
	float x;
	cout << "Enter x: ";
	cin >> x;
	x2 = squared(x);	
	cout << x << " squared = " << x2 << endl;
	
	return 0;
}