#include <stdio.h>

int main()
{
struct student{
	char name[20];
	int rollno;
	int marks;
}std[5];
for (int i = 0;i<5;i++){
	printf("enter the name of the student\n");
	scanf("%s",&std[i].name);

}
for (int j=0;j<5;j++){
	printf("%s",std[j].name);
}
return 0;
}
