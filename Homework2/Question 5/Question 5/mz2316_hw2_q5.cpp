//
//  main.cpp
//  Homework 2, Question 5
//
//  Created by Matthew Zehnder on 9/16/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    double real_number;
    int result;
    int choice;
    
    cout<<"Please enter a Real number:"<<endl;
    cin>>real_number;
    cout<<"Choose your rounding method:"<<endl;
    cout<<"1. Floor round"<<endl;
    cout<<"2. Ceiling round"<<endl;
    cout<<"3. Round to the nearest whole number"<<endl;
    cin>>choice;
        
    switch(choice)
    {
        case FLOOR_ROUND:
            result = floor(real_number);
            cout<<result<<endl;
            break;
        case CEILING_ROUND:
            result = ceil(real_number);
            cout<<result<<endl;
            break;
        case ROUND:
            result = round(real_number);
            cout<<result<<endl;
            break;
        default:
            cout << "Not a valid choice."<<endl;
    }
    
    return 0;
}
