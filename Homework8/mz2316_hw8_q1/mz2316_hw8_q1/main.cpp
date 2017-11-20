//
//  main.cpp
//  mz2316_hw8_q1
//
//  Created by Matthew Zehnder on 11/8/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class Money {
    public:
        Money();
        Money(long dollars);
        Money(long dollars, int cents);
        double get_value() const;
        void set_value(double amount);
        friend Money operator +(const Money& amount1, const Money& amount2);
        friend Money operator -(const Money& amount1, const Money& amount2);
        friend bool operator >(const Money& amount1, const Money& amount2);
        friend bool operator <(const Money& amount1, const Money& amount2);
        friend istream& operator >>(istream& ins, Money& amount);
        friend ostream& operator <<(ostream& outs, const Money& amount);
    private:
        long all_cents;
};

class Check {
    public:
        Check();
        Check(int check_number, Money check_amount);
        Check(int check_number, Money check_amount, bool is_cashed);
        int get_check_number() const;
        double get_check_amount() const;
        bool get_cashed_status() const;
        void set(int check_number, Money check_amount);
        void set(int check_number, Money check_amount, bool is_cashed);
        friend istream& operator >>(istream& ins, Check& check);
        friend ostream& operator <<(ostream& outs, const Check& check);

    private:
        int check_number;
        Money check_amount;
        bool is_cashed;
};

int digit_to_int(char c);

int main() {
    vector <Money> deposits;
    vector <Check> checks;
    Money account_balance_old;
    Money account_balance_new;
    Money next;
    Money deposits_sum;
    Money min_input;
    Money cashed_checks_sum;
    Check temp;
    char in_file_name[21];
    ifstream in_stream;
    int count_checks_cashed = 0;
    
    cout<<"Enter the checks data file name (maximum of 20 characters):\n";
    cin >> in_file_name;
    in_stream.open(in_file_name);
    
    if(in_stream.fail()){
    cout<<"Input file opening failed.\n";
    exit(1);
    }
     
    while(in_stream>>temp){
    checks.push_back(temp);
    };
     
    for(unsigned int i=0; i<checks.size(); i++){
        if(checks[i].get_cashed_status() == true){
            cashed_checks_sum = cashed_checks_sum+checks[i].get_check_amount();
            count_checks_cashed++;
        }
    }
    cout<<"Please enter your deposits($XX.XX).\n"
    <<"Place a negative number at the end.\n";
    cin>>next;
    while(next > min_input){
        deposits.push_back(next);
        cout<<next<<" added "<<endl;
        deposits_sum = deposits_sum + next;
        cin>>next;
    }
    
    cout<<"Enter old account balance($XX.XX): ";
    cin>>account_balance_old;
    
    account_balance_new = account_balance_old + deposits_sum - cashed_checks_sum;
    
    cout<<"Total checks cashed: "<<count_checks_cashed<<endl;
    cout<<"Total deposits: "<<deposits_sum<<endl;
    cout<<"New balance: "<<account_balance_new<<endl;
    cout<<"Cashed Checks: "<<endl;
    for(unsigned int i=0; i < checks.size(); i++){
        if(checks[i].get_cashed_status() == true){
            cout<<checks[i]<<endl;
        }
    }
    cout<<"Uncashed Checks: "<<endl;
    for(unsigned int i=0; i < checks.size(); i++){
        if(checks[i].get_cashed_status() == false){
            cout<<checks[i]<<endl;
        }
    }
}

int digit_to_int(char c){
    return( static_cast<int>(c)- static_cast<int>('0'));
}

Money::Money() {
    all_cents = 0.0;
}

Money::Money(long dollars) {
    all_cents = dollars * 100;
}

Money::Money(long dollars, int cents) {
    if (dollars * cents < 0){ //If one is negative and one is positive
        cout << "Illegal values for dollars and cents.\n";
        exit(1);
    }
    else{
        all_cents = dollars * 100 + cents;
    }
}

double Money::get_value() const{
    return (all_cents * 0.01);
}

void Money::set_value(double amount){
    all_cents = amount;
}

Money operator +(const Money& amount1, const Money& amount2){
    Money temp;
    temp.all_cents = amount1.all_cents+amount2.all_cents;
    return temp;
}

Money operator -(const Money& amount1, const Money& amount2){
    Money temp;
    temp.all_cents = amount1.all_cents-amount2.all_cents;
    if(temp.all_cents>0){
        return temp;
    }
    else{
        return 0;
    }
}

bool operator >(const Money& amount1, const Money& amount2){
    return(amount1.all_cents > amount2.all_cents);
}

bool operator <(const Money& amount1, const Money& amount2){
    return(amount1.all_cents < amount2.all_cents);
}

istream& operator >>(istream& ins, Money& amount){
    char one_char, decimal_point, digit1, digit2;
    long dollars;
    int cents;
    bool negative;
    
    ins >> one_char;
    if(one_char == '-'){
        negative = true;
        ins >> one_char;
    }
    else{
        negative = false;
    }
    ins >> dollars >> decimal_point >> digit1 >> digit2;
    
    if(one_char != '$' || decimal_point !='.'|| !isdigit(digit1) || !isdigit(digit2)){
        //cout<<"Error illegal form for money input\n";
        //exit(1);
    }
    cents = digit_to_int(digit1)*10 + digit_to_int(digit2);
    amount.all_cents = dollars*100+cents;
    if(negative){
        amount.all_cents = -amount.all_cents;
    }
    return ins;
}

ostream& operator <<(ostream& outs, const Money& amount){
    long positive_cents, dollars, cents;
    positive_cents = labs(amount.all_cents);
    dollars = positive_cents/100;
    cents = positive_cents%100;
    
    if(amount.all_cents < 0){
        outs<<"- $"<<dollars<<'.';
    }else{
        outs<<"$"<<dollars<<'.';
    }
    if(cents<10){
        outs <<'0';
    }
    outs<<cents;
    return outs;
}

Check::Check() {
    check_number = 0;
    Money check_amount;
    is_cashed = false;
}

Check::Check(int check_number_in, Money check_amount_in){
    check_number = check_number_in;
    check_amount = check_amount_in;
    is_cashed = false;
}

Check::Check(int check_number_in, Money check_amount_in, bool is_cashed_in) {
    check_number = check_number_in;
    check_amount = check_amount_in;
    is_cashed = is_cashed_in;
}

int Check::get_check_number() const{
    return check_number;
}

bool Check::get_cashed_status() const{
    return is_cashed;
}

double Check::get_check_amount() const{
    return check_amount.get_value();
}

void Check::set(int check_number_in, Money check_amount_in){
    check_number = check_number_in;
    check_amount = check_amount_in;
}

void Check::set(int check_number_in, Money check_amount_in, bool is_cashed_in){
    check_number = check_number_in;
    check_amount = check_amount_in;
    is_cashed = is_cashed_in;
}

istream& operator >>(istream& ins, Check& check){
   
    char comma, comma2;
    int num;
    Money amount;
    bool status;
    
    ins >> num >> comma >> amount >>comma2>> status;
    check.check_number = num;
    check.check_amount = amount;
    check.is_cashed = status;
    
    return ins;
}

ostream& operator <<(ostream& outs, const Check& check){
    char status_char;
    
    if(check.is_cashed == true){
        status_char = 'Y';
    }
    else{
        status_char = 'N';
    }
    outs<<"Check number: "<<check.check_number<<endl;
    outs<<"Check ammount: "<<check.check_amount<<endl;
    outs<<"Cashed (Y/N): "<<status_char<<endl;
    return outs;
}
