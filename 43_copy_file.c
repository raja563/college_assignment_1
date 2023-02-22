#include <stdio.h>

          int main() {
         FILE *source_file, *destination_file;
         char c;

         source_file = fopen("source_file.txt", "r");
         destination_file = fopen("destination_file.txt", "w");

         while ((c = fgetc(source_file)) != EOF) {
         fputc(c, destination_file);
         }

       fclose(source_file);
       fclose(destination_file);

       return 0;
      }
