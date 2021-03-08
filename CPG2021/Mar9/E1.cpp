#include <iostream>

using namespace std;

int main(){
	
	char letter;
	
	letter = 'a';
	
	cout << "We have " << letter << endl;
	
	for(letter = 'a'; letter <= 'z'; letter++){
		cout << "* We have " << letter << endl;
	}
	
	char L1, L2;
	
	L1 = 'a';
	L2 = 'i';
	
	cout << L1 << L2 << endl;
	cout << "-->" << int(L1) << endl;
	
	cout << int('a') << endl;
	cout << int('A') << endl;
	cout << int('z') << endl;
	cout << int('Z') << endl;
	
	L1 -= 32;
	cout << "L1= " << L1 << endl;
	
	

return 0;	
}