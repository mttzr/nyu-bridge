//
//  main.cpp
//  Homework 2, Question 2
//
//  Created by Matthew Zehnder on 9/15/17.
//  Copyright © 2017 Matthew Zehnder. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    double price1;
    double price2;
    char club_card;
    double tax_rate;
    double base_price;
    double price_after_discounts;
    double total_price;
    
    cout<<"Enter price of first item: "<<endl;
    cin>>price1;
    cout<<"Enter price of second item: "<<endl;
    cin>>price2;
    cout<<"Does customer have a club card? (Y/N): "<<endl;
    cin>>club_card;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: "<<endl;
    cin>>tax_rate;
    
    base_price = price1 + price2;
    
    if (price1 > price2)
    {
        price_after_discounts = price1 + (.5*price2);
    }
    else
    {
        price_after_discounts = price2 + (.5*price1);
    }
    
    if (club_card == 'y' || club_card == 'Y')
    {
        price_after_discounts = price_after_discounts*.9;
    }
    
    total_price = price_after_discounts+((tax_rate/100)*price_after_discounts);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout<<"Base price: "<<base_price<<endl;
    cout<<"Price after discounts: "<<price_after_discounts<<endl;
    cout.precision(5);
    cout<<"Total price: "<<total_price<<endl;
    
}
