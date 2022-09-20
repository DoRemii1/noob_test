#include<stdio.h>

void function(int *sum)
{
    for(int i=0;i<11;i++) *sum += i;
}
int main()
{
    printf("hello world\n");
    int sum=0;
    function(&sum);
    printf("sum= %d",sum);
    return 0;
}
