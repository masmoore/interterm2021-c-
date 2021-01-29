#include <iostream>
using namespace std;

int main(int argc, char** argv){
  int roomMax;
  int numPeopleAttending;
  cout << endl << "Enter the maximum room capacity : ";
  cin >> roomMax;
  cout << "Enter the number of people attending the meeting : ";
  cin >> numPeopleAttending;
  if(numPeopleAttending <= roomMax){
    int people = roomMax - numPeopleAttending;
    cout << "This is a legal meeting and " << people << " more people can legally attend." << endl;
  }
  else{
    int people = numPeopleAttending - roomMax;
    cout << "This is not a legal meeting and " << people << " people need to leave." << endl << endl << endl;
  }

}
