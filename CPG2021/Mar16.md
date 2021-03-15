# Mar 16th, 2021

## Take a line of string

```c++
getline(cin, s);
```

Example
```c++
#include <iostream>

using namespace std;

int main(){	
	string s;
	
	cout << "name: ";
	getline(cin, s);
	cout << "Hello, " << s << endl;
	return 0;
}
```
## Function motivation

Capitalize without function
```c++
#include <iostream>

using namespace std;

int main(){
	char c;
	
	cout << "letter: ";
	cin >> c;
	
	if( ('a' <= c) && (c <= 'z') ){
		c -= 32;
	}
	
	cout << "letter: " << c << endl;
return 0;	
}
```

With function
```c++
#include <iostream>

using namespace std;

char capitalize(char letter){

	if( ('a' <= letter) && (letter <= 'z') ){
		letter -= 32;
	}
	
	return letter;
}

int main(){
	char c;
	
	cout << "letter: ";
	cin >> c;
	
	
	cout << "letter: " << capitalize(c) << endl;
return 0;	
}
```
