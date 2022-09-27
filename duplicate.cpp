class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int mp=0;
    
        unordered_map<int,int>ans;
        for(auto i:nums){
            ans[i]++;
        }
        for(auto x:ans){
            if(x.second>1){
                mp=x.first;
                
                
            }
        
            
        
        }
        return mp;
        
        
    }
};