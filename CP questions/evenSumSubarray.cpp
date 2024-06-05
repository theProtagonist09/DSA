//calculate the lenght of longest subarray,whose sum will be even
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=9;
    int arr[n]={2,4,2,1,2,4,5,1,2}; //in this case longest subArr with even sum will be {2,4,2,1,2,4,5}
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%2==0){ //if sum of all elements is even, then length of subarray will equals n
        cout<<"Length of longest subarray is "<<n<<endl; 
    }else{
        
    /*if sum of all elements is odd, then we should take out the particular portion
    which consist odd elements*/

    int i=0; //first pointer from start of arr, to find odd element
    int j=n-1;//second pointer from end of arr, to find odd element

    if(arr[i]%2==0){
        i++;  //if at i'th index, even element is present,then just increment i
    }

    if(arr[j]%2==0){
        j--;//if at j'th index, even element is present,then just decrement j
    }

    //pointer i and j will become stagnant when they enocunter their first odd element

    int leftSegment=(i-0)+1;  //length of left side segment,which consist first odd element from start of arr
    int rightSegment= ( (n-1)-j )+1; //eg. if n-1=5 ,and j is at idx=4, then segment length= 5-4+1=2

    int largestSubarrayLength= max(n-leftSegment,n-rightSegment); 
    /*largest subArray will be,after removing leftSegment or
     after removing rightSegment accordingly
     (max of remaining segment le lo,dono segment hata hata ke dekh kr )*/ 

     cout<<"Length of longest subarray is "<<largestSubarrayLength<<endl;
    }



}