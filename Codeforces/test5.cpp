#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int n, m, a[N], tr[N * 4];

inline int get_sum(int x)
{
    int res = 0;
    while (x)
    {
        res += x % 10;
        x /= 10;
    }
    return res;
}

void build(int l, int r, int idx)
{
    if (l == r)
    {
        tr[idx] = get_sum(a[l]);
        return;
    }
    int mid = l + r >> 1;
    build(l, mid, idx << 1);
    build(mid + 1, r, idx << 1 | 1);
    tr[idx] = tr[idx << 1] + tr[idx << 1 | 1];
}

void modify(int l, int r, int ql, int qr, int idx)
{
    if (ql <= l && r <= qr)
    {
        tr[idx] = get_sum(tr[idx]);
        return;
    }
    int mid = l + r >> 1;
    if (ql <= mid)
        modify(l, mid, ql, qr, idx << 1);
    if (qr > mid)
        modify(mid + 1, r, ql, qr, idx << 1 | 1);
    tr[idx] = tr[idx << 1] + tr[idx << 1 | 1];
}

int query(int l, int r, int qx, int idx)
{
    if (l == r)
        return tr[idx];
    int mid = l + r >> 1;
    if (qx <= mid)
        return query(l, mid, qx, idx << 1);
    else
        return query(mid + 1, r, qx, idx << 1 | 1);
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        build(1, n, 1);
        while (m--)
        {
            int op, x, y;
            cin >> op >> x;
            if (op == 1)
            {
                cin >> y;
                modify(1, n, x, y, 1);
            }
            else
            {
                cout << query(1, n, x, 1) << endl;
            }
        }
    }
    return 0;
}
