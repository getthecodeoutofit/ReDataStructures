#include<bits/stdc++.h>
using namespace std;

void sumCalc(int &n,int &sum){
    if(n<1){
        cout << "sum: "<<sum<<"\n";
        return;
    }
    sumCalc(n=n-1,sum = n+sum);

}

int main(){
    int n;
    cin >> n;
    int sum=0;
    sumCalc(n,sum);


    return 0;
}