#include <fstream>
using namespace std;
ifstream f("elfii.in");
ofstream g("elfii.out");
int x,y,z,nr1,nr2,nr3,nr4,nr5,nr6,nr,max1;
int main(){
    f>>x>>y>>z;
    if((x==0&&y==0&&z==0)||(x%2==1&&y%2==1&&z%2==1))
        g<<"Poate data viitoare!";
    else{
        nr1=x*100+y*10+z;
        if(nr1%2==0 && nr1>99 && nr1 <1000){
            nr++;
            if(max1<nr1)
                max1=nr1;
        }
        nr2=x*100+z*10+y;
        if(nr2%2==0 && nr2>99 && nr2 <1000){
            nr++;
            if(max1<nr2)
                max1=nr2;
        }
        nr3=y*100+x*10+z;
        if(nr3%2==0 && nr3>99 && nr3 <1000){
            nr++;
            if(max1<nr3)
                max1=nr3;
        }
        nr4=y*100+z*10+x;
        if(nr4%2==0 && nr4>99 && nr4 <1000){
            nr++;
            if(max1<nr4)
                max1=nr4;
        }
        nr5=z*100+y*10+x;
        if(nr5%2==0 && nr5>99 && nr5 <1000){
            nr++;
            if(max1<nr5)
                max1=nr5;
        }
        nr6=z*100+x*10+y;
        if(nr6%2==0 && nr6>99 && nr6 <1000){
            nr++;
            if(max1<nr6)
                max1=nr6;
        }
        if(nr==0)
            g<<"Poate data viitoare!";
        else
            g<<nr<<'\n'<<max1;
    }
    return 0;
}
