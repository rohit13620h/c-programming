#include<stdio.h>

#include<math.h>
int fibo(int a);
int checkprime(int a);
int main()
{
int num,fibonum=0,check;
printf("enter the position of the number you want to check");
scanf("%d", &num);

fibonum=fibo(num);
check=checkprime(fibonum);
if(check=0){
	printf("the %dth term is %d is prime",num,fibonum);
}
else{
	printf("the %dth term is %d is not a prime no",num,fibonum);
}
return 0;	
}

int fibo(int a){
	int b,c=0,d=1,e=1;
	for (int i=0;i<=a;i++){
	b=c;
	c=d;
	d=e;
	e=e+d;
	}
return b;	
}

int checkprime(int a){
	
	int b,c,d=0;
	b= sqrt(a);
	if(a==0||a==1){
		return 0;
	}
	for (int i=2; i<b ;i++){
	c=a%i;
	if(c=0){
		return 0;
	}
	}
	return 1;
}
