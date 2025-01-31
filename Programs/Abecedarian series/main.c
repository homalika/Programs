/*
Abscedarian series : 
let str1 = "abcdef"
let str2 = "ate"
output : aate, bate, cate, date, eate, fate
*/ 
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];
    char out[100];
    printf("Enter the first string : ");
    scanf("%s", s1);
    printf("Enter the second string : ");
    scanf("%s", s2);
    /*  
    for(int i = 0; i < strlen(s1); i++)  ---  chatgpt
    {
        printf("%c", s1[i]);
        printf("%s ", s2);
    }
    */
    for(int i = 0; i < strlen(s1); i++)
    {
        snprintf(out, sizeof(out), "%c%s ", s1[i], s2); // appending strings in empty array 'out'
        /*
        fprintf and fscanf -- accessing files to memory locations
        snprintf and snscanf -- safety access into buffer -- only used for appending
        getf() and putf()  -- similar to printf and scanf, no need of '&'
        fgetf() and fputf()  
        -- these are various i/o's
        */
        printf("%s ", out);
    }
    printf("\n");
    return 0;
}
