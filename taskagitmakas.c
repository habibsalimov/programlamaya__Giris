#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char bilgisayar(){                          //Bu fonksiyon rastgele sayilar ureterek bilgisayarin secimini dondurmektedir.
    char bilgisayar[]={'t','k','m'};
    srand(time(NULL));
    return bilgisayar[rand() % 3];
}
void sonskor(int k,int b){                  //Bu fonksiyon en son skorlari girdi alarak kimin kazandigini yazdirmaktadir.
    if(k>b)
        printf("\t\t\tSiz kazandiniz. Skor:%d - %d",k,b);
    else
        printf("\t\t\tBilgisayar kazandi. Skor:%d - %d",k,b);
}
int kiyasla(char k,char b){               //Bu fonksiyon ise kullanici ve bilgisayarin girdilerini alarak saglanan kosula gore -1, 1, 2 degerlerini dondurmekte.
    printf("\t\t\tBilgisayarin secimi:%c\n",b);
    if(k==b)
        return -1;
    if (k=='k' && b=='t')
        return 1;
    if (k=='t' && b=='m')
        return 1;
    if (k=='m' && b=='k')
        return 1;
    if (k=='t' && b=='k')
        return 2;
    if (k=='m' && b=='t')
        return 2;
    if (k=='k' && b=='m')
        return 2;
}
int main()
{
    printf("\t\t\t\tTas, Kagit, Makas oyununa Hos geldiniz!!!\n");
    int p_kl=0, p_b=0, girdi;
    char kullanici[]={'t','k','m'};
    while(1){
        printf("\t\t\tTas icin:1'i Kagit icin:2'yi Makas icin:3'u seciniz:");
        scanf("%d",&girdi);
        if (girdi<0 || girdi>3){
            printf("\t\t\tYanlis secim! Yeniden deneyiniz.\n\n");
            continue;
        }
        else{
            int sonuc=kiyasla(kullanici[girdi-1],bilgisayar());
            switch(sonuc){
            case -1:
                printf("\t\t\tBerabere!\n");
                break;
            case 1:
                p_kl++;
                break;
            case 2:
                p_b++;
                break;
            default:
                ;
                }
}
      printf("\t\t\tSkor:%d - %d\n\n",p_kl,p_b);
        if (p_kl==5||p_b==5)
            break;
    }
    sonskor(p_kl,p_b);
    return 0;
}
