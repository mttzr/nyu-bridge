//
//  main.cpp
//  mz2316_hw4_q3
//
//  Created by Matthew Zehnder on 10/4/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

bool isLeapYear(int year);
int printMonthCalendar(int numOfDays, int startingDay);
void printYearCalendar(int year, int startingDay);

int main() {

    int year;
    int start_day;
    
    cout<<"Enter year: "<<endl;
    cin>>year;
    cout<<"Enter start day (1 for Monday, 2 for Tuesday, etc): "<<endl;
    cin>>start_day;
    
    printYearCalendar(year, start_day);
    
    return 0;
}

int printMonthCalendar(int numOfDays, int startingDay){
    
    string header = "Mon\tTue\tWed\tThr\tFri\tSat\tSun";
    int blanks = startingDay;
    int current_day = 1;
    int row_position = 1;
    int total_spaces = numOfDays + blanks - 1;
    
    cout<<header<<endl;
    
    for(int i = 1; i <= total_spaces; i++){
        
        if(row_position < 7){
            
            if(blanks-1 > 0){
                cout<<"\t";
                blanks--;
                row_position++;
            }
            else {
                cout<<current_day<<"\t";
                current_day++;
                row_position++;
            }
        }
        else {
                cout<<current_day<<endl;
                current_day++;
                row_position = 1;
            }
    }
    return row_position;
}

bool isLeapYear(int year){

    if(year % 4 == 0 && year % 100 > 0){
        return true;
    }
    else {
        if(year % 400 == 0){
            return true;
        }
        else {
            return false;
        }
    }
}

void printYearCalendar(int year, int startingDay){
 
    int const MONTHS = 12;
    int num_days;
    bool is_leap = isLeapYear(year);
    string month_name;
    
    for(int i = 1; i <= MONTHS; i++){
        
        if(i == 1){
            month_name = "January";
            num_days = 31;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 2 && is_leap == false){
            month_name = "February";
            num_days = 28;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 2 && is_leap == true){
            month_name = "February";
            num_days = 29;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 3){
            month_name = "March";
            num_days = 31;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 4){
            month_name = "April";
            num_days = 30;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 5){
            month_name = "May";
            num_days = 31;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 6){
            month_name = "June";
            num_days = 30;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 7){
            month_name = "July";
            num_days = 31;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 8){
            month_name = "August";
            num_days = 31;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 9){
            month_name = "September";
            num_days = 30;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 10){
            month_name = "October";
            num_days = 31;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 11){
            month_name = "November";
            num_days = 30;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        else if (i == 12){
            month_name = "December";
            num_days = 31;
            cout<<month_name<<" "<<year<<endl;
            startingDay = printMonthCalendar(num_days, startingDay);
        }
        
        cout<<"\n"<<endl;
    }
}

