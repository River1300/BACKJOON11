﻿/* ----- < 14단계 정수론 및 조합론 > ----- */
//
//
//
//
//
/* --- < 5086 > --- */

/*
< 문제 >
	4 × 3 = 12이다.
	이 식을 통해 다음과 같은 사실을 알 수 있다.
	3은 12의 약수이고, 12는 3의 배수이다.
	4도 12의 약수이고, 12는 4의 배수이다.
	두 수가 주어졌을 때, 다음 3가지 중 어떤 관계인지 구하는 프로그램을 작성하시오.

	첫 번째 숫자가 두 번째 숫자의 약수이다.
	첫 번째 숫자가 두 번째 숫자의 배수이다.
	첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.

< 입력 >
	입력은 여러 테스트 케이스로 이루어져 있다.
	각 테스트 케이스는 10,000이 넘지않는 두 자연수로 이루어져 있다.
	마지막 줄에는 0이 2개 주어진다. 두 수가 같은 경우는 없다.

< 출력 >
	각 테스트 케이스마다 첫 번째 숫자가 두 번째 숫자의 약수라면 factor를,
	배수라면 multiple을, 둘 다 아니라면 neither를 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	int num1, num2;
//
//	while (std::cin >> num1 >> num2)
//	{
//		if (num1 == 0 && num2 == 0) break;
//
//		if (num2 % num1 == 0) std::cout << "factor\n";
//		else if (num1 % num2 == 0) std::cout << "multiple\n";
//		else std::cout << "neither\n";
//	}
//}

/* --- < 1037 > --- */

/*
< 문제 >
	양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아니어야 한다.
	어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 N의 진짜 약수의 개수가 주어진다.
	이 개수는 50보다 작거나 같은 자연수이다.
	둘째 줄에는 N의 진짜 약수가 주어진다.
	1,000,000보다 작거나 같고, 2보다 크거나 같은 자연수이고, 중복되지 않는다.

< 출력 >
	첫째 줄에 N을 출력한다.
	N은 항상 32비트 부호있는 정수로 표현할 수 있다.

< 풀이 >
	양수 A의 가장 작은 약수가 min 이라고 할때 가장 큰 약수 max =  A/min이 된다.
	따라서 min(최소)값과 max(최대)값을 서로 곱해주면 A를 구할 수 있다.
	그런데 30의 경우 약수가 2, 3 ,5 일텐데 위의 말대로라면 2 * 5 = 10 이 정답이 아닌가?
	할 수도 있다.
	그러나 문제에서 "N의 진짜 약수가 전부 주어진다" 라고 했기 때문에
	30이 답이라면 2,3,5,6,10,15 가 주어졌을 것이다.
*/

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	int T;
//	std::cin >> T;
//
//	int max{};
//	int min{ 1000000 };
//	std::vector<int> num(T);
//
//	for (int i = 0; i < T; i++)
//	{
//		std::cin >> num[i];
//
//		if (max < num[i]) max = num[i];
//		if (min > num[i]) min = num[i];
//	}
//	std::cout << max * min << '\n';
//}

/* --- < 2609 > --- */

/*
< 문제 >
	두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에는 두 개의 자연수가 주어진다.
	이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.

< 출력 >
	첫째 줄에는 입력으로 주어진 두 수의 최대공약수를,
	둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.

< 풀이 >
	#include <numeric>
	std::gcd();	// 최대 공약수
	std::lcm();	// 최소 공배수
*/

//#include <iostream>
//
//int GCD(int a, int b)
//{
//	int r;
//	while (b != 0)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//}
//
//int main()
//{
//	int num1, num2;
//	std::cin >> num1 >> num2;
//
//	if (num1 < num2)
//	{
//		int temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	std::cout << GCD(num1, num2) << '\n';
//	std::cout << num1 * num2) / GCD(num1, num2) << '\n';
//}

//#include <iostream>
//
//int gcd(int x, int y)
//{
//	return y ? gcd(y, x % y) : x;
//}
//
//int main()
//{
//	int x, y;
//	std::cin >> x >> y;
//
//	std::cout << gcd(x, y) << '\n';
//	std::cout << x * y / gcd(x, y) << '\n';
//
//// 30 4
//// 7...2
//// 4 2
//}

