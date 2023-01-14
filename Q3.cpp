//​Given an integer array arr consisting of 0’s and 1’s only, return the max length of sequence which contains equal numbers of 0 and 1.

#include<iostream>
#include<vector>
using namespace std;

int find(vector <int> v, int size){
    int sum=0,count=0,max_len=0;
    for(int i=0;i<size;i++){
        int zeroes=0,ones=0;
        for(int j=i;j<size;j++){
            if (v[j]==0){
                zeroes++;
            }
            else{
                ones++;
            }
            if(zeroes==ones){
            max_len=max(max_len,j-i+1);
            }
        }
    }
    return max_len;
}

int main(){
    vector <int> v={0,1,1,0,1,1,1};
    int size=v.size();
    int a=find(v,size);

    if(a==0){
        cout<<"No such sequence";
    }
    else{
        cout<<a;
    }

    return 0;
}