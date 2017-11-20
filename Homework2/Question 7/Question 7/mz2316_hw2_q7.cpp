//
//  main.cpp
//  Homework 2, Question 7
//
//  Created by Matthew Zehnder on 9/16/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <utility>
using namespace std;

int main()
{
    const double WEEKDAY_WORK_HOURS_RATE = 0.40;
    const double WEEKDAY_AFTER_HOURS_RATE = 0.25;
    const double WEEKEND_RATE = 0.15;
    int minutes;
    int start_hour;
    int start_min;
    string day;
    double cost;
    char temp;
    
    cout<<"Enter the start time of the call in 24-hour notation: "<<endl;
    cin>>start_hour>>temp>>start_min;
    cout<<"Enter the day of the week the call started on (first two letters only): "<<endl;
    cin>>day;
    cout<<"Enter the length of the call in minutes: "<<endl;
    cin>>minutes;

    
    transform(day.begin(), day.end(), day.begin(), ::tolower);
    
    if ((day == "sa") || (day == "su")) {
        cost = minutes*WEEKEND_RATE;
    }
    else {
        if ((start_hour >= 8) && (start_hour <= 18)) {
            cost = minutes*WEEKDAY_WORK_HOURS_RATE;
        }
        else {
            cost = minutes*WEEKDAY_AFTER_HOURS_RATE;
        }
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The cost of the call was $"<<cost<<endl;;
    return 0;
}
