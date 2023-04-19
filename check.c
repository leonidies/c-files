#include <stdio.h>
int checknumber(int a){
if (a==0)
{
    return 0;
}
    else if (a>0)
    {
        return 1;
    }
    else if (a<0)
    {
        return -1;
    }   
}
int main(){
    int x;
    scanf("%d",&x);
    int c=checknumber(x);
    printf("%d",c);
return 0;
}