class Solution {
public:
    int numberOfSubstrings(string s) {
       int count = 0;
        int n = s.size();
        int left = 0;
        int ca = 0, cb = 0, cc = 0;
        
        for (int right = 0; right < n; right++) {
            if (s[right] == 'a') ca++;
            else if (s[right] == 'b') cb++;
            else if (s[right] == 'c') cc++;
            while (ca > 0 && cb > 0 && cc > 0 && left <= right) {
                count += n - right; 
                if (s[left] == 'a') ca--;
                else if (s[left] == 'b') cb--;
                else if (s[left] == 'c') cc--;
                
                left++;
            }
        }
        
        return count; 
    }
};
