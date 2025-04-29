#include<stdio.h>
#include<string.h>

int main(){
	char str[100],strr[100];
	printf("enter a string  ");
	scanf("%s",str);
	int length=strlen(str);
	
	for (int j=0;j<length;j++){
	strr[j]=str[length-1-j];
	}
	
	if(strcmp(str,strr)==0){
		printf("it is palindrome");
	}
	else{
		printf("it is not palindrome");
	}
	printf("%s",strr);
	
	return 0;
	
}
