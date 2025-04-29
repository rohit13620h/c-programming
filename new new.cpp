#include<stdio.h>
#include<stdlib.h>

int main(){
	int *i;
	i=(int *)malloc(10*sizeof(int));
	for(int n=0;n<10;n++){
		scanf("%d",&i[n]);
	}
	printf("%d",i);
	return 0;
}
