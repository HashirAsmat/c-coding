#include <iostream>
#include<chrono>
#include <unistd.h>
using namespace std;

int bubbleSort(int sortingArray[], int size)
{       
    // get the time start 
auto start = chrono::steady_clock::now();

    for(int i = 0; i < size; i++){
    for (int i = 0; i < size; i++)
    {
        int first, second, store;
        int index = i;
        if (sortingArray[index] > sortingArray[index + 1]){
        first = sortingArray[index];
        second = sortingArray[index + 1];

        store = first;
        first = second;
        second = store;

        sortingArray[index] = first;
        sortingArray[index + 1] = second;}
        
    }}
    //get the end time 
    auto end = chrono::steady_clock::now();
   cout << "Elapsed time in nanoseconds: "
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
        << " ns" << endl;
 
    cout << "Elapsed time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " µs" << endl;
 
    cout << "Elapsed time in milliseconds: "
        << chrono::duration_cast<chrono::milliseconds>(end - start).count()
        << " ms" << endl;
 
    cout << "Elapsed time in seconds: "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " sec";
    
    };
   
void arrayPrint(int size , int array []){
    for (int i = 0; i < size; i++){
        cout<<"the number in index "<<i<<" is: "<<array[i]<<endl;
    }
};
int main()
{
   cout<<"enter the size of array"<<endl;
   int size ;
   cin>>size;

   int *data = new int(size);
   for(int i = 0; i < size; i++){
    cout<<"Enter the number in index: "<<i<<endl;
    cin>>data[i];
   }
    bubbleSort(data,size);
    arrayPrint(size,data);
}