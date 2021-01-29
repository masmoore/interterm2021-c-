#include <iostream>
using namespace std;

int main(int argc, char** argv){
  double boxWeightInOunces;
  double metricTon = 35273.92;
  cin >> boxWeightInOunces;
  double boxWeightInTons = boxWeightInOunces/metricTon;
  double numBoxesNeeded = metricTon/boxWeightInOunces;
  cout << "Box weight in tons is: " << boxWeightInTons << endl;
  cout << "Number of boxes needed to be a ton is: " << numBoxesNeeded << endl;

}
