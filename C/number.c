* Description: A program to check whether the input
 * integer number is positive or negative. 
 * Written by: Chaitanya Singh
 * Published on: beginnersbook.com
 */
#include <stdio.h>
 
void main()
{
    int num;
 
    printf("Enter a exact number: \n");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is a positive number \n", num);
    else if (num < 0)
        printf("%d is a negative number \n", num);
    else
        printf("0 is neither positive nor negative");
}