#include <iostream>
using namespace std;
int main(){
    int arr[]={12,21,60,41,51};
    int max=arr[0];
    
    for(int i=0; i<5; ++i){
        if(arr[i] > max){
            max=arr[i];
        }
       
    }
     cout<<max;
}