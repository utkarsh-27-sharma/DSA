// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

class Solution{
  public:
    long long my_counter = 0;
    void merge(long long a[], long long p, long long q, long long r){
        long long l = q-p+1;
        long long a1[l];
        long long l2 = r-q;
        long long a2[l2];
        for(long long i = 0;i<l;i++){
            a1[i] = a[i+p];
        }
        for(long long i = 0;i<l2;i++){
            a2[i] = a[q+i+1];
        }
        long long left = 0, right = 0, k = p;
        while(left < l && right < l2)
        {
            if(a1[left] <= a2[right]){
                a[k] = a1[left];
                left++;
            }
            else{
                a[k] = a2[right];
                right++;
                my_counter += (l-left); 
            }
            k++;
        }
        while(left < l){
            a[k++] = a1[left++];
        }
        while(right < l2){
            
            a[k++] = a2[right++];
        }
    }
    void mergeSort(long long a[], long long p, long long r)
    {
        if(p < r)
        {
            long long q = (p+r)/2;
            mergeSort(a, p, q);
            mergeSort(a, q+1, r);
            merge(a, p, q, r);
        }
    }
    long long int inversionCount(long long arr[],long long N)
    {
        mergeSort(arr,0,N-1);
        long long int res = my_counter;
        my_counter = 0;
        //returning the count of inversions in the array.
        return res;
    }

};
