//
//  main.cpp
//  mz2136_hw5_q7
//
//  Created by Matthew Zehnder on 10/13/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

int countWordsAndLetters(string str, int letter_count_arr[]);
void printLetterCount(char letter_arr[], int letter_count_arr[], int arr_length);

int main(){
    
    int const LETTERS = 26;
    char letters[LETTERS] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int letter_count[LETTERS] = {0};
    string input;
    int num_words=0;
    
    cout<<"Please enter a line of text"<<endl;
    
    getline(cin, input);
    num_words = countWordsAndLetters(input, letter_count);
    
    cout<<num_words<<"\t"<<"words"<<endl;
    printLetterCount(letters, letter_count, LETTERS);
    
}

int countWordsAndLetters(string str, int letter_count_arr[]){
    
    int num_words = 1;
    
    for(int i=0; i <= str.length()-1; i++){
        if(str[i] == ' '){
            num_words++;
        }
        else{
            if((int) str[i] > 90){
                letter_count_arr[((int) str[i]-97)] = letter_count_arr[((int) str[i]-97)] + 1;
            }
            else{
                letter_count_arr[((int) str[i]-65)] = letter_count_arr[((int) str[i]-65)] + 1;
            }
        }
    }
    return num_words;
}

void printLetterCount(char letter_arr[], int letter_count_arr[], int arr_length){
    
    for(int  i = 0; i <= arr_length-1; i++){
        if(letter_count_arr[i] > 0){
            cout<<letter_count_arr[i]<<"\t"<<letter_arr[i]<<endl;
        }
    }
}

