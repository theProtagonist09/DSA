//give the element, whose freq of appearance in arr, is greater than n/2
/*i.e freq of element > n/2(also note: that there will exist only one majority element,
if it exists at all)*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=16;
    int arr[n]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    /* (1) Use Moore's Voting algo
       (2)Check. If element given by moore's algo is majority.
    if it's majority,then it will be the ans,Otherwise there will be no majority */

    //Step 1: Moore's algo
    int el;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            el=arr[i];
            cnt=1;
        }else if(el==arr[i]){ //cnt !=0
        cnt++;
        }else{  //cnt!=0, and also arr[i] is not matched with el
        cnt--;
        }
    }

    //Step 2: checking if el ,given by moore's algo,is majority or NOT
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt1++;  //counting freq of el
        }
    }

    if(cnt1 > n/2){
        cout<<"Majority element is "<<el<<endl;
    }else{
        cout<<"No majority element"<<endl;
    }

    /*TC:O(N)+O(N), NOTE: 2nd O(N),will be removed,
    if ques states,there always exist a majority element*/

    //SC:O(1)
}    