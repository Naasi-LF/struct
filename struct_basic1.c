#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//如何定义一个结构体

//常规操作
struct MM //结构体名为struct MM(C++可以省略struct)
{
    char name[20];
    int age;
    int num;
};
struct MM g_girl;//此时g_girl是全局变量

//非常规
struct //没有结构体名
{
    char roleName[20];
    int num;
}role;
//这种形式只会有一个结构体变量role
//此时role为全局变量

typedef struct student
{
    char name[2];
    int num;
}STU,*LPSTU,ARRAY[3];

/*
这些都是结构体类型的别名，不是变量
可以写成：
typedef struct student STU;
typedef struct student* LPSTU;
typedef struct student ARRAY[3];
*/

//等效
struct student stu1;
STU stu1;
//等效
struct student* PStu;
LPSTU PStu;
//等效--需要好好理解
struct student array[3];
ARRAY array;//struct student...[3] -> ARRAY

/*
如何使用结构体 
1. 通过变量来访问
  变量名.成员
2. 通过指针
  指针->成员
3. 通过typedef(重点）
*/
int main()
{
   //结构体变量--girl是局部变量
   struct MM girl;
   //结构体指针
   struct MM* p=&girl;
   system("pause");
   return 0;
}