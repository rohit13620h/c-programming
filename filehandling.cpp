#include <stdio.h>
int main()
{
	FILE *file;

	
	file=fopen("readme.txt","r");
	char data;
	fgets(data,file);
	printf("%s",data);
	fclose(file);
	
	
	
	return 0;
}
