# Apr 8th (The Last Class)

Warm up:
```C++
#include <iostream>

using namespace std;

int main(){

	int v;
	while(cin >> v){
		cout << "Value: " << v << endl;
	}
	
	cout << "Final v=" << v << endl;
  return 0;
}

```

Example 1 (Read contents from a file)
```C++
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream fin("num.dat");
	int v;
	while( fin >> v ){
		cout << "v = " << v << endl;
	}
	
	
	return 0;
}
```

Example 2 (Read and process contents from a file)
```C++
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream fin("num.dat");
	int v;
	int s = 0;
	while( fin >> v ){
		s += v;
	}
	
	cout << "Total is " << s << endl;
	return 0;
}
```
