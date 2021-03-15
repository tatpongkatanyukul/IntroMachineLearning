# Mar 23rd

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

array of string
```c++
	string s[3];

	cout << "Three most important things: ";
	getline(cin, s[0]);
	cout << "2:";
	getline(cin, s[1]);
	cout << "3:";
	getline(cin, s[2]);
	
	cout << "Your things:" << endl;
	for(int i=0;i < 3; i++){
		cout << s[i] << endl;
	}
```

## 2D array

```c++
#include <iostream>

using namespace std;

void print_matrix(float a[2][2]){

	cout << "Matrix:" << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

int main(){
	
	float A[2][2], B[2][2];

	cout << "A:" << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cin >> A[i][j];
		}
	}
	
	print_matrix(A);
	
	print_matrix(B);
	
			
	return 0;
}
```

## 3D array (rank-3 tensor)

