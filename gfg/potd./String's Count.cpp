long long int countStr(long long int n){
    //complete the function here
    long long int case1=1; // all a
    long long int case2=n; // one b
    long long int case3=n; // one c
    long long int case4=n*(n-1); // one b,one c
    long long int case5=(n*(n-1))/2; // two c
    long long int case6=(n*(n-1)*(n-2))/2; // one b, two c
    
    return case1+case2+case3+case4+case5+case6;
}
