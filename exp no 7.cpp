#include<stdio.h>
int main(){
	int a,b,A,B,First[a][b],Second[A][B],Ans[a][B],sum=0;
	
	printf("enter the order of the first matrix : ");
	scanf("%d%d",&a,&b);
	
	printf("\nenter the order of the second matrix : ");
	scanf("%d%d",&A,&B);
	
	if(b!=A){
		printf("\nthe matrixes are incompatible to multiply");
	}
	else {
		printf("\nFor first matrix\n\n"); // for decor	
	for(int i = 1; i<=a; i++){
		for(int j= 1; j<=b; j++){
			printf("enter the value of %c%d%d : ", 'A',i,j);
			scanf("%d",&First[i][j]);
			}
			}	
	printf("\nFor second matrix\n\n");
	for(int i = 1; i<=A; i++){
		for(int j= 1; j<=B; j++){
			printf("enter the value of %c%d%d : ", 'B',i,j);
				scanf("%d",&Second[i][j]);
		}
		}
	printf("\nthe product of the given matrix is : \n\n");
	for ( int i =1;i<=a;i++){
		for(int k =1;k<=B;k++){
			sum=0;
		for (int j=1;j<=A;j++){
		int s = First[i][j]*Second[j][k];
		sum = sum + s;
			}
			Ans[i][k]=sum;
		printf("%d%c",Ans[i][k],'	');	
		}
	printf("\n");
	}
	}
	return 0;
}

