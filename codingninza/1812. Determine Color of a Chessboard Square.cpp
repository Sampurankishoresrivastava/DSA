class Solution {
public:
    bool squareIsWhite(string coordinates) {

        int n=stoi(coordinates.substr(1));
        if(coordinates[0]=='a' || coordinates[0]=='c' || coordinates[0]=='e' || coordinates[0]=='g'){
            if(n%2!=0){
                return false;
            }
            else{
                return true;
            }
        }
        if(n%2==0){
            return false;
        }
        return true;
    }
};
