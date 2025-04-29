#include<stdio.h>

int main(){
	
	
	int a,b;
	printf("enter the order of the matrix");
	scanf("%d%d",&a,&b);
	int matrix[a][b];
	for (int i=0;i<a;i++){
		for (int j=0;j<b;j++){
			printf("enter the term in %d row and %d column",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	
	int big[a];
	for (int i=0;i<a;i++){
		big[i]=0;
		for (int j=0;j<b;j++){
	
		if(big[i]<matrix[i][j]){
		big[i]=matrix [i][j];
		}
	
	}
	}
	printf("the greatest in rows are\n");
	for (int i=0;i<a;i++){
	printf("%d\n",big[i]);
}
	return 0;
}
