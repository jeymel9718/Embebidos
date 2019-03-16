#include <stdio.h>
#include <operaciones.h>

int main() {
    printf("5 + 7 = %d\n",add(5,7));
    printf("5 - 7 = %d\n",sub(5,7));
    printf("5 * 7 = %d\n",mul(5,7));
    printf("5 / 7 = %f\n",div(5,7));
    printf("sqrt(5) = %f\n",sroot(5));
    return 0;
}