#include<algorithm>
#include<cstdio>
using namespace std;int n,R,G,B,r,g,b;
int main(){scanf("%d",&n);for(int i = 0;i<n;i++){scanf("%d %d %d",&R,&G,&B);R+=min(g,b);G+=min(r,b);B+=min(r,g);r=R;g=G;b=B;}printf("%d",min(min(r,g),b));}