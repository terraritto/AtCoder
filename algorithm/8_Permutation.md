# Permutation(順列)
C++には`next_permutation`なるものが存在する。  
これはソートされた値であれば重複があっても上手く順列を作ってくれる。  
全ての順列を用意できるということは、なんかうまく使えそう。
サンプルは下のような感じ

~~~cpp
int n;
vector<int> perm;

void permutation()
{
    for(int i = 0;i < n;i++)
    {
        perm[i] = i;
    }

    do
    {
        //permに対する操作
    }
    while (next_permutation(perm.begin(),perm.end()));
    return;
}
~~~

【演習】  
ABC054  
最初が1と決まってるので、`perm[0] = 1`となるようなものだけ考えればよい.  
「全ての順列を生成できる=1からの全ルートがある」 ともいえる。  
つまりこの全ルートがしっかり繋がってるかを見てやればそれで終わりである。