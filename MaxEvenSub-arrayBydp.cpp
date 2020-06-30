
/* find maximum sum subarray of even length using dp whose recurrence is simply

dp[i] = max({0,arr[i]+arr[i+1],arr[i]+arr[i+1]+dp[i+2]) .*/


ll maxSubArraySum(ll a[], ll size)
{
    ll dp[size];
    dp[0] = 0;
    dp[1] = a[0]+a[1];
    ll maxi = max(0ll,dp[1]);
    for(ll i = 2; i < size; i++){
        dp[i] = max((a[i]+a[i-1]),(a[i]+a[i-1]+dp[i-2]));
        maxi = max(maxi,dp[i]);
    }
    return maxi;
}

