#include <iostream>
#include <stdio.h>
#include <string.h>
#define TFL 100
#define TFC 50

using namespace std;

int main(){
    
int n, i, j, max_len, len, casos = 0;
char linhas[TFL][TFC + 1];
char entrada[TFC * 2 + 1];

    while (scanf("%d", &n) && n != 0) {
        if (casos > 0) {
            printf("\n");
        }
        casos++;
        getchar();
        max_len = 0;
        for (i = 0; i < n; i++) {
            fgets(entrada, sizeof(entrada), stdin);
            len = 0;
            int palavra = 0;
            for (j = 0; entrada[j] != '\0'; j++) {
                if (entrada[j] >= 'A' && entrada[j] <= 'Z') {
                    if (palavra && len > 0) {
                        linhas[i][len++] = ' ';
                    }
                    while (entrada[j] >= 'A' && entrada[j] <= 'Z') {
                        linhas[i][len++] = entrada[j++];
                    }
                    palavra = 1;
                    j--;
                }
            }
            linhas[i][len] = '\0';
            if (len > max_len) {
                max_len = len;
            }
        }
        for (i = 0; i < n; i++) {
            len = strlen(linhas[i]);
            for (j = 0; j < max_len - len; j++) {
                printf(" ");
            }
            printf("%s\n", linhas[i]);
        }
    }
return 0;
}
