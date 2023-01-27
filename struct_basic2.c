#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//结构体变量的定义

struct //定义的时候初始化
{
    char roleName[20];
    int num;
}role={"Baby",1001};

struct MM 
{
    char name[20];
    int age;
};

//当函数做返回值，可以返回多个数

//写一个返回行和列的函数：
struct rolePos
{
    int row;
    int cols;
};
struct rolePos pos={0,0};

int map[4][4]=
{
    1,1,1,1,
    1,1,5,1,
    1,1,1,1,
    1,1,1,1
};

struct rolePos searchRole()
{
    int count=4;
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            if(map[i][j]==5)
            {
                pos.row=i+1;
                pos.cols=j+1;
            }
        }
        
    }
    return pos;
}


int main()
{
   //定义的时候初始化
   struct MM mm={"美女",18};

   //先定义后初始化：字符串只能用strcpy
   struct MM baby;
   strcpy(baby.name,"Baby");
   //baby.name="Baby"是不可以的
   //用户输入的方式初始化（scanf）--这里不做展开

   //用函数作为返回值
   printf("行:%d\n列:%d\n",searchRole().row,searchRole().cols);
   
   //因为是全局变量，全局可见
   printf("行:%d\n列:%d",pos.row,pos.cols);

//   system("pause");
   return 0;
}