#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int firstGoalCount = 0;
    int secondGoalCount = 0;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> teams;
        vector<string> team1;
        vector<string> team2;
        while (n--)
        {

            string s;
            cin >> s;
            teams.push_back(s);

            for (int i = 0; i < teams.size(); i++)
            {
                string firstTeam = teams[i];
                if (teams[i].compare(teams[0]) == 0)
                {
                    team1.push_back(teams[i]);
                }
                else
                {
                    team2.push_back(teams[i]);
                }
            }
        }

        if (team1.size() > team2.size())
        {
            cout << team1[0] << endl;
        }
        else if (team2.size() > team1.size())
        {
            cout << team2[0] << endl;
        }
        else
            cout << "Draw" << endl;
        cout << team2.size() << endl;
    }
}