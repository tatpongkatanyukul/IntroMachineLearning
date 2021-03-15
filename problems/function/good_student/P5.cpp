#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float magnitude(float v1, float v2){
	
	return sqrt(v1*v1 + v2*v2);
}

int main(){

	float m;
	
	cout << fixed << setprecision(3);
	
	m = magnitude(3, 4);
	cout << "vector size of (3, 4) = " << m << endl;

	m = magnitude(-5, 5);
	cout << "vector size of (-5, 5) = " << m << endl;

	m = magnitude(0, 5);
	cout << "vector size of (0, 5) = " << m << endl;

	m = magnitude(-8, 2);
	cout << "vector size of (-8, 2) = " << m << endl;

	float v1, v2;
	cout << "Enter vector components: ";
	cin >> v1 >> v2;
	m = magnitude(v1, v2);
	cout << "vector size of (" << v1 << "," << v2 << ") = " << m << endl;


	return 0;
}