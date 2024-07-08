#include<bits/stdc++.h>
//string matching algo
using namespace std;
//using lps array [longest prefix-suffix array]

bool check(string s,string p){
    int memory[p.size()] = {0};
    size_t j=1;
    memory[0] = 0;
    for(size_t i=1;i<p.size()&&j<p.size();){
        if(p[i] == p[j]){
            memory[j] = i+1;
            j++;
            i++;
        }
        else{
            memory[j]=0;
            j++;
        }
    }

    for(size_t i=0;i<p.size();i++){
        cout << memory[i] << " ";
    }
    cout << "\n";
    j=0;
    for(size_t i=0;i<s.size();i++){
  
            if(s[i]==p[j]){
                j++;
            }
            else if(s[i]!=p[j]){
                j = memory[j];
            }
            if(j==p.size()){
                return true;
            }
    }
    return false;

}

int main(){
    string s,p;
    cout << "Enter the Main STring: ";
    cin >> s;
    cout << "Enter the Pattern: ";
    cin >> p;
    if(check(s,p)){
        cout << "Pattern found: ";
    }
    else{
        cout << "not found: ";
    }
    return 0;
}