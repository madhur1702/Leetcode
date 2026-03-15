class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hash;
        for(int i : nums)
        {
            if(i%2 == 0)
            {
                hash[i]++;
            }
        }
        for(int i : nums)
        {
            if(i%2 == 0 && hash[i] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
