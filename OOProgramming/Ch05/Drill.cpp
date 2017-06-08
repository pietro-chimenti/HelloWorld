#include "std_lib_facilities.h"

int main()
{
  try{
    //Cout << "Success!\n"; // point 1: error!
    //cout << "Success!\n"; // point 1: ok
    cout << "Success!\n"; // point 2: ok 
    keep_window_open();
    return 0;
  }
  catch(exception& e){
    cerr << "error:" << e.what() << '\n';
    keep_window_open();
    return 1;
  }
  catch(...){
    cerr << "Ooops: unknown exception!\n";
    keep_window_open();
    return 2; 
  }
}
