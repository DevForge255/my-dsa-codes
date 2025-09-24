#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,4,12,12,4,4,6,7,3,3,5,5,5,7};
    int n ;
    int n1=sizeof(arr)/4;
    cout<<"How many no frequency you have to print ";
    cin>>n;
    
    //pre compute 
    int hash[13]={0};
    for(int i=0;i<n1;i++ ){
        hash[arr[i]]++;
    }
    int q=n;
    while(q>0){
        q--;
        int number;
        cout<<"Enter the number for frequency";
        cin>>number;
        cout<< hash[number]<<endl;
    }
}
