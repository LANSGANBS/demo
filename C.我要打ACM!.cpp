#include <bits/stdc++.h>
#define endl '\n'
#define buff ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vpll;
const ll MAX_INT = 0x3f3f3f3f;
const ll MAX_LL = 0x3f3f3f3f3f3f3f3f;
const ll CF = 2e5 + 9;
const ll mod = 1e9 + 7;

struct Team
{
    string name;
    int ac;
    int pending;
    map<char, pair<int, int>> submitted;
};

struct Submitted
{
    string name, status, prb;
    int t;
};

bool cmp(const Team &a, const Team &b)
{
    if (a.ac != b.ac)
        return a.ac > b.ac;
    if (a.pending != b.pending)
        return a.pending < b.pending;
    return a.name < b.name;
}

bool cmpTime(const Submitted &a, const Submitted &b)
{
    return a.t < b.t;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n, q;
        cin >> n >> q;
        vector<Team> teams(n);
        for (int i = 0; i < n; i++)
        {
            cin >> teams[i].name;
        }
        vector<Submitted> submitted(q);
        for (int i = 0; i < q; i++)
        {
            string name, time, status, prb;
            cin >> name >> time >> status >> prb;
            int hours = stoi(time.substr(0, 2));
            int minutes = stoi(time.substr(3, 2));
            int t = hours * 60 + minutes;
            submitted[i] = {name, status, prb, t};
        }
        sort(submitted.begin(), submitted.end(), cmpTime);
        for (const auto &submitted : submitted)
        {
            for (auto &team : teams)
            {
                if (team.name == submitted.name)
                {
                    if (submitted.t < 300)
                    {
                        if (submitted.status == "AC" && team.submitted[submitted.prb[0]].first >= 0)
                        {
                            team.ac++;
                            team.pending += submitted.t + team.submitted[submitted.prb[0]].first * 20;
                            team.submitted[submitted.prb[0]].first = -1;
                            break;
                        }
                        else if (submitted.status != "CE" && team.submitted[submitted.prb[0]].first != -1)
                        {
                            team.submitted[submitted.prb[0]].first++;
                        }
                    }
                }
            }
        }
        sort(teams.begin(), teams.end(), cmp);
        for (const auto &team : teams)
        {
            cout << team.name << " " << team.ac << " " << team.pending << "\n";
        }
    }
}
