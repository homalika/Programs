#include<stdio.h>
#include<string.h>  //string directory
int main()
{
    char str[20] = "abcdefghijkl";
    char strs[20] = "abcdefghijkl";
    char strss[20] = "abcd";
    char strr[20]; //for strcpy
    char con[20] = "mnopqrstuvwxyz"; //for strcat
    printf("Length of string str : %ld\n", strlen(str));
    printf("Size of string str is : %ld\n", sizeof(str));
    strcpy(strr, str);
    printf("Copied string strr from str is : %s\n", strr);
    strcat(str, con);
    printf("Concatenated string (str and con) is : %s\n", str);
    printf("String comparison of str and strs is %d\n", strcmp(str, strs));  // if both strings equal -- 0, else -- 1
    printf("String comparison of str and strss is %d\n", strcmp(str, strss)); //returns debug value
    return 0;
}

/* 
String methods / functions :
length = strlen()  -- doesn't consider '\0', returns number of characters
size = sizeof()  -- considers '\0', returns total size
concatenate  --  strcat() (if we use "str")
copy  --  strcpy()
compare  -- strcmp()
*/