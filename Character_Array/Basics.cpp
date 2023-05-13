# include <bits/stdc++.h>
using namespace std;
int main(){

    char arr[100];
    cin>>arr; //basic input

    cout<<arr<<endl;       //basic  output
    cout<<arr[2]<<endl;        //accessing single character

    // Accessing all characters one by one

    int i=0;
    while(arr[i] !='\0'){
        cout<<arr[i]<< " ";
        i++;

    }
    cout<<endl;

    int m;
    cout<<"enter the length of string with spaces"<<endl;
    cin>>m;
    char arr2[m+1];
    cout<<"now enter the string"<<endl;
    cin.ignore();
    cin.getline(arr2,m);
    cin.ignore();
    cout<<arr2<<endl;
    
    int j=0;
    while(arr2[j]!='\0'){
        cout<<arr2[j];
        j++;
    }



    






    return 0;
}