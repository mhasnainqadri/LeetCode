#include<stdio.h>
// Function Declaration
int removeElement(int* nums, int numsSize, int val);
// Main Function
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int target;
    scanf("%d",&target);
    size=removeElement(arr,size,target);
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}
// Function Definition
int removeElement(int* nums, int numsSize, int val) {
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
        {
            for(int j=i;j<numsSize-1;j++)
                nums[j]=nums[j+1];
            numsSize--;
            i--;
        }
    }
    return numsSize;
}