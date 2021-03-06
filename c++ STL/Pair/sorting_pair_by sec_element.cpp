#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define f(i,s,n)		for(int i=s;i<n;i++)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void io()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void inputArray(int a[], int n){
	f(i,0,n){
		cin>>a[i];
	}
}

void outputArray(int a[], int n){
	f(i,0,n){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}




bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){ 
    return (a.second < b.second); 
} 





void solve()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>> v;
        int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }


        sort(v.begin(),v.end(),sortbysec);

        for(auto i=0;i<n;i++){
            cout<<v[i].first<<" and "<<v[i].second<<endl;
        }




    }

}


int32_t main()
{
	io();
	solve();
	return 0;
}








