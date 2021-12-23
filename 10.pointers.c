#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2;
    int b=38902045;
    int c=8;
    printf("%p : %d\n",&a,a);
    printf("%p : %d\n",&b,b);
    printf("%p : %d\n",&c,c);

    printf("\n\n\n");

    char *bptr=&b;
    /*printf("%p : %d\n",bptr,b);
     printf("%p : %d\n",bptr-1,*(bptr-1));*/
    for (int i=0;i<4;i++)
        printf("%p : %d\n",bptr+i,*(bptr+i));
    return 0;
}
