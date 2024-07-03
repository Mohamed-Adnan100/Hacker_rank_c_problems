#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    if((a>b)&&(a>c)&&(a>d)){
        return a;
    }
    else{
        if ((b>a)&&(b>c)&&(b>d)){
            return b;
        }
        else{
            if((c>a)&&(c>b)&&(c>d)){
                return c;
            }
            else{
                if((d>a)&&(d>b)&&(d>c)){
                    return d;
                }
                else{
                    printf("error! \n");
                    return 0;                    
                }
            }
        }
        
    }
}

/**
    #include <stdio.h>

    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    int max_of_four(int a, int b, int c, int d) {
        return max(max(a, b), max(c, d));
    }

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int greatest = max_of_four(a, b, c, d);
    printf("%d\n", greatest);
    return 0;
}
 * 
 * **/