/* --- < 1934 > --- */

/*
< 문제 >
	두 자연수 A와 B에 대해서, A의 배수이면서 B의 배수인 자연수를 A와 B의 공배수라고 한다.
	이런 공배수 중에서 가장 작은 수를 최소공배수라고 한다.
	예를 들어, 6과 15의 공배수는 30, 60, 90등이 있으며, 최소 공배수는 30이다.

	두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다.
	둘째 줄부터 T개의 줄에 걸쳐서 A와 B가 주어진다. (1 ≤ A, B ≤ 45,000)

< 출력 >
	첫째 줄부터 T개의 줄에 A와 B의 최소공배수를 입력받은 순서대로 한 줄에 하나씩 출력한다.
*/

//#include <iostream>
//
//int GCD(int a, int b)
//{
//	return b ? GCD(b, a % b) : a;
//}
//
//int main()
//{
//	int T;
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		int A, B;
//		std::cin >> A >> B;
//
//		std::cout << A * B / GCD(A, B) << '\n';
//	}
//}

/* --- < 2981 > --- */

/*
< 문제 >
	트럭을 타고 이동하던 상근이는 경찰의 검문을 받게 되었다.
	경찰은 상근이가 운반하던 화물을 하나하나 모두 확인할 것이기 때문에,
	검문하는데 엄청나게 오랜 시간이 걸린다.

	상근이는 시간을 때우기 위해서 수학 게임을 하기로 했다.

	먼저 근처에 보이는 숫자 N개를 종이에 적는다.
	그 다음, 종이에 적은 수를 M으로 나누었을 때, 나머지가 모두 같게 되는 M을 모두 찾으려고 한다.
	M은 1보다 커야 한다.

	N개의 수가 주어졌을 때, 가능한 M을 모두 찾는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 종이에 적은 수의 개수 N이 주어진다. (2 ≤ N ≤ 100)

	다음 줄부터 N개 줄에는 종이에 적은 수가 하나씩 주어진다.
	이 수는 모두 1보다 크거나 같고, 1,000,000,000보다 작거나 같은 자연수이다.
	같은 수가 두 번 이상 주어지지 않는다.

	항상 M이 하나 이상 존재하는 경우만 입력으로 주어진다.

< 출력 >
	첫째 줄에 가능한 M을 공백으로 구분하여 모두 출력한다.
	이때, M은 증가하는 순서이어야 한다.

< 풀이 >
	수 1 ~ N을 M으로 나눴을 때 나머지가 모두 같아야 한다.
	arr[1] % M = arr[2] % M = arr[3] % M으로 볼 수 있다.

	arr[1] % M = arr[1] - (arr[1]/M) * M
	=> arr[1] - (arr[1]/M) * M = arr[2] - (arr[2]/M) * M
	=> arr[2] - arr[1] = M * (arr[2]/M - arr[1]/M)

	여기에서 추론할 수 있는 공통점은 전부 같은 나머지를 갖을경우 어느 수에서
	다른 수를 뺄 경우 공통된 M이라는 값을 가진다는 것이다.

< 다른 풀이 >
	주어진 N개의 수를 정렬한 수열의 결과를 a1, a2... aN이라고 가정하자.
	임의의 정수 M으로 나눴을 때 수열의 나머지를 m이라고 한다면, 수식을 아래와 같이 나타낼 수 있다.
	a1 = k1 * M + m
	a2 = k2 * M + m
	...
	aN = kN * M + m
	이에 대해 근접한 원소끼리 차이를 정리해 보면,
	a2 - a1 = (k2 - k1) * M
	a3 - a2 = (k3 - k2) * M
	...
	aN - aN-1 = (kN - kN-1) * M
	서로 다른 두 원소 차이에 대해 "약수"로 M이 들어가 있는 것을 확인할 수 있다.
	따라서 이 차이에 대해 최대공약수를 구하여 그것의 약수를 모두 출력하면 된다.
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int GCD(int a, int b)
//{
//	return b ? GCD(b, a % b) : a;
//}
//
//int main()
//{
//	int input[100];
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> input[i];
//	}
//
//	std::sort(input, input + N);
//	int compair = input[1] - input[0];
//	for (int i = 1; i < N - 1; i++)
//	{
//		compair = GCD(compair, input[i + 1] - input[i]);
//	}
//	std::vector<int> result;
//	for (int i = 1; i * i <= compair; i++)
//	{
//		if (!(compair % i))
//		{
//			result.push_back(i);
//			if (i != compair / i) { result.push_back(compair / i); }
//		}
//	}
//	std::sort(result.begin(), result.end());
//	for (auto& e : result)
//	{
//		if (e != 1) { std::cout << e << ' '; }
//	}
//}

/* --- < 3036 > --- */

/*
< 문제 >
	상근이는 창고에서 링 N개를 발견했다.
	상근이는 각각의 링이 앞에 있는 링과 뒤에 있는 링과 접하도록 바닥에 내려놓았다.

	상근이는 첫 번째 링을 돌리기 시작했고, 나머지 링도 같이 돌아간다는 사실을 발견했다.
	나머지 링은 첫 번째 링 보다 빠르게 돌아가기도 했고, 느리게 돌아가기도 했다.
	이렇게 링을 돌리다 보니 첫 번째 링을 한 바퀴 돌리면, 나머지 링은 몇 바퀴 도는지 궁금해졌다.

	링의 반지름이 주어진다.
	이때, 첫 번째 링을 한 바퀴 돌리면, 나머지 링은 몇 바퀴 돌아가는지 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 링의 개수 N이 주어진다. (3 ≤ N ≤ 100)
	다음 줄에는 링의 반지름이 상근이가 바닥에 놓은 순서대로 주어진다.
	반지름은 1과 1000를 포함하는 사이의 자연수이다.

< 출력 >
	출력은 총 N-1줄을 해야 한다.
	첫 번째 링을 제외한 각각의 링에 대해서,
	첫 번째 링을 한 바퀴 돌리면 그 링은 몇 바퀴 도는지 기약 분수 형태 A/B로 출력한다.
*/

//#include <iostream>
//#include <vector>
//
//int GCD(int a, int b)
//{
//	return b ? GCD(b, a % b) : a;
//}
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<int> other(N);
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> other[i];
//	}
//
//	int one = other[0];
//
//	for (int i = 1; i < N; i++)
//	{
//		if (one % other[i] == 0)
//		{
//			std::cout << one / other[i] << "/" << 1 << '\n';
//		}
//		else
//		{
//			int gcd = GCD(one, other[i]);
//			std::cout << one / gcd << "/" << other[i] / gcd << '\n';
//		}
//	}
//}

/* --- < 11050 > --- */

/*
< 문제 >
	자연수(N)과 정수(K)가 주어졌을 때 이항 계수
	({N}{K})를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 (N)과 (K)가 주어진다. (1 ≤ (N) ≤ 10, 0 ≤ (K) ≤ (N))

< 출력 >
	({N}{K})를 출력한다.

< 풀이 >
	이항계수는 경우의 수를 계산할 때 사용한다.
	N개의 서로 다른 것들 중에서 K개를 선택하는 것의 조합의 경우의 수를 구하는 것이다.
	이는 팩토리얼로 해결이 가능하다.
*/

//#include <iostream>
//
//int Factorial(int a)
//{
//	if (a <= 1) { return 1; }
//
//	return Factorial(a - 1) * a;
//}
//
//int main()
//{
//	int N, K;
//	std::cin >> N >> K;
//
//	std::cout << Factorial(N) / (Factorial(K) * Factorial(N - K)) << '\n';
//}

/* --- < 11051 > --- */

