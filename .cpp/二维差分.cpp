//#include<iostream>
//#include<cstdio>
//using namespace std;
//const int N = 1e3 + 10;
//int a[N][N], b[N][N];
//void insert(int x1, int y1, int x2, int y2, int c)
//{
//    b[x1][y1] += c;
//    b[x2 + 1][y1] -= c;
//    b[x1][y2 + 1] -= c;
//    b[x2 + 1][y2 + 1] += c;
//}
//int main()
//{
//    int n, m, q;
//    cin >> n >> m >> q;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= m; j++)
//            cin >> a[i][j];
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            insert(i, j, i, j, a[i][j]);      //构建差分数组
//        }
//    }
//    while (q--)
//    {
//        int x1, y1, x2, y2, c;
//        cin >> x1 >> y1 >> x2 >> y2 >> c;
//        insert(x1, y1, x2, y2, c);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];  //二维前缀和
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            printf("%d ", b[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//

#include <iostream>
#include <cstdio>
#include <cstring> 
using namespace std;
const int t=1e7;
int a[t][t];
int b[t][t];

void add(int x1,int y1,int x2,int y2){
	b[x1][y1]++;
	b[x1][y2+1]--;
	b[x2+1][y1]--;
	b[x2+1][y2+1]++;
}
int main(){
	a[0][0]=a[1][0]=a[0][1]=b[0][0]=b[1][0]=b[0][1]=0;
	int n,m;
	scanf("%d%d",&n,&m);
	int x1,y1,x2,y2;
	while(m--){
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		add(x1,y1,x2,y2);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
			
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}












