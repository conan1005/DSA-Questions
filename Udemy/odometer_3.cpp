  #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define ull unsigned long long
 #define ld long double
 #define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 #define all(x) x.begin(),x.end()
 #define pb push_back
 #define F first
 #define S second
 #define endl '\n'
 #define fo(i, a) for(int i = 0; i < a; i++)
   
 
 ll solve(ll n)
 {
    if(!n) return 0;
    
   return (n%10 - (n%10>3) +9*solve(n/10));
    
  }
 
 
 int main()
 {    fast
     ll t=1;
     cin>>t;
     for(int i=1;i<=t;i++)
     {  // cout<<"Case #"<<i<<": ";
     ll n;
     cin>>n;
     
          cout<<solve(n);
          cout<<endl;
     }
     
     
 }