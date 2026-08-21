class RecentCounter {
public:
    RecentCounter() {
        
    }
    int l;
    queue<int> q;
    int ping(int t) {
        q.push(t);
        l = t - 3000;
        while(q.front()<l)
        {
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
