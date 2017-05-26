// Solution of Chapter 4 Drill
#include "std_lib_facilities.h"

int main()
{
  cout << "This is the chapter 4 drill solution." << endl;

  const double epsilon=1.0e-7; // um numero muito pequeno

  double num1=0.;
  double num2=0.;
  cout << "Entre numeros, dois em dois, | para sair" << endl;
  while(cin >> num1 >> num2){
    if(num1==num2) 
      cout << "Os numeros são iguais!" << endl;
    else if ( (num1 - num2 < epsilon) && (num2 - num1 <  epsilon) )// cuidado: |N1-N2|<epsilon !
     cout << "Os numeros são quase iguais!" << endl;
    else if(num1>num2){
      cout << "O maior: " << num1 << endl;
      cout << "O menor: " << num2 << endl;
    }
    else {
      cout << "O maior: " << num2 << endl;
      cout << "O menor: " << num1 << endl;
    }
  }

}
