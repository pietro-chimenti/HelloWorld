// Solution of Chapter 4 Drill
#include "std_lib_facilities.h"

int main()
{
  cout << "This is the chapter 4 drill solution." << endl;

  // fatore de converção
  const double cm_m=100.;
  const double in_m=100./2.54;
  const double ft_m=100./(12*2.54);
  
  // variaveis internas
  double num=0.;
  double max=0.;
  double min=0.;
  bool primeiro=true;// primeiro numero!
  bool test_unit=true;
  string unidade;

  // instruções de uso 
  cout << "Entre numeros com unidade, | para sair" << endl;
  cout << "Unidade possiveis m, cm, in, ft." << endl;
  cout << "Ex: 2.3cm" <<  endl;

  // main loop
  while(cin >> num >> unidade){ 
    // internamente unidades em m
    test_unit = true;
    if(unidade=="m"){}
    else if(unidade=="cm") num=num/cm_m;// convertimos em m
    else if(unidade=="in") num=num/in_m; // em m
    else if(unidade=="ft") num=num/ft_m; // em m
    else{
       cout << "Unidade errada!" << endl;
       test_unit = false;
    }
    if(test_unit){
      if(primeiro){// o primeiro numero separadamente
        max = num;
        min = num;
        cout << num << "m é o minimo e o maximo até então!" << endl;
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
}
