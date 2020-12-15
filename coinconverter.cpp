#include <iostream>
using namespace std;

int main(){
    const int Q = 25, D = 10, N = 5, P = 1;
    int total, quarters, dimes, nickels, pennies, dollars, cents;

    cout<<"Please enter amount of money to convert:"<<endl;
    cout<<"# of dollars:";
    cin>>dollars;
    cout<<"# of cents:";
    cin>>cents;

    total = dollars*100 + cents;

    quarters = total / Q;
    total -= Q*quarters;

    dimes = total / D;
    total -= D*dimes;

    nickels = total / N;
    total -= N*nickels;
    
    pennies = total / P;
    
    cout<<"The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies";

    return 0;
}