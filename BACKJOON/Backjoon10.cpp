/* ----- < 10단계 브루트 포스 > ----- */
//
//
//
//
//
/* --- < 2798 > --- */

/*
< 문제 >
	카지노에서 제일 인기 있는 게임 블랙잭의 규칙은 상당히 쉽다.
	카드의 합이 21을 넘지 않는 한도 내에서, 카드의 합을 최대한 크게 만드는 게임이다.
	블랙잭은 카지노마다 다양한 규정이 있다.

	한국 최고의 블랙잭 고수 김정인은 새로운 블랙잭 규칙을 만들어 상근, 창영이와 게임하려고 한다.

	김정인 버전의 블랙잭에서 각 카드에는 양의 정수가 쓰여 있다.
	그 다음, 딜러는 N장의 카드를 모두 숫자가 보이도록 바닥에 놓는다.
	그런 후에 딜러는 숫자 M을 크게 외친다.

	이제 플레이어는 제한된 시간 안에 N장의 카드 중에서 3장의 카드를 골라야 한다.
	블랙잭 변형 게임이기 때문에, 플레이어가 고른 카드의 합은 M을 넘지 않으면서 M과 최대한 가깝게 만들어야 한다.

	N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력하시오.

< 입력 >
	첫째 줄에 카드의 개수 N(3 ≤ N ≤ 100)과 M(10 ≤ M ≤ 300,000)이 주어진다.
	둘째 줄에는 카드에 쓰여 있는 수가 주어지며, 이 값은 100,000을 넘지 않는 양의 정수이다.

	합이 M을 넘지 않는 카드 3장을 찾을 수 있는 경우만 입력으로 주어진다.

< 출력 >
	첫째 줄에 M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 출력한다.
*/

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> v;
//	int N, M;
//	int prevValue{};
//	std::cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		int number;
//		std::cin >> number;
//
//		v.push_back(number);
//	}
//
//	for (int one = 0; one < v.size(); one++)
//	{
//		for (int two = one + 1; two < v.size(); two++)
//		{
//			for (int three = two + 1; three < v.size(); three++)
//			{
//				if (v[one] + v[two] + v[three] <= M)
//				{
//					int temp = v[one] + v[two] + v[three];
//
//					if (temp > prevValue) prevValue = temp;
//				}
//			}
//		}
//	}
//	std::cout << prevValue << '\n';
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//// 1. N개의 카드가 각각 어떤 값을 갖고있는지 입력 받아야 한다.
////		=> 여기서 N개 또한 입력을 받아야 하기 때문에 카드 값을 저장할 공간은 유동적이어야 한다.
////		=> 벡터 공간을 N만큼 준비하고 원소로 카드 값을 입력 받는다.
//	std::vector<int> v;
//	int N, M;
//	std::cin >> N >> M;
//
//	int prevValue{};
//
//	for (int i = 0; i < N; i++)
//	{
//		int number;
//		std::cin >> number;
//
//		v.push_back(number);
//	}
//// 2. N개의 카드 중에서 딱 3개를 고르는 작업이 필요하다.
////		=> 이 떄 3개의 카드가 서로 중복되어 서는 않된다.
////		=> 그리고 M이라는 지정된 값을 넘어서도 않된다.
////		=> 모든 경우의 수를 찾기 위해 중복해서 반복문을 만든다.
//	for (int one = 0; one < v.size(); one)
//	{
//		for (int two = one + 1; two < v.size(); two++)
//		{
//			for (int three = two + 1; three < v.size(); three++)
//			{
//				if (v[one] + v[two] + v[three] <= M)
//				{
//					int temp = v[one] + v[two] + v[three];
//// 3. 현재 선택된 카드보다 더 높은 값의 카드가 나올 수 있으므로 이전 값을 저장해 두었다가 그때그때 비교한다.
//					if (temp > prevValue) prevValue = temp;
//				}
//			}
//		}
//	}
//	std::cout << prevValue << '\n';
//}

/* --- < 2231 > --- */

