// Problems based on Charecter Array or String

//chck Capital charecter or not.
// not readable code by using ASCII value

#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
    if((ch >=65)&&(ch<=90))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = IsCapitalX(cValue);

    if(bRet == true)
    {
        printf("%c is a Capital case letter\n",cValue);
    }
    else
    {
        printf("%c is not a Capital case letter\n",cValue);
    }
    return 0;
}
