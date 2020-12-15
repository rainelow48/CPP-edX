#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(){
    int a, b;

    cout<<"Input 2 numbers separated by a space:"<<endl;
    cin>>a>>b;
    cout<<"The GCD is: "<<gcd(a,b)<<endl;
    return 0;   
}

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}