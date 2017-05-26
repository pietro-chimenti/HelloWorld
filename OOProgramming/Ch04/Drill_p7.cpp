// Solution of Chapter 4 Drill
#include "std_lib_facilities.h"

int main()
{
  cout << "This is the chapter 4 drill solution." << endl;

  double num=0.;
  double max=0.;
  double min=0.;
  bool primeiro=true;// primeiro numero!
  string unidade;

  cout << "Entre numeros com unidade, | para sair" << endl;
  cout << "Unidade possiveis m, cm, in, ft." << endl;
  cout << "Ex: 2.3cm" <<  endl;
  while(cin >> num >> unidade){ 
    // internamente unidades em m
    if(unidade=="m"){}
    else if(unidade=="cm") num=num/100.;// convertimos em m
    else if(unidade=="in") num=num*2.54/100.; // em m
    else if(unidade=="ft") num=num*12*2.54/100.; // em m
    else{
       cout << "Unidade errada!" << endl;
       return 0;// termina o programa!
    }
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
