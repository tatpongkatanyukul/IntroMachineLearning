/*
Reading a line of text
/*

#include <iostream>

using namespace std;

int main(){
	string motto;
	
	cout << "Motto: ";
	getline(cin, motto);
	cout << "Your motto is: " << motto << endl;
	
	return 0;
}