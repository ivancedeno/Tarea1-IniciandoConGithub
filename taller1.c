#include <stdio.h>
#define MAXLINE 1000
int getline2(char line[], int maxline);
void copy(char to[], char from[]);
int cuenta(char cadena[]);
int cuenta_digitos(char cadena[]);
main()

{

    int max; 
    char line[MAXLINE]; 
    char longest[MAXLINE]; 
     int choice;
    max = 0;
    while ((len = getline2(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) 
  printf("\nLa cadena tiene %d caracteres\n", cuenta(longest)-1);
  printf("\n\nLa cadena tiene %d dÃ­gitos\n", cuenta_digitos(longest));                                             }
        
        
    return 0;
}
int getline2(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
int cuenta(char cadena[])
{
    int i;
    i = 0;
    while (cadena[i] != '\0')
        ++i;
    return i;
}
int cuenta_digitos(char cadena[])
{
    int i, digitos;
    i = 0;
    digitos = 0;
    while (cadena[i] != '\0')
    {
        if (cadena[i] >= '0' && cadena[i] <= '9')
            ++digitos;
        ++i;
    }
    return digitos;
}
