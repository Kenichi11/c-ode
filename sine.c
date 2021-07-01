// chang line 8 so only character 32 to 126 print
#include <iostream>
#include <cmath>
using namepsace std;

int main(){
	int x;
	float r ;
	float y;
	
	for(x = 0 ; x <= 360; x = x + 15){
		r = float(x * (3.141592 / 180.0));
		y = sin(float(r)) ;
		cout<<x << " | " <<y<< "\n";
		}
		return 0;
	}
