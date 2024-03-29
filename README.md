# Competitive Programming Camp

We will be sharing the cpp files covered during the PPTs here

## Session 1: Binary Search
### Presented by: Anshu Kumar and Akshay Wairagade

The below cpp snippet consists of the codes covered in the PPT along with the problems from Geeksforgeeks.
```cpp
// upper bound

int upperBound(vector<int> &vec, int x){
    int n=vec.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (vec[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

// last index of element in multivalued sorted array
int lastIndex(vector<long long> &vec,long long x){
    int n=vec.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(vec[mid]==x){
            ans=mid;
            low=mid+1;
        }
        else if (vec[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

// first index of an element in multivalued sorted array
int firstIndex(vector<long long> &vec,long long x){
    int n=vec.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(vec[mid]==x){
            ans=mid;
            high=mid-1;
        }
        else if (vec[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

// find index of element in sorted array
int findElement(vector<int> &vec, int x){
   int low=0;
   int high=vec.size()-1;
   int ans=-1;
   while(low<=high){
       int mid=(low+high)/2;
       if (vec[mid]==x){
           ans=mid;
           break;
       }
       else if (vec[mid]>x){
           high=mid-1;
       }
       else{
           low=mid+1;
       }
   }
   return ans;
}

// aggressive cows

 int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(),stalls.end());
    int ans=-1;
    int low=0;
    int high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid = (low+high)/2;

        int temp = 1;
        int pre = stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-pre>=mid){
                temp++;
                pre = stalls[i];
            }
        }
        if(temp>=k){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

// first index of 1
int firstIndex(vector<int> &a, int n)
{
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==1){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}


// sqrt

long long int floorSqrt(long long int x)
{
    // Your code goes here
    long long low = 1;
    long long high = x;
    long long ans = 1;

    while(low<=high){
        long long mid = (low+high)/2;

        if(mid*mid<=x){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return ans;
}
```
## Session 2: Dynamic Programming - I
### Presented by: Prathmesh Ingle and Akash Deep

```cpp

// Fibonacci Sequence

#include<bits/stdc++.h>
using namespace std;
map<int, int> dp;
int cntr;
int fib(int n) {
    cntr++;
    if(dp.find(n) != dp.end()) {
        return dp[n];
    }
    if(n == 1 || n == 2) {
        return 1;
    } else {
        return dp[n] = fib(n - 1) + fib(n - 2);
    }
}
// 1664079      57
int main() {
    cntr = 0;
    cout << fib(30) << " ";
    cout << cntr << endl;

    return 0;
}

// minimum number of ways to reach 0, by subtracting a digit of a number.
#include<bits/stdc++.h>
using namespace std;

int dp[100010];
int foo(int n) {

    // if(dp[n] != -1)
    //     return dp[n];

    if(n == 0)
        return 0;
    if(n < 10) {
        return 1;
    }

    int ans = INT_MAX;
    int temp = n;
    while(temp != 0) {
        if(temp % 10 == 0) {
            temp /= 10;
            continue;
        } else {
            ans = min(ans, 1 + foo(n - temp % 10));
        }
        temp /= 10;
    }

    return dp[n] = ans;
}

int main() {
    memset(dp, -1, sizeof dp);
    cout << foo(2200);

    return 0;
}
```

## Session 3: Dynamic Programming - II
### Presented by: Prathmesh Ingle and Akash Deep

This session was Problem Specific.

The problems solved are:

1. https://www.geeksforgeeks.org/problems/find-optimum-operation4504/1
2. https://www.geeksforgeeks.org/problems/max-rope-cutting1312/1
3. https://www.geeksforgeeks.org/problems/rod-cutting0840/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
4. https://www.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1
5. https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
6. https://www.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1
7. https://www.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1
8. https://www.geeksforgeeks.org/problems/jump-game/1
9. https://codeforces.com/contest/1881/problem/E
10. https://codeforces.com/contest/1842/problem/C
