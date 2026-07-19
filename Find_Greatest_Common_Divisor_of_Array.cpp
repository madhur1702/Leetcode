class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        while(mini>0 && maxi > 0)
        {
            if(maxi > mini) maxi = maxi% mini;
            else mini = mini % maxi;
        }
        if(maxi>0) return maxi;
        return mini; 
    }
};
