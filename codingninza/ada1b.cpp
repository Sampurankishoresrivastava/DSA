#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;	 	
using namespace std;
void insertionSort(int [], int);
int main(){
auto start = high_resolution_clock::now();
int arr[50], tot, i;
cout<<"Enter the Size for Array: ";
cin>>tot;
cout<<"Enter "<<tot<<" Array Elements: ";
for(i=0; i<tot; i++)
cin>>arr[i];
insertionSort(arr, tot);
cout<<"\nThe New Array (Sorted Array):\n";
for(i=0; i<tot; i++)
cout<<arr[i]<<" ";
cout<<endl;
auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
cout << "\nTime taken by function : "<< duration.count() << " microseconds";
cout<< "\nBy SAMPURAN KISHORE SRIVASTAVA"<< " (IT-2)"<<" 07415003120";
return 0;
}
void insertionSort(int arr[], int tot){
int i, elem, j;
for(i=1; i<tot; i++){
elem = arr[i];
j = i-1;
while((elem<arr[j]) && (j>=0)){
arr[j+1] = arr[j];
j--;
}
arr[j+1] = elem;
}
}