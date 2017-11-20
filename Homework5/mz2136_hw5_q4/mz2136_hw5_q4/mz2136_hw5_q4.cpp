//
//  main.cpp
//  mz2136_hw5_q4
//
//  Created by Matthew Zehnder on 10/13/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateHash(int arr[], int arr_length);
void printArray(int arr[], int arr_length);
int convertToHash(int input, int hash_arr[]);
int convertToInt(char input);
bool validate(string input, int pw_hash[]);

int main(){
    
    //variables
    const int PW[] = {1,2,3,4,5};
    const int PW_LENGTH = 5;
    const int HASH_LENGTH = 10;
    int template_arr[HASH_LENGTH] = {0,1,2,3,4,5,6,7,8,9};
    int hash_arr[HASH_LENGTH];
    int pw_hash[PW_LENGTH];
    string pw_input;
    bool is_correct;

    //set password (in variables)
    //set template (in variables)
    //generate hash
    generateHash(hash_arr, HASH_LENGTH);
    
    //hash password
    for(int i = 0; i <= PW_LENGTH; i++){
        pw_hash[i] = convertToHash(PW[i], hash_arr);
    }
    
    //display
    cout<<"Please enter your PIN according to the following mapping:"<<endl;
    printArray(template_arr, HASH_LENGTH);
    cout<<"\n";
    printArray(hash_arr, HASH_LENGTH);
    cout<<"\n";
    
    //get input
    cin>>pw_input;
  
    //validate
    is_correct = validate(pw_input, pw_hash);
    
    if(is_correct == true){
        cout<<"Your PIN is correct"<<endl;
    }
    else{
        cout<<"Your PIN is incorrect"<<endl;
    }
    
}

void generateHash(int arr[], int arr_length){
    srand(time(0));
    for(int i = 0; i <= arr_length; i++){
        arr[i] = rand() % 3 + 1;
    }
}

void printArray(int arr[], int arr_length){
    for(int i = 0; i <= arr_length-1; i++){
        cout<<arr[i]<<' ';
    }
}

int convertToHash(int input, int hash_arr[]){
    return hash_arr[input];
}

int convertToInt(char input){
    char c = input;
    int i = c - '0';
    return i;
}

bool validate(string input, int pw_hash[]){
    for(int i = 0; i <= input.length()-1; i++){
        if(convertToInt(input[i]) != pw_hash[i]){
            return false;
        }
    }
           return true;
}
           

/*
 cout<<pw_input[1]<<endl;
 char test_char = pw_input[1];
 int test_int = convertToInt(test_char);
 cout<<"int: "<<test_int<<endl;
 int test;
 test = convertToHash(test_int, hash_arr);
 cout<<"hash: "<<test<<endl;
 */

