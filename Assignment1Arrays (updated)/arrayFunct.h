#include <iostream>

//class with all functions defined

class ArrayClass{

  public:
  void readArray(int userArr[]);
  
  void whereInt(int userArr[], int desiredNum);
  
  void modifyArr(int userArr[], int userIndex, int newNum);
  
  void addNum(int userArr[], int choice);
  
  void removeNum(int userArr[], int userIndex);
};