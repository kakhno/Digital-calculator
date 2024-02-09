#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int quantity,i;
float num[21];
char action;
float product;
string str_product;

int main() {

// Interface

    cout<<"Enter How Many Numbers You Wish To Use: "<<endl;

    cout<<"****************************************"<<endl;

        cin>>quantity;

    cout<<"***************"<<endl;

    cout<<"Enter Numbers: "<<endl;

    cout<<"***************"<<endl;

        for(int i=0; i<quantity; i++) {

            cin>>num[i];
        }

    cout<<"*************************************************"<<endl;

    cout<<"Enter What You want to do with this two numbers: "<<endl;

    cin>>action;

    cout<<"*************************************************"<<endl;

// Calculation

    if(action == '+') {

        for(int i=0; i<quantity; i++) {

            product += num[i];
        }
    }

    else if (action == '-') {

        for(int i=0; i<quantity; i++) {

            product -= num[i];
        }
    }

    else if (action == '*') {

        for(int i=0; i<quantity; i++) {

                if(i==0) product = num[i];

                    else product *= num[i];
        }
    }

    else if (action == '/') {

        for (int i=0; i<quantity; i++) {

                if (i==0) product = num[i];

                    else product /=num[i];
        }
    }

// Output

    cout<<"The Result Is: ";

    for(int i=0; i<quantity; i++) {

        if( i+1 == quantity) cout<<num[i];

            else cout<<num[i]<<" "<<action<<" ";
    }

        cout<<" = "<<product;





}
