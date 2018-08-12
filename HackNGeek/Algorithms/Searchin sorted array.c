// Driver program to test above function
int ssa()
{
   int arr[] = {3, 2, 10, 4, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 4;
   int result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
   return 0;
}
// A recursive binary search based function. It returns index of x in
// given array arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        // If the element is present at one of the middle 3 positions
        if (arr[mid] == x)  return mid;
        if (mid > l && arr[mid-1] == x) return (mid - 1);
        if (mid < r && arr[mid+1] == x) return (mid + 1);

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return binarySearch(arr, l, mid-2, x);

        // Else the element can only be present in right sub-array
        return binarySearch(arr, mid+2, r, x);
   }

   // We reach here when element is not present in array
   return -1;
}

