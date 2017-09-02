#include "std_lib_facilities.h"

int main(){

	double km, miles;

	cout << "Write the value of miles that you want to convert: ";
	cin >> miles;
	
	km = miles*1.609;

	cout << "\nThat value converted into kilometers is: " << km << " km\n";

return 0;
}
