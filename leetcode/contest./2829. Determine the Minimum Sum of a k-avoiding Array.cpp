class Solution {
public:
    int minimumSum(int n, int k) {
        int sum=0;
        set<int> ans;
        // vector<int> ans;
        // int i=1;
        int i=0;
        int start=1;
        // if(n==1 && k==1){
        //     return 2;
        // }
        // else ans.push_back(1);
        while(i<n){
            // int temp=k-start;
            // if(find(ans.begin(),ans.end(),k-start)!=ans.end()){
            if(ans.find(k-start)==ans.end()){
                sum=sum+start;
                // ans.push_back(start);
                ans.insert(start);
                start++;
                // n--;
                i++;
            }
            else{
                start++;
            }
        }
        return sum;
    }
};
