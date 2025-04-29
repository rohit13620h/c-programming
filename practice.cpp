#include<stdio.h>
int get ( int M[][n],int m);
int main()
{
int a,b,c,d;
printf("enter the order of matrix");
scanf("%d%d",&a,&b);
printf("enter the order of the other matrix");
scanf("%d%d",&c,&d);

int A[a][b],C[c][d];

if(b=c){
printf("for first matrix");
get(A,a,b);
printf("for second matrix");
get(C,c,d);




	
}
else{
	printf("the matrixes are not compatible to multiply");
	return 1;
}
	return 0;
}
int get ( int M[][n],int m,){
	for (int i=0;i<m;i++){
		(int j=0;j<n;j++){
			printf("enter the value in the co-ordinate %d row %d column",i,j);
			scanf("%d",&M[i][j])
		}
	}
return  0;
}
