#include <iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#define bits 32

using namespace std;
 
int main() {
    long long int n1[bits], n2[bits], entrada1 = 0, entrada2, soma, cont = 0;
    while(scanf("%lld%lld", &entrada1, &entrada2) != EOF)
    {
    	soma = 0;
    	cont = 0;
    	for (int i = bits - 1; i >= 0; i--) {
	        n1[i] = entrada1 % 2;
	        entrada1 = floor(entrada1 / 2);
	    }
    	for (int i = bits - 1; i >= 0; i--) {
	        n2[i] = entrada2 % 2;
	        entrada2 = floor(entrada2 / 2);
	    }
	    for (int i = bits - 1; i >= 0; i--){
	    	if (n1[i] == n2[i])
	    		n2[i] = 0;
	    	else n2[i] = 1;
	    	soma += pow(2, cont) * n2[i];
	    	cont++;
		}
		printf("%lld\n", soma);
		for (int i = bits - 1; i >= 0; i--){
	    	n1[i] = 0;
	    	n2[i] = 0;
		}
	}
	return 0;
}
