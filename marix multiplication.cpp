#include<stdio.h>
int main(){
	int a,b,A,B;
	char c,C;
	
	printf("enter the order of the first matrix : ");
	scanf("%d%c%d",&a,&c,&b);
	
	printf("\nenter the order of the second matrix : ");
	scanf("%d%c%d",&A,&C,&B);
	
	if(b==A){
		printf("\nFor first matrix\n\n"); // for decor
	int F[a][b],S[A][B];	
	for(int i = 1; i<=a; i++){
		for(int j= 1; j<=b; j++){
			printf("enter the value of %c%d%d : ", 'A',i,j);
			scanf("%d",&F[i][j]);
		}
	}	
	printf("\nFor second matrix\n\n");
	for(int i = 1; i<=A; i++){
		for(int j= 1; j<=B; j++){
			printf("enter the value of %c%d%d : ", 'B',i,j);
				scanf("%d",&S[i][j]);
		}
	}
	
	int ans[a][B],sum=0;
	printf("\nthe product of the given matrix is : \n\n");
	for ( int i =1;i<=a;i++){
		printf("	|	");  // just for decor
		for(int k =1;k<=B;k++){
			sum=0;
		for (int j=1;j<=A;j++){
		int s = F[i][j]*S[j][k];
		sum = sum + s;
			}
			ans[i][k]=sum;
		printf("%d%c",ans[i][k],'	');	
		}
		printf("|");  //just for decor
	printf("\n");
	}
	}
	else {
	printf("\nthe matrixes are incompatible to multiply");}
	return 0;
}

