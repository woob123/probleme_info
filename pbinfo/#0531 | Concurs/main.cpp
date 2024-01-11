#include <iostream>
using namespace std;
struct medii{
    double medie;
    int indici;
}mediile[1000];
void sortare(medii v[], int a){
    for(int i = 1; i <= a; i++){
        for(int j = i + 1; j <= a; j++){
            if(v[i].medie < v[j].medie){
                swap(v[i], v[j]);  
            }
            if(v[i].medie == v[j].medie){
                if(v[i].indici > v[j].indici)
                    swap(v[i], v[j]);
            }
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int v[1000];
        int maxi = -1, mini = 1001;
        for(int j = 1; j <= m; j++){
            cin >> v[j];
            if(v[j] > maxi)
                maxi = v[j];
            if(v[j] < mini)
                mini = v[j];
        }

        double cnt = 0; 
        double sum = 0;
        for(int j = 1; j <= m; j++){
            if(v[j] != mini && v[j] != maxi){
                cnt++;
                sum += v[j];
            }
        }

        mediile[i].medie = sum/cnt;
        mediile[i].indici = i;
    }

    sortare(mediile, n);

    for(int i = 1; i <= n; i++)
        cout << mediile[i].indici << " ";
}
