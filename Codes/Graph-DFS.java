class Graph
{
	int N;
	boolean adj[][];
	boolean visited[];

	Graph(int n)
	{
		N = n;
		adj = new boolean[n][n];
		visited = new boolean[n];
	}

	void addEdge(int u, int v)
	{
		adj[u][v] = true;
		adj[v][u] = true;
	}

	void dfs(int s)
	{
		visited[s] = true;
		System.out.print(s + " ");
		for (int i = 0; i < N; i++)
		{
			if (adj[s][i] == true && !visited[i])
			{
				visited[i] = true;
				dfs(i);
			}
		}
	}

	boolean isConnected(int s)
	{
		return visited[s];
	}
}

class DFS
{
	public static void main(String[] args) 
    {
        Graph g = new Graph(13);
        g.addEdge(0, 5);
        g.addEdge(4, 3);
        g.addEdge(0, 1);
        g.addEdge(9, 12);
        g.addEdge(6, 4);
        g.addEdge(5, 4);
        g.addEdge(0, 2);
        g.addEdge(11, 12);
        g.addEdge(9, 10);
        g.addEdge(0, 6);
        g.addEdge(7, 8);
        g.addEdge(9, 11);
        g.addEdge(5, 3);	
		
        g.dfs(0);
        System.out.println();

        System.out.println(g.isConnected(3));
        System.out.println(g.isConnected(11));
	}
}
