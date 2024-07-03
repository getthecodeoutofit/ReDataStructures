#include<bits/stdc++.h>
using namespace std;

template<typename T>
class CQ{
    private:
    int size;
    int r,f;
    T *cq;

    public:
    CQ(int s){
        size = s;
        r = -1;
        f = -1;
        cq = new T[s];
        cout << "Circular Queue Created:\n";
    }

    void callFull(){
        cout << "Queue is Full:\n";
    }

    void push(int data){
        if(f ==-1){
            f=0;
            r=0;
        }
        else if(f == r+1){
            callFull();
            return;
        }

        else if(r == size-1){
            if(f ==0){
            callFull();
            return;
            }
            else{
                r =0;
            }
        }
        else{
            r++;
        }

        cq[r] = data;
        cout << "Data Pushed: ";

    }
    void pop(){

    }
    void display(){

    }


};

int main(){
    int n;
    cout << "Enter the size of queue: ";
    cin >> n;
    CQ<int> q(n);
    bool a = true;
    int choice,data;
    while(a){
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:cin >> data;
            q.push(data);
            break;
            case 2:q.pop();
            break;
            case 3:q.display();
            break;
            case 4:a = false;
            break;
        }
    }


    return 0;
}