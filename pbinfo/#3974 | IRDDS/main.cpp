#include <iostream>
#include <algorithm>
#define N 20000
using namespace std;
vector<int> a,b,s;
int main(){
    int m,n,x;
    char c;
    cin>>m>>n>>c;
    for(int i=0;i<m;++i)
        cin>>x,a.push_back(x);
    sort(a.begin(),a.end());
    for(int i=0;i<n;++i)
        cin>>x,b.push_back(x);
    sort(b.begin(),b.end());
    switch(c){
        case '*':{
            set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(s));
            break;
        }
        case '+':{
            set_union(a.begin(),a.end(),b.begin(),b.end(),back_inserter(s));
            break;
        }
        case '-':{
            set_difference(a.begin(),a.end(),b.begin(),b.end(),back_inserter(s));
            break;
        }
        case '%':{
            set_symmetric_difference(a.begin(),a.end(),b.begin(),b.end(),back_inserter(s));
            break;
        }
    }
    for(int n:s)
        cout<<n<<' ';
    cout<<'\n';
    return 0;
}
