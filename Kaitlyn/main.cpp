//
//  main.cpp
//  CS 171 Final
//
//  Created by Kaitlyn Duarte on 4/24/14.
//  Copyright (c) 2014 Kaitlyn Duarte. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;


void classes_already_achieved()
{
    //Comment out when not debugging
    cout <<"Entering function: classes_already_achieved"<<endl;
    
    int course_quantity;//Numeric quantity
    char check;
    // 1) Valid needs to be a boolean
    // 2) need to initialize to false, only when you get valid input do you want to set to true
    bool valid=false;
    
    cout<<"How many Gen. Ed. courses have you taken?"<<endl;
    cin>> course_quantity;
    
    
    if( course_quantity <1 || course_quantity > 21)
    {
        cout<< "Invalid amount. Try again."<< endl;
        //Take code back to question of how many courses have you take?
    }
    else
    {
        do
        {
            cout<<"Is "<< course_quantity<< " correct?Y/N"<<endl;
            cin>> check;
            
            if( check == 'Y' || check == 'y')
            {
                valid=true;
                
            }
            else if( check == 'N' || check == 'n')
            {
                //Redefine variable//course_quantity//loop?
            }
            else
            {
                cout<< "Invalid input."<< endl;//loop back to question//"is course_quantity correct?"//loop?
            }
            cout <<"valid="<<valid<< endl;
        }
        while(!valid);
    }
    
}

void courses_achieved()
{
    //Comment out when not debugging
    cout <<"Entering function: courses_achieved"<<endl;
    
    char course_type;
    
    char courses_achieved;//Actual course name
    cout<<"How many Gen. Ed. courses have you taken?"<<endl;
    //how many enters allowed set by course_quantity
    cin>> course_type;
}







int main()
{
    classes_already_achieved();
    
    courses_achieved();
    
    
}
