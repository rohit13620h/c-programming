#include<stdio.h>
#include<string.h>

int slength(char str[100]){
	int num;

	return strlen(str);
}

int main(){
char strr[100];
printf("enter a string");
scanf("%s",&strr);
int num;
num=slength(strr);
printf("%d",num);
return 0;
}
