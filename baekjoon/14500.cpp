#include<bits/stdc++.h>
using namespace std;

int n,m;
int arr[700][700];

int ans;
int fuc(int y,int x){
    int maxval = 0;
    int a;
    a = arr[y][x] + arr[y][x+1] + arr[y-1][x+1] + arr[y-2][x+1];
    maxval = max(maxval,a);
    a = arr[y][x] + arr[y][x-1]+arr[y-1][x-1] + arr[y-2][x-1];
    maxval = max(maxval,a);
    a = arr[y][x] + arr[y][x+1] + arr[y+1][x+1] + arr[y+2][x+1];
    maxval = max(maxval,a);
    a = arr[y][x] + arr[y][x-1] + arr[y+1][x-1] + arr[y+2][x-1];
    maxval = max(maxval,a);
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    
    for(int i=5;i<=n+5;i++){
        for(int j=5;j<=m+5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=5;i<=n+5;i++){
        for(int j=5;j<=m+5;j++){
            ans = max(ans,fuc(i,j));
        }
    }

    return 0;
}