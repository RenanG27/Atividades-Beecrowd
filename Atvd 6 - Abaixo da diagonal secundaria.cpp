#include <stdio.h>
#include <stdio.h>
#define TF 12

int main (){
    
    int l,c,i=0;
    float matriz[TF][TF], soma=0, med=0;
    char op;
    
    scanf (" %c", &op);
    
    for (l=0; l<TF; l++)
        for (c=0; c<TF; c++)
            scanf ("%f", &matriz[l][c]);
    
    for (l=TF-1; l>0; l--){
        for (c=1+i; c<TF; c++){
            soma += matriz[l][c];
            med += 1;
        }
        i++;
    }
    if (op == 'S')
        printf ("%.1f\n", soma);
    else
    if (op == 'M')
        printf ("%.1f\n", soma/med);
        
    return 0;
}
