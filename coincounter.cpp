#include <iostream>
using namespace std;

int main(){
    const int Q = 25, D = 10, N = 5, P = 1;
    int total, quarters, dimes, nickels, pennies, dollars, cents;

    cout<<"Please enter the number of coins:"<<endl;
    
    cout<<"# of quarters: ";
    cin>>quarters;
  
    cout<<"# of dimes: ";
    cin>>dimes;  

    cout<<"# of nickels: ";
    cin>>nickels;

    cout<<"# of pennies: ";
    cin>>pennies;

    total = Q*quarters + D*dimes + N*nickels + P*pennies;

    dollars = total / 100;
    cents = total % 100;

    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;

    return 0;
}