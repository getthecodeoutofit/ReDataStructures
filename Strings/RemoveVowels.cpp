#include<iostream>
using namespace std;

void remove(string &s){

}

int main(){ 
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "removing vowels: ";
    remove(s);
    cout << "The changes string is: "<< s<<"\n";

    return 0;
}