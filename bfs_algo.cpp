// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> g[]){
	    // Code here
	    // v-number of nodes
	    //vector<int> adj[] for storing graph
	    //forms a adjacency list
	    vector<int> v;  //for storing the traversal of BFS
	    queue<int> q;   // for pushing the values
	    q.push(0);      //starting from zero
	    vector<int> vis(V,0);   //for visited vector
	    vis[0]=1;   //initailised as 1
	    
	    //loop will be working untill it becomes zero
	    while (!q.empty()){
	        int td = q.front(); //for taking out the front value
	        q.pop();    //popped the value
	        v.push_back(td);        //the value is pushed back
	        for(auto x:g[td]){     //for taking out the adjacent
	            if(!vis[x]){        //to check it's visited or not
	                vis[x] = 1;     //then initialsed the value as 1
	                q.push(x);      //pushed  
	            }
	        }
	        
	    }
	    return v;       // has our final ans
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
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends