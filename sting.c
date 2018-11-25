#include<stdio.h>
#include<string.h>

int main()
{
    int length=0;
    char input[100] = "abc";


    /*****************************************************************
     * 关于字符串长度的计算
    ******************************************************************/

    while(input[length++] != '\0'); //可以用来计算字符串长度 相当于strlen()
    length--;


    printf("%d\n",length);
    printf("%lu\n",strlen(input)); //strlen()计算出来的长度不包括'\0'

    /*****************************************************************
     * 关于字符串内字母的获取和排序
    ******************************************************************/

   int i,num;
   int alpha[26]={0};
   for(i=0;i<strlen(input);i++)
   {
       if (input[i] >= 'a' && input[i] <= 'z')
       {
           num = input[i] - 'a';
           alpha[num] = 1;
       }
   }

   for(i=1;i<=26;i++)
   {
       if(alpha[i] == 1)
        printf("%c ",('a'-1+i));
   }

}