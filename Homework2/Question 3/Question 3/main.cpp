//
//  main.cpp
//  Homework 2, Question 3
//
//  Created by Matthew Zehnder on 9/15/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name;
    int grad_year;
    int current_year;
    string status;
    
    cout<<"Please enter your name: "<<endl;
    cin>>name;
    cout<<"Please enter your graduation year: "<<endl;
    cin>>grad_year;
    cout<<"Please enter your current year: "<<endl;
    cin>>current_year;
    
    if (grad_year - current_year > 4)
    {
        status = ", you are not in college yet.";
    }
    else if (grad_year - current_year == 4)
    {
        status = ", you are a Freshman.";
    }
    else if (grad_year - current_year == 3)
    {
        status = ", you are a Sophomore.";
    }
    else if (grad_year - current_year == 2)
    {
        status = ", you are a Junior.";
    }
    else if (grad_year - current_year == 1)
    {
        status = ", you are a Senior.";
    }
    else if (grad_year - current_year < 1)
    {
        status = ", you have graduated.";
    }
    
    cout<<name<<status<<endl;
    
    return 0;
}
