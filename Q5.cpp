#include<iostream>
#include<vector>
using namespace std;

int product(vector <int> &v, int size){
    int zeroes=0,product=1;
    //taking product of elements in array except if element=0 and counting number of zeroes in the array
    for(int i=0;i<size;i++){
        if(v[i]==0){
            zeroes++;
        }
        else{
            product *=v[i];
        }
    }

    for(int i=0;i<size;i++){
        //if number of zeroes in array>1 then the required product will be zero everywhere
        if(zeroes>1){
            return 0;
        }
        //if no zeroes in array then total product of elements divided by particular element gives the required element of new array
        else if(zeroes==0){
            v[i]=product/v[i];
        }
        //if 1 zero is there and the element is not itself zero so it will definitely be zero
        else if(zeroes==1 && v[i] != 0){
            v[i]=0;
        }
        //if 1 zero is there and element=0 then the whole product calculated above will be the new element
        else{
            v[i]=product;
        }
    }
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

    //Calling function product
    product(v,n);

    //Printing the required array
    for(int ans:v){
        cout<<ans<<" ";
    }
    
    
    return 0;
}
