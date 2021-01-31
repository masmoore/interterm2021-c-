#include <iostream>
using namespace std;
//Sets both numbers to 0
void zeroboth(int& x, int& y){
  x=0;
  y=0;
}
//Calls zeroboth method and prints the outcome to console
int main(int argc, char** argv){
  //creates two random ints that are then set to 0
  int x = 2;
  int y = 7;
  zeroboth(x,y);
  cout << "X=" << x << "  Y=" << y << endl;
  return 0;
}
