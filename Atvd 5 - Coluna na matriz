#include <iostream>
#include <stdio.h> 

using namespace std;

int main()
{
    float m[12][12], val, soma=0;
    int i, col, k, j;
    char op;
    
    scanf ("%d", &col);
    scanf (" %c", &op);
    for (i=0; i<12; i++)
    {
        for (k=0; k<12; k++)
        {
            scanf ("%f", &m[i][k]);
        }
    }
    j = col;
    while (j == col)
    {
      for (i = 0; i < 12; i++)
      soma += m[i][j];
      j++;
    }
        
    if (op == 'S')
        printf ("%.1f\n", soma);
    
    if (op == 'M')
        printf ("%.1f\n", soma/12);
    
    return 0;
    
}
