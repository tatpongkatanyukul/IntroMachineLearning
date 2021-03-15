#include "P8.h"

float search_area(float speed, float time){
	float pi = 3.1415926536;
	float radius, area;
	
	radius = speed * time;
	area = pi * radius * radius;
	
	return area;

}