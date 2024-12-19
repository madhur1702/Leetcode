class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int j=1;
       for(int i=1;i<size;i++)
       {
        if(nums[i]!=nums[i-1])
        {
            nums[j]=nums[i];
            j++;
        }
       } 
       return j;
    }
};
