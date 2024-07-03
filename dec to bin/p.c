#include<stdio.h>
#include<stdlib.h>

int reverse(int);
/*
int main()
{
    int no=5;
    reverse(no);
    return 0;
}

int reverse(int no)
{
    if(no == 0)
        return 0;
    else
        printf("%d,", no);
    reverse (--no);
}
*/

int main() {
    int rem,n,rev=0,base=1;
    scanf("%d",&n);
    while(n>0) {
        rem=n%10;
        n=n/10;
        rev=rev+base*rem;
        base*=2;
    }
    printf("%d",rev);


} 

/**
 * int rem,n,rev=0; 
    scanf("%d",&n);
    while(n>0) {
        rem=n%2;
        n=n/2;
        printf("%d",rem);
    }
 * 
*/