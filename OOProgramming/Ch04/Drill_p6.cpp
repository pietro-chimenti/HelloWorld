// Solution of Chapter 4 Drill
#include "std_lib_facilities.h"

int main()
{
  cout << "This is the chapter 4 drill solution." << endl;

  double num=0.;
  double max=0.;
  double min=0.;
  bool primeiro=true;// primeiro numero!

  cout << "Entre numeros, | para sair" << endl;
  while(cin >> num) { 
    if(primeiro){// o primeiro numero separadamente
      max = num;
      min = num;
      cout << num << " é o minimo e o maximo até então!" << endl;
      primeiro=false;// os outros não são primeiros!
    }
    else if(num > max){
      max = num;
      cout << "O maior entá então!" << endl; 
    }   
    else if(num < min){
      min = num;
      cout << "O menor até então!" <<  endl;
    }
  }
}
