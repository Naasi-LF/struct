#include<stdio.h>
#include<stdlib.h>
/*
   结构体数组的基本知识
*/

struct student
{
    char name[20];
    int age;
};

void print(struct student array[],int arrayNum)
{
    for (size_t i = 0; i <arrayNum; i++)
    {//不需要取地址
        printf("%s\t%d\n",array[i].name,array[i].age);
    }
}

int main()
{
    // 用for循环初始化
    int arrayInt[3];
    for (size_t i = 0; i < 3; i++)
    {
        arrayInt[i]=12;
    }
    
    struct student array[3];
    for (size_t i = 0; i < 3; i++)
    {//需要取地址
        scanf("%s%d",array[i].name,&array[i].age);
    }

    printf("name\tage\n");
    for (size_t i = 0; i <3; i++)
    {//不需要取地址
        printf("%s\t%d\n",array[i].name,array[i].age);
    }

    print(array,3);

    //指针如何变成数组
    struct student* p=
      (struct student *)malloc(sizeof(struct student)*3);
    for (size_t i = 0; i < 3; i++)
    {//需要取地址
        scanf("%s%d",(p+i)->name,&(p+i)->age);
    }
    print(p,3);
    
    free(p);

    system("pause");
    return 0;
}