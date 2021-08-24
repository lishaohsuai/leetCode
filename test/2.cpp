/*
 * @Author: hduwyx
 * @Date: 2021-08-11 08:49:28
 * @LastEditTime: 2021-08-11 09:37:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /desktop/tmp/1.cpp
 */
#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#include <algorithm>
#include <stdlib.h>
using namespace::std;
using LL = long long;
using ULL = unsigned long long;
// ULL 是可以自己取模的
using PII = pair<int,int>;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
priority_queue<int,vector<int>,less<int>> q;
int n,m,a,b,k;
const int N = 105;
char w[N][N];
int cx,cy;
int dfs(int tx,int ty) {
    // cout<<cx<<" "<<cy<<" "<<tx<<" "<<ty<<endl;
    int res = 0;
    queue<int> q;
    q.push(cx * N + cy);
    bool have[N][N] = {false};
    have[cx][cy] = true;
    while(!q.empty()) {
        int len = q.size();
        while(len --) {
            int t = q.front(); q.pop();
            int x = t / N;
            int y = t % N;
            for(int i = 0;i < 4;i ++) {
                int nx = x + dir[i][0];
                int ny = y + dir[i][1];
                if(nx == tx && ny == ty) return res;
                if(nx == n || ny == m || nx < 0 || ny < 0 || have[nx][ny] || w[nx][ny] != '.') continue;
                q.push(nx * N + ny);
                have[nx][ny] = true;
            }
        }
        res ++;
    }
    return -1;
}
int main() {
    int T;
    cin >> T;
    while(T --) {
        cin >> n >> m >> k;
        cin >> cx >> cy;
        cx --;
        cy --;
        for(int i = 0;i < n;i ++) {
            scanf("%s",&w[i]);
        }
        vector<vector<int>> h;
        for(int i = 0;i < k;i ++) {
            int x,y;
            cin >> x >> y;
            h.push_back({x - 1,y - 1});// 加入地雷
            w[x - 1][y - 1] = '&';// 表示地雷
        }
        int res = 0;
        bool f = true;
        for(auto& i : h) {
            // 按照顺序排雷
            int t = dfs(i[0],i[1]);
            if(t == -1) {
                f = false;
                break;
            } else {
                w[i[0]][i[1]] = '.';// 排完雷了
                res += t;
                cx = i[0];
                cy = i[1];
            }
        }
        if(!f) cout<<-1<<endl;
        else cout<<res<<endl;
    }
    return 0;
}