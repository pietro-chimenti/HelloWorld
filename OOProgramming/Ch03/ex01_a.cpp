#include "std_lib_facilities.h"

int main(){

	string first_name = "???";
	double age = -1;

	cout << "Please, enter your first name and age:\n";
	cin >> first_name >> age;
	age = 12*age;
	cout << "Hello, " << first_name << " (age " << age << " months)!\n";

return 0;
}
