#include "std_lib_facilities.h"

int main()
{

	cout<<"Enter the name of the person you want to write to: ";
	string first_name;
	cin>>first_name;
	cout<<"Tell us the name of the friend you want to ask about: ";
	string friend_name;
	cin>>friend_name;
	cout<<"Please, let me know if your friend is Female (enter f) ou Male (enter m): ";
	char friend_sex='0';
	cin>>friend_sex;
	cout<<"Please enter the age of the person you are writting to: ";
	int age;
	cin>>age;
	
	cout<<"Dear "<<first_name<<",\n";
	cout<<"How are things going in your new home? Are you enjoying it so far?\n"; 
	cout<<"Have you seen "<<friend_name<<" lately?\n";
	if (friend_sex == 'f') {
		cout<<"If you see "<<friend_name<<" please ask her to call me.\n";
}
	else if (friend_sex == 'm') {
		cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
} 
	if (age <= 0 || age >= 110)
		simple_error("You are kidding!");
	else
	cout<<"I heard you just had a birthday and you are "<<age<<" years old!";
	if ( age == 17 ) {
		cout<<"Next year you will be able to vote.\n";
}
	else if ( age > 70 && age< 110 ) {
		cout<<"I hope you are enjoying retirement.\n";
}
	else if ( age < 12 ) {
		cout<<"Next year you will be "<<age+1<<"!\n";
}
	cout<<"Yours sincerely,\n\n\n";
	cout<<"Natalia.\n";
return (0);
}
