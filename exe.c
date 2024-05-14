#include <stdio.h>

int main()
{
int num;

printf("Enter a number : ");
scanf("%d",&num);

if (num > 0){
    printf("1");}
else if(num < 0){
    printf("-1");
}else{
    printf("0");
}

}
