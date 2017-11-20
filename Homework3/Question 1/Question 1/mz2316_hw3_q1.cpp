//
//  main.cpp
//  Question 1
//
//  Created by Matthew Zehnder on 9/22/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    int count;
    int number_to_print = 2;
    
    cout<<"Please enter a positive integer: "<<endl;
    cin>>count;
    
    while (count > 0) {
        cout<<number_to_print<<endl;
        number_to_print = number_to_print + 2;
        count--;
    }
    
    return 0;
}

// Version 2

/*
int main() {
    
    int count;
    int number_to_print = 2;
    
    cout<<"Please enter a positive integer: "<<endl;
    cin>>count;
    
    for (int i = 1; i <= count; i++) {
        cout<<number_to_print<<endl;
        number_to_print = number_to_print + 2;
    }
    
    return 0;
}
 
 */
