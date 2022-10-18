#include<iostream>
using namespace std;


class Employees{ //parent class
  public:
    float bankAcct = 0;
    int vacationHours = 0;
    float healthInsur;
    string Name;

    Employees(string name, float bank, int vacation, float health){ //parent class initialization
      Name = name;
      bankAcct = bank;
      vacationHours = vacation;
      healthInsur = health;
    }
  
};


class Professional : public Employees{
  private: //derived class for salary workers
    float Salary;

  public:
    //initialization of derived class
    Professional(string name, float bank, int vacation, float health, float salary) : Employees(name, bank, vacation, health){
      Salary = salary;
  }
  //functions used in Functions.cpp
  void getSalaryWork();
  float calcWeekPay();
  int calcVacation(int week);
  float calcHealth();
  
};

class NonProfessional : public Employees{
//second derived class for wage workers
  public:

  float Wage;
  int Hours;
  //initialization for wage workers
  NonProfessional(string name, float bank, int vacation, float health, float wage, int hours) : Employees(name, bank, vacation, health){
    Wage = wage;
    Hours = hours;
    
  }
  //Functions for wage workers
  void getWageWork();
  float calcWeekPay();
  int calcVacation(int weeks);
  float calcHealth();

};