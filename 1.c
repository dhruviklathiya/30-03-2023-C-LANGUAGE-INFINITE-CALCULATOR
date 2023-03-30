#include<stdio.h>
int main (){

    int add(int,int);
    int sub(int,int);
    int multi(int,int);
    int div(int,int);
    int a,num1,num2,result;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    while (1)
    {
    printf("1.Add\n");
    printf("2.Substract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.Exiting\n");
    scanf("%d",&a);
    if(a == 5)
    {
        printf("Exiting\n");
    }
    else{
            switch (a)
            {
            case 1:
            result = add(num1,num2);
            printf("%d\n",result);
            break;
            case 2:
            result = sub(num1,num2);
            printf("%d\n",result);
            break;
            case 3:
            result = multi(num1,num2);
            printf("%d\n",result);
            break;
            case 4:
            result = div(num1,num2);
            printf("%d\n",result);
            break; 
            default:
            printf("Invalid input!!!\n");
            break;
            }
        }
    }
    return 0;
    }
int add(int a , int b){
    return a+b;
}
int sub(int a , int b){
    return a-b;
}
int multi(int a , int b){
    return a*b;
}
int div(int a , int b){
    return a/b;
}