bool isPowerOfTwo(int n){

        bool res = false;
        if(n == 1){
            return true;
        }
        if(n > 0 && n%2 == 0){
            res = isPowerOfTwo(n/2);
        }
        return res;
  

}