/*
< 문제 >
	어떤 자연수 N이 있을 때, 그 자연수 N의 분해합은 N과 N을 이루는 각 자리수의 합을 의미한다.
	어떤 자연수 M의 분해합이 N인 경우, M을 N의 생성자라 한다.
	예를 들어, 245의 분해합은 256(=245+2+4+5)이 된다. 따라서 245는 256의 생성자가 된다.
	물론, 어떤 자연수의 경우에는 생성자가 없을 수도 있다.
	반대로, 생성자가 여러 개인 자연수도 있을 수 있다.

	자연수 N이 주어졌을 때, N의 가장 작은 생성자를 구해내는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 자연수 N(1 ≤ N ≤ 1,000,000)이 주어진다.

< 출력 >
	첫째 줄에 답을 출력한다. 생성자가 없는 경우에는 0을 출력한다.
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int sum, index;
//
//	for (int i = 1; i < N; i++)
//	{
//		sum = i;
//		index = i;
//
//		while (index)
//		{
//			sum += index % 10;
//			index /= 10;
//		}
//		if (N == sum)
//		{
//			std::cout << i << '\n';
//			return 0;
//		}
//	}
//	std::cout << "0\n";
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//// 1. 입력 받은 N이라는 값의 가장 작은 생성자를 찾는다. 100자리 수의 값이라 가정한다면
////		=> ? + 100자리 + 10자리 + 1자리로 찾을 수 있다. 이를 위해 모든 경우의 수를 계산해보자.
////		=> 가장 작은 생성자를 찾고 있으니 가작 작은 값부터 계산해 나아간다.
//	int sum, index;
//
//	for (int i = 1; i < N; i++)
//	{
//		sum = i;
//		index = i;
//
//		while (index)
//		{
//			sum += index % 10;
//			index /= 10;
//		}
//
//		if (N == sum)
//		{
//			std::cout << i << '\n';
//			return 0;
//		}
//	}
//	std::cout << "0\n";
//}

//#include <iostream>
//
//int main()
//{
//	int N, i, index, sum{};
//
//	for (std::cin >> N, i = N - 60; sum - N && i < N; i++)
//	{
//		for (sum = index = i; index; index /= 10) sum += index % 10;
//	}
//
//	if (sum - N) { std::cout << "0\n"; }
//	else { std::cout << i - 1; }
//}

/* --- < 7568 > --- */

/*
< 문제 >
	우리는 사람의 덩치를 키와 몸무게, 이 두 개의 값으로 표현하여 그 등수를 매겨보려고 한다.
	어떤 사람의 몸무게가 x kg이고 키가 y cm라면 이 사람의 덩치는 (x, y)로 표시된다.
	두 사람 A 와 B의 덩치가 각각 (x, y), (p, q)라고 할 때 x > p 그리고 y > q 이라면
	우리는 A의 덩치가 B의 덩치보다 "더 크다"고 말한다.
	예를 들어 어떤 A, B 두 사람의 덩치가 각각 (56, 177), (45, 165) 라고 한다면
	A의 덩치가 B보다 큰 셈이 된다.
	그런데 서로 다른 덩치끼리 크기를 정할 수 없는 경우도 있다.
	예를 들어 두 사람 C와 D의 덩치가 각각 (45, 181), (55, 173)이라면 몸무게는 D가 C보다 더 무겁고,
	키는 C가 더 크므로, "덩치"로만 볼 때 C와 D는 누구도 상대방보다 더 크다고 말할 수 없다.

	N명의 집단에서 각 사람의 덩치 등수는 자신보다 더 "큰 덩치"의 사람의 수로 정해진다.
	만일 자신보다 더 큰 덩치의 사람이 k명이라면 그 사람의 덩치 등수는 k+1이 된다.
	이렇게 등수를 결정하면 같은 덩치 등수를 가진 사람은 여러 명도 가능하다.
	아래는 5명으로 이루어진 집단에서 각 사람의 덩치와 그 등수가 표시된 표이다.

	위 표에서 C보다 더 큰 덩치의 사람이 없으므로 C는 1등이 된다.
	그리고 A, B, D 각각의 덩치보다 큰 사람은 C뿐이므로 이들은 모두 2등이 된다.
	그리고 E보다 큰 덩치는 A, B, C, D 이렇게 4명이므로 E의 덩치는 5등이 된다.
	위 경우에 3등과 4등은 존재하지 않는다.
	여러분은 학생 N명의 몸무게와 키가 담긴 입력을 읽어서 각 사람의 덩치 등수를 계산하여 출력해야 한다.

< 입력 >
	첫 줄에는 전체 사람의 수 N이 주어진다.
	그리고 이어지는 N개의 줄에는 각 사람의 몸무게와 키를 나타내는 양의 정수 x와 y가 하나의 공백을 두고 각각 나타난다.

< 출력 >
	여러분은 입력에 나열된 사람의 덩치 등수를 구해서 그 순서대로 첫 줄에 출력해야 한다.
	단, 각 덩치 등수는 공백문자로 분리되어야 한다.

< 제한 >
	2 ≤ N ≤ 50
	10 ≤ x, y ≤ 200
*/

//#include <iostream>
//#include <vector>
//
//class pair
//{
//	int x, y;
//
//public:
//	void setXY(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//
//	bool operator< (pair& p) {
//		return (x < p.x && y < p.y);
//	}
//};
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<pair> list;
//	pair temp;
//
//	for (int i = 0; i < N; i++)
//	{
//		int x, y;
//		std::cin >> x >> y;
//
//		temp.setXY(x, y);
//		list.push_back(temp);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		int count{ 1 };
//
//		for (int j = 0; j < N; j++)
//		{
//			if (list[i] < list[j]) count++;
//		}
//		std::cout << count << ' ';
//	}
//}

