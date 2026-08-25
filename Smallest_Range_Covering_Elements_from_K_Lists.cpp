class node
{
    public:
    int data;
    int row;
    int col;
    node(int d,int r,int c)
    {
        data = d;
        row = r;
        col = c;
    }
};
class compare
{
    public:
    bool operator()(node* a,node* b)
    {
        return a->data > b->data;
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int maxi = INT_MIN,mini = INT_MAX;
        int k = nums.size();
        priority_queue<node*,vector<node*>,compare> pq;
        for(int i =0;i<k;i++)
        {
            mini = min(mini,nums[i][0]);
            maxi = max(maxi,nums[i][0]);
            pq.push(new node(nums[i][0],i,0));
        }
        int start = mini,end = maxi;
        while(!pq.empty())
        {
            node* temp = pq.top();
            pq.pop();
            mini = temp->data;
            if(maxi - mini < end - start)
            {
                start = mini;
                end = maxi;
            }
            if(temp->col + 1 < nums[temp->row].size())
            {
                maxi = max(maxi,nums[temp->row][temp->col +1]);
                pq.push(new node(nums[temp->row][temp->col+1],temp->row,temp->col+1));
            }
            else
            {
                break;
            }
        }
        return {start,end};
    }
};
