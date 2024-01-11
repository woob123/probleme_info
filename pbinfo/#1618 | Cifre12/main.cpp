#include <fstream>
using namespace std;
ifstream fin("cifre12.in");
ofstream fout("cifre12.out");
int number_higher(unsigned long long n){
    switch(n){
        case 0: return 1;
        case 1: return 5;
        case 2: return 1;
        case 3: return 2;
        case 4: return 2;
        case 5: return 3;
        case 6: return 1;
        case 7: return 2;
        case 8: return 0;
        case 9: return 0;
    }
}
int number_s(int n){
    switch(n){
        case 0: return 2;
        case 1: return 7;
        case 2: return 2;
        case 3: return 3;
        case 4: return 3;
        case 5: return 4;
        case 6: return 2;
        case 7: return 5;
        case 8: return 1;
        case 9: return 2;
    }
}
int lights(unsigned long long n){
    switch(n){
        case 0: return 6;
        case 1: return 2;
        case 2: return 5;
        case 3: return 5;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 3;
        case 8: return 7;
        case 9: return 6;
    }
}
int main(){
    int c;
    fin >> c;
    if(c == 1){
        unsigned long long n;
        fin >> n;
        int cnt = 0;
        while(n){
            cnt += lights(n%10);
            n/=10;
        }
        fout << cnt;
    }
    else if(c == 2){
        unsigned long long n;
        fin >> n;
        int v[20];
        int k = 0;
        long long cnt = 0;
        while(n){
            v[++k] = n%10;
            n/=10;
        }
        for(int i = k; i > 0; i--){
            unsigned long long p = number_higher(v[i]);
            for(int j = i-1; j > 0; j--){
                p*=number_s(v[j]);
            }
            cnt += p;
        }
        fout << cnt;
    }
}
