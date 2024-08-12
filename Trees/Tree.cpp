#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node{
    public:
    T data;
    Node *left;
    Node *right;
    Node(T d):data(d),left(nullptr),right(nullptr){}
};

template<typename T>
void inorder(Node<T>* root){
    if(root!=nullptr){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
template<typename T>
void newInorder(vector<T> &v,Node<T>*root){
    if(root!=nullptr){
        newInorder(v,root->left);
        v.push_back(root->data);
        newInorder(v,root->right);

    }

}

template<typename T>
void BFS(Node<T>* root){
    queue<Node<T>*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<T> v;
        for(int i=0;i<size;i++){
        Node<T>* temp = q.front();
        if(temp->left!=nullptr){
            q.push(temp->left);
        }
        if(temp->right != nullptr){
            q.push(temp->right);
        }
        v.push_back(temp->data);
        q.pop();
        }
        for(auto i:v){
            cout << i <<" ";
        }
        cout << "\n";
    }

}

template<typename T>
class BSTTree{
    private:
    Node<T> *root;
    public:
    void Insert(int data){
        Node<T> *temp = root;
        Node<T> *newnode = new Node<T>(data);
        if(root == nullptr){
            root = newnode;
            return;
        }
        while(temp!=nullptr){
            if(temp->data > data ){
                if(temp->left == nullptr){
                    temp->left = newnode;
                    return;
                }
                else{
                    temp = temp->left;
                }

            }
            else if(temp->data < data){
                   if(temp->right == nullptr){
                    temp->right = newnode;
                    return;
                }
                else{
                    temp = temp->right;
                }

            }
            else{
                cout << "Data already Available:\n";
                return;
            }
        }

    }
    void deletion(int data){


    }
    void Inorder(){
        inorder(root);
        cout << "\n";
    }
    void Postorder(){
        postorder(root);
        cout << "\n";

    }
    void Preorder(){
        preorder(root);
        cout << "\n";

    }

    void levelOrder(){
        BFS(root);
        cout << "\n";
    }

    int height(){
        int height = checkH(root);
        return height;
        
    }
    void getSortedElem(vector<T> &v){
        newInorder(v,root);
        cout << "\n";
    }
};

int main(){
    BSTTree<int> *t = new BSTTree<int>();
    t->Insert(19);
    t->Insert(20);
    t->Insert(18);
    t->Insert(17);
    t->Inorder();
    t->levelOrder();

    return 0;

}