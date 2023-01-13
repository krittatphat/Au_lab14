#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    float sum = 0 ;
    int i = 0 ;
    float Max, Min = 999, sum2, sum3 = 1 , sum4 ;
    while(i < N){
        sum4 += 1/A[i] ;
        sum3 *= A[i] ;
        sum2 += pow(A[i],2) ;
        sum += A[i] ;
        if(Max < A[i]){
            Max = A[i] ;
        }
        else if(Min > A[i]){
            Min = A[i] ;
        }
        i++;
    }
    B[0] = sum/i ;
    B[1] = sqrt((sum2/i)-pow(B[0],2)) ;
    B[2] = pow(sum3,(1.0/i)) ;
    B[3] = N/sum4 ;
    B[4] = Max ;
    B[5] = Min ;
}