#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the lonelyinteger function below.
int lonelyinteger(vector<int> a) {
    /*
    doing xor operation with 0 doesn't change the other 
    number ((0^a)=1*a + a_bar *0))
    and as we have duplicates in the input array ,
    whenever we encounter a duplicate their xor value is 0 and the order of xor's doesn't matter 
    and that 0 exor with a unique integer would result in  the same unique number 
    TIME-COMPLEXITY=O(N);
    */
    int ans=0;
for(auto a:a){
ans=ans^a;
}
return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = lonelyinteger(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
