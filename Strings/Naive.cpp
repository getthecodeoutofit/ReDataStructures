//String matching bruteforce
#include<bits/stdc++.h>
using namespace std;
bool check(string s,string p){
    int j=0;
    for(int i=0;i<s.size();){
        if(j == p.size()){
            return true;
        }
        else
        {

        }

    }
    return false;

}

int main(){
    string s,p;
    cout << "ENter the string: ";
    cin >> s;
    cout << "Enter the pattern: ";
    cin >> p;
    if(check(s,p)){
        cout << "string matched: ";
    }
    else{
        cout << "Not matched: ";
    }
    return 0;
}