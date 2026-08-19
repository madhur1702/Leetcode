class compare{
    public:
    bool operator()(const pair<int,string>&a,const pair<int,string> &b)
    {
        if(a.first!=b.first)
        {
            return a.first>b.first;
        }
        return a.second<b.second;
    }
};
class Solution {
public:

    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string,int> hash;
        for(int i =0;i<n;i++)
        {
            hash[words[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,compare> pq;
        for(auto it : hash)
        {
            int el = it.second;
            string word = it.first;
            pq.push({el,word});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<string> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
