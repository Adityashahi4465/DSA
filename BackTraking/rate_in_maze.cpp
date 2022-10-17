#include <bits/stdc++.h>
using namespace std;

 void solve(int i , int j ,int n , string move , vector<string>&ans ,vector<vector<int>>&maze , vector<vector<int>>&vis , int di[] , int dj[]){
              if( i == n-1 && j == n-1) {
                   ans.push_back(move);  
                     return;
              }
              
              string dir = "DLRU";
              for(int ind = 0 ;ind <4; ind++){
                int nexti = i+di[ind];
                int nextj = j + dj[ind];
                if(nexti >= 0 && nextj >=0 && nexti < n && nextj < n && !vis[nexti][nextj] && maze[nexti][nextj] == 1){
                    vis[i][j] = 1;
                    solve(nexti , nextj , n , move + dir[ind] ,ans , maze , vis,di,dj);
                    vis[i][j] = 0;
                }  
              }
              

}
vector<string> findPath(vector<vector<int>>&maze , int n)
{
         vector<string>ans;
         vector<vector<int>>vis ( n , vector<int>(n,0));
         int di[] = { +1 , 0 , 0 , -1};
         int dj[] = { 0 , -1 , +1 , 0};

         if(maze[0][0] == 1)  solve(0 , 0 , n , "" ,ans , maze , vis,di,dj ); 
         else ans.push_back("initial value is 0"); 
         return ans;
}

int main(){

int n = 4;
vector<vector<int>>maze (n); 
maze = {
    { 1,0,0,1 },
    { 1,1,0,1 },
    { 1,1,0,0 },
    { 0,1,1,1 }
}; 


  vector<string> ans = findPath(maze , n);
  cout<< endl;
  if(ans.size() == 0) cout<<"Rat Can't rach to the destination"<<endl;
  else for(auto x : ans) cout<<x << "\t";
  
return 0;
}