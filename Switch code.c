#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    int ch;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Enter Choice");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1 : c=a+b ;printf("%d",c);
        break;
        case 2 : c=a-b ;printf("%d",c);
        break;
        case 3 : c=a*b ;printf("%d",c);
        break;
        case 4 : c=a/b ;printf("%d",c);
        break;
        default:printf("invalid choice");

    }
    getch();
}
