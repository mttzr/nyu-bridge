//
//  main.cpp
//  mz2136_hw5_q8
//
//  Created by Matthew Zehnder on 10/13/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

const int LETTERS = 26;

void countLetters(string str, int letter_count[]);
bool compareArrays(int arr_one[], int arr_two[], int arr_length);

int main(){
    
    string input_one;
    string input_two;
    int letter_count_one[LETTERS] = {0};
    int letter_count_two[LETTERS] = {0};
    bool results;
    
    //input string 1
    cout<<"Enter string 1: "<<endl;
    getline(cin, input_one);
    
    //input string 2
    cout<<"Enter string 2: "<<endl;
    getline(cin, input_two);
    
    //count letters in A
    countLetters(input_one, letter_count_one);

    //count letters in B
    countLetters(input_two, letter_count_two);

    //compare counts
    results = compareArrays(letter_count_one, letter_count_two, LETTERS);

    if(results == 1){
        cout<<"These are anagrams"<<endl;
    }
    else{
        cout<<"Not anagrams"<<endl;
    }
    
}

void countLetters(string str, int letter_count[]){
   
    for(int i = 0; i <= str.length(); i++){
        if(((int) str[i] >= 97) && ((int) str[i] <= 122)){
            letter_count[((int) str[i]-97)] = letter_count[((int) str[i]-97)] + 1;
        }
        else if(((int) str[i] >= 65) && ((int) str[i] <= 90)){
            letter_count[((int) str[i]-65)] = letter_count[((int) str[i]-65)] + 1;
        }
    }
}

bool compareArrays(int arr_one[], int arr_two[], int arr_length){
    for(int i = 0; i <= arr_length-1; i++){
        if(arr_one[i] != arr_two[i]){
            return false;
        }
    }
    return true;
}

