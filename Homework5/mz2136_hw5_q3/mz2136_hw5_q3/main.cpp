//
//  main.cpp
//  mz2136_hw_5_q3
//
//  Created by Matthew Zehnder on 10/13/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

void reverseArray(int arr[], int arr_size);
void removeOdd(int arr[], int& arr_size);
void splitParity(int arr[], int arr_size);
void printArray(int arr[], int arrSize);

int main() {
    int arr1[10] = {9, 2, 14, 12, -3}; int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14}; int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12}; int arr3Size = 5;
    reverseArray(arr1, arr1Size); printArray(arr1, arr1Size);
    removeOdd(arr2, arr2Size); printArray(arr2, arr2Size);
    splitParity(arr3, arr3Size); printArray(arr3, arr3Size);
    return 0; }

void printArray(int arr[], int arrSize){ int i;
    for (i = 0; i < arrSize; i++) { cout<<arr[i]<<' ';
    }
    cout<<endl; }

void reverseArray(int arr[], int arr_size){
    
    int temp;
    
    for(int i = 0; i <= (arr_size-1)/2; i++){
        
        temp=arr[i];
        arr[i] = arr[(arr_size-1)-i];
        arr[(arr_size-1)-i] = temp;
        
    }
    
}

void removeOdd(int arr[], int& arr_size){
    
    for(int i = 0; i <= arr_size-1; i++){
        
        if((arr[i] % 2) > 0){
            
            for (int j = i; j <= arr_size-1; j++){
                arr[j] = arr[j+1];
            }
            
            arr_size--;
        }
        
    }
    
}

void splitParity(int arr[], int arr_size){
    
    int temp;
    int rear_index = arr_size;
    
    for(int i = 0; i <= arr_size -1; i++){
        
        while(arr[rear_index] % 2 == 0){
            
            rear_index--;
            
        }
        
        if(arr[i] % 2 == 0){
            
            if(i < rear_index){
                temp = arr[i];
                arr[i] = arr[rear_index];
                arr[rear_index] = temp;
            }
            
        }
        
    }
    
}

