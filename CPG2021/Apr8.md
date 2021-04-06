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

Example 3 (Read and write files)
```C++
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream fin("num.dat");
	ofstream fout_odd("odd.dat");
	ofstream fout_even("even.dat");
	
	int v;
	
	while(fin >> v){
		if(v % 2 == 1){
			fout_odd << v << endl;
		}else{
			fout_even << v << endl;
		}
	}
	
	cout << "Done!" << endl;



	return 0;
}
```
