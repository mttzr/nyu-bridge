//
//  main.cpp
//  mz2316_hw4_q1
//
//  Created by Matthew Zehnder on 10/4/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

int fib(int n);

int main(){
    
    int n;
    int fib_n;
    
    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;
    fib_n = fib(n);
    cout<<fib_n<<endl;
    
    return 0;
    
}

int fib(int n){
    
    int fib_n;
    int fib_n_minus_one = 0;
    int fib_n_minus_two = 1;
    
    for (int i = 1; i <= n; i++){
        fib_n = fib_n_minus_one + fib_n_minus_two;
        fib_n_minus_two = fib_n_minus_one;
        fib_n_minus_one = fib_n;
    }
    
    return fib_n;
}
