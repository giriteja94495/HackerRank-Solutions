#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
for(int i=0,j=n-1;i<n;i++,j--){
   int p=j;
   int q=i+1;
    while(p--){
        cout<<" ";
    }
    while(q--){
        cout<<"#";
    }
    cout<<endl;
}

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
