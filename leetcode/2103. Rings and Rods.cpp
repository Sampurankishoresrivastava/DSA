class Solution {
public:
    int countPoints(string rings) {
        int count=0;
        for(int i=0;i<10;i++){
            int r=0,b=0,g=0;
            for(int j=0;j<rings.size();j++){
                if(i==(rings[j]-48)){
                    if(rings[j-1]=='R'){
                        r++;
                    }
                    else if(rings[j-1]=='B'){
                        b++;
                    }
                    else if(rings[j-1]=='G'){
                        g++;
                    }
                }
            }
            if(r>0 && b>0 && g>>0){
                count++;
            }
        }
        return count;
    }
};
