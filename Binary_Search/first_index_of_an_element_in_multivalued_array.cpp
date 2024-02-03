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