#include "std_lib_facilities.h"

int main(){
	
	double d = 0;

	while(cin >> d){
		int i = d;
		char c = i;
		int i2 = c;

		cout << "d == " << d 			// original value
		     << " i == " << i			// double to int
		     << " i2 == " << i2			// char to int 
		     << " char(" << c << ")\n";		// int to char
	}

return 0;
}
