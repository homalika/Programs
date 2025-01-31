/*
Anagrams -- silent and listen
Process -- check length, take array and store counts, inc or dec chars, return T or F
(optional -- to convert all characters to lower or upper case before storing counts)
*/
#include <stdio.h>
#include<string.h>
#include<stdbool.h>   // to do without stdbool -- take flag = 0 and flag = 1
bool anagram(char s1[], char s2[])
{
    // to check for lowercase and not uppercase -- size 256 taken
    int c[256] = {0};  // characters are counted and counts are placed in array 
    int i;
    if(strlen(s1) != strlen(s2))
    {
        return false;
    }
    for(i = 0; s1[i] && s2[i]; i++)  // s1 and s2 are parallely accessed
    {
        c[(int)s1[i]]++;
        c[(int)s2[i]]--;
    }
    for(i = 0; i < 256; i++)
    {
        if(c[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char s1[100], s2[100];
    printf("Enter the first string : ");
    scanf("%s", s1);
    printf("Enter the second string : ");
    scanf("%s", s2);
    if(anagram(s1, s2))
    {
        printf("Anagrams\n");
    }
    else
    {
        printf("Not Anagrams\n");
    }
    return 0;
}