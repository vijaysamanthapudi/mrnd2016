#include<stdio.h>
#define size 1000
void insert_substring(char*, char*, int);
char* substring(char*, int, int);
int main()
{ int i;
    char text[size], substring[size];
     int position=0;

    printf("Enter some text\n");
    gets(text);

    printf("Enter the string to insert\n");
    gets(substring);

    int len=strlen(text);
    for( i=0;i<len;i++)
    {
        if(text[i]=='{' && text[i+1]=='}')
        {
            position=i+2;
            break;
        }
        if(text[i]=='[' && text[i+1]==']')
        {
            position=i+2;
            break;
        }
        if(text[i]=='(' && text[i+1]==')')
        {
            position=i+2;
            break;
        }




    }
    if(position==0)
    {
        printf("invalid braces");
        exit(0);

    }

    insert_substring(text, substring, position);

    printf("%s\n",text);

    return 0;
}

void insert_substring(char *a, char *b, int position)
{
    char *f, *e;
    int length;

    length = strlen(a);

    f = substring(a, 1, position - 1 );
    e = substring(a, position, length-position+1);

    stringcopy(a, "");
    stringcat(a, f);
    free(f);
    stringcat(a, b);
    stringcat(a, e);
    free(e);
}

char *substring(char *string, int position, int length)
{
    char *pointer;
    int c;

    pointer = malloc(length+1);

    if( pointer == NULL )
        exit(0);

    for( c = 0 ; c < length ; c++ )
        *(pointer+c) = *((string+position-1)+c);

    *(pointer+c) = '\0';

    return pointer;
}

void stringcopy(char d[], char s[]) {
   int c = 0;

   while (s[c] != '\0') {
      d[c] = s[c];
      c++;
   }
   d[c] = '\0';
}

void stringcat(char *dest, const char *src)
{
    char *rdest = dest;

    while (*dest)
      dest++;
    while (*dest++ = *src++)
      ;
    return rdest;
}
