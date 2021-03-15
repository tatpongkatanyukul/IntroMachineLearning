#include <iostream>

using namespace std;


	
// Write your function here!!!
float area(float w, float h)
{
	float a;
	a = w * h;
	return a;
}

int main(){

	float land;
	
	land = area(20, 30);
	cout << "Location 1 area = " << land << endl;

	float w, h;
	cout << "Width: ";
	cin >> w;
	cout << "Height: ";
	cin	>> h;
	land = area(w, h);
	cout << "Area of " << w << "x" << h << " is " << land << endl;


	return 0;
}