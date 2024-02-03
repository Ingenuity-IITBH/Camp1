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
