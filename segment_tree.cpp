vec seg(1e6 + 7);
 
void build(ll node, ll st, ll end, vec &v)
{
    if (st == end)
    {
        seg[node] = v[st];
        return;
    }
    ll mid = (st + end) / 2;
    build(2 * node, st, mid, v);
    build(2 * node + 1, mid + 1, end, v);
    seg[node] = seg[2 * node] + seg[2 * node + 1];
}
 
void update(ll node, ll st, ll end, vec &v, ll i, ll val)
{
    if (st == end)
    {
        v[st] = val;
        seg[node] = val;
        return;
    }
    ll mid = (st + end) / 2;
    if (i <= mid)
    {
        update(2 * node, st, mid, v, i, val);
    }
    else
    {
        update(2 * node + 1, mid + 1, end, v, i, val);
    }
    seg[node] = seg[2 * node] + seg[2 * node + 1];
}
ll query(ll node, ll st, ll end, vec &v, ll p, ll q)
{
    if (st > q || p > end)
    {
        return 0;
    }
    if (p <= st && q >= end)
    {
        return seg[node];
    }
    ll mid = (st + end) / 2;
    ll q1 = query(2 * node, st, mid, v, p, q);
    ll q2 = query(2 * node + 1, 1 + mid, end, v, p, q);
    return q1 + q2;
}
