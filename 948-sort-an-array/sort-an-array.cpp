class Solution {
public:
void mergeSort(vector<int>&nums,int l,int r )
{
    if(l>=r)
    {
        return ;
    }
    int mid=l+(r-l)/2;
    mergeSort(nums,l,mid);
     mergeSort(nums,mid+1,r);
     merge(nums,l,mid,r);

}
void merge(vector<int>&nums,int l,int mid,int r)
{
    int n1=mid-l+1;//length of first half
    int n2=(r-(mid+1))+1;//length of second half
    
    vector<int> L(n1),R(n2);//declaring both left and right vectors
    for(int i=0;i<n1;i++)
    {
        
       L[i]=nums[l+i]; 
     
    }
     for(int j=0;j<n2;j++)
    {
         R[j]=nums[mid+1+j];
    }
    int i=0,j=0,currentindex=l; 
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
        {
            nums[currentindex]=L[i];
            i++;
            
        }
        else{
            nums[currentindex]=R[j];
            j++;
            
        }

        currentindex++;
    }
  while(i<n1) //remaining elements in left half if any 
  {
    nums[currentindex]=L[i];
    i++;
    currentindex++;
  }
   while(j<n2) //remaining elements in right half if any 
  {
    nums[currentindex]=R[j];
    j++;
    currentindex++;
  }


}
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
         mergeSort(nums,l,r);
         return nums;
    }
};