#include <bits/stdc++.h>
#include <string>
using namespace std;
int linear_search(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){

            cout<<arr[i]<<endl;
            return 1;
        }
    }
    return 0;
}

int binary_search(int arr[],int key,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        //here values of mid small and end are printed to check with dry run
        int mid=(s+e)/2;
        if(key ==arr[mid]){
            cout<<arr[mid]<<" "<<s<<" "<<e<<endl;
            return 1;
        }
        else if(key<arr[mid]){
            cout<<mid<<"smaller"<<" "<<s<<" "<<e<<endl;
            e=mid-1;
        }
        else if(key>arr[mid]){
            cout<<mid<<"larger"<<" "<<s<<" "<<e<<endl;
            s=mid+1;
        }

    }
    return 0;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];


    }
    
    // cout<<linear_search(arr,3,n)<<endl;
    cout<<binary_search(arr,3,n)<<endl;

    




}