#include<stdio.h>
// Function Declaration
int searchInsert(int *nums,int numsSize,int target);
// Main Function
int main()
{
    int numsSize,target;
    scanf("%d",&numsSize);
    int nums[numsSize];
    for(int i=0;i<numsSize;i++)
        scanf("%d",nums+i);
    scanf("%d",&target);
    int answer=searchInsert(nums,numsSize,target);
    printf("%d",answer);
    return 0;
}
// Function Definition
int searchInsert(int *nums,int numsSize,int target)
{
    for(int i=0;i<numsSize;i++)
        if(*(nums+i)==target||*(nums+i)>target)
            return i;
    return numsSize;
}