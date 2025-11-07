// Selection Sort Algorithm
#include <iostream>
//#include<utility>
using namespace std;
void insertingelement(int arr[],int n){
    //Time complexity of this code is O(n)
    cout << "Enter the values in array :";
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
}
void printarray(int arr[],int n ){
    cout << "Selection sort of the array : ";
    //Time complexity of thiscode is O(n)
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
}
void swap(int &a,int &b){
    //Time complexity of this code is O(1)
  int temp=a;
  a=b;
  b=temp;

}
int smallestelement(int arr[],int start,int n){
    int min=start;
    for (int j = start; j < n-1; j++)
        {  //this loop runs (n-i-1) times every time
            if (arr[min] > arr[j+1])
            {
                min = j+1;//time complexity O(1)
            }
        }
        return min;
}
void SelectionSort(int arr[],int n){
    int min;
     for (int i = 0; i < n-1; i++)
    {
      
        int min=smallestelement(arr,i,n);
        if (i != min)
        {  
           swap(arr[i],arr[min]);
        }
    }
}
int main()
{
    
    
    int n;
   
    cout <<"Enter the value of n : ";
    cin >> n;
     int arr[n];
    insertingelement(arr,n);
    // space complexity is O(1)
    /*if there are n elements in the array then the
    number of time the loop will run is (n-1) times*/
   SelectionSort(arr,n);
  
    //Time Complexity is O(n)
    printarray(arr,n);
   
    return 0;
}
//Time Complexity of this code is :O(n2) because of two for loop
