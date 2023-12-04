#include <fstream>
using namespace std;
int main()
{
	int dx[] = {0,1,1,1,0,-1,-1,-1};
	int dy[] = {1,1,0,-1,-1,-1,0,1};
	int x = 0, y = 0;
	ifstream f("comori.in");
	int N;
	f >> N;
	while (N > 0)
	{
		int d, p;
		f >> d >> p;
		while (p > 0)
		{
			x += dx[d-1];
			y += dy[d-1];
			p--;
		}
		N--;
	}
	f.close();
	ofstream g("comori.out");
	g << x << ' ' << y;
	g.close();
	return 0;
}

