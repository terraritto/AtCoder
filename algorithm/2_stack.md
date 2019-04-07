# Stack(スタック)
簡単、データを配列にぶち込む。  
ぶち込んだのが最後のモノから取り出していく、これだけ。  
実際にプログラム見て動き見た方が速いので、そうしよう。
~~~cpp
#include <stack>
#include <iostream>

int main()
{
	std::stack<int> s;
	//start
	// {}

	s.push(1);
	// {}->{1}

	s.push(2);
	// {1}->{1,2}

	s.push(3);
	// {1,2}->{1,2,3}

	std::cout << s.top() << std::endl; //topは一番最後に追加したデータ:3

	s.pop();
	// {1,2,3} -> {1,2}

	std::cout << s.top() << std::endl; //一つ出したので値が変わる:2

	s.pop();
	// {1,2} -> {1}

	std::cout << s.top() << std::endl; //一つ出したので値が変わる:1

	s.pop();
	// {1} -> {}

	return 0;
}
~~~
もうプログラムを見てくれ、これだけで分かる。  
`後入れ先出し`の気持ちを忘れるな。
# 演習
ABC 120 C