// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<int> v;

	    // &vector for updating the vector in every stack frame
	void solve (int src, vector<int> &vis,vector<int> g[]){	 //visited vector & grpgh of adjacency list
	vis [src]=1;
	v.push_back(src);   //ushed the content into visited vector
	for (auto x:g[src]){    //for loop for all teh elements of adjacency matrix
	    if (!vis[x]){
	        solve(x,vis,g);
	        }
	    }
	}

	vector<int>dfsOfGraph(int V, vector<int> adj[]){    //given the vertices & the adjacency matrix
	    v.clear();
	    vector<int> vis(V,0);       //visited vector
	    solve (0,vis,adj);
	    return v;

	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