/*
< 문제 >
	자연수(N)과 정수(K)가 주어졌을 때 이항 계수
	({N}{K})를 10,007로 나눈 나머지를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 (N)과 (K)가 주어진다. (1 ≤ (N) ≤ 1,000, 0 ≤ (K) ≤ (N)

< 출력 >
	({N}{K})를 10,007로 나눈 나머지를 출력한다.

< 풀이 >
	0 <= k <= n이라는 식을 만족할 때 이항계수는 nCk라는 값을 가지고 이러한 식의 값을 나열 했을 때
	나오는 표가 삼각형을 이루는데 이러한 삼각형을 파스칼 삼각형이라고 부른다.
*/

//#include <iostream>
//
//int block[1001][1001];
//
//int main()
//{
//	int N, K;
//	std::cin >> N >> K;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 0; j <= N; j++)
//		{
//			if (i == j || j == 0) {
//				block[i][j];
//			}
//			else {
//				block[i][j] = (block[i - 1][j] + block[i - 1][j - 1]) % 10007;
//			}
//		}
//	}
//	std::cout << block[N][K];
//}

/* --- < 1010 > --- */

/*
< 문제 >
	재원이는 한 도시의 시장이 되었다.
	이 도시에는 도시를 동쪽과 서쪽으로 나누는 큰 일직선 모양의 강이 흐르고 있다.
	하지만 재원이는 다리가 없어서 시민들이 강을 건너는데 큰 불편을 겪고 있음을 알고
	다리를 짓기로 결심하였다.
	강 주변에서 다리를 짓기에 적합한 곳을 사이트라고 한다.
	재원이는 강 주변을 면밀히 조사해 본 결과 강의 서쪽에는 N개의 사이트가 있고
	동쪽에는 M개의 사이트가 있다는 것을 알았다. (N ≤ M)

	재원이는 서쪽의 사이트와 동쪽의 사이트를 다리로 연결하려고 한다.
	(이때 한 사이트에는 최대 한 개의 다리만 연결될 수 있다.)
	재원이는 다리를 최대한 많이 지으려고 하기 때문에 서쪽의 사이트 개수만큼 (N개)
	다리를 지으려고 한다.
	다리끼리는 서로 겹쳐질 수 없다고 할 때 다리를 지을 수 있는
	경우의 수를 구하는 프로그램을 작성하라.

< 입력 >
	입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다.
	그 다음 줄부터 각각의 테스트케이스에 대해 강의
	서쪽과 동쪽에 있는 사이트의 개수 정수 N, M (0 < N ≤ M < 30)이 주어진다.

< 출력 >
	각 테스트 케이스에 대해 주어진 조건하에 다리를 지을 수 있는 경우의 수를 출력한다.

< 풀이 >
	조합( Combination ) : 서로 다른 N개 중에서 R개(N>=R)취하여 조를 만들 때, 이 하나하나의 조를
	N개 중에서 R개 취한 조합이라고 한다.
	이 조합의 총수는 nCr로 표시하는데 이 기호는 조합( combination )의 머리글자에서 따온 것이다.

	강의 동쪽의 다리가 서쪽의 다리보다 항상 많고 다리는 겹칠 수 없는걸 생각하고
	예를 들어 서쪽에 4개의 사이트, 동쪽에 7개의 사이트가 있다고 하면
	동쪽에서, 서쪽의 사이트수인 4개의 사이트를 뽑고 서쪽에서 가장 위에 있는 1번 사이트를
	동쪽에서 뽑은 사이트 중 가장 위에 있는 사이트와 연결, 서쪽2번 사이트를 동쪽에서 두번째로 위에
	있는 사이트와 연결... 이렇게 4번 반복하면 겹치지 않으면서 다리를 모두 연결할 수 있다.
	여기서 동쪽 사이트에서 서쪽 사이트 수 만큼 사이트를 뽑을 때 조합이 필요한 것이다.
*/

//#include <iostream>
//
//int main()
//{
//	int T;
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		int N, M;
//		std::cin >> N >> M;
//
//		int link{ 1 };
//		for (int j = 0; j < N; j++)
//		{
//			link *= M - j;
//			link /= 1 + j;
//		}
//		std::cout << link << '\n';
//	}
//}

/* --- < 9375 > --- */

