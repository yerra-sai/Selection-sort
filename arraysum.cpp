//write a program to add the all elements in the array 
#include <iostream>
using namespace std;
//this function is used to insert elemets in the array  it takes O(n) time 
void insert(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
  
}
//this function is used to print the element in the array 
void printthearray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
//this function work is to add the elements in the array and the time complexity of this array is O(n)
int  sumofarray(int arr[],int n){
   if(n==0){
     return 0;
   }
 
    return arr[n-1]+sumofarray(arr,n-1);
}
//this is the main sum where the intilization of n is done and calling of all functions is done
int main(){
    int n;
    cout<<"Enter the value in n :";
    cin >> n;
    int s;
    int arr[n];
    insert(arr,n);
    printthearray(arr,n);
    int i=0;
    int Sum=sumofarray(arr,n);
    cout<<"Sum of the array is : "<<Sum<<" ";
    return 0;
}
