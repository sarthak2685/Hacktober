#include<stdio.h>
#include<math.h>
int main()
//PRINTING 0-n where n is defined by the user using different loops
{
   //(1)FOR loop basic
   /*
    int n;
    printf("enter the value of n = \n");
    scanf("%d", &n);
    for(int i=0;i<=n;i++ ){
        printf("%d\n", i);
    } */

    //(2)WHILE loop basic
    /*
    int i=0,n;
    printf("enter the value of n = \n");
    scanf("%d", &n);
    while(i<=n){
        printf("%d\n", i);
        i++;
    } */

    //(3)DO WHILE loop basic
    int i=0,n;
    printf("enter the value of n = \n");
    scanf("%d", &n);

    do {
        printf("%d\n", i);
        i++;
    } while(i<=n);
    return 0;
}