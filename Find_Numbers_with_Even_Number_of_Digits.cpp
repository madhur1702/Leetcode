class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int total = 0;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            count = (int)(log10(nums[i])+1);
            if(count%2==0)
            {
                total++;
            }
        }
        return total;
    }
};
