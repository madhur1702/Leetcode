class NumArray {
public:
vector<int> presum;
    NumArray(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            sum += nums[i];
            presum.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
        {
            return presum[right];
        }
        return presum[right] - presum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