//#include <iostream>
//#include <cmath>
//
//int main()
//{
//	int N;
//	int arr[51][2]{};
//	int result[51];
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> arr[i][0] >> arr[i][1];
//		result[i] = 1;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) result[i]++;
//		}
//	}
//
//	for (int i = 0; i < N; i++) std::cout << result[i] << ' ';
//	std::cout << '\n';
//}

//#include <iostream>
//#include <vector>
//
//class pair
//{
//	int x, y;
//
//public:
//	void setXY(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//	bool operator< (pair& p) {
//		return (x < p.x && y < p.y);
//	}
//};
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<pair> list;
//	pair temp;
//
//	for (int i = 0; i < N; i++)
//	{
//		int x, y;
//		std::cin >> x >> y;
//
//		temp.setXY(x, y);
//		list.push_back(temp);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		int count{ 1 };
//
//		for (int j = 0; j < N; j++)
//		{
//			if (list[i] < list[j]) count++;
//		}
//		std::cout << count << ' ';
//	}
//}

/* --- < 1018 > --- */

/*
< 문제 >
	지민이는 자신의 저택에서 MN개의 단위 정사각형으로 나누어져 있는 M×N 크기의 보드를 찾았다.
	어떤 정사각형은 검은색으로 칠해져 있고, 나머지는 흰색으로 칠해져 있다.
	지민이는 이 보드를 잘라서 8×8 크기의 체스판으로 만들려고 한다.

	체스판은 검은색과 흰색이 번갈아서 칠해져 있어야 한다.
	구체적으로, 각 칸이 검은색과 흰색 중 하나로 색칠되어 있고,
	변을 공유하는 두 개의 사각형은 다른 색으로 칠해져 있어야 한다.
	따라서 이 정의를 따르면 체스판을 색칠하는 경우는 두 가지뿐이다.
	하나는 맨 왼쪽 위 칸이 흰색인 경우, 하나는 검은색인 경우이다.

	보드가 체스판처럼 칠해져 있다는 보장이 없어서,
	지민이는 8×8 크기의 체스판으로 잘라낸 후에 몇 개의 정사각형을 다시 칠해야겠다고 생각했다.
	당연히 8*8 크기는 아무데서나 골라도 된다.
	지민이가 다시 칠해야 하는 정사각형의 최소 개수를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 N과 M이 주어진다.
	N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수이다.
	둘째 줄부터 N개의 줄에는 보드의 각 행의 상태가 주어진다. B는 검은색이며, W는 흰색이다.

< 출력 >
	첫째 줄에 지민이가 다시 칠해야 하는 정사각형 개수의 최솟값을 출력한다.

< 풀이 >
	M*N크기의 체스판을 모두 돌면서 다시 칠해야 하는 정사각형의 수가 최소인 경우를 찾으면 된다.
	전체 체스판에서 8*8크기의 체스판을 1칸씩 이동시키며 바꿔야하는 정사각형의 수를 확인한다.
	그림을 그려보면 흰색이 먼저 시작할 때는 행+열이 짝수일 때 흰색, 홀수일 때 검은색이고 검은색이 먼저 시작할 때는 그 반대이다.
	행+열의 값에 따라 경우를 나누어, 흰색이라면 검은색으로 바꾸는 수를 증가, 검은색이라면 흰색으로 바꾸는 수를 증가시킨다.
	8*8의 체스판을 돌며 흰색과 검을색을 바꿔 낳아가고 바꿔야 하는 흰색 수와 검은색 수중 작은 값을 기억한다.
	모든 경우의 수를 다 점검하고 가장 작은 값을 출력한다.
*/

