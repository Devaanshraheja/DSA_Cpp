class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int> &ip, int target ,vector<int> & op, int i ){
        // whatever output is coming we pushing it to the op vector
        if(target<0){
        ans.push_back(op);
        return;
        }

        // base case 
        if(target< 0) return;
        // recurdive relation
        for(int j=i; j < ip.size(); j++){
            if(j!=i  and ip[j]==ip[j-1]) continue;
            op.push_back(ip[j]);
            solve(ip,target-ip[j],op,j);
            op.pop_back();
        }
    }       
    vector<vector<int>> subsetsWithDup(vector<int>& ip) {
        vector<int>op;
        sort(ip.begin(),ip.end());
        solve(ip,0,op);
        return ans;
    
    } 
};