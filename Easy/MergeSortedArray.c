#include<stdio.h>
// Function Declaration
void merge(int *nums1,int nums1Size,int m,int *nums2,int nums2Size,int n);
// Main Function
int main()
{
    int nums1Size,nums2Size,m,n;
    scanf("%d%d%d%d",&nums1Size,&m,&nums2Size,&n);
    int nums1[nums1Size],nums2[nums2Size];
    for(int i=0;i<nums1Size;i++) scanf("%d",nums1+i);
    for(int i=0;i<nums2Size;i++) scanf("%d",nums2+i);
    merge(nums1,nums1Size,m,nums2,nums2Size,n);
    for(int i=0;i<nums1Size;i++) printf("%d ",*(nums1+i));
    return 0;
}
// Function Definition
void merge(int *nums1,int nums1Size,int m,int *nums2,int nums2Size,int n)
{
    for(int i=m;i<nums1Size;i++) nums1[i]=nums2[i-m];
    for(int i=0;i<nums1Size-1;i++)
        if(nums1[i]>nums1[i+1])
        {
            nums1[i]   = nums1[i] ^ nums1[i+1];
            nums1[i+1] = nums1[i] ^ nums1[i+1];
            nums1[i]   = nums1[i] ^ nums1[i+1];
            i=-1;
        }
}