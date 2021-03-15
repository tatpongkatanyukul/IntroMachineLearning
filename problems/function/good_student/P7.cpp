/*
P7
Name: ...
student id: ...

The final cover price c = p + s/50 + c * r/100 + a, 
where c is cover price; p is printing cost; s is shipping cost; 
r is retailer share in % of c; and a is author’s share.
*/

#include "P7.h"

float cover_price(float printing, float shipping, float retailer, float author)
{
	float c;
	c = (printing + shipping/50 + author)/(1 - retailer/100);
	
	return c;
}

