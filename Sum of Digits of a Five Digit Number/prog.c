#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int rem=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while (n>0)
    {
        rem += n%10;
        n=n/10;
    }
    printf("%i",rem);
    
    return 0;
}