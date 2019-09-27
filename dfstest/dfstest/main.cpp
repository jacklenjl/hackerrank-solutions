#include <iostream>
#include<list>
using namespace std;
class test{
public:int nroad,mcity,croad,clib,u,v,V;
    list<int> *adj;
    
    test(int k)
    {this->mcity=k;
        adj=new list<int>[mcity];
        for(int i=0;i<k;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            //adj[1].push_back(v);
        }
        DFS(1);
    }
    
    void DFS(int v)
    {
        // Mark all the vertices as not visited
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;
        
        // Call the recursive helper function
        // to print DFS traversal
        DFSUtil(v, visited);
    }
    
    void DFSUtil(int v, bool visited[])
    {
        // Mark the current node as visited and
        // print it
        visited[v] = true;
        cout << v << " ";
        
        // Recur for all the vertices adjacent
        // to this vertex
        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                DFSUtil(*i, visited);
    }};
int main()
{
    
    
    int k;
    cin>>k;
    test t(k);
    //cin>>nroad>>mcity>>croad>>clib;
    
    
    
    
    
   // list<int>::iterator put;
    /*for(put=adj[0].begin();put!=adj[0].end();put++)
     cout<<*put<<endl;
     cout<<"1"<<endl;
     for(put=adj[1].begin();put!=adj[1].end();put++)
     cout<<*put<<endl;
     
     */
}
