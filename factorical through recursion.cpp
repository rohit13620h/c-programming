#include<stdio.h>

int rec(int num){
	int fact=1;
	if(num!=0){
	fact =num * rec(num-1);
}
return fact	;
}

int main(){
	int num;
	printf("enter a number");
	scanf("%d",&num);
	
	int ans=rec(num);
	printf("%d",ans);
	return 0;
}
