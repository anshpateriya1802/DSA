class Solution {
    public:
      vector<int> lcmAndGcd(int a, int b) {
          // code here
          vector<int>x;
          int gcd;
            if (a%b==0){
                  gcd=b;
              }
              else{
                  for (int i=b;i>0;i--){
                      if(a%i==0 && b%i==0){
                          gcd= i;
                          break;
                      }
                      
                  }
              }
              
              
            // LCM= |a*b|/gcd(a,b)
          
          x.push_back((abs(a*b))/gcd);
          x.push_back(gcd);//use <numeric> to use gcd
          
          return x;
      }
  };