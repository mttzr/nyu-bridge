//
//  main.cpp
//  Question 8
//
//  Created by Matthew Zehnder on 9/26/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int random_int;
    const int MAX_GUESSES = 5;
    int user_guess;
    int guess_count = 0;
    int upper_bound = 100;
    int lower_bound = 1;
    
    srand(time(0));
    random_int = rand() % 100 + 1;
    
    cout<<"I thought of a number between 1 and 100! Try to guess it."<<endl;
        
    while (guess_count < MAX_GUESSES) {
    
        cout<<"Range:["<<lower_bound<<","<<upper_bound<<"], Number of guesses left: "<<MAX_GUESSES - guess_count<<endl;
        cout<<"Your guess: ";
        cin>> user_guess;
        
        if (user_guess > random_int) {
            cout<<"Wrong! My number is smaller."<<endl;
            guess_count++;
            upper_bound = user_guess;
        } else if (user_guess < random_int) {
            cout<<"Wrong! My number is larger."<<endl;
            guess_count++;
            lower_bound = user_guess;
        } else if (user_guess == random_int) {
            cout<<"Congrats! You guessed my number in "<<guess_count<<" guesses."<<endl;
            exit(0);
        }
        
    }
    
    if (guess_count >= MAX_GUESSES) {
        cout<<"Out of guesses! My number is "<<random_int<<endl;
        exit(0);
    }
    
    return 0;
}
