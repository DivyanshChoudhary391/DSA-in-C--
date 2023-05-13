# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of word"<<endl;
    cin>>n;
    cout<<"now enter the word"<<endl;
    char arr[n+1];
    cin>>arr;

    int i=0;
    int flag=0;
    while(i<n/2){
        if(arr[i]!=arr[n-i-1]){
            cout<<i<<" "<<n-i-1<<endl;
            cout<<arr[i]<<" "<<arr[n-i-1]<<endl;
            cout<<"not palindrome";
            flag=1;
            break;

        }
        i++;
        
        
    }
    if(flag==0){
        cout<<"palindrome";
    }
}