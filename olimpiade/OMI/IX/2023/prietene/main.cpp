// problema: #4343 | prietene1 (pbinfo)
// limita de timp: 1s 
// limita de memorie: 10MB/2MB
// i/o: prietene.in/prietene.out
#include <bits/stdc++.h>
#define Nmax 31700
using namespace std;
int p[3505], t = 0;
bool ciur[Nmax];
//generam ciurul lui eratostene si vectorul de numere
//prime pe care le vom folosi in descompunerea in factori primi
void eratostene(){
    ciur[0] = ciur[1] = 1;
    for(int d = 2; d * d < Nmax; ++d){
        if(ciur[d] == 0){
            p[++t] = d;
            for(int j = d * d; j < Nmax; j = j + d){
                ciur[j] = 1;
            }
        }
    }
}
//descompunearea in factori primi folosind ciurul lui eratostene
int desc(long long b){
    int fm, k = 0, x = 1;
    while(p[x] * p[x] <= b && x <= t){
        fm = 0;
        while(b % p[x] == 0){
            b = b / p[x];
            fm++;
        }
        if(fm > 0){
            k++;
        }
        x++;
    }
    if(b > 1){
        k++;
    }
return k;
}
int fr[13], ap[13], v[20005];
ifstream f("prietene.in");
ofstream g("prietene.out");
int main(){
  eratostene();
  int c, n, m;
  long long maxinr = 0, maxi = 0, s = 0;
  f >> c;
  f >> n >> m;
  for(int i = 1; i <= n + m; ++i){
      f >> v[i];
  }
  //rezolvare cerinta 1
  if(c == 1){
    //parcurgem sirul si gasim nr cu nr maxim de divizori
    for(int i = 1; i <= n + m; ++i){
        if(desc(v[i]) > maxi){
            maxi = desc(v[i]);
            maxinr = v[i];
        }
        else{
            if(desc(v[i]) == maxi){
                if(maxinr < v[i]){
                    maxinr = v[i];
                }
            }
        }
    }
  g << maxinr;
  }
  //rezolvare cerinta 2
  if(c == 2){
      for(int i = 1; i <= n; ++i){
          fr[desc(v[i])]++;
      }
      for(int i = n + 1; i <= m + n; ++i){
          ap[desc(v[i])]++;
      }
      for(int j = 1; j <= 12; ++j){
          if(fr[j] + ap[j] > 0)
              s = s + fr[j] * ap[j];
      }
      g << s;
  }
  return 0;
}
