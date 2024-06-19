#include <iostream>
#include <stdio.h> 

using namespace std;

int main ()
{
    int parvet[5], impvet[5], i, n, imp=0, par=0,k;
    
    for (i=0; i<15; i++)
    {
        scanf ("%d", &n);
        if (n%2==0)
        {
            if (par<5)
            {
            parvet[par] = n;
            par++;
            }
        }
        else{
            if (imp<5)
            {
                impvet[imp] = n;
                imp++;
            }
        }
        if (par==5)
        {
            par = 0;
            for (k=0; k<5; k++)
            printf ("par[%d] = %d\n", k, parvet[k]);
        }
        if (imp==5)
        {
            imp = 0;
            for (k=0; k<5; k++)
            printf ("impar[%d] = %d\n", k, impvet[k]);
        }
    }
    for (i=0; i<imp; i++)
        printf ("impar[%d] = %d\n", i, impvet[i]);
    for (i=0; i<par; i++)
        printf ("par[%d] = %d\n", i, parvet[i]);
        
        return 0;
}
