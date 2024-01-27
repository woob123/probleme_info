#include <iostream>
using namespace std;
int a[100001], b[100001], c[100001], d[100001], n, i, j, p, gasit, comun;
int main(){
	cin >> n;
	for (i=0; i<n; ++i)
       	cin >> a[i];
   	for (i=0; i<n; ++i)
      	cin >> b[i];
   	for (i=0; i<n; ++i)
      	cin >> c[i];
   	i = 0 , j = 0;
   	p = 0;
   	while(i < n && j < n)
       	if(a[i] < b[j]) ++i;
       	else{ 
       		if (a[i]==b[j]){ 
            	++j; 
            	d[p++]=a[i++]; 
        	}
        	else ++j;
		}
   	while(i < n)
       	d[p ++] = a[i ++];
	while (j < n)
       	d[p ++] = b[j ++];
   	i=0; j=0; gasit=0;
  	while (i<n && j<p && gasit==0){
        if (c[i]<d[j]) ++i;
		else
			if(c[i]==d[j]){ 
            	gasit=1; comun=c[i]; 
            	break;
        	}
            else 
                ++j;
       }
	if (gasit) cout << comun;
  	else cout << -1;

}
