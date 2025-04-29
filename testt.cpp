#include<stdio.h>

int main(){
	int array[10];
	printf("enter any ten no");
	for (int i=0;i<10;i++){
		scanf("%d",&array[i]);
	}
	int great=0,sgreat=0;
	for(int i=0;i<10;i++){
	if(sgreat<array[i]){
		sgreat=array[i];
		if(sgreat>great){
			int demo=great;
			great=sgreat;
			sgreat=demo;
		}
	}	
	}
	printf("\nsecond greatest : %d\n",sgreat);
	return 0;
}
