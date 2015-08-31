#define nochar 256
#define size  1000
int pass(char a[],char b[]);

void main()
{
char a[size],b[size];int ans,i;
printf("enter the first string\n");
gets(a);
for(i=0;a[i];i++);
if(i==0)
{

    printf("empty string");exit(0);
}
printf("enter the second string\n");
gets(b);
for(i=0;b[i];i++);
if(i==0)
{

    printf("empty string");exit(0);
}

  ans= pass(a,b);
  if(ans)
  {

      printf("true");
  }
  else
     printf("false");

}

int pass(char a[],char b[])
{
    int i,j,l1,l2;
    int count1[nochar],count2[nochar];
    l1=strlen(a),l2=strlen(b);
    if(l1==l2)
    {
     for(i=0;i<nochar;i++)
     {
         count1[i]=0;
         count2[i]=0;
     }
      for(i=0;a[i];i++)
     {
          count1[a[i]]++;
     }
     for(i=0;b[i];i++)
     {
         count2[b[i]]++;
     }
     for(i=0;i<l1;i++)
     {
         if(count1[a[i]]!=count2[a[i]])
         {

            return 0;
         }

     }
     if(i==l1)
     {

         return i;
     }
    }
    else
    {

        return 0;
    }

}



