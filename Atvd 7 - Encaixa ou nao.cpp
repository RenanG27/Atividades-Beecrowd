#include <iostream>
#include <stdio.h>
#include <string.h>
#define TF 1000

using namespace std;
 
int main (){
    int n, i, x, y, j, cont;
    char vetprin[TF], vetaux[TF];
    
    scanf ("%d", &n);
    for (i=0; i<n; i++){
        cont = 0;
        scanf ("%s %s", &vetprin, &vetaux);
        
        for (x = strlen(vetprin), y = strlen(vetaux); y>=0; y--, x--)
            if (vetprin[x] == vetaux[y])
            	cont ++;
        
        if (cont == strlen(vetaux)+1)
        	printf ("encaixa\n");
        else
        	printf ("nao encaixa\n");
    }
    return 0;
}
