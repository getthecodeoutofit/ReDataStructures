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

    void reverse(){
        Node<T> *prev=nullptr,*current=head,*next=nullptr;
        while(current!=nullptr){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    size_t size(){
        size_t s;
        for(Node<T> *temp = head;temp!=nullptr;temp = temp->next){
            s++;
        }
        return s;
    }

    void sort(){
        cout << "Sorting the linkedlist: ";
        size_t count = size();
        for(Node<T> *temp = head;temp!=nullptr;temp = temp->next){
            for(size_t s = 0;s<count;s++){
                Node<T>*temp1 = temp;
                if(temp1->data > temp1->next->data){
                    T t = temp1->data;
                    temp1->data = temp1->next->data;
                    temp1->next->data = t;
                }
                temp1 = temp1->next;  
        }
        }
    }

    int search(int data){
        // int s = size();
        int f;
        return f;


    }

    

};

int main(){
    int choice;
    bool a = true;
    LL<int> *List = new LL<int>() ;
    cout << "1 - Insertion\t\t\t2 - Front Insertion:\t\t\t3 - pop:\n4 - deletionByElement:\t\t5 - deletion By Place\t\t\t6 - Display Items: \n7 - Reverse\t\t\t8 - Sort The Element:\t\t\t9 - size:\n10 - Search and Item:\n";
    while (a)
    {
    cout << "\nEnter Your choice: ";
    cin >> choice;
        switch(choice){
            case 1:int data;
            cout << "Enter the data: ";
            cin >> data;
            List->push(data);
            break;
            case 2:
            cout << "Enter the data: ";
            cin >> data;
            List->insertFront(data);
            break;
            case 3:List->pop();
            break;
            case 4:
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
            case 7:List->reverse();
            break;
            case 8:List->sort();
            break;
            case 9:int size;
            size =  List->size();
            cout << "The size of LInked List is: "<< size<<"\n";
            break;
            case 15:int sure;
            cout << "Are your Sure to Exit: ";
            cin >> sure;
            if(sure){
            a = false;
            }
            else{
                break;
            }
            break;
            default:cout << "Enter valid choice: \n";
            break;
        }
    }
    
    


    return 0;
}