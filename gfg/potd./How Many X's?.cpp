// User function Template for C++

class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int ans=0;
        
        for(int i=L+1;i<R;i++){
            ans+= singleCount(i,X);
        }
        
        return ans;
    }
    
  private:
    int singleCount(int i, int x){
        int count=0;
        
        while(i){
            int temp=i%10;
            
            if(temp==x){
                count++;
            }
            
            i=i/10;
        }
        
        return count;
    }  
};
