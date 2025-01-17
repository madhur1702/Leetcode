class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int result = 0;
        if(size1%2==1)
        {
            for(int num : nums2)
            {
                result ^= num;
            }
        }
        if(size2%2==1)
        {
            for(int num : nums1)
            {
                result ^= num;
            }
        }
        return result;
    }
};
