#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char name[11][13];

    while(scanf("%d", &n) != EOF){
          int arr[11]={0};

        for(int i=0; i<n; i++)
        scanf("%s", name[i]);

    int value, total;
    string nm;
    for(int i=0; i<n; i++)
    {
        cin>>nm>>value>>total;

        if(total != 0){
        int x = value/total;
        int y = x*total;
        for(int j=0; j<n; j++)
        {
            if(name[j] == nm)
            {
                arr[j] -= y;
                break;
            }
        }
        string str;
        for(int j=0; j<total; j++)
        {
           cin>>str;
           if(name[j] == str)
           {
               arr[j] += x;
           }
        }
        }

    }

    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    }

    return 0;
}
