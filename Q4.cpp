//​Given an integer array arr, return the number of consecutive sequences(sub-arrays) with odd sum.

#include<iostream>
#include<vector>
using namespace std;

//declaring a function to count required odd sum from a vector with the help of it's size
int countoddsum(vector<int>v,int size){
    int count=0;
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum += v[j];
            if(sum%2!=0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    //taking input from user for the vector it's size and elements
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector <int> v(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element of array: ";
        cin>>v[i];
    }

    //calling the function countoddsum to calculate the required number of odd numbers
    int a=countoddsum(v,n);
    cout<<a;

    return 0;
}