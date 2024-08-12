#include<bits/stdc++.h>
using namespace std;

void getPset(string s){
    int size = s.size();
    int power = int(pow(2,size));
    for(int i=0;i<power;i++){
        string sub = "";
        for(int j=0;j<size;j++){
            if(i&(1<<j)){
                cout << (i&(1<<j));
                sub+=s[j];
            }
        }
        cout << sub<<", ";
    }
}

int main(){
    string s;
    cin >> s;
    getPset(s);
    return 0;
}