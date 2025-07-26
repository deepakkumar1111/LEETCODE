class Solution {
    void sumWay(vector<int> &nums,int target,int index,int currSum , int &count )
    {
        if(nums.size()==index)
        {
        if(currSum==target )
        {
            count++;
        }
        return;
        }
        sumWay(nums,target,index+1,currSum+nums[index],count);

        sumWay(nums,target,index+1,currSum-nums[index],count);

        
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        
        sumWay(nums,target,0,0,count);
        return count;

    }
};