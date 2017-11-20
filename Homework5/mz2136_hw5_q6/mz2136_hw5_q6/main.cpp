//
//  main.cpp
//  mz2136_hw5_q6
//
//  Created by Matthew Zehnder on 10/13/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

int numSpaces(string str);
bool allDigits(string str);
void redact(int num_spaces, string input);

int main(){
    
    string input;
    int num_spaces;

    cout<<"Please enter a line of text:"<<endl;
    getline(cin, input);
    
    num_spaces = numSpaces(input);
    
    redact(num_spaces, input);
}

bool allDigits(string str){
    for(int i = 0; i <= str.length()-1; i++){
        if(str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9'){
            return false;
        }
    }
    return true;
}

int numSpaces(string str){
    int num_spaces = 0;
    for(int i=0; i <= str.length(); i++){
        if(str[i] == ' '){
            num_spaces++;
        }
    }
    return num_spaces;
}

void redact(int num_spaces, string input){
 
    string temp;
    string output;
    int space_index;
    
    for(int i = 0; i <= num_spaces; i++){
        
        space_index = input.find(" ");
        temp = input.substr(0,space_index);
        input = input.substr((space_index+1),(input.length()-space_index));
        
        if(allDigits(temp) == true){
            for(int i=0; i <= temp.length()-1; i++){
                output = output+"x";
            }
        }
        else{
            output = output + temp;
        }
        output = output + " ";
    }
    cout<<output<<endl;
    
}

