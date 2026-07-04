#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 40
int main()
{
    char mot[N];
    printf("\tEntrez un mot:\t\a");
    scanf("%s",&mot);
    int compteur=0;
    for(int i=1;i<=strlen(mot)/2;i++)
    {
        if(mot[i-1]==mot[strlen(mot)-i])
        {
            compteur=compteur+1;
        }
    }
    if (compteur==strlen(mot)/2)
    {
        printf("\t\a Le mot \"%s\" est un palindrome\n",mot);
    }

    else 
    {
        printf("\t\a Le mot \"%s\" n'est  pas un palindrome \n",mot);
    }
        

}