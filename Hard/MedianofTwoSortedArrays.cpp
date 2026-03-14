#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1,vector<int>& nums2)
    {
        int size=nums1.size()+nums2.size();
        int arr[size];
        for(int i=0;i<size;i++)
        {
            if(i<nums1.size())
                arr[i]=nums1[i];
            else
                arr[i]=nums2[i-nums1.size()];
        }
        for(int i=0,minIn;i<size;i++)
        {
            minIn=i;
            for(int j=i+1;j<size;j++)
            {
                if(arr[j]<arr[minIn]) minIn=j;
            }
            if(i!=minIn) swap(arr[i],arr[minIn]);
        }
        if(size%2!=0)
            return (arr[size/2]);
        else
            return (arr[size/2]+arr[size/2+1])/2.0;
    }
};
int main()
{
    Solution s;
    vector<int> nums1={1,3},nums2={2};
    cout<<s.findMedianSortedArrays(nums1,nums2);
    return 0;
}