#include<stdio.h>

void function(int sum)
{
    for(int i=0;i<11;i++){
        sum += i;
    }
    return sum;
}
int main()
{
    printf("hello world");
    int sum=0;
    sum = function(sum);
    return 0;
}
