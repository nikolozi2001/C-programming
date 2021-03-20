#include <stdio.h>
#define FILENAME "file.txt"
int main()
{
	FILE *file;
	char ch;
	int linesCount=0;
	file=fopen(FILENAME,"r");
	if(file==NULL)
	{
		printf("File \"%s\" does not exist!!!\n",FILENAME);
		return -1;
	}
	while((ch=fgetc(file))!=EOF)
	{
		if(ch=='\n')
			linesCount++;		
	}	
	fclose(file);
	printf("Total number of lines are: %d\n",linesCount);
	return 0;	
}