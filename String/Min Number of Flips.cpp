//Problem Link:- https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1
//Time Complexity:- O(N)
int minFlips (string s)
{
    // your code here
    int count0=0;
    int count1=0;
    for(int  i=0;i<s.length();i++){
        if(i%2==0){
            if(s[i]!='0'){
                count0++;
            }
        }
        else{
            if(s[i]!='1'){
                count1++;
            }
        }
    }
    int total1=count0+count1;
    count0=0,count1=0;
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            if(s[i]!='1'){
                count1++;
            }
        }
        else{
            if(s[i]!='0'){
                count0++;
            }
        }
    }
    int total2=count0+count1;
    return min(total1,total2);
}
