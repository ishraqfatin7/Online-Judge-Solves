#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define rep(i, n) for (int i = 0; i < (n); i++)

// const int N = 1e7 + 5;
// bool mark[N];
// vector<int> primes(N);
// void sieve()
// {

//     for (int i = 2; i * i <= N; i++)
//     {
//         if (!mark[i])
//         {
//             for (int j = i * i; j <= N; j += i)
//             {
//                 mark[j] = true;
//             }
//         }
//     }
//     for (int i = 2; i <= N; i++)
//     {
//         if (!mark[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }

void solve()
{
    string s;
    getline(cin, s);
    map<string, string> mp;
    string y = s.substr(0, 2);
    mp["YEAR"] = y;
    string sem = s.substr(2, 2);
    mp["SEMESTER"] = sem == "01" ? "Spring" : "Fall";
    string dept = s.substr(4,2);
    mp["DEPARTMENT"] = dept;
    string num = s.substr(6, 3);
    mp["ID"] = num;

    cout << "Year :- " << 20 << mp["YEAR"] << endl;
    cout << "Semester :- " << mp["SEMESTER"] << endl;
    cout << "Department :- ";

    if (mp["DEPARTMENT"] == "01")
    {
        cout << "Architecture" << endl;
    }
    if (mp["DEPARTMENT"] == "02")
    {
        cout << "BBA" << endl;
    }
    if (mp["DEPARTMENT"] == "03")
    {
        cout << "Civil Engineering" << endl;
    }
    if (mp["DEPARTMENT"] == "04")
    {
        cout << "Computer Science & Engineering" << endl;
    }
    if (mp["DEPARTMENT"] == "05")
    {
        cout << "Electrical & Electronic Engineering" << endl;
    }
    if (mp["DEPARTMENT"] == "06")
    {
        cout << "Textile Engineering" << endl;
    }
    if (mp["DEPARTMENT"] == "08")
    {
        cout << "Mechanical Engineering" << endl;
    }
    if (mp["DEPARTMENT"] == "07")
    {
        cout << "Industrial & Production Engineering" << endl;
    }

    string id = mp["ID"];
    int idx = stoi(id);
    cout << "Section :- ";
    if (idx >= 1 && idx <= 50)
    {
        cout << "A" << endl;
    }
    else if (idx >= 51 && idx <= 100)
    {
        cout << "B" << endl;
    }
    else
        cout << "C" << endl;

    cout << "Lab Group :- ";
    if (idx >= 1 && idx <= 25)
    {
        cout << "A1" << endl;
    }
    else if (idx >= 26 && idx <= 50)
    {
        cout << "A2" << endl;
    }
    else if (idx >= 51 && idx <= 75)
    {
        cout << "B1" << endl;
    }
    else if (idx >= 76 && idx <= 100)
    {
        cout << "B2" << endl;
    }
    else if (idx >= 101 && idx <= 125)
    {
        cout << "C1" << endl;
    }
    else if (idx >= 126 && idx <= 150)
    {
        cout << "C2" << endl;
    }
    cout << "ID :- " << mp["ID"] << endl;
}

int main()
{
    FAST;
    // sieve();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
}