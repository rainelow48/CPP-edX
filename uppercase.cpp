#include <iostream>
using namespace std;

int main(){
    char lowerChar, upperChar;
    int offset;

    cout<<"Enter lower case letter:"<<endl;
    cin>>lowerChar;

    offset = (int)lowerChar - 'a';

    upperChar = (char)'A' + offset;

    cout<<"Uppercase letter is: "<<upperChar<<endl;

    return 0;
}