#include <bits/stdc++.h>
#include <string>
using namespace std;
string linear_search(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){

            
            return "found";
        }
    }
    return "notfound";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];


    }
    for(int i=0;i<n;i++){
         cout<<arr[i]<<endl;


    }
    cout<<linear_search(arr,6,n);

    




}