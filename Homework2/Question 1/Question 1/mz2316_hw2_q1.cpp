//
//  main.cpp
//  Homework 2, Question 1
//
//  Created by Matthew Zehnder on 9/15/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string prompt = "Please enter two positive integers, separated by a space: ";
    int int1;
    int int2;
    int sum;
    int difference;
    int product;
    double quotient;
    int whole_quotient;
    int remainder;
    double double1;
    double double2;
    
    cout<<prompt<<endl;
    cin>>int1>>int2;
    
    double1 = int1;
    double2 = int2;
    sum = int1 + int2;
    difference = int1 - int2;
    product = int1 * int2;
    quotient = double1/double2;
    whole_quotient = int1/int2;
    remainder = int1 % int2;
    
    cout<<int1<<" + "<<int2<<" = "<<sum<<endl;
    cout<<int1<<" - "<<int2<<" = "<<difference<<endl;
    cout<<int1<<" * "<<int2<<" = "<<product<<endl;
    cout<<int1<<" / "<<int2<<" = "<<quotient<<endl;
    cout<<int1<<" div "<<int2<<" = "<<whole_quotient<<endl;
    cout<<int1<<" mod "<<int2<<" = "<<remainder<<endl;
    
    return 0;
}
