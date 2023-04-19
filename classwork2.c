#include <stdio.h>
int main (){
    int a;
    int b;
    int c;
    int d;
    printf("plz enter number \n");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf(" a is maximum\n ");
    }
    else if (b>a && b>c && b>d)
    {
        printf("b is maximum\n");
    }
    else if (c>a && c>b && c>d)
    {
        printf("c is maximum\n");
    }
    else if (d>a && d>b && d>c)
    {
        printf("d is maximum\n");
    }
    if (a<b && a<c && a<d)
    {
        printf("a is minimum\n");
    }
    else if (b<a && b<c && c<d)
    {
        printf("b is minimum\n");
    }
    else if (c<a && c<b && c<d)
    {
        printf("c is minimum\n");
    }
    else if (d<a && d<b && d<c)
    {
        printf("d is minimum\n");
    }
    return 0;
    
    }