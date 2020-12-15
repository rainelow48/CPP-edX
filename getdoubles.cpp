#include <iostream>
#include <vector>
using namespace std;


double* getDoubles(int numDoubles){
    double *array = new double[numDoubles];
    for (int i = 0; i < numDoubles; i++){
        array[i] = (double) (i+1)/ 3.0;
    }
    return array;
    delete [] array;
    array = NULL;
}


int main(){
    int num = 4;
    cout<<*getDoubles(num)<<endl;
    return 0;
}