#include <stdio.h>
#include <stdlib.h>
//结构体函数的基本知识

#define MAX 100
struct book
{
    char title[MAX];
    char author[MAX];
    float value;
};
//传成员
float increase1(float x)
{
    //return 1.25*x;
    (x)=1.25*(x);
}
//传指针
float increase2(struct book* pr)
{
    (pr->value)=1.25*(pr->value);
}
//传结构
float increase3(struct book cpp)
{
    //return 1.25*(cpp.value);
    (cpp.value)=1.25*(cpp.value);
}
int main()
{
    struct book cpp
    =
    {
        .value=20,
        .title="c_primer_plus",
        .author="nassi"
     
   // "c_primer_plus","nassi",20
    };

    printf("%s\n%s\n%f\n\n",cpp.title,cpp.author,cpp.value);

    //increase1(cpp.value);//未能修改最终值
    //increase2(&cpp);//结构名不是地址要用&，可以修改值
    increase3(cpp);//未能修改最终值

    printf("%s\n%s\n%f",cpp.title,cpp.author,cpp.value);
    system("pause");
    return 0;

}
    