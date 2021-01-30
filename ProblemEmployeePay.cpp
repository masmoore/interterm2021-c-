#include <iostream>
using namespace std;

int main(int argc, char** argv){
  int numHours;
  cout << endl << "Enter the number of hours worked this week: ";
  cin >> numHours;
  double initialPay;
  if(numHours>40){
    int extraHours = numHours % 40;
    int normalHours = numHours - extraHours;
    initialPay = (normalHours*16) + (extraHours*24);
  }else{
    initialPay = numHours*16;
  }
  double ssTax = initialPay * .06;
  double federal = initialPay * .14;
  double state = initialPay * .05;
  double medical = 10.00;
  double finalPay = initialPay - ssTax - federal - state - medical;

  cout << "Gross pay: " << initialPay << endl;
  cout << "Social Security Tax: " << ssTax << endl;
  cout << "Federal Tax: " << federal << endl;
  cout << "State Tax: " << state << endl;
  cout << "Medical bill: " << medical << endl;
  cout << "Take home pay: " << finalPay << endl;

}
