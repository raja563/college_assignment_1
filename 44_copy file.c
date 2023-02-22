//44	C program to copy contents of one file to another file.

#include<stdio.h>
#include<string.h>

int main()
{
   FILE *fp1,*fp2;
   char ch;

   fp1=fopen("source.txt","w");
   if(fp1==NULL)
   {
       printf("not created.");
       return ;
   }
   else
    printf("file is created.\n");

   printf("enter your  data .\n");
   while((ch=getchar())!=EOF)
   {
       putc(ch,fp1);
   }
   fclose(fp1);

   fp2=fopen("destination.txt","w");

    fp1=fopen("source.txt","r");

   while((ch=getc(fp1))!=EOF)
    {
        putc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);

    //display the content of destination file.
    printf("destination file content is :");
    fp2=fopen("destination.txt","r");


    while((ch=getc(fp2))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp2);

    printf("\n\nyour program is successfully done.\n");


   return 0;

}
