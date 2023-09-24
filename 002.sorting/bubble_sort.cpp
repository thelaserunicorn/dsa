#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for(int i=n-1; i>=1; i--){
    for(int j=0; j<=i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }

}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
 
int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted Array" << endl;
    printArray(arr, N);
    bubbleSort(arr, N);
    cout << "Sorted array" << endl;
    printArray(arr, N);
    return 0;
}
