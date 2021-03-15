#include <iostream>
#include "P7.h"

using namespace std;

int main(){

	float price;

	price = cover_price(80, 400, 25, 50);
	cout << "The cover price should be " << price << endl;

	price = cover_price(70, 350, 20, 100);
	cout << "The cover price should be " << price << endl;
}
