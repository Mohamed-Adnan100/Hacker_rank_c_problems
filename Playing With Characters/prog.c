#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch,s[100],sec[200];
    scanf("%c %s %[^\n]%*c", &ch, &s, &sec);;
    printf("%c \n%s \n%s \n", ch, s, sec); 

    return 0;
}

/***
     * char ch,s[100],sec[200];
        scanf("%c", &ch);
        scanf("%s", &s);
        scanf(" %[^\n]%*c", &sec);
        printf("%c \n%s \n%s \n", ch, s, sec); 
    */