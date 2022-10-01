#include<string.h>
#include<stdio.h>
struct  student
{
  int rollno;
  char name[20];
  int m1,m2,m3,total;
  float per;
};
int main()
{
  int i;
  struct student st[5];
  printf("\n enterrecords of 2 student  ");
  for(i=0;i<2;i++)
  {
    printf("\n enter rollno : ");
    scanf("%d",&st[i].rollno);
    printf("\n enter name : ");
    scanf("%s",&st[i].name);
    printf("\n enter m1 : ");
    scanf("%d",&st[i].m1);
    printf("\n enter m2 : ");
    scanf("%d",&st[i].m2);
    printf("\n enter m3 : ");
    scanf("%d",&st[i].m3);
  }
  printf("\n student information list \n: ");
  for(i=0;i<2;i++)
  {
    st[i].total=st[i].m1 +st[i].m2 + st[i].m3;
    st[i].per=st[i].total / 3;
    printf("\n rollno : %d \n name : %s",st[i].rollno,st[i].name);
    printf("\n total : %d \n percentange : %f \n",st[i].total,st[i].per);
  }
  return 0;
}