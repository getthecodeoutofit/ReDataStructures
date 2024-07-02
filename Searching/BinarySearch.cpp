#include<iostream>

using namespace std;

bool binSearch(int *arr,int n,int k){
    int l =0;;
    int h = n-1;
    int mid = (h-l)/2;

    if(k == arr[mid]){

    }
    else if(k > arr[mid]){

    }
    else{

    }

}

int main(){
    int key;
    int arr[30];
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in Sorted order: ";
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    cout << "Enter the Key: ";
    cin >> key;

    if(binSearch(arr,n,key)){
        cout << "Element found: ";
    }
    else{
        cout << "no Element found: ";
    }
    return 0;
}
