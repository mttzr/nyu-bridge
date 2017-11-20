//
//  main.cpp
//  Homework 1
//
//  Created by Matthew Zehnder on 9/9/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//


#include <iostream>
using namespace std;

int main()
{
    int john_days;
    int john_hours;
    int john_minutes;
    int bill_days;
    int bill_hours;
    int bill_minutes;
    int total_days;
    int total_hours;
    int total_minutes;
    int sum_minutes;
    
    cout<<"Please enter the number of days John has worked:"<<endl;
    cin>>john_days;
    cout<<"Please enter the number of hours John has worked:"<<endl;
    cin>>john_hours;
    cout<<"Please enter the number of minutes John has worked:"<<endl;
    cin>>john_minutes;
    cout<<"Please enter the number of days Bill has worked:"<<endl;
    cin>>bill_days;
    cout<<"Please enter the number of hours Bill has worked:"<<endl;
    cin>>bill_hours;
    cout<<"Please enter the number of minutes Bill has worked:"<<endl;
    cin>>bill_minutes;
    
    sum_minutes = (john_days*24*60)+(john_hours*60)+(john_minutes)+(bill_days*24*60)+(bill_hours*60)+(bill_minutes);
    
    total_days = sum_minutes/(60*24);
    
    sum_minutes = sum_minutes - (total_days*60*24);
    
    total_hours = sum_minutes/60;
    
    sum_minutes = sum_minutes - (total_hours * 60);

    total_minutes = sum_minutes;
    
    cout<<"The total time both of them worked together is:"<<total_days<<" days, "<<total_hours<<" hours and "<<total_minutes<<" minutes."<<endl;
    
    return 0;
}

