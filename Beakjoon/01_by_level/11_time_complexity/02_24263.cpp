#include <iostream>
#include <vector>

using namespace std;

// 코드 1의 수행 횟수
long long count = 0;

// 알고리즘
int MenOfPassion(const vector<int>& vec, const int n)
{
	int sum = 0;

	for(int i = 1; i <= n; ++i)
	{
		sum = sum + vec[i]; // # 코드 1
		count++;
	}

    return sum;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

	vector<int> vec(n);
	fill(vec.begin(), vec.end(), 1);

	MenOfPassion(vec, n);

	cout << count << "\n1";
}