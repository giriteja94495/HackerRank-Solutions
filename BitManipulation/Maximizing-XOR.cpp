#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {
int ans=INT_MIN;
int local_xor;
//checking in the loop for every element between l and r inclusively
while(l<=r){
 for(int i=l;i<=r;i++){
     //every l is xor 'ed with all the elements from l to r 
    
   local_xor=l^i;
 //compared with the previous answer to check for max xor value  
if(ans<local_xor) ans=local_xor;
 }
 l++;

}
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    fout << result << "\n";

    fout.close();

    return 0;
}
