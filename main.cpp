#include <iostream>
#include <math.h>

bool wheel(float x, float y){
	int a = 0;
	int b = 0;
	int r = 3;
	if((x - a)*(x - a) + (y - b)*(y - b) < r*r){
		return true;
	}
	return false;
}

bool hart(float x, float y){
	if(x*x + 2*(y - sqrt(fabs(x)))*(y - sqrt(fabs(x))) < 6){
		return true;
	}
	return false;
}

int main(){
	for(float y=10; y>-10; y-=0.2){
		for(float x=-10; x<10; x+=0.2){
			if(hart(x, y)){
				std::cout << "XX";
				continue;
			}
			std::cout << "  ";
		}
		std::cout << "\n";
	}
	while(true){}
}