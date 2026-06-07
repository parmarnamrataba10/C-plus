
#include<iostream>

using namespace std;

int main(){

 int size;

 cout<< "enter the size :";

 cin>> size;
 
 int arr[size];

 for(int i=0;i<size;i++){

    cout<< "array["<<i<<"] =";

    cin>> arr[i];

 }

 cout<<"even elements are :";

 for(int i=0;i<size;i++){

    if( arr[i] % 2==0){

        cout<<arr[i]<<" ";
    }
 }
    return 0;
}