//Problem Link:- https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/
//Time Complexity:-O(N)
int rightrotate(int arr[],int from,int to){
    int temp=arr[to];
    for(int i=to;i>from;i--){
        arr[i]=arr[i-1];
    }
    arr[from]=temp;
}
void rearrange(int arr[],int n){
    int wrongIndex=-1;
    for(int i=0;i<n;i++){
        if(wrongIndex!=-1){
            if((arr[wrongIndex]>=0 and arr[i]<0) or (arr[wrongIndex]<0 and arr[i]>=0)){
                rightrotate(arr,wrongIndex,i);
            }
            if(i-wrongIndex>=2){
                wrongIndex+=2;
            }
            else{
                wrongIndex=-1;
            }
        }
        else{
            if((arr[i]<0 and i%2==1) or (arr[i]>=0 and i%2==0)){
                wrongIndex=-1;
            }
        }
    }
}
