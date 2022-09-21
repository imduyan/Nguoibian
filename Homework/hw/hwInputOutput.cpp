#include <stdio.h>
#include <stdlib.h>
void text();
void text2();
int main(){
    //text();
    text2();
}
void text(){
    FILE *fp;
    char ch, str[10];
    int i, position;
    fp=fopen("input.txt", "w");
    printf("enter string:"); gets(str); fputs(str, fp);
    fclose(fp);
    fp=fopen("input.txt", "r");
    if (fp==NULL)
    {
       printf("File doesn't exist..");
    }
    fseek(fp, 0, 2);
    position=ftell(fp);
    i=0;
    while (i<position)
    {
        i++;
        fseek(fp, -i, 2);
        ch=fgetc(fp);
        printf("%c", ch);
    }
}
void text2(){

    FILE *fptr1, *fptr2;
    char filename[100], c, str[100];
    
    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);
  
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);
  
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        if (c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')
        {
            fputc(c, fptr2);
        }
        c = fgetc(fptr1);
    }
  
    printf("\nContents copied to %s", filename);
  
    fclose(fptr1);
    fclose(fptr2);

    if(fptr2==NULL)
        printf("Error Occurred while Opening the File!");
    else
    {
        fgets(str, 99, fptr2);
        printf("\n%s", str);
    }
    
}