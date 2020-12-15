#include <iostream>
using namespace std;
  
int fibonacci(int num);

int main(){
    int n, i;

    cout<<"Enter a positive integer greater than 1: ";
    cin>>n;

    cout<<"Fibonacci Sequence:"<<endl;

    for (i = 1; i <= n; i++) {
        cout<<fibonacci(i)<<endl;
    }

    // int n, nextTerm;
    // int t1 = 1, t2 = 1, counter = 2;

    // cout<<"Enter a positive integer greater than 1: ";
    // cin>>n;

    // cout<<"Fibonacci Sequence:"<<endl;
    // cout<<t1<<endl<<t2<<endl;

    // nextTerm = t1 + t2;

    // while (counter < n){
    //     cout<<nextTerm<<endl;
    //     t1 = t2;
    //     t2 = nextTerm;
    //     nextTerm = t1 + t2;
    //     counter++;
    // }

    return 0;
}

int fibonacci(int num) { 
    if (num <= 1){
        return num;
    }
    else{
        return fibonacci(num-1) + fibonacci(num-2);
    }
} 