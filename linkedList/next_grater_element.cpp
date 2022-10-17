#include <bits/stdc++.h>
using namespace std;


int main(){

vector<int>a {5 ,15 , 10 , 8 , 6 ,12 , 9 , 18};
vector<int>ans;
int n = a.size();
stack<int>s;
for(int i= n - 1; i >= 0;i--){
    while(!s.empty() and s.top() <= a[i]) s.pop();
    int res = (s.empty()) ? -1 : s.top();
    s.push(a[i]);
    ans.push_back(res);
}
reverse(ans.begin() , ans.end());
for(auto x : ans){
    cout<<x<<" ";
}
return 0;
}