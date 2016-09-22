/**
 * @file HelloRootWorld.cc
 */

// Source code for the program 'HelloRootWorld'
// Pietro Chimenti 22/08/2016
//
// Simple test program to see if we can develop root programs
// The main function only call the Hello function and exit
// The Hello function is responsible for printing few messages
//   and a random number
//

#include <iostream>
#include "TRandom.h"

using namespace std;

void Hello()
{
  // first hello world
  cout << "Hello Root World!" << endl;

  // now a random number
  TRandom *rnd = new TRandom(time(0));
  Double_t x = rnd->Rndm();
  Double_t y = rnd->Rndm();
  cout << " This is a random number: " << x << endl;
}

#ifndef __CINT__
int main()
{
  Hello();
  return 0;
}
#endif

