#include <iostream>
using namespace std;
#include "Classes.h"
#include "menuFunction.cpp"

int main() {
  //menu();
  
  NonProfessional Thomas("Thomas", 0,0,0,16.54,40); //instance of wage worker
  
  Professional Martha("Martha", 0,0,0,2500.34); //instance of salary worker

  cout << "Initial Conditions: " << endl << endl; //first print statements (start)
  
  Martha.getSalaryWork();
  cout << endl;
  Thomas.getWageWork();
  cout << endl << endl;
  
  char another = 'a';
  int week = 1; //keeps track of time as well as is used for vacation calc functions
cout << "------------------------------------------" << endl;
  while(another != 'q'){ //continues week cycle until no longer needed by user
    cout << "Week " << week << endl << endl;

    //calling salary worker functions
    Martha.calcWeekPay();
    Martha.calcVacation(week);
    Martha.calcHealth();
    Martha.getSalaryWork(); //prints results of functions

    cout << endl;

    //calling wage worker functions
    Thomas.calcWeekPay();
    Thomas.calcVacation(week);
    Thomas.calcHealth();
    Thomas.getWageWork(); //prints results of funcitons

    cout << "--------------------------------------" << endl;
    
    cout << endl << endl;
    cout << "Continue for another week? (q to end, or any other key to continue) ->";
    cin >> another;
    
    if(another == 'q' || another == 'Q'){
      cout << "Thank you!" << endl;
      break; //exits loop when no more information is needed
    }
      
    else{
      week += 1; //updates week variable to continue in time
      cout << "----------------------------------------" << endl;
      continue;
    }
  }
}