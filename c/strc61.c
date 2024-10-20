#include<stdio.h>
#include<string.h>
int main()
{
struct cricketer 
{
char name[50];
int age;
};
struct cricketer *ptr,b[5];
ptr=b;
int i;
for(i=0;i<5;i++)
{
scanf("%s %d",ptr[i].name,&(ptr[i].age));
}
for(i=0;i<5;i++)
{
printf("%s %d",ptr[i].name,(ptr[i].age));

}
return 0;
}