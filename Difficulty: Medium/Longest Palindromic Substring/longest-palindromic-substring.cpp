class Solution {
  public:
    string getLongestPal(string &s) {
        // code here
        int n = s.size();
        int m = INT_MIN;
        int left = 0;
        int right = 0;
        for(int i = 0; i < n ; i++){
            // odd check
            int l = i;
            int r = i;
            while(l>=0 && r <=n && s[l]==s[r]){
                l--;
                r++;
            }
            l++;
            r--;
            if(m<(r-l+1)){
                m = (r-l+1);
                left = l;
                right = r;
            }
            // even check
            l = i;
            r = i+1;
            while(l>=0 && r <=n && s[l]==s[r]){
                l--;
                r++;
            }
            l++;
            r--;
            if(m<(r-l+1)){
                m = (r-l+1);
                left = l;
                right = r;
            }
        }
        return s.substr(left,(right-left+1));
    }
};