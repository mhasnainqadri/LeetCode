#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums,int target)
    {
        // brute force
        vector<int> result;
        bool shutdown=false;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    shutdown=true;
                    break;
                }
            }
            if(shutdown) break;
        }
        return result;
    }
};
int main()
{
    Solution s;
    vector<int> nums={3,2,4};
    int target=6;
    vector<int> result=s.twoSum(nums,target);
    for(int i:result)
        cout<<i<<" ";
    return 0;
}