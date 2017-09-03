#include "std_lib_facilities.h"

int square(int v){
	int sqr;

	for(int i = 0; i != v; i++)
		sqr = sqr + v;
		
return sqr;
}

int main(){
	for(int i = 0; i < 100; i++)
		cout << i << '\t' << square(i) << '\n';
}
