#include<stdio.h>
void main(){
    int i,j,k,n,m;
    printf("Enter N:");
    scanf("%d",&n);
     for(i=n;i>=2;i--){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");

    }
    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    }