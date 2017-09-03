#include "std_lib_facilities.h"

int square(int v){
	int sqr;

	for(int i = v; i != 0; i--)
		sqr = sqr + v;
		
return sqr;
}

int main(){
	for(int i = 0; i < 100; i++)
		cout << i << '\t' << square(i) << '\n';
}
