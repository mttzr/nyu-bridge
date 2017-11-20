//
//  main.cpp
//  mz2136_hw5_q1
//
//  Created by Matthew Zehnder on 10/13/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int minInArray(int arr[], int arr_size);
void findInArray(int input_arr[], int arr_size, int query, bool search_results_arr[]);
void rawToStringArray(string raw_input, string input_arr[], int arr_length);
void printBoolArray(bool arr[], int arr_length);
void printStringArray(string arr[], int arr_length);
void stringToIntArray(string str_arr[], int int_arr[], int arr_length);
int num_spaces(string str);

const int ARRAY_SIZE = 20;

int main(){
    
    string raw_input;
    int input_arr[ARRAY_SIZE];
    string input_str_arr[ARRAY_SIZE];
    bool search_results_arr[ARRAY_SIZE];
    int min_in_array;
    
    //get input as string
    cout<<"Please enter 20 integers separated by a space: "<<endl;
    getline(cin, raw_input);
    
    //convert each string car to an int, put in an array.
    rawToStringArray(raw_input, input_str_arr, ARRAY_SIZE);

    stringToIntArray(input_str_arr, input_arr, ARRAY_SIZE);
    
    //find min n array
    min_in_array = minInArray(input_arr, ARRAY_SIZE);

    //find locations of min in array
    findInArray(input_arr, ARRAY_SIZE, min_in_array, search_results_arr);
    
    //output min and indicies
    cout<<"The minimum value is "<<min_in_array<<", and it is located in the following indicies: ";
    printBoolArray(search_results_arr, ARRAY_SIZE);
    
}

int minInArray(int arr[], int arr_size){
    int min_in_array = arr[0];
    for(int index = 0; index < arr_size; index++){
        if(index == 0){
            min_in_array = arr[index];
        }
        else{
            if(arr[index]<min_in_array){
                min_in_array = arr[index];
            }
        }
    }
    return min_in_array;
}

void findInArray(int input_arr[], int arr_size, int query, bool search_results_arr[]){
    for(int index = 0; index <= arr_size-1; index++){
        if(input_arr[index] == query){
            search_results_arr[index] = true;
        }
        else{
            search_results_arr[index] = false;
        }
    }
}

void printBoolArray(bool arr[], int arr_length){
    for(int i = 0; i <= arr_length-1; i++){
        if(arr[i] == true){
            cout<<i;
            cout<<" ";
        }
    }
    cout<<"\n";
}

void printStringArray(string arr[], int arr_length){
    for(int i = 0; i <= arr_length-1; i++){
            cout<<arr[i];
            cout<<" ";
    }
    cout<<"\n";
}

void rawToStringArray(string raw_input, string input_arr[], int arr_length){
    int total_spaces = num_spaces(raw_input);
    int arr_index = 0;
    int spaces = 0;
    for(int i=0; i <= raw_input.length()-1; i++){
        if(raw_input[i] == ' '){
            input_arr[arr_index] = raw_input.substr(0,i);
            raw_input=raw_input.substr(i+1,(raw_input.length()-i));
            arr_index++;
            spaces++;
            i=0;
        }
    }
    if(spaces == total_spaces){
        input_arr[arr_index] = raw_input;
    }
}

void stringToIntArray(string str_arr[], int int_arr[], int arr_length){
    
    for(int i = 0; i<=arr_length-1; i++){
        int temp;
        string temp_s = str_arr[i];
        temp = stoi(temp_s);
        int_arr[i] = temp;
    }
}

int num_spaces(string str){
    int num_spaces = 0;
    for(int i = 0; i <= str.length(); i++){
        if(str[i] == ' '){
            num_spaces++;
        }
    }
    return num_spaces;
}


