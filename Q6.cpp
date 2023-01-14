//Q6 - ​Given an array of size ‘n’ (initially zero) and ‘q’ number of updates where in each update we can increase the value of all index from index l to index r with value x and in the end print all the numbers of the array.

#include<iostream>
#include<vector>
using namespace std;

void query(vector <int> &v){
    int q,x;
    cout<<"Enter the number of queries: ";
    cin>>q;
    cout<<"Enter the value of x: ";
    cin>>x;
    
    while(q--){
        int l,r;
        cout<<"Enter l: ";
        cin>>l;
        cout<<"Enter r: ";
        cin>>r;
        for(int i=l;i<=r;i++){
            v[i] +=x;
        }
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector <int> v(n);
    for(int i=0;i<n;i++){
        v[i]=0;
    }

    query(v);
    
    for(int ele:v){
        cout<<ele<<" ";
    }

    return 0;

}