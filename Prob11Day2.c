#include<stdio.h>
void main(){
    int i,j,k,n,l;
    printf("Enter N:");
    scanf("%d",&n);
     for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=(2*(n-i));k>=1;k--){
            printf(" ");
        }
        for(l=i;l>=1;l--){
            printf("%d",l);
        }
        printf("\n");

    }
}