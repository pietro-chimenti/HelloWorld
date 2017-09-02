#include "std_lib_facilities.h"

int main(){

	double 	yen_per_dol = 110.26574,
		euro_per_dol = 0.84320,
		pound_per_dol = 0.77211,
		yuan_per_dol = 6.55909,
		kroner_per_dol = 7.79860,
		qnt = 1;
	char	unit = ' ';

	cout << "Please, enter a quantity followed by a unit (y, e, p, u or k):\n";
	cin >> qnt >> unit;
	
	switch(unit){

		case 'y':
			cout << qnt << " yens == " << qnt / yen_per_dol << " dollars\n";
		break;

		case 'e':
			cout << qnt << " euros == " << qnt / euro_per_dol << " dollars\n";
		break;

		case 'p':
			cout << qnt << " pounds == " << qnt / pound_per_dol << " dollars\n";
		break;

		case 'u':
			cout << qnt << " yuan == " << qnt / yuan_per_dol << " dollars\n";
		break;

		case 'k':
			cout << qnt << " kroner == " << qnt / kroner_per_dol << " dollars\n";
		break;

		default:
			cout << "Sorry, I don't know a unit called '" << unit << "'.\n";
		break;
	}

return 0;
}
