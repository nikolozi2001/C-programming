#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int index = 0, i=-1;
   int numbers [50];
   
   FILE *fptr;
   
   char ch, buffer[5];
   
   fptr = fopen("file.txt","r");
   
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
while(1)
	{
		
		ch = fgetc(fptr);
		if(ch == EOF && i==-1){
			break;
		}
		else if(ch <'0' || ch >'9'){
			numbers[index] = atoi(buffer);
			index++;
			int k=0;
			for(k; k<5; k++)
				buffer[k] = NULL;
			i = -1;
		} else{
			i++;
			buffer[i] = ch;
			
		}
		
	
	}
	int b;
	for(b=0; b<index; b++)
		printf("%d ",numbers[b]);
   fclose(fptr);
   return 0;
}