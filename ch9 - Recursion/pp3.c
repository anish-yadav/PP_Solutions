/*
 * Program Description: To find the set of numbers generated by the recursive
 *      defination f(x) = 0 if x <= 0, f(x-1) + 2 otherwise
 * Input: How many numbers to generate
 * Output: Set of numbers generated
 */

#include <stdio.h>

int f(int x);

int
main(void)
{
    int i;      /* Loop index */
    int n;      /* How many numbers to generate */

    printf("How many numbers do you want to generate? ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++) {
        printf("f(%d) = %d\n", i, f(i));
    }

    return (0);
}

/*
 * Returns 0 if x <= 0
 * Returns f(x - 1) + 2 otherwise
 */
int
f(int x)
{
    if (x <= 0) {
        return (0);
    }

    return (f(x - 1) + 2);

}