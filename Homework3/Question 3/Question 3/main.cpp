//
//  main.cpp
//  Question 3
//
//  Created by Matthew Zehnder on 9/22/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    int input_decimal;
    int original_decimal;
    int number_of_binary_bits;
    int current_bit;
    int quotient_to_determine_num_bit;
    string binary_output;

    cout<<"Enter decimal number:"<<endl;
    cin>>input_decimal;
    
    original_decimal = input_decimal;
    number_of_binary_bits = 0;
    
    do {
        quotient_to_determine_num_bit = input_decimal / pow(2, number_of_binary_bits);
        number_of_binary_bits++;
    }
    while (quotient_to_determine_num_bit > 1);
    
    current_bit = number_of_binary_bits;
    
    for (int i = 1; i <= number_of_binary_bits; i++) {
    
        if (input_decimal / (pow(2, current_bit-1)) >= 1) {
            binary_output = binary_output + "1";
            input_decimal = input_decimal - pow(2, current_bit-1);
            current_bit = current_bit - 1;
        }
        else {
            binary_output = binary_output + "0";
            current_bit = current_bit - 1;
        }
    }
    
    cout<<"The binary representations of "<<original_decimal<<" is "<<binary_output<<endl;
    
    return 0;
}
