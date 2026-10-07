#include <stdio.h>

/** UM NUMERO OCTAL, USANDO A FORMATAÇÃO %d NÃO COMEÇA COM 0
ex2.c: In function ‘main’:
ex2.c:4:20: error: invalid digit ‘8’ in octal constant
    4 |     printf("%d\n", 0678);
      |                    ^~~~

*/

int main() {
    printf("%d\n", 0678);
    return 0;
}