//
//  main.cpp
//  Question 4
//
//  Created by Matthew Zehnder on 9/22/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double sequence_length;
    double input_product = 1.0;
    double input;
    double geometric_mean;
    
    cout<<"Please enter the length of the sequence: "<<endl;
    cin>>sequence_length;
    
    cout<<"Please enter your sequence: "<<endl;
    
    for (int i = 0; i < sequence_length; i++) {
        cin>>input;
        input_product = input_product * input;
    }

    geometric_mean = pow(input_product, (1/sequence_length));
    
    cout<<"The geometric mean is: "<<geometric_mean<<endl;
    
    return 0;
}

//Version 2

/*
 
 int main() {
 
 double sequence_length = 0;
 double input_product = 1.0;
 double input;
 double geometric_mean;
 
 cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:"<<endl;
 
 do {
 cin>>input;
 if (input != -1){
 input_product = input_product * input;
 sequence_length++;
 }
 else {
 break;
 }
 }
 while (input != -1);
 
 if (sequence_length == 0) {
 cout<<"No sequence entered, try again."<<endl;
 }
 else {
 geometric_mean = pow(input_product, (1/sequence_length));
 
 cout<<"The geometric mean is: "<<geometric_mean<<endl;
 }
 
 
 
 return 0;
 }
 */
