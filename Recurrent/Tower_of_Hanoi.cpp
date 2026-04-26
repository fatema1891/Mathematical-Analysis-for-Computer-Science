#include<bits/stdc++.h>
using namespace std;
using ll =long long int ;
using v1=std::vector<ll>;
using v2=vector<v1>;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
v2 v;

void towerOf_Hanoi(ll n,char sourse,char auxiliary,char destination)
{
    if(n==1)
    {
        cout<<"Move disk 1 from "<<sourse<<" to "<<destination<<'\n';
        return;
    }
    towerOf_Hanoi(n-1,sourse,destination,auxiliary);//Move top n-1 disks from S → A using D
    cout<<"Move disk "<<n<<" from "<<sourse<<" to "<<destination<<'\n';
    towerOf_Hanoi(n-1,auxiliary,sourse,destination);//move n-1 disks from A → D using S
}

int32_t main()
{
    ll n;
    cin>>n;
    towerOf_Hanoi(n,'A','B','C');
    return 0;
}
