#include<bits/stdc++.h>

using namespace std;

template<typename T>
class Vec{
    private:
    T *v;
    size_t size;
    size_t capacity;
    public:
    Vec():size(0),capacity(0),v(nullptr){}
    Vec(int size){
        v = new T[size];
        this->size = 0;
        this->capacity = (size_t)size;
    }
    Vec(int size,T data):Vec(size){
        this->size = (size_t)size;
        for(size_t i = 0;i<this->size;i++){
            v[i] = data;

        }
    }
    void pushback(){

    }
    void popback(){

    }
    void printVal(){

    }
    int size(){

    }
    int capacity(){
        
    }
};

int main(){

    return 0;
}