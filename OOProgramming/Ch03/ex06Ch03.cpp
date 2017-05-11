#include <iostream>

int main(){
	std::string first_name;
	std::string friend_name;
	char friend_sex=0;
	int age;
	std::cout << "Enter the name of a friend you want to write to: ";
	std::cin >> first_name;
	std::cout << "Enter the name of another friend you want to ask about: ";
	std::cin >> friend_name;
	std::cout << "Press 'm' if the other friend is male and 'f' if it's female: ";
	std::cin >> friend_sex;
	std::cout << "Enter your friend's age: ";
	std::cin >> age;
	std::cout << "\n	Dear " << first_name << ", \nHow are you? I am fine. I miss you.\n";
	std::cout << "Have you seen " << friend_name << " lately?\n";
	if (friend_sex=='m' || friend_sex=='M')
		std::cout << "If you see " << friend_name << " please ask him to call me.";
	if (friend_sex=='f' || friend_sex=='F')
		std::cout << "If you see " << friend_name << " please ask her to call me.";
	if (age>0 || age<110)
		std::cout << "\nI hear you just had a birthday and you are " << age << " years old.";
	if (age<=0 || age>=110)
		std::cout << "\nYou're kidding!";
	if (age<12 && age>0)
		std::cout << "\nNext year you will be " << age+1 << ".";
	if (age==17)
		std::cout << "\nNext year you will be able to vote.";
	if (age>70 && age <110)
		std::cout << "\nI hope you are enjoying retirement.";
	std::cout << "\nYour sincerely, \n\n\n";
	std::cout << "Rafael.\n\n";
	return 0;
}
