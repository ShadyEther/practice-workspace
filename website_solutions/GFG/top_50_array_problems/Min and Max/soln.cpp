// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}// } Driver Code Ends


// User function Template for C

struct pair getMinMax(long long int arr[], long long int n) 
{
     struct pair ob1;
     ob1.max=arr[0];ob1.min=arr[0];
    for(long long int i=0;i<n;i++)
    {
        if(arr[i]>ob1.max) ob1.max=arr[i];
        if(arr[i]<ob1.min) ob1.min=arr[i];
    }
    return ob1;
}