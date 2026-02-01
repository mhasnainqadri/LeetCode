#include<stdio.h>
#include<stdbool.h>
// Function Declaration
bool isPalindrome(int num);
// Main Function
int main()
{
    int test_case;
    scanf("%d",&test_case);
    printf("%s",(isPalindrome(test_case))?"true":"false");
    return 0;
}
// Function Definition
bool isPalindrome(int num)
{
    long long reversed=0;
    int copy=num;
    while(copy>0)
    {
        reversed=reversed*10+copy%10;
        copy/=10;
    }
    if(reversed==num) return true;
    return false;
}