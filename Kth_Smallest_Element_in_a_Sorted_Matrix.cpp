class node {
    public:
    int data;
    int row;
    int col;
    node(int val, int i, int j) {
        data = val;
        row = i;
        col = j;
    }
};
class compare {
    public:
    bool operator()(node* a, node* b) { return a->data > b->data; }
};
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<node*, vector<node*>, compare> pq;
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            node* temp = new node(matrix[i][0], i, 0);
            pq.push(temp);
        }
        int cnt = 0;
        int ans = 0;
        while (pq.size() > 0) {
            node* temp = pq.top();
            int i = temp->row;
            int j = temp->col;
            pq.pop();
            cnt++;
            if (cnt == k) {
                return temp->data;
            }
            if (j + 1 < n) {
                node* newnode = new node(matrix[i][j + 1], i, j + 1);
                pq.push(newnode);
            }
        }
        return 0;
    }
};
