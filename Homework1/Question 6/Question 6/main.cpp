//
//  main.cpp
//  Homework 1
//
//  Created by Matthew Zehnder on 9/9/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//
/*
 Write	a	program	that	asks the	user	to	enter	a	number	of	quarters,	dimes,	nickels and
 pennies and	then	outputs	the	monetary	value	of	the	coins	in	the	format	of	dollars	and
 remaining	cents.
 */

#include <iostream>
using namespace std;

int main()
{
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int sum;
    int dollars;
    int cents;
    
    cout<<"Please enter the number of coins:"<<endl;
    cout<<"# of quarters"<<endl;
    cin>>quarters;
    cout<<"# of dimes"<<endl;
    cin>>dimes;
    cout<<"# of nickels"<<endl;
    cin>>nickels;
    cout<<"# of pennies"<<endl;
    cin>>pennies;
    
    
    sum = (quarters*25)+(dimes*10)+(nickels*05)+(pennies*01);
    
    dollars = sum/100;
    
    cents = sum % 100;
    
    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;
    
    return 0;
}

