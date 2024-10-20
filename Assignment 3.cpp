#include <iostream>
using namespace std;

int main() { 

  //Assignment 3: Handling Data in C++
  cout<<"Assignment 3: Handling Data in C++"<<endl<<endl;
  
  int playerHealth = 100;
  int liveCount = 3;
  double playerId = 534738;
  float winPercentage = 80.80;
  bool hasWon = true;
  char playerType = 'A';

  cout<<"What is Cecilia's type?(A,B,C or D) ";  cin>>playerType;

  cout<<"Cecilia's Stats: "<<endl;
  cout<<"Health: "<<playerHealth<<endl;
  cout<<"Lives: "<<liveCount<<endl;
  cout<<"ID: "<<playerId<<endl;
  cout<<"Win %: "<<winPercentage<<endl;
  cout<<"Victory? "<<hasWon<<endl;
  cout<<"Player Type: "<<playerType<<endl<<endl<<endl;
}