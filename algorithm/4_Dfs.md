# DFS(深さ優先探索)
Depth-first Searchはいけるところまで突き進んで、もしも限界まで来たらまた一つ戻って限界まで......を繰り返して全探索を行うアルゴリズム。  
参考はこれ  
![dfs](https://user-images.githubusercontent.com/28126083/55755737-d3fbec00-5a8a-11e9-8de1-c4cf056b67f7.jpg)  
難しいことはない、突き進めばよい。  
基本的に左にしか行かない左がいけないなら右という規則を決めて突き進むと仮定する。  
この時の動きは  
1->2->4->8(stop)->4(左に行けないので右)->9(stop,これ以降()は略)->4->2->1->3->5->10->5->3->6->3->7->11
といった具合に探索を行う。  
例題を解いてみよう.  
【問】   
**整数n個の中のいくつかを選んでその和がkとなるか判定せよ**  

[入力]  
n = 4  
a = 1,2,4,7  
k=13  
[出力]  
Yes(13 = 2 + 4 + 7)  
  
[入力]
n = 4  
a = 1,2,4,7  
k = 15  
[出力]  
No  

【解】
```cpp
#include <array>
#include <iostream>

std::array<int,50000> a;
int n, k;

bool dfs(int i, int sum)
{
	//n個以上にはならないので判定
	if (i == n) { return sum == k; }

	//追加する場合
	if (dfs(i + 1, sum)) { return true; }

	//追加しない場合
	if (dfs(i + 1, sum + a[i])) { return true; }

	//ここまで来てる=存在しない
	return false;
}

void Solve()
{
	if (dfs(0, 0)) { std::cout << "Yes"; }
	else { std::cout << "No"; }
}

```
【追記】  
全てを調べるのはStackOverFlowになる可能性がある。  
これを解消するためにグリッドのような問題ならすでに通ったかどうかの情報を持つようにするとよい。

【演習】  
ATC001 A