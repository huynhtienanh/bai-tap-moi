#include <stdio.h>

int main(void) {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if (a==0) {
        printf("neither even nor odd ");
        scanf ("%d",&a);
    } if ( a%2 == 0 ) {
        printf(" old number ");
    }    else {
        printf ("even number ");

    }
    return 0;

}
