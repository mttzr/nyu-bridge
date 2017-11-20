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
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int sum;
    int dollars;
    int cents;
    
    cout<<"Please	enter	your	amount	in	the	format	of	dollars	and	cents	separated	by	a	space:"<<endl;
    cin>>dollars>>cents;
    
    sum = (dollars*100)+cents;
    
    quarters = sum/25;
    
    sum = sum - (quarters*25);
    
    dimes = sum/10;
    
    sum = sum - (dimes*10);
    
    nickels = sum/5;
    
    sum = sum - (nickels*5);
    
    pennies = sum;
    
    cout<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies"<<endl;
    
    return 0;
}

