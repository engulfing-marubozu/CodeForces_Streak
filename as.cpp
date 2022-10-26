#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
#define pb push_back
#define fr first
#define sc second
#define repg(i,a,b) for(int i= a ; i < b ; ++i)
#define rep(i,n) repg(i,0,n)
#define sz(x) int(x.size())
#define mp make_pair
#define pyes printf("YES\n")
#define pno printf("NO\n")
#define sfi(n) scanf("%d",&n)
#define pfi(n) printf("%d",n)
#define pfis(n) printf("%d ",n)
#define pfin(n) printf("%d\n",n)
#define pfln(n) printf("%lld\n",n)
#define pfl(n) printf("%lld",n)
#define sfl(n) scanf("%lld",&n)
#define scan(v,n) rep(i,n){int j;sfi(j);v[i]=j;}
#define scanpb(v,n) rep(i,n){int temp;sfi(temp);v.pb(temp);}
#define print(v,n) rep(i,n){pfis(v[i]);}
#define printg(v,a,b) repg(i,a,b){pfis(v[i]);}
#define endl "\n" 
#define mod 1000000007
using namespace std;
int highestPowerof2(int n)
{
    int res = 0;
    for (int i = n; i >= 1; i--) {
        // If i is a power of 2
        if ((i & (i - 1)) == 0) {
            res = i;
            break;
        }
    }
    return res;
}
void solution(){
int n;
sfi(n);
vi v(n);
scan(v,n);
ll cn=0;
int temp;
rep(i,n){
    temp=0;
    int tm=v[i];
    while(tm%2==0){
        tm=tm/2;
        temp++;
    }
    cn=cn+temp;
}
if(cn>=n){
    cout<<0<<endl;
    return ;
}else{
    int ans =0;
    int total=0;
    priority_queue<int>que;
    for(int i=n;i>=2;i--){
        int temp=0;
        int t2=i;
        while(t2%2==0){
           t2=t2/2;
            temp++;
        }
        total=total+temp;
        que.push(temp);
    }
    if(total+cn<n){
       cout<<-1<<endl;
       return;
    }else{
        while(cn<n){
            int tp=que.top();
            que.pop();
            cn=cn+tp;
            ans++;
        }
        cout<<ans<<endl;
        return ;
    }
   
}


}
int main()
{
int t;
sfi(t);
while(t--){
solution();
}
return 0;
}