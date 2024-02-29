#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

vector<string> permutacje(vector<string> napisy) {
    vector<string> result;
    
    do {
        string res;
        for (const auto& str : napisy) {
            res += str;
        }
        result.push_back(res);
    } while (std::next_permutation(napisy.begin(), napisy.end()));

    return result;
}

int maksymalnePiekno(vector<string> napisy) {
    vector<string> permutacjeNapisów = permutacje(napisy);
    int max = 1;

    for (int i = 0; i < permutacjeNapisów.size(); i++) {
        int actualMax = 1;
        for (int j = 0; j < permutacjeNapisów[i].size(); j++) {
            if (permutacjeNapisów[i][j] == permutacjeNapisów[i][j + 1]) {
                actualMax++;
            }
            else {
                if (actualMax > max) {
                    max = actualMax;
                }
                actualMax = 1;
            }
        }
        if (actualMax > max) {
            max = actualMax;
        }
        
    }

    return max;
}

int main()
{
    int n;
    vector<string> napisy;
    string napis;

    cin >> n;

    while (n--) {
        cin >> napis;
        napisy.push_back(napis);
    }
    
    int result = maksymalnePiekno(napisy);

    cout << result;

}