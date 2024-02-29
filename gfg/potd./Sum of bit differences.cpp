//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    
	    long ans=0;
	    
	    for(int i=0;i<32;i++){
	        int countone=0;
	        
	        for(int j=0;j<n;j++){
	            if((arr[j]>>i & 1)==1){
	                countone++;
	            }
	        }
	        
	        ans+= (countone * (long)(n-countone))*2;
	    }
	    
	    return ans;
	}
};
