#include <stdio.h>
int main(){
    int n = 2;
    int n2 = 6;
    printf("and %d\n", (n&n2)); 
    printf("or %d\n", (n|n2)); 
    printf("xor %d\n", (n^n2));
    return 0;
}
