// GCD find out in c program...

#include <stdio.h>

int main() {
    int a, b, t, x, gcd;
    printf("Enter value of (a and b): ");
    scanf("%d %d", &a, &b);

    if(a == 0){
        gcd = a;
    }
    else if(b == 0){
        gcd = b;
    }
    else{
        while(b != 0){
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }

    printf("GCD is: %d \n", gcd);
    return 0;

return 0;
}
