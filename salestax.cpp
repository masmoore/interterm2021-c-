#include <iostream>
using namespace std;
//Creates an addTax method that adds the tax onto the cost
float addTax(float _taxRate, float _cost){
  float taxAmount = _taxRate*_cost;
  return taxAmount + _cost;
}
//Calls addTax method and prints the value returned by the method
int main(int argc, char** argv){
  //Creates two variables to test with the addTax method
  float taxRate = 0.15;
  float cost = 10;
  cout << "The value of the item after sales tax is $" << addTax(taxRate,cost) << endl;
  return 0;
}
