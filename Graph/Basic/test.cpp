#include <bits/stdc++.h>
#define ll long long
using namespace std;

int minMutation(string startGene, string endGene, vector<string> &bank)
{

    unordered_set<string> us;
    for (auto it : bank)
    {
        us.insert(it);
    }
    vector<string> s;
    int j = 0;

    for (int i = 0; i < startGene.size(); i++)
    {
        string ans = "";
        if (startGene[i] == endGene[i])
            continue;
        else
        {
            j = i;
            ans = startGene;
            ans[i] = endGene[i];
            s.push_back(ans);
        }
    }

    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (us.find(s[i]) != us.end())
        {
            count++;
            cout << s[i] << " ";
        }
    }

    if (count == 0)
        return -1;
    return count;
}

int main()
{

    string startGene = "AACCGGTT";
    string endGene = "AAACGGTA";
    vector<string> bank = {"AACCGGTA", "AACCGCTA", "AAACGGTA"};

    minMutation(startGene, endGene, bank);
    return 0;
}