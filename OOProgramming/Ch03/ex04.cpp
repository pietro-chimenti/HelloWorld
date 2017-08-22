  #include "std_lib_facilities.h"

  int main(){

  int val1,val2;

  cout << "Informe dois valores inteiros \n";
  cout << "Primeiro valor: ";
  cin >> val1;
  cout << "Segundo valor: ";
  cin >> val2;

  if (val1>val2)
    cout << val1 << " e' maior e "<< val2 << " e' menor.\n";
  else
    cout << val2 << " e' maior e "<< val1 << " e' menor.\n";


  cout << "A soma e': "<< val1+val2<< endl;
  cout << "A diferenca e': "<< val1-val2 << endl;
  cout << "A media e': " << (val1+val2)/2 << endl;
  
  return 0;
  }
