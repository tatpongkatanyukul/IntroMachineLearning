#include <iostream>

using namespace std;
// P3
int main(){
	int n, fact;
	
	cout << "n: ";
	cin >> n;

	// fact = n*(n-1)*...*2*1;
	fact = 1;
	for(int i=1; i <= n; i++){
		fact = fact * i;
	}
	cout << "n! = " << fact << endl;

return 0;
}