#include<stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("/home/shirou/Desktop/hello.txt","w");

    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);  //Writes the number into the file
    fclose(fptr);

    //writing into a file using fprintf()
    printf("Enter number to append\n");
    fptr = fopen("/home/shirou/Desktop/hello.txt","a");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);  //Writes the number into the file
    fclose(fptr);

    //append string using fputs()
    fptr = fopen("/home/shirou/Desktop/hello.txt","w");
    fputs("Hello World",fptr);
    fseek(fptr,6,SEEK_SET);
    fputs("India",fptr);
    fclose(fptr);

    //get string using fgets()
    char str[60];
    fptr = fopen("/home/shirou/Desktop/hello.txt","r");
    fgets(str,60,fptr);
    printf("%s\n",str);
    fclose(fptr);

    //write character using fputc()
    fptr = fopen("/home/shirou/Desktop/hello.txt","w");
    chat str1[1];
    fputs(,stdin);
    fclose(fptr);

    fptr = fopen("/home/shirou/Desktop/hello.txt","r");
    char ch;
    ch = fgetc(fptr);
    printf("The character read is: %c",ch);
    fclose(fptr);

    return 0;
}

