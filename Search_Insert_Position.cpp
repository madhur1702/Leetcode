class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i, n = nums.size();
        vector<int> num(n+1);
        for(i = 0;i<n;i++)
        {
            num[i]=nums[i];
            if(nums[i]==target)
            {
                return i;
            }
            
        }
        num[i]=target;
        sort(num.begin(),num.end());
        for(i=0;i<n+1;i++)
        {
            if(num[i]==target)
            {
                return i;
            }
        }
   return 0; }
};
