//The following program makes the letter after the fullstop capital,in a text file.

#include<stdio.h>
#include<string.h>
main()
{
	int i=0,f,a,b,label=0;
	char buff[200];
	FILE *fp;
  //Read the file, manipulate data and store it in buffer.
  fp = fopen("/tmp/tests.txt","r+");

	for(;i<200;i++)
        {   buff[i]=fgetc(fp);
       
           if((buff[i-1]=='.'|| buff[i-1]==10) && (buff[i]>96 && buff[i]<123))
              buff[i]=buff[i]-32;
		 
           if(feof(fp))
              break;
         }


     b=strlen(buff);
//     printf("%d\n",b);         	//check
   char q[b-1];            
//     printf("1 : %s\n", buff );	//check
   fclose(fp);

//Open file again and write the manipulated data stored in buffer.
fp = fopen( "/tmp/tests.txt","w+");
  for(a=0;a<=(b-2);a++)
    { q[a]=buff[a];
    }
     fprintf(fp,"%s",q);
fclose(fp);
}
