class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> num;
        for(int i=0;i<m;i++)
        {
            num.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++)
        {
            num.push_back(nums2[i]);
        }
        sort(num.begin(),num.end());
        int j = m+n;
        double k;
        if(j%2!=0)
        {
            k = num[j/2];
        }
        else if(j%2==0)
        {
            k=(num[j/2-1]+num[j/2])/2.0;
        }
        return k;
    }
};
