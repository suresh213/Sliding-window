#include <iostream> 
using namespace std; 
int maxSum(int arr[],int n,int k);

int main() 
{ 
    int arr[] = {1,4,7,2,4,0,7}; 
    int k = 3; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << maxSum(arr, n, k); 
    return 0; 
}
int maxSum(int arr[],int n,int k) 
{ 
    int max_sum = 0; 
    for (int i = 0; i < k; i++) 
    {
		   max_sum += arr[i]; 
	}
    int window_sum = max_sum; 
    for (int i = k; i < n; i++) { 
        window_sum+=arr[i]-arr[i - k]; 
        max_sum = max(max_sum, window_sum); 
    } 
    return max_sum; 
} 
   
