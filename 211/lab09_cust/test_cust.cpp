/*
  Program to test a basic class Cust.
*/

#include "cust.h"

#include <iostream>
using namespace std;


int main()
{
  Cust *cust = new Cust("Homer", false, 42, 12);
  cust->print(cout);

  // we are done using that first Cust object
  delete cust;

  cust = new Cust("Bart", true, 86, 2);
  cust->print(cout);

  return 0;
}
