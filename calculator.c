#include<stdio.h>
int num1,num2,result;
int add()
{
    result=num1+num2;
    return result;
    
}
int sub()
{
    result=num1-num2;
    return result;
    
}
int mul()
{
    result=num1*num2;
    return result;
     
}
int main()
{
    int ch;
    printf("enter both number");
    scanf("%d%d",&num1,&num2);
    printf("1 for add 2 for sub 3 for mul");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("%d",add());
        break;
        case 2:printf("%d",sub());
        break;
        case 3:printf("%d",mul());
        break;
    }
    return 0;

}