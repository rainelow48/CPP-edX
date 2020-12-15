#include <iostream>
using namespace std;

int binary_search(int search_value, int lst[], int elements);

int main(){
    int lst[] = {0, 1, 2, 18, 19, 20, 25};
    cout<<binary_search(20, lst, 6);  
    return 0;
}

int binary_search(int search_value, int lst[], int elements){
    int low = 0, high = elements-1, mid;
    bool found = false;
    int counter = 0;

    while (found == false && low <= high){
        mid = (low + high) / 2;

        if (lst[mid] == search_value){
            found = true;
        }
        else if(lst[mid] < search_value){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        counter += 1;
    }
    return counter;
}