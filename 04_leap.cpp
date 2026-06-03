

#include<iostream>

using namespace std;

int main(){


    int first ,second;

    cout<<"enter first year :";
    
    cin>>first;
 
    cout<<"enter second year :";

    cin>>second;

    int a[100];
    int j=0;
    

    for(int i=first ;i<=second;i++){


        if(i%4==0){

            a[j]=i;
            j++;

        }
    }

    cout<<"the array is :";

    for(int i=0;i<j;i++){

        cout<<a[i]<<" ";

    }


    return 0;
}