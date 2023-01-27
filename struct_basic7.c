#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//-------------Nassi老婆管理系统--------------

//定义一个结构体用于存放老婆信息
struct MM
{
    char name[20];
    int age;
    char addr[20];
    float score;
};

struct MM array[100];//定义一个全局结构体数组


int count =0;//定义一个全局计数器

//定义一个菜单界面
void menu()
{
    printf("----------[公司员工管理系统]---------\n");
    printf("\t0.退出系统\n");
    printf("\t1.录入员工信息\n");
    printf("\t2.浏览员工信息\n");
    printf("\t3.查询员工信息\n");
    printf("\t4.修改员工信息\n");
    printf("\t5.删除员工信息\n");
    printf("-------------------------------------\n");
    printf("请输入(0~5):");
}


//负责输入
void input()
{
    printf("请输入老婆信息(name age addr score):");
    scanf("%s%d%s%f",array[count].name,&array[count].age,
                    array[count].addr,&array[count].score);
    count++;//计数的好处
}


//负责打印
void print(struct MM array[],int count)
{
    printf("name\tage\taddr\tscore\n");
    for (size_t i = 0; i < count; i++)
    {
        printf("%s\t%d\t%s\t%.1f\n",array[i].name,array[i].age,
                    array[i].addr,array[i].score);
    }
    
}


//负责查询
int searchResult(char* name)
{
    for (size_t i = 0; i < count; i++)
    {
        if (strcmp(array[i].name,name)==0)
        {
            return i;
        }
        
    }
    return -1;
}

//负责删除
void deleteByName(char* name)
{
    int result=searchResult(name);
    if (result==-1)
        {
            printf("未找到相关信息!无法删除!\n");
            return;
        }
    else
    {
        for (size_t i = result; i < count; i++)
        {
            array[i]=array[i+1];
        }
        count--;
        printf("删除成功!\n");
    }
}

//选择函数
void keyDown()
{
    int choice=0,i=0;
    scanf("%d",&choice);
    char name[20];

    switch (choice)
    {
    case 0://退出系统
        printf("正常退出!\n");
        system("pause");
        exit(0);//退出函数
        break;

    case 1://录入老婆信息
        input();
        break;

    case 2://浏览老婆信息
        print(array,count);
        break;

    case 3://查询老婆信息
        printf("请输入查询的老婆的name:");
        scanf("%s",name);
        if (searchResult(name)==-1)
        {
            printf("未找到相关信息!\n");
        }
        else 
        {
            i=searchResult(name);
            printf("%s\t%d\t%s\t%.1f\n",array[i].name,array[i].age,
                    array[i].addr,array[i].score);
        }
        break;

    case 4://修改老婆信息
        printf("请输入想要修改的老婆的name:");
        scanf("%s",name);
        if (searchResult(name)==-1)
        {
            printf("未找到相关信息!无法修改\n");
        }
        else
        {
            printf("请输入新的老婆信息:(name age addr score):");
            i=searchResult(name);
            scanf("%s%d%s%f",array[i].name,&array[i].age,
                    array[i].addr,&array[i].score);
            printf("修改成功!");
        }
        break;

    case 5://删除老婆信息--数组删除是一种伪删除
        printf("请输入要删除的老婆的name:");
        scanf("%s",name);
        deleteByName(name);
        break;

    default:printf("请输入正确的数字:");
        break;
    }
}

int main()
{
    while (1)//死循环
    {
        menu();//显示菜单
        keyDown();//输入一个选项
        system("pause");//防闪退
        system("cls");//清屏->进行下一个循环
    }
    
    system("pause");
    return 0;
}