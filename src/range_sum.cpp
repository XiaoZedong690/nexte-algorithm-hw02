#include <stdio.h>
long long a[200001]; // n<=200000,[200000]是0到199999,用[200001]
long long prefix[200001];

int main()
{
    int n, q;

    if (scanf("%d%d", &n, &q) != 2)
    {
        return 0;
    }

    for (int i = 1; i <= n; i++) // a[0]不用，a[1]存第一个...从1开始编号
    {
        scanf("%lld", &a[i]);
        prefix[i] = prefix[i - 1] + a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%lld\n", prefix[r] - prefix[l - 1]);
    }
    return 0;
}