/**Divide & conquer is a technique by which we can divide a data structure by half
each time and make any decision from it in O(logn) [as binary search]. The implementation
 of this technique depends on the problem statement & requirement. The D&C code chef
  for a string may like below-*/



ll divq(ll l, ll r)
{
    if(condition){
        return something;
    }

    ll mid = (l+r)/2;

    //do if need something

    divq(l, mid);

	 //do if need something

    divq(mid+1, r);



       //do if need something


}

