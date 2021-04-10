#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define INF 0x3f3f3f3f            // for int
#define LL_INF 0x3f3f3f3f3f3f3f3f // for ll
#define sz(x) (int)(x).size()
#define ms(x, y) memset(x, y, sizeof(x))
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1000000007, MX = 10000 + 5;

int variables;
pair<char, int> bag[] = {
    {'g', 1},
    {'g', 2},
    {'g', 3},
    {'r', 4},
    {'r', 5},
    {'r', 6},
    {'r', 7}};
int main()
{
  sort(bag, bag + 7);
  int i = 0, c = 0;;
  do
  {
    i++;

    int g = 0, r = 0;
    for (int i = 0; i < 7; i++)
    {
      printf("%c", bag[i].f);
      if(bag[i].f=='g')g++;
      if(bag[i].f=='r')r++;
      if(g==2||r==2){
        if(g>=1&&r>=1)c++;
        break;
      }
    }
    printf("\n");
  } while (next_permutation(bag, bag + 7));

  printf("%d\n", c);
  printf("%d\n", i);
  return 0;
}