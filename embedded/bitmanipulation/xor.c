#include <stdio.h>

int
main(int argc, char** argcv){
    /* XORing with 0 gives you back the same number. Thus, 0 is the identity for XOR*/
    int x = 14; 
    printf("%d ", x^0);

    /*XORing with 1 gives you back the negation of the bit. Again, this comes from
    the truth table. For bitwise XOR, the property is slightly different: x ^ ~0 = ~x.
    That is, if you XOR with all 1's, the result will be the bitwise negation of x. 
    */

    /* Increment by 1 */
    /* XOr requires less transistor than addition. This is one measure of complexity on which XOr wins. */
    printf("%d ", x^1);

    return 0;
}