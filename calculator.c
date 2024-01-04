#include<stdio.h>

int main()
{
    float result;
    int x,y,calculation;
    char op;
    printf("enter the operator(+,-,*,/): ");
    scanf("%c",&op);
   
    switch (op){
    case '+': printf("enter 2 operands: ");
              scanf("%d%d",&x,&y);
              calculation=x+y;
              printf("%d",x); printf("+%d",y); printf("= "); printf("%d",calculation); 
              break;

              case '-': printf("enter 2 operands: ");
              scanf("%d%d",&x,&y);
              calculation=x-y;
              printf("%d",x); printf("-%d",y); printf("= "); printf("%d",calculation); 
              break;

              case '*': printf("enter 2 operands: ");
              scanf("%d%d",&x,&y);
              calculation=x*y;
              printf("%d",x); printf("*%d",y); printf("= "); printf("%d",calculation); 
              break;

              case '/': printf("enter 2 operands: ");
              scanf("%d%d",&x,&y);
              result=(float)x/y;
              printf("%d",x); printf("/%d",y); printf("= "); printf("%f",result); 
              break;
              default: printf("out of range");
    }
    return 0;
}