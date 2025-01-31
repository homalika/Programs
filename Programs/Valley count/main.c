/*  INPUT 1 : N = 8 
              PATH = UDDDUDUU
    OUTPUT 1 : Valleys are 1 
    
    INPUT 1 : N = 12
             PATH = UDDDUDUUUDDU
    OUTPUT 2 : Valleys are 2
*/ 

#include <stdio.h>
int valley(long int steps, char *path)
{
    long int level = 0, i, vcount = 0; //valley count -- vcount
    for(i = 0; i < steps; i++)
    {
        if(path[i] == 'U')
        {
            level++;
        }
        else if(path[i] == 'D'){
            if(level == 1)
                {
                    vcount++;
                }
            level--;
        }
    }
    return vcount;
}

int main()
{
    long int steps;
    printf("Enter number of steps: ");
    scanf("%ld", &steps);
    char path[steps];
    int i, result;
 /* 
    for(i = 0; i < steps; i++)
    {
    scanf("%c", &path[i]);
    }
*/
    printf("Enter the path string: ");
    scanf("%s", path);
    result = valley(steps, path);
    printf("Valleys are %d\n", result);
    return 0;
}
