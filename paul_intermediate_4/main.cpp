/*
 Programming Challenges - Number Base Conversion
 
 String Searching Challenge
 
 Write a program that accepts a base ten (non-fractional) number at the command line and outputs the binary representation of that number. Sample input is
 */

#include <iostream>
#include <math.h>
using namespace std;

int Method_1(int a);
void Method_2(int a);

int main() {
    int Number = 0;
    cout << "Input Number: " << endl;
    cin >> Number;
    
    cout << "Method_1: (Bad) " << Method_1(Number) << endl;
    
    cout << "Method_2:       " ;
    Method_2(Number);
    cout << endl;
    
    return 0;
}

void Method_2(int a) {
    
    int b = 0;              // b: Number of power
    while( a >= pow(2,b+1) ) {
        b++;
    }
    
    while( b >= 0) {
        if ( a >= pow( 2, b ) ){
            cout << '1';
            a = a - pow(2, b);
        }else {
            cout << '0';
        }
        b--;
    }
    
}


int Method_1(int a) {
    int value = 0;
    while (a > 0) {
        
        int b = 0;              // b: Number of power
        while( a >= pow(2,b+1) ) {
            b++;
        }
        //        cout << "Pow is: " << b << " and Value is: "<< pow(2,b) << endl;
        value = value + pow(10,b);
        a = a - pow(2,b);
    }
    
    return value;
}
