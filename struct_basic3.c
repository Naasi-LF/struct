#include <stdio.h>
#include <stdlib.h>
//�ṹ�庯���Ļ���֪ʶ

#define MAX 100
struct book
{
    char title[MAX];
    char author[MAX];
    float value;
};
//����Ա
float increase1(float x)
{
    //return 1.25*x;
    (x)=1.25*(x);
}
//��ָ��
float increase2(struct book* pr)
{
    (pr->value)=1.25*(pr->value);
}
//���ṹ
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

    //increase1(cpp.value);//δ���޸�����ֵ
    //increase2(&cpp);//�ṹ�����ǵ�ַҪ��&�������޸�ֵ
    increase3(cpp);//δ���޸�����ֵ

    printf("%s\n%s\n%f",cpp.title,cpp.author,cpp.value);
    system("pause");
    return 0;

}
    