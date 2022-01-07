#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* ortaklaribul(int *x,int *y,int *z,int n){
    int i,j,k,sayac=0;
    for(i=0;i<n;i++){

        if (x[i]==x[i]-1)
            continue;

        for(j=0;j<n;j++){
            if(x[i]==y[j])
                break;
        }
    if(j!=n)
        z[sayac++]=x[i];
    }
    return z;
}
int main()
{
    int a[50],b[50],c[51];
    int n=50;
    int *cp;
    srand(time(0));
    printf("Ilk dizi:");
    for(int i=0;i<n;i++){
        a[i]=(rand()%100)+1;
        printf("%d ",a[i]);
    }
     printf("\n\nIkinci dizi:");
     for(int i=0;i<n;i++){
        b[i]=(rand()%100)+1;
        printf("%d ",b[i]);
    }
    for(int i=0;i<n+1;i++){
        c[i]=-1;
    }
    cp=ortaklaribul(&a,&b,&c,n);

    if (cp[0]==-1)
        printf("\n\nOrtak eleman bulunamadi");
    else{
        printf("\n\nOrtak elemanlar:");
        for(int i=0;i<n;i++){
            if (cp[i]!=-1)
                printf("%d ",cp[i]);
        }
    }
    return 0;
}
