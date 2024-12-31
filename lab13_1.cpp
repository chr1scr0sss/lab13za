#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double X[], int N, double Y[]){
    double sum=0;
    double maxValue=X[0];
    double minValue=X[0];
    
    //Arithmetic Mean :-)
    for(int i=0;i<N;i++){
        sum += X[i];
    }
    Y[0] = sum/N;
    
    //SD :-)
    sum =0;
    for(int i=0;i<N;i++){
        sum += pow(X[i]-Y[0],2);
    }
    Y[1] = sqrt(sum/N);
    
    //Geometric Mean :-)
    sum=1;
    for(int i=0;i<N;i++){
        sum *=X[i];
    }
    Y[2] = pow(sum,1.0/N);
    
    // Harmonic Mean :-)
    sum =0;
    for(int i=0;i<N;i++){
        sum +=1.0/X[i];
    }
    Y[3] = N/sum;
    
    //Max and Min :-)
    for(int i=0;i<N;i++){
        if(X[i] > maxValue) maxValue = X[i];
        if(X[i] < minValue) minValue = X[i];
    }
    Y[4] =maxValue;
    Y[5] =minValue;

}