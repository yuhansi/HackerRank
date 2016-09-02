#include <iostream>
#include <deque> 
using namespace std;
void printKMax(int arr[], int n, int k) {
	//Write your code here.
	// Declare deque q
    deque<int> q(k);
    // Process first k elements of the array
    int i;
    for(i = 0; i < k; ++i) {
    	// For each element, the previous smaller elements are removed from the queue
   		while((!q.empty()) && arr[i] >= arr[q.back()]) {
   			// Remove from the end of the queue
   			q.pop_back();
   		}
   		// Add new element at the end of the queue
   		q.push_back(i);
    }
    // Process the remaining elements
    for( ; i < n; ++i) {
    	// The element at the front of the queue is the largest element of previous k elements, print it
    	cout << arr[q.front()] << " ";
    	// Remove the previous elements from the queue
    	while((!q.empty()) && q.front() <= (i - k)) {
    		// Remove from the front of the queue
    		q.pop_front();
    	}
    	// Remove the elements that are smaller than the one currently being added
    	while((!q.empty() && arr[i] >= arr[q.back()])) {
    		// Remove from the end of the queue
    		q.pop_back();
    	}
    	// Add new element at the end of the queue
    	q.push_back(i);
    }
    // Print the last largest element 
    cout << arr[q.front()] << endl;
}
int main() {
  
   int t;
   cin >> t;
   while(t > 0) {
      int n, k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i = 0; i < n; i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}