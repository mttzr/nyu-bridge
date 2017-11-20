//
//  main.cpp
//  mz2316_hw4_q4
//
//  Created by Matthew Zehnder on 10/4/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include<cmath>
#include<string>
using namespace std;

void printDivisors(int num);

int main() {

    int num;
    
    cout<<"Please enter a positive integer >= 2: ";
    cin>>num;
    
    printDivisors(num);
    
    return 0;
}

void printDivisors(int num){
    
    string output = "";
    int current_largest;
    int current_smallest;
    
    for(int i = sqrt(num); i > 0; i--){
        
        if(num % i == 0 && i == num / i){
            output = to_string(i) + " ";
        }
        else if (num % i == 0 && i != num % i){
            current_smallest = i;
            current_largest = num / i;
            output = to_string(current_smallest) + " " + output + to_string(current_largest) + " " ;
        }
        
    }
    
    cout<<output<<endl;
}
