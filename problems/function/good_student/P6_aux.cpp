/*

*/

#include <iostream>
#include "P6.h"

using namespace std;

int main(){
	float deg=0.0;
	
	for(int i = 0; i < 5; i++){
		
		cout << "tan(" << deg << ") = " << tangent(deg) << "\n";
		deg += 18;

	}	
	return 0;
}

