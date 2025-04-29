#include<stdio.h>
int array[10];
int check(int a);
void rec();
int main()
	

	{
	printf("enter any ten numbers");
	for (int i = 0;i<10;i++){
		scanf("%d",&array[i]);
		printf("	");
	}
	rec();
	
	for(int i=0;i<10;i++){
		printf("%d	",array[i]);
	}
	
	return 0;
}

	void rec(){
		for (int i=0;i<10;i++){
				array[i]=check(i);
		}	
	}
	
	int check(int a){
		int max=0;
		for(int i=9-a;i>=0;i--){
			if(max>=array[i]){
				max=array[i];
				array[i]=array[9-a];
				array[9-a]=max;
				
			}
		}
	return max;	
	}
	
