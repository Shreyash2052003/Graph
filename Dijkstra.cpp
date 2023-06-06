 int dis[V],i;
        for(i=0;i<V;i=i+1)
        {
            dis[i]=1e9;
        }
        queue<int> q;
        dis[S]=0;
        q.push(S);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:adj[node])
            {
                if(dis[node]+it[1]<dis[it[0]])
                {
                   dis[it[0]]=dis[node]+it[1];
                    q.push(it[0]);
                }
            }
        }
        
        
        vector<int> real(V,-1);
        for(int i=0;i<V;i=i+1)
        {
            if(dis[i]!=1e9)
            {
                real[i]=dis[i];
            }
            
        }
        
        return real;