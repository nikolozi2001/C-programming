#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

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
        } 
    else{
            i++;
            buffer[i] = ch;
            
        }
        
    
    }
    int b, mtlianobashi = -3;
    for(b=0; b<index; b++){
        mtlianobashi += numbers[b];
    }
    printf("sa = %f\n",(float)mtlianobashi+index);
    fclose(fptr);

    int p = mtlianobashi+index;

    
    int a = 5;
    int d = 12;
    int c = 13;  //ანუ აქ კონკრეტული რიცხვები ავიღე რა. რო გამეტესტა. 
                //მარა პერიმეტრის გამოთვლის მეტს ვერ გავცდი


    // int s = sqrt((p(p-a)(p-d)(p-c)));

     int s;
    s = sqrt(p*((p-a)*(p-d)*(p-c)));

    printf("sa = %f\n",(float)mtlianobashi+index);
    printf("Partobi = %d",s);

    // printf("sa = %f\n",(float)mtlianobashi+index);

   sleep(5);
   return 0;
}