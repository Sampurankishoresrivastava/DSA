class Solution {
public:

    static bool cmp(pair<int,int>& a, pair<int,int>& b){
        return a.second< b.second;
    }

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        // if(k==1){
        //     return 1;
        // }
        map<int,int> mp;
        int count=0;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        vector<pair<int,int>> vc(mp.begin(),mp.end());

        sort(vc.begin(), vc.end(), &Solution::cmp);

        for(auto &it: vc){
            if(it.second<=k){
                k=k-it.second;
                count++;
            }
        }

        return vc.size() - count;
    }
};
