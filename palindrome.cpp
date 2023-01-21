#include <stdio.h>
#include <string.h>
 int main()
{
    char s[25];  
    int i,l,count=0;
    printf("Enter  the string : ");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)  
    {
    	if(s[i]==s[l-i-1])
    	{
    	count=count+1;
        }
  	}
 	if(count==l)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 	 
     
    return 0;
}
