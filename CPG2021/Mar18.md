# Mar 18


Single step through (show students how it works)

```c++
/*
L005 P3. Capitalize the entire string!
*/

#include <iostream>

using namespace std;

int main(){

	string s;
	char c;

	cout << "word: ";
	cin >> s;

    c = ' ';
	// Navigate the word
	for(int i=0; i < s.length(); i++){
        c = s[i];
		// turn a lower-case to an upper case
		if( ('a' <= s[i]) && (s[i] <= 'z')){
			s[i] -= 32;
		}
        c = s[i];
	}

	cout << "--> " << s;

return 0;
}
```

