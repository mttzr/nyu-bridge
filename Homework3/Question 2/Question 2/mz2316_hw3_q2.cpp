//
//  main.cpp
//  Question 2
//
//  Created by Matthew Zehnder on 9/22/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    const string ONE_THOUSAND = "M";
    const string FIVE_HUNDRED = "D";
    const string ONE_HUNDRED = "C";
    const string FIFTY = "L";
    const string TEN = "X";
    const string FIVE = "V";
    const string ONE = "I";
    int decimal_number;
    int original_decimal_number;
    int num_m;
    int num_d;
    int num_c;
    int num_l;
    int num_x;
    int num_v;
    int num_i;
    string string_m;
    string string_d;
    string string_c;
    string string_l;
    string string_x;
    string string_v;
    string string_i;
    
    cout<<"Enter decimal number: "<<endl;
    cin>>decimal_number;
    
    original_decimal_number = decimal_number;
    
    num_m = decimal_number / 1000;
    decimal_number = decimal_number - (num_m*1000);
    
    num_d = decimal_number / 500;
    decimal_number = decimal_number - (num_d*500);

    num_c = decimal_number / 100;
    decimal_number = decimal_number - (num_c*100);
    
    num_l = decimal_number / 50;
    decimal_number = decimal_number - (num_l*50);
    
    num_x = decimal_number / 10;
    decimal_number = decimal_number - (num_x*10);
    
    num_v = decimal_number / 5;
    decimal_number = decimal_number - (num_v*5);
    
    num_i = decimal_number;
    
    while (num_m > 0) {
        string_m = string_m + ONE_THOUSAND;
        num_m = num_m - 1;
    }

    while (num_d > 0) {
        string_d = string_d + FIVE_HUNDRED;
        num_d = num_d - 1;
    }

    while (num_c > 0) {
        string_c = string_c + ONE_HUNDRED;
        num_c = num_c - 1;
    }

    while (num_l > 0) {
        string_l = string_l + FIFTY;
        num_l = num_l - 1;
    }

    while (num_x > 0) {
        string_x = string_x + TEN;
        num_x = num_x - 1;
    }
    
    while (num_v > 0) {
        string_v = string_v + FIVE;
        num_v = num_v - 1;
    }
    
    while (num_i > 0) {
        string_i = string_i + ONE;
        num_i = num_i - 1;
    }
    
    cout<<original_decimal_number<<" is "<<string_m<<string_d<<string_c<<string_l<<string_x<<string_v<<string_i<<endl;
    
    return 0;
}
