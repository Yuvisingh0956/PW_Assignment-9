//​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The man starts his trek on point 0 with altitude equal 0. You are given an integer array height of length n where height[i] is the net height in altitude between points i​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.

#include<iostream>
#include<vector>
using namespace std;

int max(vector <int> &v){
    int maximum=v[0];
    for(int i=0;i<v.size();i++){
        if(maximum<v[i]){
            maximum=v[i];
        }
    }
    return maximum;
}

int main(){
    //asking user for size of vector height
    int n;
    cout<<"Enter size of vector height: ";
    cin>>n;

    //Declaring vector height
    vector <int> height(n+1);

    //Declaring first element of height as 0
    height[0]=0;
    //Taking input from user of elements of vector height
    for(int i=1;i<n+1;i++){
        cin>>height[i];
    }

    //Prefix sum of vector height
    for(int i=1;i<n+1;i++){
        height[i]+=height[i-1];
    }

    //Maximum of vector height
    int a=max(height);

    cout<<a;

    return 0;
}