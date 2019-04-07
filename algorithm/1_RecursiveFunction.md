# Recursive Function(再帰関数)
関数の中で関数を呼び出すことを再帰呼び出しと呼び、再帰呼び出しをする関数を再帰関数と言う。  
例えば階乗を作りたいとする。  
こいつは作ろうと思えばループのみで作ることが出来るが、今回は再帰関数で書いてみる。
~~~cpp
auto fact(int n)
{
    if(n == 0)
    {
        return 1;
    }else
    {
        return n * fact( n - 1 );
    }
}
~~~
再帰関数を書くときは、必ず関数が停止するように作る必要がある、これ重要。  
そのまま実行していると無限ループが発生し、スタックオーバーフローでエラーを吐くことになる。  
とはいえ今回は型推論autoを使っているので、多分推論できずにそもそもコードがエラーを吐くと思うが。  
もう一つ例として、フィボナッチ数をやってみる。  
フィボナッチ数列とは  
<img src="https://latex.codecogs.com/gif.latex?a_{n}&space;=&space;a_{n-1}&space;&plus;&space;a_{n-2}&space;(n&space;>&space;2&space;)" title="a_{n} = a_{n-1} + a_{n-2} (n > 2 )" />  
となるような数列である.  
これを簡単に実装してみる.
~~~cpp
auto fib(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
~~~
これはマトモに動かない。計算量
<img src="https://latex.codecogs.com/gif.latex?O(2^n)" title="O(2^n)" />
となり、途方もない時間が掛かるためだ。  
こういう時はメモリ領域を使うことにより計算を行うようにしよう。  
メモリ領域を使うことにより、空間計算量は増加するが時間計算量は減らすことが出来る。
~~~cpp
std::array<int, 50000> memo;

auto fib(int n)
{
	if (n <= 1)
	{
		return n;
	}
	if (memo[n] != 0)
	{
		return memo[n];
	}

	return memo[n] = fib(n - 1) + fib(n - 2);
}
~~~
これにより計算量は
<img src="https://latex.codecogs.com/gif.latex?O(n)" title="O(n)" />
まで落とすことが出来る。これなら計算できそうだ。  

# 演習
ABC 114 C  
ABC 029 C