class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int largest=arr[0];
	    int secondLargest=-1;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>largest)
	        {
	            secondLargest=largest;
	            largest=arr[i];
	        }
	        else if(arr[i]!=largest && (secondLargest==-1 || arr[i]>secondLargest))
	            secondLargest=arr[i];
	    }
	    return secondLargest;
	}
};
