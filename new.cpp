#include<stdio.h>

int main(){
	int a,b=1,c=1,d,ans,pc=0,cp;
	printf("enter the no of fibonachi num need");
	scanf("%d",&a);
	
	if(a==0){
		printf("0");
		printf("\nthe ans is not prime");
	}
	else if(a==1){
		printf("1");
		printf("\n the ans is not prime");
	}
	else{
	for(int i=0;i<a;i++){
		d=b+c;
		ans=b;
		b=c;
		c=d;
	}
	printf("the ans is %d",ans);
	
	
	for(int i=2;i*i<=ans;i++){
	if(ans%i==0){
		pc=pc+1;
	}		
	}
	if(pc==0){
		printf("\nthe ans is prime");
	}
	else{
		printf("\n the ans is not prime");
	}
}
	
	return 0;
}
