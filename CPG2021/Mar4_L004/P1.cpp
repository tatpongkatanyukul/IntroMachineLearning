#include <iostream>

using namespace std;
// P1
int main(){
	float bal, factor, target;
	int year;
	
	cout << "balance: ";
	cin >> bal;
	cout << "factor: ";
	cin >> factor;
	cout << "target: ";
	cin >> target;
	
	year = 1;
	while(bal < target){
		bal = bal * factor;
		cout << "Year " << year << ": balance = " << bal << endl;
		year += 1;
	}

return 0;
}