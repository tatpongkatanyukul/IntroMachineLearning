# Mar 16th, 2021

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


Array
---

String is kinda an array of char.

```c++
	float v[3], u[3];

	cout << "v = [v0 v1 v2]: ";
	cin >> v[0] >> v[1] >> v[2];
	
	cout << "v = " << v << endl;
	cout << "*v = " << *v << endl;
	cout << "*(v+1) = " << *(v+1) << endl;
	cout << "*(v+2) = " << *(v+2) << endl;
	cout << "*(v+3) = " << *(v+3) << endl;
	cout << "*(v+4) = " << *(v+4) << endl;
	
	cout << "v = [" << v[0] << " " << v[1] << " " << v[2] << "]" << endl;
```

## 1D array


## 2D array


## 3D array (rank-3 tensor)

