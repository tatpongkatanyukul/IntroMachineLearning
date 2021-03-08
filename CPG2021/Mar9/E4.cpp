#include <iostream>


using namespace std;

int main(){
	string s1, s2;
	string s;
	
	s1 = "sun";
	s2 = "sea";
	s = s1 + s2;
	cout << s << endl;
	
	cout << s[3] << endl;
	s[3] -= 32;
	cout << s << endl;
	
return 0;	
}