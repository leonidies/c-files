#include <stdio.h>
   int main(){
    int checknumber(int b);
    int a;
    int i=2;
     scanf("%d",&a);
    while (i<a)
    {
        if (a%i==0)
        {
            return 0;
        }
        break;
    }
}
int checknumber(int b){
    if (b%2==0)
    {
        return 1;
    }
     else if (b%2!=0)
     {
        return 2;
     }
}