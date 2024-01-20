#include <iostream>
#include <algorithm>
using namespace std;
int S[1001], ind = 1000, pozs = 1000;
void push(int x){
    S[ind] = x;
    ind--;
}
void pop(){
    if(ind < pozs){
        S[ind+1] = 0;
        ind++;
    }
}
int top(){
    if(ind < pozs)
        return S[ind+1];
}
bool empty(){
    return ind == pozs;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string operation;
        cin >> operation;
        if(operation == "push"){
            int x;
            cin >> x;
            push(x);
        }
        else if(operation == "pop")
            pop();
        else
            cout << top() << '\n';
    }
}
