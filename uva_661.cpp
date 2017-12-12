#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c, count=1;

    while(scanf("%d %d %d", &n, &m, &c))
    {
       if(n==0&&m==0&&c==0)break;
        int arr[n+1];
        bool on[n+1], safe;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            on[i] = false;
        }

        int k, sum=0, max = 0;
        safe = true;
        for(int j=1; j<=m; j++)
        {
            cin>>k;
            if(on[k]) sum -=arr[k];
            else
            {
                sum += arr[k];
                if(max<sum)
                    max = sum;
                if(sum>c)safe = false;
            }
            on[k] = !on[k];
        }

        printf("Sequence %d\n", count++);
        if(safe)
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n", max);
        }
        else
            printf("Fuse was blown.\n");

        cout<<endl;
    }

    return 0;
}
