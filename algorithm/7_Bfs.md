# BFS(幅優先探索)
DFSが下に下に深く潜って探索していた。  
BFSは初めの状態から近い方から探索を行う。  
これを実現するために、BFSはQUEUEを利用する。  
流れとしては  
1. 初期状態をスタックに入れる
2. キューから状態を取り出す
3. 遷移できる訪れたことのない状態をキューに追加する
4. 2,3をキューが空になるか解が見つかるまで繰り返す

この手順で出せる。  
下にテンプレートを載せておく.
```cpp
constexpr int MAX_N = 10, MAX_M = 10;

const int INF = 100000000;
typedef pair<int, int> P;

//input
char maze[MAX_N][MAX_M+1];//迷路を表す文字配列
int N, M;
int sx, sy; //スタート座標
int gx, gy; //ゴール座標

int d[MAX_N][MAX_M];//各点までの最短距離の配列
 
//移動の四方向ベクトル
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0, 1, 0, -1 };

//(sx,sy)->(gx,gy)への最短距離を求める
//辿り着けないとINF

int bfs()
{
	queue<P> que;
	//INFで初期化
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			d[i][j] = INF;
		}
	}

	//スタート地点をキューに入れ、その点の距離を0にする
	que.push(P(0, 0));
	d[sx][sy] = 0;

	//キューが空になるまでループ
	while (que.size())
	{
		//キューの先頭を出す
		P p = que.front(); que.pop();
		//取り出した状態がゴールなら探索をやめる
		if (p.first == gx && p.second == gy) { break; }
		//移動方向をループ
		for (int i = 0; i < 4; i++)
		{
			//移動した後の点を(nx,ny)とする
			int nx = p.first + dx[i], ny = p.second + dy[i];
			
			if (
				0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' //移動可能か？
				&& d[nx][ny] == INF //訪れたことある? (INFでなければ訪れてる)
				)
			{
				//移動可能ならキューに追加
				que.push(P(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[gx][gy]; //INFでなければゴールしてる
}
```

最短路を求めたいなどの場合はこちらの方がいいかも

【演習】  
ABC007-C