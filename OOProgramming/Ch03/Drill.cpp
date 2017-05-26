#include "std_lib_facilities.h"

int main() {

	string first_name, friend_name;
	char friend_sex = '0';
	int age;

	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Tell us the name of the friend you want to ask about: ";
	cin >> friend_name;
	cout << "Please, if your friend is Female enter f ou Male enter m: ";
	cin >> friend_sex;
	cout << "Please enter the age of the person you are writting to: ";
	cin >> age;
	
	cout << "\n\nDear " << first_name << ",\n";
	cout << "How are you? I am fine. \n"; 
	cout << "Have you seen " << friend_name << " lately?\n";
	if (friend_sex == 'f') {
		cout << "If you see " << friend_name << " please ask her to call me.\n";
}
	if (friend_sex == 'm') {
		cout << "If you see " << friend_name << " please ask him to call me.\n";
} 
	if (age <= 0 || age >= 110)
		error("You are kidding!");
	else
		cout << "I heard you just had a birthday and you are " << age << " years old!\n";
	if ( age == 17 ) {
		cout << "Next year you will be able to vote.\n";
}
	else if ( age > 70 && age < 110 ) {
		cout << "I hope you are enjoying retirement.\n";
}
	else if ( age < 12 ) {
		cout << "Next year you will be " << age + 1 << "!\n";
}
	cout << "Yours sincerely,\n\n\n";
	cout << "Leonardo Gardini.\n\n";

return (0);
}
