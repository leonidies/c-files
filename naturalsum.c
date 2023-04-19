#include <stdio.h>
int main (){
    int a;
    printf("first twenty natural numbers are\n");
    int i=1;
    int sum =0;
         while (i<=20)
         {
            sum=sum+i;
            printf("%d",i);
            i++;
         }
         printf("%d\n",sum);
     return 0;
}