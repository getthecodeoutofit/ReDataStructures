#include<bits/stdc++.h>
using namespace std;


string lexi(string s){
    string res = "";
    int size = s.size();
    map<char,int,less<char>> m;
    for(int i=0;i<size;i++){
        m[s[i]]++;
    }
    map<char,int>::iterator it = m.begin();
    while(it!=m.end()){
        res+=it->first;
        it++;
    }
    return res;

}

int main(){
    string a;
    cin >> a;
    cout << lexi(a);
    return 0;
}