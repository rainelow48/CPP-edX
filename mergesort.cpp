#include <iostream>
using namespace std;

void mergesort(int arr[], int low, int high);
void merge(int arr[], int lowLeft, int lowRight, int highRight);
void printArr(int arr[], int arrSize);

int main(){
    int arr[6] = {5, 12, 63, 1, 20, 7};
    int arrSize = 6;
    mergesort(arr, 0, arrSize-1);
    printArr(arr, arrSize);
    return 0;
}

void printArr(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        cout<<arr[i]<<" ";
    }
}

void mergesort(int arr[], int low, int high){
    int mid;
    
    if (low == high){
        return;
    }
    else{
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }

}

void merge(int arr[], int lowLeft, int lowRight, int highRight){
    int highLeft, size;
    int *mergedArr;
    int iLeft, iRight, iRes;
    int i, iArr;

    highLeft = lowRight + 1;
    size = highRight - lowLeft + 1;
    mergedArr = new int [size];

    iLeft = lowLeft;
    iRight = highLeft;
    iRes = 0;

    while(iLeft <= highLeft && iRight <= highRight){
        if (arr[iLeft] < arr[iRight]){
            mergedArr[iRes] = arr[iLeft];
            iLeft++;
            iRes++;
        }
        else{
           mergedArr[iRes] = arr[iRight];
            iRight++;
            iRes++; 
        }
    }

    while(iLeft <= highLeft){
        mergedArr[iRes] = arr[iLeft];
        iLeft++;
        iRes++;
    }

    while(iRight <= highRight){
        mergedArr[iRes] = arr[iRight];
        iRight++;
        iRes++;
    }

    for (i = 0, iArr = lowLeft; i < size ; i++, iArr++){
        arr[iArr] = mergedArr[i];
    }
    delete [] mergedArr;
}