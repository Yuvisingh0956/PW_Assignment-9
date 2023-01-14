//Q1 - Given an integer array and two integers L and R. Find the sum of elements between the index L and index R. Note: Both L and R inclusive.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Asking size of vector
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    //Defining the vector
    vector <int> v(n);

    //Asking user for input of array elements
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //Prefix sum of vector v
    for(int i=1;i<n;i++){
        v[i] += v[i - 1];
    }

    //Asking user for the values of L and R
    int L,R;
    cout<<"Enter L: ";
    cin>>L;
    cout<<"Enter R: ";
    cin>>R;
    
    //With the help of prefix sum vector finding required answer
    int ans=v[R]-v[L-1];
    //Printing the required sum
    cout<<ans;
    
    return 0;
}