//
//  main.cpp
//  mz2136_h5_q2
//
//  Created by Matthew Zehnder on 10/13/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPalindrome(string str);

int main(){
    string input;
    cout<<"Please enter a word: ";
    cin>>input;
    if(isPalindrome(input) == true){
        cout<<input<<" is a palindrome"<<endl;
    }
    else{
        cout<<input<<" is not a palindrome"<<endl;
    }
}

bool isPalindrome(string str){
    int length = str.length() - 1;
    for(int i = 0; i <= length/2; i++){
        if(str[i] != str[length-i]){
            return false;
        }
    }
    return true;
}

