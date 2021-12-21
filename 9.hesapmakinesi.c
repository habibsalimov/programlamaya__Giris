#include <stdio.h>
#include <stdlib.h>

int main(int argv,char* argc[])
{
    int islem;
    float a,b,s;
    if (argv==4){
        islem=atoi(argc[1]);
        a=atof(argc[2]);
        b=atof(argc[3]);
        switch(islem){
        case 1:
            s=a+b;
            break;
        case 2:
            s=a-b;
            break;
        case 3:
            s=a*b;
            break;
        case 4:
            s=a/b;
            break;
        default:
            s=-1;
        }
        printf("Sonuc: %f",s);
    }
    else
        printf("-1");
    return 0;
}
