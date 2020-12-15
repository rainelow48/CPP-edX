#include <iostream>
using namespace std;

int linear_search(int search_value, int lst[], int elements);

int main(){
    int lst[] = {19, 2, 20, 1, 0, 18};
    cout<<linear_search(20, lst, 6);
    return 0;
}

int linear_search(int search_value, int lst[], int elements){
    int i = 0;
    bool found = false;

    while(found == false && i < elements){
        if (lst[i] == search_value){
            return i+1;
            found = true;
        }
        else{
            i++;
        }
    }
    return i;
}