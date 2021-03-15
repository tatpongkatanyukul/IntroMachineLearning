#include <iostream>
#include "P8.h"
#include <iomanip>

using namespace std;

int main(){
	float sarea;
	
	cout << setprecision(2) << fixed;
	
	
	sarea = search_area(475, 1);
	cout << "Search area (in sq. mi.) = " << sarea << endl;
	
	sarea = search_area(450, 2);
	cout << "Search area (in sq. mi.) = " << sarea << endl;

	return 0;

}