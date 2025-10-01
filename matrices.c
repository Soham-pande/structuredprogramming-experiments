// #for 3*3 matrix 
#include <stdio.h>
int main() {
    int a[3][3], b[3][3], c[3][3], i, j, k;

    printf("Enter 1st 3x3 matrix:\n");
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);

    printf("Enter 2nd 3x3 matrix:\n");
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&b[i][j]);

    printf("\nAddition:\n");
    for(i=0;i<3;i++){ for(j=0;j<3;j++) printf("%d ",a[i][j]+b[i][j]); printf("\n"); }

    printf("\nSubtraction:\n");
    for(i=0;i<3;i++){ for(j=0;j<3;j++) printf("%d ",a[i][j]-b[i][j]); printf("\n"); }

    printf("\nMultiplication:\n");
    for(i=0;i<3;i++){ 
        for(j=0;j<3;j++){ 
            c[i][j]=0; 
            for(k=0;k<3;k++) c[i][j]+=a[i][k]*b[k][j]; 
            printf("%d ",c[i][j]); 
        } 
        printf("\n"); 
    }

    printf("\nTranspose of 1st matrix:\n");
    for(i=0;i<3;i++){ for(j=0;j<3;j++) printf("%d ",a[j][i]); printf("\n"); }

    return 0;
}
