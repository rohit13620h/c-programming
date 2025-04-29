#include<stdio.h>

int main(){
	struct student{
		char name[30];
		int rollno;
		int fee;
	}std[10];
	
	for(int i = 0;i<5;i++){
	printf("enter the name of the student");
	printf("\n");
	gets(std[i].name);
	printf("enter the rollno of the student\n");
	scanf("%d",&std[i].rollno);
	printf("enter the fee of the student\n");
	scanf("%d",&std[i].fee);
	printf("%s%d%d",std[i].name,std[i].rollno,std[i].fee);
}
printf("THE INFO OF THE STUDENTS\n\n");
for(int i = 0;i<5;i++){
printf("Name : %s\nRoll no : %d\nFee : %d\n",std[i].name,std[i].rollno,std[i].fee);
}
return 0;
}
