class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        
        if(n<m){
            return ("lesser");
        }
        else if (n==m){
            return ("equal");
        }
        else if(n>m){
            return("greater");
        }
        else {
            cout<<"invalid";
        }
    }
};
