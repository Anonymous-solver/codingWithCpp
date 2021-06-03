#include <bits/stdc++.h>
using namespace std;
int w,t;
char word[10010],text[1000010];
int Next[10010];

void next()
{
    Next[0]=-1;
    int k=-1,i=0;
    while (i != w) {

        if (k == -1 || word[i] == word[k])
        {
            i++;
            k++;
            if(word[i] == word[k])
            {
                Next[i] = Next[k];
            }
            else
            {
                Next[i] =k;
            }
        }
        else k =Next[k];
    }
}
int kmp() {
    int ans=0,i=0,j=0;
    while (i != t) {
        if (j == -1 || text[i] == word[j])
        {
            i++;
            j++;
        }
        else j = Next[j];

        if (j == w) {
            ans++;
            j = Next[j];
        }
    }
    return ans;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%s", word);
        scanf("%s", text);
        w = strlen(word);
        t = strlen(text);
        next();
        printf("%d\n", kmp());
    }
    return 0;
}
