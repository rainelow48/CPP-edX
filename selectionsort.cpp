// #define cpluspluslabs_h
#include <iostream>
using namespace std;

void swap(int *xp, int *yp);
void selection_sort(int arr[], int elements);
int minIndex(int arr[], int low, int high);
void printArr(int arr[], int arrSize);

int main(){
    int arr[6] = {1, 9, 20, 15, 5, 14};
    int arrSize = 6;
    selection_sort(arr, arrSize);
    printArr(arr, arrSize);
    return 0;
}

void printArr(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int *xp, int *yp){
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;

}

void selection_sort(int arr[], int elements){
    int i, minInd;

    for (i = 0; i < elements; i++){
        minInd = minIndex(arr, i, elements-1);
        swap(&arr[i], &arr[minInd]);
    }

}

int minIndex(int arr[], int low, int high){
    int min, minInd;
    int i;

    min = arr[low];
    minInd = low;

    for (i = low+1; i <= high; i++){
        if (arr[i] < min){
            min = arr[i];
            minInd = i;
        }
    }
    return minInd;
}