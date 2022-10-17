#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    int size;
    int *s;
};

void create(Stack *st)
{
    cout << "Enter the Size\n";
    cin >> st->size;
    st->top = -1;
    st->s = new int[st->size];
}

void display(Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.s[i] << " ";
    }
    cout << endl;
}
void push(Stack *st, int key)
{
    if (st->top == st->size - 1)
        cout << "Stack OverFlow" << endl;
    else
    {
        st->top++;
        st->s[st->top] = key;
    }
}

int pop(Stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << "stack is empty, can't delete an element\n";
    else
    {
        x = st->s[st->top--];
        // st->top--;
    }
    return x;
}

int peek(Stack st, int ind)
{
    int x = -1;
    if (st.top - ind + 1 < 0)
        cout << "Invalid Index\n";
    else
    {
        x = st.s[st.top - ind + 1];
    }
    return x;
}
bool isFull(struct Stack st)
{
    if (st.top == st.size - 1)
        return true;
    else
        return false;
}
bool isEmpty(struct Stack st)
{
    if (st.top == -1)
        return true;
    else
        return false;
}

int stackTop(Stack st)
{
    if (!isEmpty(st))
    {
        return st.s[st.top];
    }
    return -1;
}
int main()
{
    struct Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    cout << "Peek : " << peek(st, 1) << endl;
    cout << "stackTop : " << stackTop(st) << endl;
    cout << "isFull : " << isFull(st) << endl;
    cout << "isEmpty : " << isEmpty(st) << endl;
    // display(st);
    return 0;
}



#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace __gnu_pbds;
#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define vi vector<ll>
#define ull unsigned long long
#define ll  long long
#define pb push_back
#define ff first
#define ss second
#define flase false
#define sz(x) ((int)x.size())
#define pll pair<ll,ll>
#define w(t) ll t;cin>>t;while(t--)
const ll mod=1e9+7;
ll inf = 1e18;
template <class T>
T gen()
{
T x;
cin >> x;
return x;
}
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}
template<class T> using pbds= tree<T, null_type, less<T>, rb_tree_tag,
tree_order_statistics_node_update>;


void solve(){
ll n;
cin>>n;
vi v(n);
generate(all(v),gen<ll>);

return;
}


int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--) solve();
return 0;
}