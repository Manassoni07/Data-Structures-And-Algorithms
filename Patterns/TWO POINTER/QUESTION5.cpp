/*Given an integer array nums of length n and an integer target, find three integers at distinct indices in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
Example 2:

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];
        int i = 0;
        for(;i < nums.size();i++){
            int j = i + 1;
            int k =  nums.size() - 1;

            while(j < k){
            int currsum = nums[i] + nums[j] + nums[k]; 
            // update closest sum
            if(abs(currsum - target) < abs(closestSum - target)){
                closestSum = currsum;
            }

            if(currsum == target) return currsum;

            else if(currsum < target) j++;

            else k--;

            }

        }
        return closestSum;
    }
};