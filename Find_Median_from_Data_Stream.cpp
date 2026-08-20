class MedianFinder {
public:
priority_queue<int> pq;
priority_queue<int,vector<int>,greater<int>> pq1;
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(pq.empty() && pq1.empty())
        {
            pq1.push(num);
        }
        else if(num>pq1.top())
        {
            pq1.push(num);
        }else
        {
            pq.push(num);
        }
        if(pq.size() == pq1.size()+2)
        {
            int val = pq.top();
            pq.pop();
            pq1.push(val);
        }
        if(pq.size()+2 == pq1.size())
        {
            int val = pq1.top();
            pq1.pop();
            pq.push(val);
        }
    }
    
    double findMedian() {
        if(pq.size() == pq1.size())
        {
            return (double)(pq.top() + pq1.top())/2.0;
        }else if(pq.size()>pq1.size())
        {
            return pq.top();
        }
        return pq1.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
