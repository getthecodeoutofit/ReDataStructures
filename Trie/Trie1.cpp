#include<bits/stdc++.h>

using namespace std;

struct Node{
    Node *link[26];
    bool flag = false;

    bool containKey(char c){
        return (link[c-'a']!=nullptr); 
    }

    void put(char ch,Node *node){
        link[ch-'a'] = node;
    }

    Node *get(char ch){
        
    }

};

class Trie{
    private:
    Node *root;

    public:
    Trie(){
        root = new Node();

    }

    void insertW(string word){
        Node *node = root;
        for(int i=0;i<word.size();i++){

        }


    }

    void searchW(string word){

    }
    void startWith(string prefix){

    }


};

int main(){

    Trie t;
    t.insertW("hello");
    t.searchW("hello");
    t.startWith("h");

return 0;
}