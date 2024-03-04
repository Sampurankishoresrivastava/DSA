//User function Template for C++

/*Function to swap array elements
* arr : array input
* n : number of elements in array
*/
class Solution{
  public:
    void swapElements(int arr[], int n){
        
        // Your code here
        for(int i=0;i<n-2;i++){
            int swapp=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=swapp;
        }
        
        
    }
};
