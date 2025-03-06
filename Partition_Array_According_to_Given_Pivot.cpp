class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left,mid,right;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                left.push_back(nums[i]);
            }else if(nums[i]==pivot){
                mid.push_back(nums[i]);
            }else{
                right.push_back(nums[i]);
            }
        }
        nums.clear();
        nums.insert(nums.end(), left.begin(), left.end());
        nums.insert(nums.end(), mid.begin(), mid.end());
        nums.insert(nums.end(), right.begin(), right.end());

        return nums;
    }
};
