#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    // WRITE MODE
    fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("error");
        return 1;
    }

    fprintf(fp, "C is a programming language, C is a compiler language");

    fclose(fp);
    fp = NULL;

    // APPEND
    fp = fopen("data.txt", "a");

    if (fp == NULL){
        printf("error");
        return 1;
    }
    fprintf(fp, "\n----FEEDBACK-----\n");
    fprintf(fp, "-> the class is good\n");
    fprintf(fp, "-> Sir will solve whatever the question you ask regarding the class without hesitation\n");
    fprintf(fp, "-> And he always make sures that eveyone understands the class\n");
    fprintf(fp, "-> The teaches a constant pace\n   ");
    fprintf(fp, "-> He will teach the same topic multiple time if the student didn't understood in the first time\n");

    fclose(fp);
    fp = NULL;


    // READ MODE
    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("ERROR");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}