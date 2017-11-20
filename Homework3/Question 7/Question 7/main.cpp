//
//  main.cpp
//  Question 7
//
//  Created by Matthew Zehnder on 9/26/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int user_number;
    cout<<"Please enter a positive integer:"<<endl;
    cin>>user_number;
    
    for (int j = 1; j <= user_number; j++) {
        for (int i = 1; i <= user_number; i++) {
            if (i == user_number) {
                cout<<i*j<<endl;
            }
            else {
                cout<<i*j<<"\t";
            }
        }
    }
    
    return 0;
}
