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

```c++
	float v[3], u[3], r[3];

	cout << "v = [v0 v1 v2]: ";
	cin >> v[0] >> v[1] >> v[2];
	
	cout << "u = [u0 u1 u2]: ";
	cin >> u[0] >> u[1] >> u[2];
	
	cout << "v: ";
	for(int i=0; i<3; i++){
		cout << v[i] << ";";
	}

	cout << endl;
	cout << "u: ";
	for(int i=0; i<3; i++){
		cout << u[i] << ";";
	}

	cout << endl;
	cout << "r: ";
	for(int i=0; i<3; i++){
		r[i] = v[i] + u[i];
		cout << r[i] << ";";
	}
```

## 2D array


## 3D array (rank-3 tensor)

