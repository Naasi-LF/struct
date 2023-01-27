#include <stdio.h>
#define MAX 100
struct book
{
    char title[MAX];
    char author[MAX];
    float value;
};
int main()
{
    /*struct book cpp
    =
    {
        "c_primer_plus","nassi",20
    };
    printf("%s\n%s\n%d",cpp.title,cpp.author,cpp.value);*/
    struct book cpp
    =
    {
        .value=20,
        .title="c_primer_plus",
        .author="nassi"
    };
    printf("%s\n%s\n%d",cpp.title,cpp.author,cpp.value);
    
    
}
