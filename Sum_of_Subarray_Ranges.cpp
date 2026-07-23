class Solution {
public:
vector<int> findpse(vector<int> nums)
{
    int n = nums.size();
    vector<int> res(n);
    stack<int> st;
    for(int i = 0;i<n;i++)
    {
        while(!st.empty() && nums[st.top()]>nums[i]) st.pop();
        res[i] = st.empty()?-1:st.top();
        st.push(i); 
    }
    return res;
}
vector<int> findnse(vector<int> nums)
{
    int n = nums.size();
    vector<int> res(n);
    stack<int> st;
    for(int i =n-1;i>=0;i--)
    {
        while(!st.empty() && nums[st.top()]>=nums[i]) st.pop();
        res[i] = st.empty()?n:st.top();
        st.push(i);
    }
    return res;
}
vector<int> findpge(vector<int> nums)
{
    int n = nums.size();
    vector<int> res(n);
    stack<int> st;
    for(int i =0;i<n;i++)
    {
        while(!st.empty() && nums[st.top()]<nums[i])
        {
            st.pop();
        }
        res[i] = st.empty()?-1:st.top();
        st.push(i);
    }
    return res;
}
vector<int> findnge(vector<int> nums)
{
    int n = nums.size();
    vector<int> res(n);
    stack<int> st;
    for(int i =n-1;i>=0;i--)
    {
        while(!st.empty() && nums[st.top()]<=nums[i])
        {
            st.pop();
        }
        res[i] = st.empty()?n:st.top();
        st.push(i);
    }
    return res;
}
long long maxsum(vector<int> nums)
{
    vector<int> nge = findnge(nums);
    vector<int> pge = findpge(nums);
    long long total = 0;
    int mod = 1e9 + 7;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        int left = i - pge[i];
        int right = nge[i] - i;
        total += 1LL*left*right*nums[i];
    }
    return total;
}
long long minsum(vector<int> nums)
{
    vector<int> nse = findnse(nums);
    vector<int> pse = findpse(nums);
    long long total = 0;
    int mod = 1e9 + 7;
    int n = nums.size();
    for(int i =0;i<n;i++)
    {
        int left = i - pse[i];
        int right = nse[i] - i;
        total += 1LL*left*right*nums[i];
    }
    return total;
}
    long long subArrayRanges(vector<int>& nums) {
        return maxsum(nums) - minsum(nums);
    }
};
