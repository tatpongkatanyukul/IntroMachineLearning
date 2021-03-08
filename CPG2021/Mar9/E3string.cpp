#include <iostream>
#include <string>

using namespace std;

int main(){
	
	char letter;
	
	letter = 'a';
	
	cout << "We have " << letter << endl;

	string S1, S2;
	cout << "Enter S1 and S2: ";
	cin >> S1;
	cin >> S2;
	cout << "S1 = " << S1 << endl;
	cout << "S2 = " << S2 << endl;
	if (S1 == S2) {
		cout << "Both are matched!" << endl;
	}	else {
		cout << "Different!" << endl;
	}

return 0;	
}