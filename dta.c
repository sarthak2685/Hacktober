#include<stdio.h>
void binary(int d)
{
    int arr[1000],i=0;
    while(d>0)
    {
        int a=d%2;
        d=d/2;
        arr[i]=a;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        printf("%d",arr[j]);
    printf("\n");
}
void octal(int d)
{
    int arr[1000],i=0;
    while(d>0)
    {
        int a=d%8;
        d=d/8;
        arr[i]=a;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        printf("%d",arr[j]);
    printf("\n");
}
void hexa(int d)
{
    int arr[1000],i=0;
    while(d>0)
    {
        int a=d%16;
        d=d/16;
        arr[i]=a;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        if(arr[j]==10)
        printf("A");
        else if(arr[j]==11)
        printf("B");
        else if(arr[j]==12)
        printf("C");
        else if(arr[j]==13)
        printf("D");
        else if(arr[j]==14)
        printf("E");
        else if(arr[j]==15)
        printf("F");
        else
        printf("%d",arr[j]);
    }
    printf("\n");
}
void main()
{
    int d;
    printf("Input a number : ");
    scanf("%d",&d);
    printf("Binary number is : ");
    binary(d);
    printf("Octal number is : ");
    octal(d);
    printf("Hexadecimal number is : ");
    hexa(d);
}