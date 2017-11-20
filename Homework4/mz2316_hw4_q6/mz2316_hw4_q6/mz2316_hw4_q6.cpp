//
//  main.cpp
//  mz2316_hw4_q6
//
//  Created by Matthew Zehnder on 10/6/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

double eApprox(int n);

int main() {
    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }
    return 0; }

double eApprox(int n){
    
    double e_approx = 1;
    double i_fact = 1;
    
    for(int i = 1; i <= n; i++){
        i_fact = i_fact * i;
        e_approx = e_approx + (1/i_fact);
    }
    return e_approx;
}