/*
< 문제 >
	해빈이는 패션에 매우 민감해서 한번 입었던 옷들의 조합을 절대 다시 입지 않는다.
	예를 들어 오늘 해빈이가 안경, 코트, 상의, 신발을 입었다면,
	다음날은 바지를 추가로 입거나 안경대신 렌즈를 착용하거나 해야한다.
	해빈이가 가진 의상들이 주어졌을때 과연 해빈이는 알몸이 아닌 상태로
	며칠동안 밖에 돌아다닐 수 있을까?

< 입력 >
	첫째 줄에 테스트 케이스가 주어진다. 테스트 케이스는 최대 100이다.

	각 테스트 케이스의 첫째 줄에는 해빈이가 가진 의상의 수 n(0 ≤ n ≤ 30)이 주어진다.
	다음 n개에는 해빈이가 가진 의상의 이름과 의상의 종류가 공백으로 구분되어 주어진다.
	같은 종류의 의상은 하나만 입을 수 있다.
	모든 문자열은 1이상 20이하의 알파벳 소문자로 이루어져있으며
	같은 이름을 가진 의상은 존재하지 않는다.

< 출력 >
	각 테스트 케이스에 대해 해빈이가 알몸이 아닌 상태로 의상을 입을 수 있는 경우를 출력하시오.

< 풀이 >
	map을 활용해서 의상의 종류에 해당 하는 옷 이름이 각각 몇개인지 구한다.
	그 후, map 전체를 순회하며 second에 1을 더한 숫자를 곱해서 해빈이가 가진 옷들로 만들 수
	있는 총 조합의 수를 구한다.	1을 더한 이유는 해당 옷을 입지 않는 경우도 있기 때문이다.
	마지막에 1을 빼줘야 하는데, 이는 모든 종류의 옷을 입지 않는 경우를 제외해 주어야 하기 때문이다.
*/

//#include <iostream>
//#include <unordered_map>
//
//using int_cloth = std::unordered_map<std::string, int>;
//
//int main()
//{
//	int T;
//	std::cin >> T;
//
//	std::string type, name;
//
//	for (int i = 0; i < T; i++)
//	{
//		int N;
//		std::cin >> N;
//
//		int_cloth cloth{};
//
//		for (int j = 0; j < N; j++)
//		{
//			std::cin >> name >> type;
//			cloth[type]++;
//		}
//
//		int result{ 1 };
//		for (auto e : cloth)
//		{
//			result *= (e.second + 1);
//		}
//		result -= 1;
//		std::cout << result << '\n';
//	}
//}

/* --- < 1676 > --- */

