class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size = nums.size();
       int even=0;
        for(int i=0;i<size;i++){
           if(nums[i]%2==0){
               swap( nums[i],nums[even]);
               even++;

           }
           
    }
    return nums;
    }
};