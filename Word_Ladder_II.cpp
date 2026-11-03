class Solution {
public:
vector<vector<string>> ans;
unordered_map<string,int> mpp;
string b;
void dfs(string word,vector<string> &seq)
{
    if(word == b)
    {
        reverse(seq.begin(),seq.end());
        ans.push_back(seq);
        reverse(seq.begin(),seq.end());
        return;
    }
    int sz = word.size();
    int steps = mpp[word];
    for(int i =0;i<sz;i++)
    {
        string original = word;
        for(char c = 'a';c<='z';c++)
        {
            word[i] = c;
            if(mpp.find(word)!=mpp.end() && mpp[word]+1 == steps)
            {
                seq.push_back(word);
                dfs(word,seq);
                seq.pop_back();
            }
        }
        word = original;
    }
}

    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(),wordList.end());
        queue<string> q;
        q.push(beginWord);
        mpp[beginWord] = 1;
        st.erase(beginWord);
        int size = beginWord.size();
        b = beginWord;
        while(!q.empty())
        {
            string word = q.front();
            int steps = mpp[word];
            q.pop();
            if(word == endWord) break;
            for(int i =0;i<size;i++)
            {
                string original = word;
                for(char c = 'a';c<='z';c++)
                {
                    word[i] = c;
                    if(st.count(word))
                    {
                        q.push(word);
                        mpp[word] = steps + 1;
                        st.erase(word);
                    }
                }
                word = original;
            }
        }
        if(mpp.find(endWord)!=mpp.end())
        {
            vector<string> seq;
            seq.push_back(endWord);
            dfs(endWord,seq);
        }
        return ans;
    }
};
