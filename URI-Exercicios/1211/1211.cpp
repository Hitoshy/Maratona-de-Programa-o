#include <bits/stdc++.h>
using namespace std;

bool compare(string s1, string s2)
{
  int tamanho = s1.length();

  for (int i = 0; i < tamanho; ++i){
    if(s1[i] < s2[i]) return 1;
    if(s1[i] > s2[i]) return 0;
  }

  return 1;
}


int main()
{
  int num, tam, cont;
  char s[205];
  string linhatel;

  while(scanf("%d", &num) == 1){
    vector<string> v;
    cont = 0;

    for (int i = 0; i < num; ++i){
      scanf("%s", s);
      v.push_back(s);
    }

    sort(v.begin(), v.end(), compare);
    linhatel = v[0];
    tam = linhatel.length();

    for (int i = 1; i < num; ++i){
      for (int j = 0; j < tam; ++j){
        if(linhatel[j] == v[i][j]) cont++;
        else break;
      }

      linhatel = v[i];
    }
    printf("%d\n", cont);
  }

  return 0;
}