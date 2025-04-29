#include<stdio.h>
 struct student
 {char name[40];
  char address[40];
  int d,m,y;
  float marks;
 };
int main()
{struct student s[100];
int n,i;
 printf("enter no. of students :");
 scanf("%d",&n);
 printf("enter student's info:\n\n");
 for(i=0;i<n;i++)
{printf("ENTER STUDENT %d INFO: \n",i+1);
 printf("enter student's name:");
 scanf("%s",&s[i].name);
 printf("enter address:");
 scanf("%s",s[i].address);
 printf("enter date of birth:");
 scanf("%d%d%d",&s[i].d,&s[i].m,&s[i].y);
 printf("enter marks:");
 scanf("%f",&s[i].marks);
}
 printf("the students info with above 75% score :\n\n");
 for(i=0;i<n;i++){
 if(s[i].marks>75)
  {
  printf("name:%s\n",s[i].name);
  printf("address:%s\n",s[i].address);
  printf("date of birth:%d-%d-%d\n",s[i].d,s[i].m,s[i].y);
  printf("marks:%.2f%\n",s[i].marks);}}
  return 0;}

