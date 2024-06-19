#include <iostream>
#include <stdio.h>
#define TF 100

using namespace std;

int main (){
    int i;
    double x[TF];
    
    for (i=0; i<100; i++){
        scanf ("%lf", &x[i]);
        if (x[i] <= 10)
        printf ("A[%d] = %.1lf\n", i, x[i]);
    }
    return 0;
}
