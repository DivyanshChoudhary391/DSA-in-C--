# include <bits/stdc++.h>
using namespace std;
int main(){

    int rows,cols;
    cout<<"Enter the number of rows and columns you want in your matrix ";
    cin>>rows>>cols;
    cout<<"Now enter the values";
    int arr2[rows][cols];
    
    //for entering values into matrix
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr2[i][j];
        }

    }

    //for printing the matrix
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr2[i][j]<<" ";
        }cout<<"\n";

    }
    //Searching is same as the printing and inputting values in


    return 0;
}