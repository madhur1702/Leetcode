class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> num(size);
        int j=0;
        k=k%size;
        for(int i=size-k;i<size;i++)
        {
            num[j++]=nums[i];
        }
        for(int i=0;i<size-k;i++)
        {
            num[j++]=nums[i];
        }
        for(int i=0;i<size;i++)
        {
            nums[i]=num[i];
        }
    }
};
