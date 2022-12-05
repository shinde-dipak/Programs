// Problems On Pattern Printing

//Accept the Number from user and print  that nos of times
//Input : rows 4
//Input : column 4
//Output :
 /*         *   *   *   *
            2   2   2   2
            *   *   *   *
            4   4   4   4
 */

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2)!=0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",i);
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}