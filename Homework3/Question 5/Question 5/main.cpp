//
//  main.cpp
//  Question 5
//
//  Created by Matthew Zehnder on 9/25/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    int num_lines;
    int num_spaces;
    string star_output = "*";
    string space_output;
    
    cout<<"Input a positive integer n"<<endl;
    cin>>num_lines;
    
    num_spaces = num_lines;

    for (int i = 0; i <= (num_lines-2); i++) {
        for (int j = num_spaces; j >= 0; j = j - 1) {
            space_output = " " + space_output;
            num_spaces = num_spaces - 1;
        }
        star_output = "*"+star_output+"*";
        space_output.pop_back();
    }
    
    for (int i = num_lines-2; i >= -1; i = i - 1) {
        cout<<space_output<<star_output<<endl;
        star_output.pop_back();
        star_output.pop_back();
        space_output = " " + space_output;
    }
    
    star_output = "*";
    space_output = "";
    num_spaces = num_lines;
    
    for (int i = 0; i <= (num_lines-1); i++) {
        for (int j = num_spaces; j >= 0; j = j - 1) {
            space_output = " " + space_output;
            num_spaces = num_spaces - 1;
        }
        cout<<space_output<<star_output<<endl;
        star_output = "*"+star_output+"*";
        space_output.pop_back();
    }
    
    return 0;
}

