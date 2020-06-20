class Solution {
public:
    void perm(vector<int>& v,string& ans,int n,int k,vector<int>& fac)
    {
        if(n==1)
        {
            ans+=to_string(v.back());
            return;
        }
		
		int i = (k/fac[n-1]);
		if(k % fac[n-1] == 0)
            i--;
		
		ans+= to_string(v[i]);  
        v.erase(v.begin() + i);  
        k -= fac[n-1] * i;
        perm(v,ans,n-1,k,fac);
    }
    
    string getPermutation(int n, int k) {
        if(n==1) 
            return "1";
        
        vector<int>fac = {1,1,2,6,24,120,720,5040,40320,362880};
        string s = "";
        vector<int> v;
        for(int i=1;i<=n;i++) 
            v.emplace_back(i);
        
        perm(v,s,n,k,fac);
        return s;
    }
};
