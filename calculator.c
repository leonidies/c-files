#include <stdio.h>
int main(){
    int a;
    int b;
     char ch;
     float result;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf( " %ch",&ch);
    switch(ch){
    case '+':
   result=a+b;
    break;
    case '-':
    result=a-b;
    break;
    case '*':
   result=a*b;
    break;
    case '/':
    result=a/b;
    break;
    case '%':
    result=a%b;
    break;
    default:
    printf("invalid input");
    break;
    }
    printf("result: %d %ch %d= %f\n",a,ch,b,result);
    return 0;
}