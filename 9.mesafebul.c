#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>

void mesafeler(int n,...)
   {
       va_list liste;
       va_start (liste,n);
       int noktalar [100][2];
       
       for (int i=0;i<n;i++)
       {
           noktalar[i][0]=va_arg(liste,int);   //x 
           noktalar[i][1]=va_arg(liste,int);   //y
       }
       
       float mes;
       
       for (int i=0;i<n-1;i++)
       {
           for (int j=i+1;j<n;j++)
           {
               mes=sqrt(pow((noktalar[i][0]-noktalar[j][0]),2.0)+ pow((noktalar[i][1]-noktalar[j][1]),2.0));
               printf("%d noktasi ile %d noktasi arasindaki mesafe:%f",i+1,j+1,mes);
               
           }
       }
   }
int main()
{
    mesafeler(2,5,8,-4,9);
   

    return 0;
}
