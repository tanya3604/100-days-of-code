// Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int mat[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    int symmetric = 1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
    if(symmetric)
        printf("True");
    else
        printf("False");
    return 0;
}