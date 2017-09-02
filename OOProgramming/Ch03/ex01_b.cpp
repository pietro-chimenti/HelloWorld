#include "std_lib_facilities.h"

int main(){

	int n;
	double m;

	cout << "Please, enter a integer value: ";
	cin >> n;
	m = n;
	cout << "n == " << n
	     << "\nn + 1 == " << n + 1
	     << "\nthree times n == " << 3 * n
	     << "\ntwice n == " << n + n
	     << "\nn squared == " << n * n
	     << "\nhalf of n == " << n / 2
	     << "\nsquare root of n == " << sqrt(m)
	     << "\nremainder of n/2 == " << n % 2
	     << '\n';

return 0;
}
