class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int left = 0,maxi = 0;
        unordered_map<int,int> hash;
        for(int right = 0;right<n;right++)
        {
            hash[fruits[right]]++;
            if(hash.size()>2)
            {
                hash[fruits[left]]--;
                if(hash[fruits[left]] == 0)
                {
                    hash.erase(fruits[left]);
                }
                left++;
            }
            maxi = max(maxi,right-left+1);
        }
        return maxi;
    }
};
