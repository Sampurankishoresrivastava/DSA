class Solution {
public:
    int minimumSum(int num) {
        int d[4];
        for(int i=0;i<4;i++){
            d[i]=num%10;
            num=num/10;
        }
        sort(d,d+4);
        return 10 * (d[0] + d[1]) + d[2] + d[3];
    }
};
