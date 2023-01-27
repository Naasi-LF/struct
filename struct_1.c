#include <stdio.h>
#define MAX 100
//这种形式可以省略结构名
struct 
    {
        char title[MAX];
        char author[MAX];
        float value;
    }cpp;//struct <unnamed> cpp
//这种形式可以省略结构名
int main()
{
    scanf("%f",&cpp.value);
    printf("%f",cpp.value);
}