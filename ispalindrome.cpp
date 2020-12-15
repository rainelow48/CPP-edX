#include <iostream>
using namespace std;

bool is_palindrome(int test);

int main(){
    int test;
    cout<<"Enter number:";
    cin>>test;
    cout<<is_palindrome(test);
    return 0;
}

bool is_palindrome(int test){
    int lenTest = 1;
    int copy = test;
    int bignum = 1;

    for (lenTest = 0; copy > 0; lenTest++){
        copy /= 10;
        bignum *= 10;
    }
    bignum /= 10;

    if (lenTest <= 1){
        return true;
    }
    else{
        if (test / bignum == test % 10){
            return is_palindrome((test % bignum) / 10);
        }
        else{
            return false;
        }
    }
}