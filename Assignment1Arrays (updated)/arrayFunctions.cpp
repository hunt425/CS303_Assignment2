using namespace std;
#include <iostream>
#include "arrayFunct.h"

// tasks: 
// determining if a integer exists in array
// modify value of integer based on user selected index
// adds new integer to end of array
// takes index chosen by user and removes from array

void ArrayClass::readArray(int userArr[]){ //reads array, used it to compare with rest of code to be sure that functions work
  cout << "Current Array: {";
  for (int i = 0; i < 10; i++){
    cout << userArr[i] << "  ";
  }
  cout << "}" << endl;
  cout << endl;
}


void ArrayClass::whereInt(int userArr[], int desiredNum){
//takes a number from user and checks array for the number
  
  for (int i=0; i<10; i++){
    
    if (userArr[i] == desiredNum){
      //if the number is found this message is shown
      cout << "Desired number found at index: " << i + 1 << endl << endl;
      break;
    }
    if (i == 9 && userArr[i] != desiredNum){
      //if the array is at last element and the number is not found it shows this message
      cout << "Number not in array" << endl << endl;
    }
  }
}



void ArrayClass::modifyArr(int userArr[], int userIndex, int newNum){
//takes index and number from user, replaces old number at selected index with new
  
  int oldNum = userArr[userIndex - 1];
  //saves old number to show after it is replaced
  userArr[userIndex - 1] = newNum;
  //replaces old number at index to the new selected number
  
  cout << "Number at index " << userIndex << " before change: " << oldNum << endl;

  cout << "Array now with new number at index: " << userIndex << endl;

  cout << "{"; //loop to show array with new number at same index
  for (int i = 0; i < 10; i++){
    cout << userArr[i] << "  ";
  }
  cout << "}" << endl << endl;
  
}

void ArrayClass::addNum(int userArr[], int choice){
//takes number from user and adds it to end of array
  
  userArr[10] = choice; //since arrays cannot be changed the same way that vectors can, added new number to last position in array

  cout << "{";
  for (int i = 0; i < 11; i++){
    cout << userArr[i] << "  ";
  }
  cout << "}" << endl << endl;
}

void ArrayClass::removeNum(int userArr[], int userIndex){

  //takes index from user and deletes the number from the array
  
  for (int i = 0; i < 11; i++){
    if (i >= userIndex-1){
      //used greater than or equal to in order to change the array after index correctly
      userArr[i] = userArr[i+1];
      //takes number from index above current index and replaces the first index
    }
  }
    cout << " New array: {";
  for (int i = 0; i < 10; i++){
    cout << userArr[i] << "  ";
  }
  cout << "}" << endl;
}