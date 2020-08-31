//   https://www.hackerrank.com/challenges/cipher/problem

// This is quite a bit of more observation problem , before writing code understand the algorithm behind it
string cipher(int k, string s) {
    int n=s.size();
    int len=n-k+1;
    int arr[len];
    memset(arr,0,len);
    int val=s[0]-'0';
    arr[0]=val;
    int i;
    for( i=1;i<k;i++){
        arr[i]=(s[i]-48)^(s[i-1]^48);
    }
    int flag=0;
    for(int j=k;j<len;j++){
    flag=0;
    int p=j-1;
    int count=k-1;
    while(count--){
        flag^=arr[p--];
    }
    cout<<arr[i]<<flag;
    arr[j]=(s[j]-48)^flag;
    }
    string ans="";
    for(int i=0;i<len;i++){
        ans+=(arr[i]+'0');
    }
    return ans;
}
