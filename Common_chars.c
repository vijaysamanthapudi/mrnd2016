#define nochar 256
#define size  1000
int pass(char a[],char b[]);
void main()
{
char a[size],b[size];
printf("enter the first string\n");
gets(a);
printf("enter the second string\n");
gets(b);

   pass(a,b);

}

int pass(char a[],char b[])
{
    int i,j;
    int count[nochar];
     for(i=0;i<nochar;i++)
     {
         count[i]=0;
     }
      for(i=0;a[i];i++)
     {
          if(count[a[i]]==0)
          {
            count[a[i]]++;

          }

     }
     for(i=0;b[i];i++)
     {
         if(count[b[i]]==1)
         {

             printf("%c\n",b[i]);
             count[b[i]]=0;
         }

     }


}
