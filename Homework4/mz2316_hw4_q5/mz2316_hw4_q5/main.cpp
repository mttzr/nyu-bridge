//
//  main.cpp
//  mz2316_hw4_q5
//
//  Created by Matthew Zehnder on 10/5/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);
void printPerfectNumbers(int num);

int main() {
    
    int M;
    cout<<"Enter a positive integer greater than or equal to 2: ";
    cin>>M;
    printPerfectNumbers(M);
    return 0;
}

void printPerfectNumbers(int num){
    
    int count = 0;
    int sum = 0;
    int count_two = 0;
    int sum_two = 0;
    
    cout<<"Perfect Numbers"<<endl;
    
    for(int i = 2; i<=num; i++){
        bool is_perfect = isPerfect(i);
        if(is_perfect == true){
            cout<<i<<endl;
        }
    }
    
    cout<<"\nAmicable Pairs"<<endl;
    
    for(int i = 2; i<=num; i++){
        bool is_perfect = isPerfect(i);
        if(is_perfect == false){
            analyzeDividors(i, count, sum);
            if(sum < num){
                analyzeDividors(sum, count_two, sum_two);
                if(i == sum_two && i < sum){
                    cout<<i<<", "<<sum<<endl;
                }
            }
        }
    }
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){
    
    int out_count_divs = 0;
    int out_sum_divs = 0;
    
    for(int i = sqrt(num); i > 0; i--){
        if(i == 1){
            out_sum_divs = out_sum_divs + i;
            out_count_divs++;
        }
        else{
            if(num % i == 0){
                if(i != (num/i)){
                    out_sum_divs = out_sum_divs + i + (num / i);
                    out_count_divs = out_count_divs + 2;
                }else if(i == (num/i)){
                    out_sum_divs = out_sum_divs + i;
                    out_count_divs = out_count_divs + 1;
                }
            }
        }
    }
    
    outCountDivs = out_count_divs;
    outSumDivs = out_sum_divs;
}

bool isPerfect(int num){
    
    int count_divs;
    int sum_divs;
    
    analyzeDividors(num, count_divs, sum_divs);
    
    if(num == sum_divs){
        return true;
    }
    else{
        return false;
    }
}
