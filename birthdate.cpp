#include <iostream>
#include <cmath>


using namespace std;
int main () {

    
    double year [12];
    year [0] = 31;
    year [1] = 28.25;
    year [2] = 31;
    year [3] = 30;
    year [4] = 31;
    year [5] = 30;
    year [6] = 31;
    year [7] = 31;
    year [8] = 30;
    year [9] = 31;
    year [10] = 30;
    year [11] = 31;
        
    
    double CurrentYear;
    int CurrentMonth;
    double CurrentDay;
    double BirthYear;
    double MonthDaysSum = 0;
    double BirthMonthDaysSum = 0;
    int BirthMonth;
    double BirthDay;
    double TotalCurrentDateSum;
    double TotalBirthDateSum;
    
    cout << "Enter current year: ";
  cin >> CurrentYear;
    cout << "Enter current month (from 1-12): ";
    cin >> CurrentMonth;
    cout << "Enter current day: ";
    cin >> CurrentDay;
    
    cout << "Enter year of birth: ";
    cin >> BirthYear;
    cout <<"Enter month of birth (from 1-12): ";
    cin >> BirthMonth;
    cout <<"Enter day of birth: ";
    cin >> BirthDay;
    
    int AgeInDays;
    // Calculating CurrentMonth
    CurrentMonth--;
    double YearCurrentMonth = year[CurrentMonth];
    
    while (CurrentMonth >=0) {
        
        MonthDaysSum = MonthDaysSum + year[CurrentMonth];
        CurrentMonth--;
    }
    
    year[CurrentMonth] = MonthDaysSum;
    
    MonthDaysSum = MonthDaysSum - YearCurrentMonth;
    
    
    //Adding current day to month accumulation from over the year
    double ThisYearSum;
    
    ThisYearSum = MonthDaysSum + CurrentDay;
    
    //Calculating and adding previous years
        
    CurrentYear = CurrentYear * 365.25;
    
    TotalCurrentDateSum = CurrentYear + ThisYearSum;
    
// Calculating BirthMonth
    
    BirthMonth--;
     double YearBirthMonth = year[BirthMonth];
     
     while (BirthMonth >=0) {
         
         BirthMonthDaysSum = BirthMonthDaysSum + year[BirthMonth];
         BirthMonth--;
     }
     
     year[BirthMonth] = BirthMonthDaysSum;
    
     BirthMonthDaysSum = BirthMonthDaysSum - YearBirthMonth;
     
     
    // Adding birth day to month accumulation over birth year
    
    double BirthYearSum;
       
       BirthYearSum = BirthMonthDaysSum + BirthDay;
    
    //Calculating and adding previous years
          
      BirthYear = BirthYear * 365.25;
      
    TotalBirthDateSum = BirthYear + BirthYearSum;
    
    AgeInDays = TotalCurrentDateSum - TotalBirthDateSum;
    
    cout <<"You are " << AgeInDays << " days old!" << endl;
    
    return 0;
}
