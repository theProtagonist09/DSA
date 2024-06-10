/*Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the
 given array into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange to the lowest
 possible order (i.e., sorted in ascending order).*/

 /*Input format:
 Arr[] = {1,3,2}
Output
: Arr[] = {2,1,3}
Explanation: 
All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1}
 , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.*/

 

 //soln

/* Algorithm / Intuition
Brute Force: Finding all possible permutations. 

Approach :(Refer Recursion Lec-12 and 13)

Step 1: Find all possible permutations of elements present and store them.

Step 2: Search input from all possible permutations.

Step 3: Print the next permutation present right after it.*/

/*Complexity Analysis
For finding, all possible permutations, it is taking N!xN. N represents the number of
 elements present in the input array. Also for searching input arrays from all possible
 permutations will take N!. Therefore, it has a Time complexity of O(N!xN).

Space Complexity :

Since we are not using any extra spaces except stack spaces for recursion calls.
So, it has a space complexity of O(1).*/