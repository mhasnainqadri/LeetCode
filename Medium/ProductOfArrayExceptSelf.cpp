#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0,product=1;i<nums.size();i++)
        {
            ans[i]=product;
            product*=nums[i];
        }
        for(int i=nums.size()-1,product=1;i>=0;i--)
        {
            ans[i]*=product;
            product*=nums[i];
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> n1={1,2,3,4},n2={-1,1,0,-3,3};
    vector<int> a1,a2;
    a1=s.productExceptSelf(n1);
    a2=s.productExceptSelf(n2);
    for(int i:a1) cout<<i<<" ";
    cout<<'\n';
    for(int i:a2) cout<<i<<" ";
    return 0;
}