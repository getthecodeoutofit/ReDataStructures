#include<bits/stdc++.h>
using namespace std;

void getLps(int *lp,int size){

}


bool repeatedSubstringPattern(string s) {
       int size = s.size();
        int lps[size]={0};
        lps[0] = 0;
        int j=1;

       getLps(lps,size);

        for(int i=0;i<size;i++){
        cout << lps[i] <<" ";
        }

        
        int max =lps[0];
        for(int i=1;i<size;i++){
            if(max < lps[i]){
                max = lps[i];
            }
        }
        cout << max;
        if(max == 0){
            return false;
        }
        for(int i=0;i<size;i++){
            if(s[i]==s[i%max]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;

        
    }


int main(){
    string s = "ababababababaababababababaababababababa";
    if(repeatedSubstringPattern(s)){
        cout << "Matched: ";
    }
    else{
        cout << "not match;";

    }


    return 0;

}