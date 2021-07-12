class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
    {
    	int i, first, second;
    
    	first = second = -1;
    	for (i = 0; i < arr_size ; i ++)
    	{
    		/* If current element is smaller than first
    		then update both first and second */
    		if (arr[i] > first)
    		{
    			second = first;
    			first = arr[i];
    		}
    
    		/* If arr[i] is in between first and 
    		second then update second */
    		else if (arr[i] > second && arr[i] != first)
    			second = arr[i];
    	}
    	if (second == -1)
    	    return -1;
    	else
    	    return second;
    }

};
