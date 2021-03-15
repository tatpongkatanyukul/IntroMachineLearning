/*
P6
name: ...
student id: ...
*/

#include "P6.h"
#include <cmath>

float tangent(float degree){
	float rst;

	// Write your code here
	float rad;
	
	rad = 3.1415926536 * degree/180;
	rst = tan(rad);
	return rst;
}
