//This program converts feet and inches to meters and centimeters
#include <iostream>
using namespace std;
//Creates a method input that uses call by reference to fill the feet and inches
void input(double& large, double& small){
  cout << "Enter feet: ";
  cin >> large;
  cout << "Enter inches: ";
  cin >> small;
}
//Creates a method conversion that uses call by reference to
//convert the feet and inches to meters and centimeters.
void conversion(double& large, double& small){
  double feetInDecimal = small*(1.0/12.0) + large;
  double metersInDecimal = feetInDecimal * 0.3048;
  int meters = metersInDecimal;
  double cmm = (metersInDecimal-meters) * 100;
  large = meters;
  small = cmm;
}
//output method that takes in the maters and centimeters and then prints them to
// the console.
void output(double large, double small){
  cout << "Meters: " << large << "  Centimeters: " << small << endl;
}
//calls all 3 of the other functions and creates the numLarger and numSmaller
//variables.
void run(){
  //Larger num is used for feet and meters
  //Smaller num is used for inches and centimeters
  double numLarger = 0.0;
  double numSmaller = 0.0;
  input(numLarger, numSmaller);
  conversion(numLarger, numSmaller);
  output(numLarger,numSmaller);
}
int main(int argc, char** argv){
  //calls the run method and prompts the user if they would like to continue by
  //pressing any key and enter or "exit" if they want to quit.
  string again = "";
  while(again != "exit"){
    run();
    cout << "Enter \"exit\" to quit the program press any key and enter to continue: ";
    cin >> again;
  }


}