//#include <iostream>
//
//std::string WhiteFirst[8]{
//	{"WBWBWBWB"},
//	{"WBWBWBWB"},
//	{"WBWBWBWB"},
//	{"WBWBWBWB"},
//	{"WBWBWBWB"},
//	{"WBWBWBWB"},
//	{"WBWBWBWB"},
//	{"WBWBWBWB"}
//};
//std::string BlackFirst[8]{
//	{"BWBWBWBW"},
//	{"BWBWBWBW"},
//	{"BWBWBWBW"},
//	{"BWBWBWBW"},
//	{"BWBWBWBW"},
//	{"BWBWBWBW"},
//	{"BWBWBWBW"},
//	{"BWBWBWBW"}
//};
//
//std::string block[50];
//
//int WF_Count(int x, int y)
//{
//	int count{};
//
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (block[x + i][y + j] != WhiteFirst[i][j]) count++;
//		}
//	}
//	return count;
//}
//
//int BF_Count(int x, int y)
//{
//	int count{};
//
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (block[x + i][y + j] != BlackFirst[i][j]) count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int size[2];
//	int count;
//	int min{ 64 };
//
//	std::pair<int, int> p1;
//	std::cin >> p1.first >> p1.second;
//
//	for (int i = 0; i < p1.first; i++)
//	{
//		std::cin >> block[i];
//	}
//
//	for (int i = 0; i + 8 <= p1.first; i++)
//	{
//		for (int j = 0; j + 8 <= p1.second; j++)
//		{
//			int temp;
//			temp = (WF_Count(i, j) < BF_Count(i, j)) ? WF_Count(i, j) : BF_Count(i, j);
//
//			if (temp < min) min = temp;
//		}
//	}
//	std::cout << min << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	char block[50][50];
//
//	int N, M;
//	std::cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++) std::cin >> block[i][j];
//	}
//
//	int min{ 64 };
//
//	for (int i = 0; i < N - 7; i++)
//	{
//		for (int j = 0; j < M - 7; j++)
//		{
//			int black{}, white{};
//
//			for (int i8 = i; i8 < i + 8; i8++)
//			{
//				for (int j8 = j; j8 < j + 8; j8++)
//				{
//					if ((i8 + j8) % 2 == 0) {
//						(block[i8][j8] == 'W') ? black++ : white++;
//					}
//					else {
//						(block[i8][j8] == 'W') ? white++ : black++;
//					}
//				}
//			}
//			min = (min < black) ? min : black;
//			min = (min < white) ? min : white;
//		}
//	}
//	std::cout << min << '\n';
//}

/* --- < 1436 > --- */

/*
< 문제 >
	666은 종말을 나타내는 숫자라고 한다.
	따라서, 많은 블록버스터 영화에서는 666이 들어간 제목을 많이 사용한다.
	영화감독 숌은 세상의 종말 이라는 시리즈 영화의 감독이다.
	조지 루카스는 스타워즈를 만들 때, 스타워즈 1, 스타워즈 2, 스타워즈 3, 스타워즈 4, 스타워즈 5, 스타워즈 6과 같이
	이름을 지었고, 피터 잭슨은 반지의 제왕을 만들 때, 반지의 제왕 1, 반지의 제왕 2, 반지의 제왕 3과 같이
	영화 제목을 지었다.

	하지만 숌은 자신이 조지 루카스와 피터 잭슨을 뛰어넘는다는 것을 보여주기 위해서 영화 제목을 좀 다르게 만들기로 했다.

	종말의 숫자란 어떤 수에 6이 적어도 3개이상 연속으로 들어가는 수를 말한다.
	제일 작은 종말의 숫자는 666이고, 그 다음으로 큰 수는 1666, 2666, 3666, .... 과 같다.

	따라서, 숌은 첫 번째 영화의 제목은 세상의 종말 666,
	두 번째 영화의 제목은 세상의 종말 1666 이렇게 이름을 지을 것이다.
	일반화해서 생각하면, N번째 영화의 제목은 세상의 종말 (N번째로 작은 종말의 숫자) 와 같다.

	숌이 만든 N번째 영화의 제목에 들어간 숫자를 출력하는 프로그램을 작성하시오.
	숌은 이 시리즈를 항상 차례대로 만들고, 다른 영화는 만들지 않는다.

< 입력 >
	첫째 줄에 숫자 N이 주어진다. N은 10,000보다 작거나 같은 자연수이다.

< 출력 >
	첫째 줄에 N번째 영화의 제목에 들어간 수를 출력한다.

< 풀이 >
	name을 665부터 1씩 증가하며 모든 수를 탐색하고 종말의 수라면 count++을 하여 count==N이 되는 순간의 name값을 출력한다.
	현재 숫자가 종말의 숫자인지 판별하는 제어문을 만든다. 종말의 숫자는 6이 연속으로 적어도 3개 이상이 들어가는 수이다.

	예를 들어 11323566625라고 가정하였을 때
	11323566625는 당장 666으로 나누어 지지 않는다. 그러므로 먼저 10으로 나누어 준다.
	1132356662의 도 당장 666으로 나누어 지지 않는다. 그러므로 또 10으로 나누어 준다.
	113235666는 666으로 나누어 진다.

	다른 예로 12345를 들어보면
	12345는 666으로 나누어 지지 않느니 10으로 나눈다.
	1234도 666으로 나누어 지지 않으니 10으로 나눈다.
	123도 12도 1도 0도 666으로 나누어 떨어지지 않으면 루프를 탈출한다.
*/

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int name{ 665 };
//	int count{};
//
//	while (count != N)
//	{
//		name++;
//		int temp = name;
//
//		while (temp != 0)
//		{
//			if (temp % 1000 == 666)
//			{
//				count++;
//				break;
//			}
//			else
//			{
//				temp /= 10;
//			}
//		}
//	}
//	std::cout << name << '\n';
//}