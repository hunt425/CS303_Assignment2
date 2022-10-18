#include<iostream>
#include<iomanip>
#include "Classes.h"
using namespace std;



//Professional Functions:

//prints necessary information
void Professional::getSalaryWork(){
  cout << "Salary Worker: " << Name << endl;
  cout << "Current Bank Ammount: $" << fixed << setprecision(2) << bankAcct << endl;
  
  cout << "Current Vacation Hours: " << vacationHours << endl;
  
  cout << "Money towards health insurance: $" << healthInsur << endl;

  cout << "Monthly Salary: $" << Salary << endl;
}

//calculates weekly pay from monthly salary
float Professional::calcWeekPay(){
  float weeklyPay = Salary / 4;
  bankAcct += weeklyPay; //updates bankAcct variable for getFunction
  return bankAcct;
}
int Professional::calcVacation(int week){
  if (week % 4 == 0){ //workers get 10 hours vacation for every 4 weeks they work
    vacationHours += 10;
  }
  return vacationHours;
}

float Professional::calcHealth(){
  float healthTakings = 0.1 * (Salary / 4); //health insurance is 10% of weekly wage
  healthInsur += healthTakings;
  bankAcct -= healthTakings; //takes health insurance from paycheck
  return healthInsur;
}


//NonProfessional Functions:

//prints information for wage workers
void NonProfessional::getWageWork(){
  cout << "Wage Worker: " << Name << endl;
  cout << "Current Bank Account: $" << bankAcct << endl;
  cout << "Current Vacation Hours: " << vacationHours << endl;
  cout << "Money towards health insurance: $" << healthInsur << endl;
  cout << "Wage: $" << Wage << endl;
  cout << "Hours worked a week: " << Hours << endl << endl;
  }

  //calculates pay based on hourly wage and hours worked
  float NonProfessional::calcWeekPay(){
    float pay = Wage * Hours;
    bankAcct += pay; //updates bankAcct variable
    return bankAcct;
  }

  
  int NonProfessional::calcVacation(int weeks){
    if(weeks % 4 == 0){ //wage workers get 5 vacation hours per 4 weeks worked
      vacationHours += 5;
    }
    return vacationHours;
  }

  float NonProfessional::calcHealth(){
    float healthTax = 0.05 * (Wage * Hours); //5% of earnings go to health insurance
    healthInsur += healthTax;
    bankAcct -= healthTax; //takes health insurance from paycheck
    return healthInsur;
  }
