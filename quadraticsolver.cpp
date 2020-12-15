#include <iostream>
#include <cmath>
using namespace std;

const int 
TWO_REAL_SOLUTION = 0,
ONE_REAL_SOLUTION = 1,
COMPLEX_SOLUTION = 2,
NO_SOLUTION = 3,
INFINITE_SOLUTION = 4,
LINEAR_SOLUTION = 5;

int quadratic(float a, float b, float c, float &root1, float &root2);
int linear(float a, float b, float &root1);

int main(){


    float a, b, c, root1, root2;

    cout<<"Please input coefficients of quadratic equation (ax^2+bx+c=0) separated by a space:"<<endl;
    cin>>a>>b>>c;
    
    switch (quadratic(a, b, c, root1, root2)){
        case TWO_REAL_SOLUTION:
            cout<<"The solutions are: x1 = "<<root1<<", x2 = "<<root2<<endl;
            break;
        case ONE_REAL_SOLUTION:
            cout<<"The solution is: x1 = x2 = "<<root1<<endl;
            break;
        case COMPLEX_SOLUTION:
            cout<<"The solution is complex."<<endl;
            break;
        case NO_SOLUTION:
            cout<<"There is no solution."<<endl;
            break;
        case INFINITE_SOLUTION:
            cout<<"Every x is a solution."<<endl;
            break;
        case LINEAR_SOLUTION:
            cout<<"This is a linear equation. The solution is: x = "<<root1<<endl;
            break;
    }
}

int quadratic(float a, float b, float c, float &root1, float &root2){
    float det;

    if (a != 0){
        det = b*b - 4*a*c;
        if (det > 0){
            root1 = (-b + sqrt(det))/(2*a);
            root2 = (-b - sqrt(det))/(2*a);
            return TWO_REAL_SOLUTION;
        }
        else if (det < 0){
            return COMPLEX_SOLUTION;
        }
        else{
            root1 = (-b)/(2*a);
            return ONE_REAL_SOLUTION;
        }
    }
    else{
        return linear(b, c, root1);
    }
    return 0;
}

int linear(float a, float b, float &root1){
    if (a != 0){
        root1 = (-b/a);
        return LINEAR_SOLUTION;
    }
    else{
        if (b != 0){
            return NO_SOLUTION;
        }
        else{
            return INFINITE_SOLUTION;
        }
    }
    
}
