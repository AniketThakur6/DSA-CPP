#include <iostream>
#include <vector>
using namespace std;

bool valid(int i, int j, int n)
{
  if (i >= 0 && i < n && j >= 0 && j < n)
    return 1;
  else
    return 0;
}

void TotalWays(vector<vector<int>> &maze, int i, int j, int n, string &path, vector<string> &ans, vector<vector<bool>> &visited, vector<int> &row, vector<int> &col, string &dir)
{

  // base case
  if (i == n - 1 && j == n - 1)
  {
    ans.push_back(path);
    return;
  }

  // marked current node visited
  visited[i][j] = 1;

  // loop for all four direction
  for (int k = 0; k < 4; k++)
  {

    if (valid(i + row[k], j + col[k], n) && maze[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]])
    {
      path.push_back(dir[k]);
      TotalWays(maze,i+row[k],j+col[k],n,path,ans,visited,row,col,dir);
      path.pop_back();
    }
  }

  // when return from function marked visited node unvisited
  visited[i][j] = 0;
}

vector<string> ratInMaze(vector<vector<int>> &maze)
{
  int n = maze.size();
  vector<vector<bool>> visited(n, vector<bool>(n, 0));
  vector<string> ans;
  string path;

  // direction array for row, col, and it value
  vector<int> row = {-1, 1, 0, 0};
  vector<int> col = {0, 0, -1, 1};
  string dir = "UDLR"; // direction attacted to row,col value

  // edge case
  if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
    return ans;

  TotalWays(maze, 0, 0, n, path, ans, visited, row, col, dir);

  return ans;
}

int main()
{
  vector<vector<int>> maze = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {0, 1, 1, 1}};
  vector<string> ans = ratInMaze(maze);

  cout<<"Total no of ways is: "<<ans.size()<<endl;

  for (string val : ans)
    cout << val << endl;

  return 0;
}