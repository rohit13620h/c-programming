#include<stdio.h>
int num();
int main(){
	//  i dont know why it is not working
	num();
	printf("umm");

		int num () {
		
			int a,b;
		printf("enter the first number");
		scanf("%d",&a);
		printf("enter the second number");
		scanf("%d",&b);
		int s = a +b;
		printf("%d",s);
		return 0 ;
	}
	
	printf("this is working");
	return 0;
}

