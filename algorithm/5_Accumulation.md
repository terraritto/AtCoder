# Accumulation(累積和)
累積を取る問題の解き方系列をまとめたい、まとめたくない？  
例題を見た方が良い  
[問題](https://qiita.com/iwakiriK/items/453cc9dc3b07f1999acc)
整数N,Mが与えられる。N回だけ整数Aiが与えられ,M回だけ整数L,Rが与えられる。  
区間ALからARの合計を求めろ。  


_入力例_  
4 1  
5 2 7 1
2 4

_出力例_  
10

_考え方_  
A[5] = {0,5,2,7,1};となっているのは分かる。  
これを左から足していくと、sum[5]={0,5,7,14,15};となる。  
<img src = "https://latex.codecogs.com/gif.latex?sum[R]&space;-&space;sum[L-1]">   
こいつを使えばあとは答えがすぐ出てくる。

~~~cpp
int main() {

	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> sum; sum.push_back(0); //margin
	for (int i = 0; i < n; i++) { cin >> a[i]; } //input
	
	for (auto iter = a.begin(); iter != a.end(); ++iter) { sum.push_back(accumulate(a.begin(), iter+1, 0)); } //累積和
	
	int L, R;
	for (int i = 0; i < m; i++) { cin >> L >> R; cout << sum[R] - sum[L - 1] << endl; }//答え
	return 0;
}
~~~

応用  
__累積GCD__  
[問題](https://atcoder.jp/contests/abc125/tasks/abc125_c)  
考え方の肝はN-1個の整数の最大公約数の最大値を求めてしまえばよい。  
私はgcdミス(C++17から対応)->個数ミス(3個でやってた)->TLE地獄(愚直過ぎた)の順に罠にハマりコンテストを終えました。  
これをどうやっていくかだけど,gcdは結合法則が成り立つというのが重要。  
GCD(X,Y)とすると、  
<img src = "https://latex.codecogs.com/gif.latex?GCD(GCD(X,Y),Z)&space;=&space;GCD(X,GCD(Y,Z))">  
となるということである。これが理解できれば累積できるやん!!!!ってなる(~~本番ならなかった~~)。  
ここで普通の累積をやってやろう、と思うかもしれないが待ってほしい。累積は結合は出来るが引き算のような要素を取り除くのような操作はない。  
なので、別の考え方をする必要がある。  
\~別の考え方\~  
両方向からgcdを取ってやる。便宜上L,Rという配列にしとく。  
`A[3] = {7,6,8};`と簡単な例として仮定する.  
そうすると次のようなものが出てくるはず。
~~~cpp
L[0] = 0; //marginのようなもの
L[1] = A[0]の最大公約数 = gcd(L[0],A[0]) =  7;
L[2] = A[0],A[1]の最大公約数 = gcd(L[1],A[1]) = 1;
L[3] = A[0],A[1],A[2]の最大公約数 = gcd(L[2],A[2]) = 1;

R[0] = A[0],A[1],A[2]の最大公約数 = gcd(R[1],A[0]) = 1;
R[1] = A[1],A[2]の最大公約数 = gcd(R[2],A[1]) = 2;
R[2] = A[2]の最大公約数 = gcd(R[3],A[2]) = 8;
R[3] = 0; //marginのようなもの
~~~
これを利用してN-1個の組み合わせ累積GCDを出すことが出来る。  
<img src="https://latex.codecogs.com/gif.latex?M(i)&space;=&space;GCD(L(i),R(i&plus;1));">  
により、N-1個を表現可能だからだ。つまり、
~~~cpp
M[0] = gcd(L[0],R[1]) = A[1],A[2]の最大公約数
M[1] = gcd(L[1],R[2]) = A[0],A[2]の最大公約数
M[2] = gcd(L[2],R[3]) = A[0],A[1]の最大公約数
//(0,1),(0,2),(1,2)とすべての要素が出てきている!!
~~~
これによりN-1個の累積gcdをM内に表すことが出来る。これの最大値を出してやりゃそれが答えだ。

一応参考コードも載せとく.
~~~cpp
template<class T> inline int GCD(T a, T b) { return b ? GCD(b, a % b) : a; }

int main() {
	int n; cin >> n;
	vector<int> a(n); for (int i = 0; i < n; ++i) { cin >> a[i]; }
	//左右から累積GCD
	vector<int> l(n + 1, 0), r(n + 1, 0);
	for (int i = 0; i < n; ++i) { l[i + 1] = GCD(l[i], a[i]); }
	for (int i = n - 1; i >= 0; --i) { r[i] = GCD(r[i + 1], a[i]); }

	//n-1個の累積GCD
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res = max(res, GCD(l[i], r[i + 1]));
	}
	cout << res << endl;
	return 0;
}
~~~
今回の例はGCD以外でも結合法則系が成り立つと使える。例えばXORとか多分同じ手が使える。  
なんかこういう計算がしっかり成り立つかってやつ、群論とかその周辺やってる人は強いんやろなぁと思った。機会ある人は勉強しとくと嬉しいことがあるかも。
