#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int year;
    year = atoi(argv[1]);

    if (year % 400 == 0)
        cout<<year<<" is a leap year";
    else if (year % 4 == 0 && year % 100 != 0)
        cout<<year<<" is a leap year";
    else
        cout<<year<<" is not a leap year";
    
    return 0;    
}