#include<iostream>
using namespace std;
template <typename T>
class DeQue{
    T *q;
    int f=-1,r=-1;
    int size=0;
    public:

    DeQue(int size){
        q = new T[size];
        this->size = size;
    }
    DeQue(){
        cout << "\nObj Created: \n";

    }

    void setSize(int size){
        if(size > this->size || r< size){
        cout << "Size Increased: ";
            T *temp = new T[size];
        for(int i=0; i<this->size;i++){
            temp[i] = q[i];

        }
        delete q;
        q = temp;
        this->size = size;
        }
        else{
            if(r >= size){
                cout << "You cant Decrease the size: ";
            }
        }
    }

    void pushFront(int data){
        if(size == 0){
            cout << "No space to Insert element: ";
        }
        cout << "Pushed:\n";
        if(f == -1){
           f =0;
           r =0;
           q[f] = data;
        }
        else{
            if(f==0){

            }
            else{
                q[--f] = data;
            }
        }

    }
    void pushRear(int data){

    }
    void popFront(){

    }
    void popRear(){

    }
    void display(){

    }
    int getSize(){

    }
    int frontSize(){

    }
    int rearSize(){
        
    }
};

int main(){
    int choice;
    bool a=true;
    DeQue<int> obj(5);
    int data;
    cout << "1 - push front:\t\t2 - push back:\t\t\t3 - pop front:\n4 - pop back:\t\t5 - Display Ele:\t\t6 - Set size:\n7 - Get size:\t\t8 - front Space:\t\t9 - Back Space:\n";
    while(a){
        cout << "\nEnter the choice: ";
        cin >> choice;
        switch(choice){
            case 1:cout << "Etner the data: ";
            cin >> data;
            obj.pushFront(data);
            break;
            case 2:cout << "Enter the data: ";
            cin >> data;
            obj.pushRear(data);
            break;
            case 3:obj.popFront();
            break;
            case 4:obj.popRear();
            break;
            case 5:obj.display();
            break;
            case 6:cout << "Enter the new Size: ";
            cin >> data;
            obj.setSize(data);
            break;
            case 7:int s;
            s = obj.getSize();
            cout << "The size of Queue is: "<< s << "\n";
            break;
            case 8:
            break;
            case 9:
            break;
            case 10:a = false;
            break;
            default:cout << "Enter Valid Option:\n";
            break;

        }
    }

    return 0;
}