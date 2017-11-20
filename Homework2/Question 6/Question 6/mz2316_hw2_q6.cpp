//
//  main.cpp
//  Homework 2, Question 6
//
//  Created by Matthew Zehnder on 9/16/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    const double KILOS_IN_A_POUND = 0.453592;
    const double METERS_IN_AN_INCH = 0.0254;
    double weight_pounds;
    double height_inches;
    double weight_kilos;
    double height_meters;
    double bmi;
    string status;
    
    cout<<"Please enter weight (in pounds): "<<endl;
    cin>>weight_pounds;
    cout<<"Please enter height (in inches): "<<endl;
    cin>>height_inches;
    
    weight_kilos = weight_pounds*KILOS_IN_A_POUND;
    height_meters = height_inches*METERS_IN_AN_INCH;
    
    bmi = weight_kilos/(pow(height_meters, 2));

    if (bmi < 18.5)
    {
        status = "Underweight";
    }
    else if ((bmi >= 18.5) && (bmi < 25))
    {
        status = "Normal";
    }
    else if ((bmi >= 25) && (bmi <30))
    {
        status = "Overweight";
    }
    else if (bmi > 30)
    {
        status = "Obese";
    }
    
    cout<<"The weight status is: "<<status<<endl;
    
    return 0;
}
