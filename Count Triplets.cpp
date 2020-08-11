// https://www.hackerrank.com/challenges/count-triplets-1/problem?h_l=interview&isFullScreen=false&playlist_slugs%5B%5D=virtusa


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long r) {
// lemme create 2 hashmaps for counting the number of triplets i have encountered
unordered_map<long,long> mp1;
// this is for the middle element
unordered_map<long,long> mp2;
// this is for the 3rd element in the triplet

long ans=0;
for(long i:arr){
// let us check if current element is the 3rd element of our triplet or not
if(mp2.find(i)!=mp2.end()){
    // if we have found atleast one occurrance of 3rd element we add that to our result
    ans+=mp2[i];
}
if(mp1.find(i)!=mp1.end()){
    // is the current number ,form the second number in the triplet
    mp2[i*r]+=(mp1[i]);
}
// if nothing is found ,then we add the current element *r value to the map ,so that in the coming elements of the arr
// if we find the element in it we can update the mp2
mp1[i*r]++;
    
}
return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nr_temp;
    getline(cin, nr_temp);

    vector<string> nr = split(rtrim(nr_temp));

    int n = stoi(nr[0]);

    long r = stol(nr[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<long> arr(n);

    for (int i = 0; i < n; i++) {
        long arr_item = stol(arr_temp[i]);

        arr[i] = arr_item;
    }

    long ans = countTriplets(arr, r);

    fout << ans << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
