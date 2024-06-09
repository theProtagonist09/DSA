/*There’s an array ‘A’ of size ‘N’ with positive and negative elements
(not necessarily equal). Without altering the relative order of positive and negative
elements, you must return an array of alternately positive and negative values. 
The leftover elements should be placed at the very end in the same order as in array A.*/

/* Input:
arr[] = {1,2,-4,-5,3,4}, N = 6
Output:
1 -4 2 -5 3 4*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,-4,-5,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector <int> pos,neg;
    for(int i=0;i<n;i++){   //TC:O(N)
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }else{
            pos.push_back(arr[i]);
        }
    }

    if(neg.size()<pos.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }

        int idx=2*neg.size();
        for(int i=neg.size();i<pos.size();i++){  //putting rest of the element of pos
            arr[idx]=pos[i];
            idx++;
        }
    }else{ //it will handle the case for neg.size()>pos.size() & neg.size()==pos.size()
        for(int i=0;i<pos.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }

        int idx=2*pos.size();
        for(int i=pos.size();i<neg.size();i++){  //putting rest of the element of pos
            arr[idx]=neg[i];
            idx++;
        }
    }

    for(int i=0;i<n;i++){  //don't consider for TC,as it is for returning the ans
        cout<<arr[i]<<" ";
    }

/*Time Complexity: O(2*N) { The worst case complexity is O(2*N) which is a combination
of O(N) of traversing the array to segregate into neg and pos array and O(N) for
adding the elements alternatively to the main array}.

Explanation: The second O(N) is a combination of O(min(pos, neg)) + O(leftover elements).
There can be two cases: when only positive or only negative elements are present,
O(min(pos, neg)) + O(leftover) = O(0) + O(N), and when equal no. of positive and
negative elements are present, O(min(pos, neg)) + O(leftover) = O(N/2) + O(0).
So, from these two cases, we can say the worst-case time complexity is O(N)
for the second part, and by adding the first part we get the total complexity
of O(2*N). */

//SC:O(N)   for creating two vector of space N/2 each
}