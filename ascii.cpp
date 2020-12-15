#include <iostream>
using namespace std;

int main(){
    char inputChar;
    int asciiValue;

    cout<<"Please enter a character:"<<endl;
    cin>>inputChar;

    asciiValue = (int)inputChar; // casting: convert data from one type(char) to another(int)

    cout<<"The ASCII value for your character "<<inputChar<<" is "<<asciiValue<<endl;

    return 0;
}