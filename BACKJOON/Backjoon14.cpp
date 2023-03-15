/* ----- < 14단계 정수론 및 조합론 > ----- */
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