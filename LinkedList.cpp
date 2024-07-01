#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node{
    public:
    T data;
    Node* next;
    Node(T d):data(d),next(nullptr){}
};

template<typename T>
class LL{
    private:
    Node<T> *head;
    public:
    LL():head(nullptr){}
    void insertEnd(T data){
        Node<T> * newnode = new Node<T>(data);
        if(head == nullptr){
            head = newnode;
        }
        else{
            Node<T> *temp = head;
            while(temp->next!=nullptr){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void insertFront(T data){
         Node <T> * newnode = new Node<T>(data);
        if(head == nullptr){
            head = newnode;
        }
        else{
            newnode->next = head;
            head= newnode;
        }

    }

    void push(T data){
        insertEnd(data);
    }

    void traverse(){
        Node<T> *temp = head;
        while(temp !=nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << " \n";

    }

    void deleteElement(T data,bool dir){
        Node<T> *temp = head,*slow = nullptr;
        Node<T> *del;
        if(dir){
            cout << "deleted first matched element: \n";
            while(temp->data != data &&temp!=nullptr){
                slow = temp;
                temp = temp->next;
            }
            if(temp!= nullptr){
                del = temp;
                slow->next = temp->next;
                delete del;
            }
            else{
                cout << "No elementfound: ";
            }


        }
        else{
            cout << "Deleted last matched elementL\n";

        }

    }

    void pop(){
        Node<T> *temp = head;
        if(head != nullptr){
            while(temp->next->next != nullptr){
                temp = temp->next;

            }
            Node<T> *del = temp->next;
            temp->next = nullptr;
            delete del;
        }
        else{
            throw "Empty Node Popped Exception\n";
        }
        
    }

    void deleteElement(int place){
        Node<T> *temp = head;
        Node<T> *del;
    }

    void CheckType(){
        cout << typeid(head->data).name()<<" ";
    }

    void sort(){
        Node<T> *prev=nullptr,*current=head,*next=nullptr;
        

    }
    

};

int main(){
    int choice;
    bool a = true;
    LL<int> *List = new LL<int>() ;
    cout << "1 - Insertion\t\t2 - Front Insertion:\t\t3 - pop:\n4 - deletionByElement:\t\t5 - deletion By Place\t\t6 - Display Items: \n";
    while (a)
    {
    cout << "Enter Your choice: ";
    cin >> choice;
        switch(choice){
            case 1:int data;
            cout << "Enter the data: ";
            cin >> data;
            List->push(data);
            break;
            case 2:int data;
            cout << "Enter the data: ";
            cin >> data;
            List->insertFront(data);
            break;
            case 3:List->pop();
            break;
            case 4:int data;
            cout << "Enter the element to delete: ";
            cin >> data;
            bool ch;
            cout << "Enter the directon: ";
            cin >> ch;
            List->deleteElement(data,ch);
            break;
            case 5:
            break;
            case 6:List->traverse();
            break;
            case 7:
            break;
            case 15:a = false;
            break;
            default:cout << "Enter valid choice: ";
            break;
        }
    }
    
    


    return 0;
}