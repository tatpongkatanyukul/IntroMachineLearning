#include <iostream>
#include <string>

using namespace std;

int main(){
	
	char letter;
	
	letter = 'a';
	
	cout << "We have " << letter << endl;

	string S;
	S = "Hello";
	
	cout << "text: " << S << endl;

	S = "World";
	
	cout << "text: " << S << endl;
	
	cout << "length = " << S.length() << endl;
	
	cout << "First letter: " << S[0] << endl;
	for(int i=0; i < S.length(); i++){
		cout << "alphabet=" << S[i] << endl;
	}

return 0;	
}