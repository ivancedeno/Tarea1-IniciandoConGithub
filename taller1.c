#include <stdio.h>
#define MAXLINE 1000
int getline2(char line[], int maxline);
void copy(char to[], char from[]);
int cuenta(char cadena[]);
int cuenta_digitos(char cadena[]);
main()

{


printf("Igrese las cadenas de caracteres:\n Presion ctrl+d para  ir al menu\n");
    int len;
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
          
               do {
                    printf("\nLa cadena mas larga que escribiste es: %s", longest);
                    printf("\n\t MenÃº: \n"
                    "1) Contar Caracteres de la cadena mas larga \n"
                    "2) Contar Digitos de la cadena mas larga  \n"
                    "3) Salir \n");
                     scanf("%d", &choice);
                               if (choice == 1) {
                                    printf("\nLa cadena tiene %d caracteres\n", cuenta(longest)-1);
                                                }
                             else if (choice == 2) {
                               printf("\n\nLa cadena tiene %d dÃ­gitos\n", cuenta_digitos(longest));
                                                   }
                             else if (choice == 3) {}
                             else {
                                  printf("\nPOR FAVOR ELIJA UNA DE LAS 3 OPCIONES");
                                  }
              }while (choice != 3);

        
        
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
