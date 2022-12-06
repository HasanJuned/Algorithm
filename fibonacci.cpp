/// fibonacci --> DP (memoization code)

#include<bits/stdc++.h>
using namespace std;

int fib(int arr[], int n)
{
    if(n<=1)
    {
        arr[n] = n;
        return arr[n];
    }

    if(arr[n]== -1)
    {
        int a = fib(arr, n-2);
        int b = fib(arr, n-1);

        arr[n] = a+b;
    }
    return arr[n];
}

int main()
{
    int n;
    cin>>n;

    int arr[n+1];
    memset(arr, -1, sizeof(arr));
    int ans = fib(arr,n);

    cout<<ans<<endl;
}
