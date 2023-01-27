#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//结构体的初始化

struct names
{
    char fist[MAX];
    char last[MAX];
};
struct gay
{
    struct names handle;
    char fav_food[MAX];
    char job[MAX];
    float income;
};

struct gay get_in()
{
    struct gay fellow3
    =
    {
        "yang ","xi cheng","shit","fuck",1234
    };
    return fellow3;
}
int main()
{//初始化赋值
    struct gay fellow
    =
    {
        "yang ","xi cheng","shit","fuck",1234
    };
    printf("name:%s%s\n%s\n%s\n%.2f\n",fellow.handle.fist,
    fellow.handle.last,fellow.fav_food,fellow.job,fellow.income);
 
 //相同类型赋值
    struct gay fellow2;
    fellow2=fellow;//相同类型的结构可以直接赋值，即使是数组
    printf("name:%s%s\n%s\n%s\n%.2f\n",fellow2.handle.fist,
    fellow2.handle.last,fellow2.fav_food,fellow2.job,fellow2.income);
    struct gay fellow3;
 
 //返回值赋值
    fellow3=get_in();//函数返回值可以返回结构体
    printf("name:%s%s\n%s\n%s\n%.2f\n",fellow2.handle.fist,
    fellow2.handle.last,fellow2.fav_food,fellow2.job,fellow2.income);
    system("pause");
}