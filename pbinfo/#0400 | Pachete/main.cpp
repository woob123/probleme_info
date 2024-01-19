#include <fstream>
using namespace std;
ifstream cin("pachete.in");
ofstream cout("pachete.out");
int n , p , cnt , v[1005];
struct poz{
    int i , j;
} a[1005];

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    p = n + 1;
    v[p] = 0;
    for(int i = 1; i <= n ; i++)
        if(v[i] != i){
            if(i != p){
                cnt++;
                swap(v[i],v[p]);
                a[cnt].i = i;
                a[cnt].j = p;
                p = i;
            }
            for(int j = 1; j <= n + 1; j++)
                if(v[j] == i){
                    cnt++;
                    a[cnt].i = j;
                    a[cnt].j = p;
                    swap(v[p],v[j]);
                    p = j;
                    break;
                }
        }
    cout << cnt << '\n';
    for (int i = 1; i<=cnt; i++)
        cout << a[i].i << " " << a[i].j << '\n';
}
