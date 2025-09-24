#include <iostream>
using namespace std;
int main(){
    int arr[]={7,1,5,3,6,4};
    int pr,buy,sell;
    int comp=0;   // it is storing the max profit of each iteration 
    for(int i=0;i<6;i++){
           int comp1=comp;  // Pre i did not doing a check with highest profit of previous iteration 
        for(int j=i+1;j<6;j++){
            pr=arr[j]-arr[i];
            if(pr<0){
                break;
            }
            if(comp<pr){
                comp=pr;
            }
            if(comp>pr&&comp>comp1){ // this time i am checking with prevous iteration max profit 
                 buy=i;
                 sell=j-1;
            }
        }
    
    
    }
    cout<<" the date on which stock has to buy is "<<buy+1<<" the date to sell the stock is "<<sell+1;
    
}
