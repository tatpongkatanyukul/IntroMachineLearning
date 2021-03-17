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

Functions
 * pre-defined functions, e.g., cmath's sqrt, pow, sin, cos, atan, ceil, floor, log, 
 * user-defined functions

Function definition
 ```c++
 <type> <function name>(<list of arguments>){
 	<function body>
 return <value>
 }
 ```

Function calling
```c++
<var> = <function name>(<parameter values>);
```

---

Function declaration: declare function signation/interface
```c++
<type> <function name>(<list of arguments>);
```

---

void function = function return nothing
```c++
void <function name>(<list of arguments>){
 ...
}
```

---

Variable scope: a variable will be valid throughout its scope (a block where it is defined including the inner blocks, but not beyond)

---
Passing a value to function
 * pass by value
 * pass by reference

  * ```<type> <function name>(<type> &x){ x = ... }```
  * ```<type> <function name>(<type> *x){ *x = ... }```
  * ```<type> <function name>(<type> x[]){ x[i] = ... }``` // for 1D array
  * ```<type> <function name>(<type> x[][3]){ x[i][j] = ... }``` // for 2D array

---
Swopping values
```c++
buffer = x;
x = y;
y = buffer;
```

[Practice: B000](https://autolab.en.kku.ac.th/courses/001203-s20/assessments/b000)


