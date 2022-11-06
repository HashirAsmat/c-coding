#include<iostream>
using namespace std;

main(){
    int arr [6] = {1,2,3,9,5,4};
    for(int i = 0; i < 5;i++){
      if(arr[i]>arr[0])
        arr[0]=arr[i];
    }
    cout<<arr[0];
    
}