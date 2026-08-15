class node{
    public:
    int num;
    int den;
    node(int num1,int den1)
    {
        num = num1;
        den = den1;
    }
};
class compare
{
    public:
    bool operator()(node* a,node* b)
    {
        return a->num*b->den < b->num*a->den;
    }
};
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        priority_queue<node*,vector<node*>,compare> pq;
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(pq.size()<k)
                {
                    node* temp = new node(arr[i],arr[j]);
                    pq.push(temp);
                }
                else
                {
                    node* temp = pq.top();
                    int a = temp->num;
                    int b = temp->den;
                    int c = a*arr[j];
                    int d = b *arr[i];
                    if(c>d)
                    {
                        pq.pop();
                        pq.push(new node(arr[i],arr[j]));
                    }
                }
            }
        }
        node* newnode = pq.top();
        return {newnode->num,newnode->den};     
    }
};
