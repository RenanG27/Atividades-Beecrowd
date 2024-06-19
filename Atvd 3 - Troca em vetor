#include <iostream>
#include <stdio.h>
#define TF 20

using namespace std;

int main (){
    int vet[TF], i, n, c;
    
    for(i=0; i<TF; i++)
        scanf ("%d", &vet[i]);
        
    for(i=0, n=19; i<10; i++, n--){
        c = vet[i];
        vet[i] = vet[n];
        vet[n] = c;
        }
        
    for (i=0; i<20; i++)
        printf ("N[%d] = %d\n", i, vet[i]);
        
        return 0;
}
