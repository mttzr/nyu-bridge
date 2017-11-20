//
//  main.cpp
//  Question 6
//
//  Created by Matthew Zehnder on 9/25/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    int user_number;
    cout<<"Input a positive integer: "<<endl;
    cin>>user_number;

    for (int i = 0; i <= user_number; i++){
        
        int test_num = i;
        int current_num = test_num;
        int count_even = 0;
        int count_odd = 0;
        
        while (test_num > 0) {
            if ((test_num % 10) % 2 == 0) {
                count_even++;
                test_num = test_num / 10;
            }
            else {
                count_odd++;
                test_num = test_num / 10;
            }
        }
        if (count_even > count_odd) {
            cout<<current_num<<endl;
        }
        
    }
    
    return 0;
}
