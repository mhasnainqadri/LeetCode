#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    void merge(vector<int>& nums1,int m,vector<int>& nums2,int n)
    {
        for(int i=0;i<n;i++) nums1[i+m]=nums2[i];
        for(int i=0,min;i<m+n-1;i++)
        {
            min=i;
            for(int j=i+1;j<m+n;j++)
            {
                if(nums1[j]<nums1[min]) min=j;
            }
            if(i!=min) swap(nums1[i],nums1[min]);
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    int m=3;
    int n=3;
    s.merge(nums1,m,nums2,n);
    for(int i:nums1) cout<<i<<" ";
    return 0;
}