#include <bits/stdc++.h>

using namespace std;

// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> vec) {

    std::sort(vec.begin(),vec.end(),[](const std::string & a,const std::string &b){
    return a.length()<.length() || a.length() == b.length() && a<=b;
    });
return vec;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
