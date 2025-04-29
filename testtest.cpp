#include<stdio.h>

int main(){

int num,count,demo,var,sum;
printf("enter the number from where you want to start");
scanf("%d",&num);
printf("enter the num of even no you want to add");
scanf("%d",&count);

if(num%2==0){
	num--;
}

demo=num/2+count;
var=num/2;
sum=demo*(demo+1)-var*(var+1);

printf("the sum of even no is %d",sum);

return 0;
}
