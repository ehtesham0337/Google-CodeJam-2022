#include<bits/stdc++.h>
using namespace std;

bool solve(int index,vector<int> &v,vector<int> output,int target,vector<vector<int>> &ans,
vector<vector<int>> &dp){
    if(index==v.size()){
        if(target==0){
            ans.push_back(output);
            return true;
        }
            return false;
    }
    
       bool t1= solve(index+1,v,output,target,ans,dp);
        output.push_back(v[index]);
       bool t2= solve(index+1,v,output,target-v[index],ans,dp);
    
 return dp[index][target]=(t1 | t2);
}

int main(){
   int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s;
        for(int i=1;i<=n;i++){
            s.insert(i);
        }
        for(auto it:s){
            cout<<it<<" ";
        }
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        long long sum=0;
        for(auto it:s){
            sum+=it;
        }
    
    vector<int> v;
     vector<vector<int>> ans;
    for(auto it:s){
        v.push_back(it);
    }
        vector<vector<int>> dp(v.size(), vector<int>(sum + 1, -1));
    solve(0,v,{},sum/2,ans,dp);
for(auto it : ans[0]){
    cout<<it<<" ";
}
cout<<endl;
    }
    return 0;
}