#include <iostream>
using namespace std;

int main(int argc, char** argv){
  // Create my array
  int numberArray[10];
  int x;
  //gets non negative values to fill the array
  for(int i = 0; i < 10; ++i){
    cout << "Enter a non negative integer: ";
    cin >> x;
    if(x<0){
      cout << "You entered a negative number. Bye!" << endl;
      exit(0);
    }
    numberArray[i] = x;
  }
  //prints the numbers in the array back out to the console
  cout << "Your numbers were:  ";
  for(int i = 0; i < 10; ++i){
    cout << numberArray[i] << "  ";
  }
  cout << endl;
  return 0;
}
