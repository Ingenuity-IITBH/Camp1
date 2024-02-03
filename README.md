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

## Session 3: Dynamic Programming - II
### Presented by: Prathmesh Ingle and Akash Deep