/*
< 문제 >
	N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 N이 주어진다. (0 ≤ N ≤ 500)

< 출력 >
	첫째 줄에 구한 0의 개수를 출력한다.

< 풀이 >
	값을 곱했을 때, 뒷자리가 0이나오는 경우는 2를 곱했을 때, 5를 곱했을 때, 10을 곱했을 때다.
	5! = 5,4,3,2,1 = 5가 1개 즉 0이 1개
	10! = 10,9,8,7,6,5,4,3,2,1 = 5가 2개 => 그냥 5 1개, 10은 2 * 5이므로 또 한 개

	N!의 뒤에서부터 처음으로 0이 아닌 다른 수가 나올때까지 0의 개수를 출력하는 문제이다.
	예를 들어, 10!은 3628800이므로, 0의 개수가 2개, 3!은 6이므로, 0의 개수가 0개가 된다.
	같은 방식으로, 500!은 0의 개수가 124개가 된다.
 
	문제에서 구하고자하는 바는 무엇일까?
	바로 10(2 x 5)의 개수이다.

	예를 들어, 10! 같은 경우에는 , 10 (2 x 5), 9, 8, 7, 6, 5, 4, 3, 2, 1 을 곱한것으로,
	2 x 5의 개수가 2개이므로 0의 개수가 2개가 된다.
	또 다른 예로, 3600같은 경우 어떤 수의 팩토리얼은 아니지만,
	36 x  (2 x 5) x (2 x 5) 이므로 0의 개수가 2개가 된다.

	문제에서 원하는 0의 개수를 출력하기 위해서는 2 x 5가 몇 개인지를 출력하면 되는데,
	여기서 주목해야할 점은 '5'의 개수이다.

	2의 배수는 4, 6, 8 등, 5의 배수보다 확연히 많기 때문에,
	5의 배수의 개수를 세면, 그것이 자동적으로 10의 배수의 개수가 된다.
	5의 제곱, 5의 세제곱의 배수 또한 마찬가지이다.
	5의 제곱인 25의 배수는 5가 두개이므로, 10의 배수가 한번에 두개씩 나타나는 것과 같고,
	세제곱인 125의 배수는 5가 세개이므로, 10의 배수가 한번에 세번씩 나타나는 것과 같다.

	예를 들어, 500이라는 수는 5의 배수가 100개, 25의 배수가 20개, 125의 배수가 4개 이므로, 
	500!의 뒤에서부터 처음으로 0이 아닌 다른 수가 나올때까지 0의 개수는 100+20+4=124가 된다.
	(125, 25의 배수는 각각 5의 배수에 포함되지만, 5의 배수를 셀 때 한 번씩만 카운트하게 된다.

	하지만, 사실 25는 2번, 125는 3번 세야하므로,
	25, 125의 배수의 개수를 그대로 구하여 더해주어야한다.

	위와 같이 500이라는 수에서 5의 배수는 100개 나왔을 때,
	25, 125의 배수는 각각 한번, 두번 더 세어주어야 한다.

	여기서 25의 배수를 한번 더 더해주면, 125의 배수만 한번 더 카운트 해주어야 하므로,
	125의 배수까지 카운트 해주면 모두 알맞게 더한 것이 된다.)
 
	즉, 5의 배수의 개수 + 25의 배수의 개수 + 125의 배수의 개수가 주어진 수 N!의 0의 개수가 된다.
	(N은 0~500사이의 수 이므로, 5의 네제곱인 625부터는 포함하지 않았다.)

*/

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int mul5 = 0;
//	int mul25 = 0;
//	int mul125 = 0;
//
//	mul5 = N / 5;
//	mul25 = N / 25;
//	mul125 = N / 125;
//
//	std::cout << mul5 + mul25 + mul125 << '\n';
//}

/* --- < 2004 > --- */

/*
< 문제 >
	(n/m)의 끝자리 0의 개수를 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 정수 n,m(0 <= m <= n <= 2,000,000,000, n != 0)이 들어온다.

< 출력 >
	첫째 줄에(n/m)의 끝자리 0의 개수를 출력한다.

< 풀이 >
	nCm = n! / (n - m)! * m!
	n!, (n - m)!, m!의 2와 5의 조합의 개수를 구합니다. 그리고 n!의 개수에서 (n - m)!과 m!의 개수
	를 빼야한다. 조합을 구할 때는 나눗셈을 포함하므로 문제 1676처럼 5의 개수만 세면 안된다.

	25, 14 => 25! : 2의 개수 22, 5의 개수 6
			  (25 - 12)! : 13! : 2의 개수 10, 5의 개수 2
			  12! : 2의 개수 10, 5의 개수 2
	2의 개수 22 - 10 - 20 = 2, 5의 개수 6 - 2 - 2 = 2
	두 값 중 작은 값을 선택하여 출력한다.
*/

//#include <iostream>
//
//using long_pair = std::pair<long long, long long>;
//
//long_pair two_five_count(long long x)
//{
//	long long two_cnt{};
//	long long five_cnt{};
//
//	for (long long i = 2; i <= x; i *= 2) two_cnt += x / i;
//	for (long long i = 5; i <= x; i *= 5) five_cnt += x / i;
//
//	return std::make_pair(two_cnt, five_cnt);
//}
//
//int main()
//{
//	long long n, m;
//	std::cin >> n >> m;
//
//	long_pair fc_n = two_five_count(n);
//	long_pair fc_nm = two_five_count(n - m);
//	long_pair fc_m = two_five_count(m);
//
//	long long a = fc_n.first - (fc_nm.first + fc_m.first);
//	long long b = fc_n.second - (fc_nm.second + fc_m.second);
//
//	std::cout << ((a < b) ? a : b);
//}