class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<int,int> f;
        int i=0;
        int max1=-1;
        for (int j=0;j<s.size();j++){
            f[s[j]]+=1;
            while(f.size()>k){
                
                f[s[i]]-=1;
                
                if(f[s[i]]==0){
                    f.erase(s[i]);
                }
                i++;
            }
            if(f.size()==k){
            max1=max(max1,j-i+1);
            }
            
        }
        return max1;
    }
};