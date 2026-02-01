#include<stdio.h>
// Function Declaration
void sortColors(int *nums,int numsSize);
// Main Function
int main()
{
    int numsSize;
    scanf("%d",&numsSize);
    int nums[numsSize];
    for(int i=0;i<numsSize;i++)
        scanf("%d",nums+i);
    sortColors(nums,numsSize);
    for(int i=0;i<numsSize;i++)
        printf("%d ",*(nums+i));
    return 0;
}
// Function Definition
void sortColors(int *nums,int numsSize)
{
    for(int i=0;i<numsSize-1;i++)
        if(nums[i]>nums[i+1])
        {
            nums[i]   = nums[i] ^ nums[i+1];
            nums[i+1] = nums[i] ^ nums[i+1];
            nums[i]   = nums[i] ^ nums[i+1];
            i=-1;
        }
}