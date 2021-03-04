#include <iostream>
#include <cmath>

using namespace std;
// P4
int main(){
    float x, s;
	int M, fact;


	cout << "x: ";
	cin >> x;
	cout << "M: ";
	cin >> M;

	s = 0;
	for(int n=0; n <=M; n++){
        // fact = n*(n-1)*...*2*1;
        fact = 1;
        for(int i=1; i <= n; i++){
            fact = fact * i;
        }
        s = s + pow(x, n)/fact;
	}

	cout << "s = " << s << endl;

return 0;
}
