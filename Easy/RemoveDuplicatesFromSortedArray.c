#include<stdio.h>
// Function Declaration
int removeDuplicates(int* nums, int numsSize);
// Main Function
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    size=removeDuplicates(arr,size);
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}
// Function Definition
int removeDuplicates(int* nums, int numsSize)
{
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                for(int k=j;k<numsSize-1;k++)
                    nums[k]=nums[k+1];
                j--;
                numsSize--;
            }
        }
    }
    return numsSize;
}