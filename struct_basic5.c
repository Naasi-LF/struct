#include<stdio.h>
#include<stdlib.h>
//结构体指针的基本知识

struct Info
{
    int age;
    int num;
};
//1.充当函数参数
void print(struct Info* p)
{
    printf("%d\t%d\n",p->age,p->num);
}

//2.充当函数返回值
struct Info* creatInfo(int age,int num)
{
    struct Info* newInfo=(struct Info*)malloc(sizeof(struct Info));
    //申请一段内存
    newInfo->age=age;
    newInfo->num=num;
    return newInfo;
}
int main()
{
    //1.结构体指针可以滞空
    struct Info* p;
    //2.指针->变量
    //2.1 用变量地址
    struct Info student = {1001,1002};
    p=&student;//p指向student这个结构体变量

    //2.2 动态内存申请--重点
    p=(struct Info*)malloc(sizeof(struct Info));
       //指针的类型           //分配的内存大小

    //考虑是否申请成功（写了更规范）
    if (p==NULL)
    {
        printf("error");
        return 0;
    }
    p->age=18;
    p->num=2003;
    printf("%d\t%d\n",p->age,p->num);
    printf("%d\t%d\n",student.age,student.num);
    //student的值没有发生改变，因为p又重新分配了一段内存
    print(p);

    free(p);//释放指针(需要写出来)
    
    p=creatInfo(1001,1003);
    print(p);
    free(p);

    system("pause");
}