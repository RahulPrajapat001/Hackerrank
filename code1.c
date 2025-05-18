#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /*swapping two numbers*/
    int a,b,c;
        scanf("%d",&a);
        scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a = %d\n",a);
    printf("b = %d",b);
    
    return 0;
}