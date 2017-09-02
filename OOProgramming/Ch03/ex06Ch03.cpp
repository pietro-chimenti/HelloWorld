#include "std_lib_facilities.h"

int main(){

	int num1, num2, num3;

	cout << "Please, enter three different numbers: ";
	cin >> num1 >> num2 >> num3;

	if(num1 > num2 && num2 > num3)
		cout << "The sequence is: " << num3 << ", " << num2 << ", " << num1 << '\n';
	
	if(num2 > num1 && num1 > num3)
		cout << "The sequence is: " << num3 << ", " << num1 << ", " << num2 << '\n';
	
	if(num3 > num2 && num2  > num1)
		cout << "The sequence is: " << num1 << ", " << num2 << ", " << num3 << '\n';

	if(num1 > num3 && num3 > num2)
		cout << "The sequence is: " << num2 << ", " << num3 << ", " << num1 << '\n';

	if(num3 > num1 && num1 > num2)
		cout << "The sequence is: " << num2 << ", " << num1 << ", " << num3 << '\n';

	if(num2 > num3 && num3 > num1)
		cout << "The sequence is: " << num1 << ", " << num3 << ", " << num2 << '\n';

	if(num1 == num2){
		if(num1 > num3)
			cout << "The sequence is: " << num3 << ", " << num2 << ", " << num1 << '\n';
		else
			cout << "The sequence is: " << num1 << ", " << num2 << ", " << num3 << '\n';
	}

	if(num2 == num3){
		if(num2 > num1)
			cout << "The sequence is: " << num1 << ", " << num3 << ", " << num2 << '\n';
		else
			cout << "The sequence is: " << num3 << ", " << num2 << ", " << num1 << '\n';
	}

	if(num1 == num3){
		if(num1 > num2)
			cout << "The sequence is: " << num2 << ", " << num3 << ", " << num1 << '\n';
		else
			cout << "The sequence is: " << num3 << ", " << num1 << ", " << num2 << '\n';
	}


return 0;
}
