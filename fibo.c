
#include <stdio.h>
#include <stdlib.h>
long int fibo(int x){
        if(x==0)
            return 0;
        else if(x==1)
            return 1;
        else
            return fibo(x-1)+fibo(x-2);
    }
int main()
{
    long int n,s;
    printf("Fibonacci'sini istediğiniz sayiyi giriniz:");
    scanf("%ld",&n);
    s=fibo(n);
    printf("%ld",s);

    return 0;
}
