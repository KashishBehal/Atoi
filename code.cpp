class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int num=0;
        int i=0;
        if(s[0]=='-'){
            i++;
        }
        while(i<s.length()){
            if(s[i]<'0' ||s[i]>'9'){
                return -1;
            }
            num=num*10;
            num=num+(s[i]-'0');
            i++;
        }
        if(s[0]=='-'){
            num=num*-1;
        }
        return num;
    }
};
