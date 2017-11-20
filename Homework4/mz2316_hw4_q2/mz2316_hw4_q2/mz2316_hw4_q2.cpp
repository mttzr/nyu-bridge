//
//  main.cpp
//  mz2316_hw4_q2
//
//  Created by Matthew Zehnder on 10/4/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main() {
    
    int num_triangles;
    char symbol;
    
    cout<<"How many triangles in your tree?"<<endl;
    cin>>num_triangles;
    cout<<"What symbol do you want to use?"<<endl;
    cin>>symbol;
    
    printPineTree(num_triangles, symbol);
    
}

void printShiftedTriangle(int n, int m, char symbol){
    
    string stars;
    string spaces;
    
    stars = stars + symbol;
    
    for (int i = 2; i <= m+n; i++){
        
        spaces = spaces + " ";
        
    }
    
    for (int i = 1; i <= n; i ++){
        cout<<spaces<<stars<<endl;
        stars = symbol + stars + symbol;
        spaces.pop_back();
        
    }
    
}

void printPineTree(int n, char symbol){
    
    int tree_size = 2;
    int margin = n-1;
    
    for(int i = 1; i <= n; i++){
        
        printShiftedTriangle(tree_size, margin, symbol);
        tree_size++;
        margin--;
        
    }
    
    
    
}
