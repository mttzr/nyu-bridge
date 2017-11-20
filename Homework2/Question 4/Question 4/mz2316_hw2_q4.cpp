//
//  main.cpp
//  Homework 2, Question 4
//
//  Created by Matthew Zehnder on 9/15/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

    double a;
    double b;
    double c;
    double discriminant;
    string solutions_string;
    double solutions_value1;
    double solutions_value2;
    
    cout<<"Please enter value of a: "<<endl;
    cin>>a;
    cout<<"Please enter value of b: "<<endl;
    cin>>b;
    cout<<"Please enter value of c: "<<endl;
    cin>>c;
    
    discriminant = (pow (b,2) - 4*a*c);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    if (a == 0 && b == 0 && c == 0)
    {
        solutions_string = "This equation has an infinite number of solutions.";
        cout<<solutions_string<<endl;
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        solutions_string = "This equation has no solution.";
        cout<<solutions_string<<endl;
    }
    else if (discriminant > 0)
    {
        solutions_string = "This equation has two solutions";
        solutions_value1 = (-b + sqrt((pow (b,2))-4*a*c))/2*a;
        solutions_value2 = (-b - sqrt((pow (b,2))-4*a*c))/2*a;
        cout<<solutions_string<<" x= "<<solutions_value1<<"and x= "<<solutions_value2<<endl;
        
    }
    else if (discriminant == 0)
    {
        solutions_string = "This equation has one solution";
        solutions_value1 = (-b + sqrt((pow (b,2))-4*a*c))/2*a;
        cout<<solutions_string<<" x= "<<solutions_value1<<endl;

    }
    else if (discriminant < 0)
    {
        solutions_string = "This equation has no real solutions.";
        cout<<solutions_string<<endl;
    }
    
    return 0;
}
