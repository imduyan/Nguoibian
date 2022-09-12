#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    FILE *fp; //khai bao con tro fp
    
    /* 
            //***cho nay la tao file ten "myfile.txt" va  viet 1 ki tu vao***
    char ch;
    fp = fopen("myfile.txt", "w");
    printf("Enter a character:");
    scanf("%c", &ch);
    fputc(ch, fp);
    */
    



    /* 
           //***cho nay la doc 1 ki tu tu file "myfile.txt" roi in ra man hinh***
    fp = fopen("myfile.txt", "r");
    printf("%c", fgetc(fp));
    */
    



    /* 
            //***cho nay la tao file ten "myfile.txt" va  viet 2 chuoi ki tu vao***
    fp = fopen("myfile.txt", "w");
    fputs("an dep try 123", fp);//viet chuoi "an dep try 123 vao myfile.txt
    
    char ch[20];
    printf("Enter a string:");
    scanf("%s", ch);
    fputs(ch, fp);//viet 1 chuoi nhap tu ban phim vao myfile.txt
    */
    
    



    /* 
    
            //***cho nay la doc chuoi ki tu tu file "myfile.txt" roi in ra man hinh***
    char text[20];   
    fp=fopen("myfile.txt","r");  
    printf("%s",fgets(text,20,fp));  
    */
    
    fclose(fp); //cau lenh dong file duoc mo tu con tro fp
}
