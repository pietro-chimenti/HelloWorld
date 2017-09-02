#include "std_lib_facilities.h"

int main(){

	double 	yen_per_dol = 110.26574,
		euro_per_dol = 0.84320,
		pound_per_dol = 0.77211,
		qnt = 1;
	char 	unit = ' ';

	cout << "Please, enter a quantity followed by a unit (y, e or p):\n";
	cin >> qnt >> unit;

	if(unit == 'y')		// for yens
		cout << qnt << " yens == " << qnt / yen_per_dol << " dollars\n";
	else if(unit == 'e')	// for euros 
		cout << qnt << " euros == " << qnt / euro_per_dol << " dollars\n";
	else if(unit == 'p')	// for pounds
		cout << qnt << " pounds == " << qnt / pound_per_dol << " dollars\n";
	else
		cout << "Sorry, I don't know a unit called '" << unit << "'.\n";

return 0;
}
