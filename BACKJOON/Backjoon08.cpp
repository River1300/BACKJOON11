/* ----- < 8단계 기본 수학2 > ----- */
//
//
//
//
//
/* --- < 1978 > --- */

/*
< 문제 >
	주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

< 입력 >
	첫 줄에 수의 개수 N이 주어진다. N은 100이하이다.
	다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

< 출력 >
	주어진 수들 중 소수의 개수를 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int result{};
//
//	for (int i = 0; i < N; i++)
//	{
//		int number;
//		int count{};
//		std::cin >> number;
//
//		for (int j = 2; j <= number; j++)
//			if (number % j == 0) count++;
//
//		if (count == 1) result++;
//	}
//
//	std::cout << result << '\n';
//}

//#include <iostream>
//
//int main()
//{
//// 1. 소수란 나 자신과 1, 단 두개만이 딱 나누어 떨어지는 값을 말한다.
////		=> 입력 받은 값을 기준으로 반복문을 만들어서 2 부터 자기 자신까지 차례로 나눠보며 딱 떨어지면 나눈 갯수를 증가시킨다.
//	int number;
//	int count{};
//	std::cin >> number;
//
//	for (int i = 2; i <= number; i++)
//		if (number % i == 0) count++;
//
//	if (count == 1) std::cout << "true\n";
//}

/* --- < 11653 > --- */

/*
< 문제 >
	정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.

< 출력 >
	N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다. N이 1인 경우 아무것도 출력하지 않는다.

< 수학 >
	< 소인수분해 > : 자연수를 소인수로 분해하는 것
		=> 자연수를 소인수들의 곱으로 표현하는 것
		=> 자연수를 소수가 나올 때까지 계속 소수로 나눈다.
		=> 60 / 2 = 30 / 2 = 15 / 3 = 5
			=> 2, 3, 5는 60의 소인수

	< 약수 >
		=> 12 / 3 = 4일 때 나머지가 0으로 떨어지게 된다. 이 때 3을 약수라고 한다.

	< 인수 >
		=> 1 * 12 = 12일 때 1과 12는 12의 인수이다.
		=> 3 * 4 = 12도 마찬가지로 3과 4는 12의 인수이다.

	< 소인수 >
		=> 인수 중에서 소수인 것들을 소인수라고 한다.

	< 소수 >
		=> 1과 그 수 이외의 자연수로는 자눌 수 없는 1보다 큰 자연수

< 풀이 >
	N을 나누는 가장 작은 소인수를 찾을 때까지 2부터 차례로 N을 나누어 본다.
	소인수를 찾으면 N을 그 소인수로 나눈 후, 그 값을 N에 다시 저장한다.
	이를 반복하다 보면 N은 점점 작아지고 어느 순간, N가체가 소수가 되어 N을 나누는 수는 N자신 밖에 없게된다.
	따라서 N을 N으로 나누어 N에 1이 저장되면 코드가 종료된다.
*/

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	while (N != 1)
//	{
//		for (int i = 2; i <= N; i++)
//		{
//			if (N % i == 0)
//			{
//				std::cout << i << '\n';
//				N /= i;
//				break;
//			}
//		}
//	}
//}

//#include <iostream>
//
//int main()
//{
//// 1. 해당 숫자의 소인수를 찾기 위해 해당 숫자를 2부터 그 숫자 값까지 차례로 나누기를 해본다.
//// 2. 나누어 떨어질 때 나눈 값을 출력하고 나누어 떨어진 값을 다시 나누기 반복한다.
//	int N;
//	std::cin >> N;
//
//	while (N != 1)
//	{
//		for (int i = 2; i <= N; i++)
//		{
//			if (N % i == 0)
//			{
//				std::cout << i << '\n';
//				N /= i;
//				break;
//			}
//		}
//	}
//}

/* --- < 1929 > --- */

/*
< 문제 >
	M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.

< 출력 >
	한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.

< 풀이 >
	소수는 자기 자신과 1로 밖에 나누어지지 않는다.
	그러면 어떤 수의 배수는 소수가 될 수 없다. 예를 들어
	2의 배수인 4, 6, 8 ...은 소수가 될 수 없고
	3의 배수인 6, 9, 12 ...은 소수가 될 수 없다.
*/

//#include <iostream>
//
//int main()
//{
//	int* arr = new int[1000001]{ 1,1 };
//	int M, N;
//	std::cin >> M >> N;
//
//	for (int i = 2; i <= N; i++)
//	{
//		for (int j = 2; i * j <= N; j++)
//		{
//			arr[i * j] = 1;
//		}
//	}
//
//	for (int i = M; i <= N; i++)
//	{
//		if (arr[i] == 0) std::cout << i << '\n';
//	}
//}

//#include <iostream>
//
//int main()
//{
//// 1. 광범위한 범위 안에서 소인수를 찾아야 한다.
////		=> 그때 그때마다 나누어서 소수를 반복적으로 찾지 말고
//// 2. 아예 배열을 만들어서 소수가 아닌 값들을 체크해 둔다.
////		=> 배열의 인덱스를 활용하여 2차 반복으로 소수가 아닌 값들을 체크해 둔다.
//	int* arr = new int[1000001]{ 1,1 };
//	int M, N;
//	std::cin >> M >> N;
//
//	for (int i = 2; i <= N; i++)
//	{
//		for (int j = 2; j <= M; j++)
//		{
//			arr[i * j] = 1;
//		}
//	}
//
//	for (int i = M; i <= N; i++)
//	{
//		if (arr[i] == 0) std::cout << i << '\n';
//	}
//}

/* --- < 4948 > --- */

/*
< 문제 >
	베르트랑 공준은 임의의 자연수 n에 대하여, n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다는 내용을 담고 있다.

	이 명제는 조제프 베르트랑이 1845년에 추측했고, 파프누티 체비쇼프가 1850년에 증명했다.

	예를 들어, 10보다 크고, 20보다 작거나 같은 소수는 4개가 있다. (11, 13, 17, 19) 또, 14보다 크고, 28보다 작거나 같은 소수는 3개가 있다. (17,19, 23)

	자연수 n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오.

< 입력 >
	입력은 여러 개의 테스트 케이스로 이루어져 있다.
	각 케이스는 n을 포함하는 한 줄로 이루어져 있다.

	입력의 마지막에는 0이 주어진다.

< 출력 >
	각 테스트 케이스에 대해서, n보다 크고, 2n보다 작거나 같은 소수의 개수를 출력한다.

< 제한 >
	1 ≤ n ≤ 123,456
*/

//#include <iostream>
//
//int main()
//{
//	int* arr = new int[246913]{ 1,1 };
//
//	int N;
//	std::cin >> N;
//
//	while (N != 0)
//	{
//		int count{};
//
//		for (int i = 2; i <= 123456; i++)
//		{
//			if (arr[i] == 1) continue;
//
//			for (int j = 2; i * j <= 246913; j++) arr[i * j] = 1;
//		}
//
//		for (int i = N + 1; i <= 2 * N; i++)
//		{
//			if (arr[i] == 0) count++;
//		}
//
//		std::cout << count << '\n';
//		std::cin >> N;
//	}
//}

//#include <iostream>
//
//int main()
//{
//// 1. 명확한 입력 제한 범위가 있고 N과 2N이라는 기준도 있다.
////		=> 2N에 해당하는 최대 크기의 배열을 만들어 두고 이전 문제와 같이 소수를 모두 찾아낸다.
//	int* arr = new int[236913]{ 1,1 };
//
//	int N;
//	std::cin >> N;
//
//	while (N != 0)
//	{
//		int count{};
//
//		for (int i = 2; i <= 123456; i++)
//		{
//			if (arr[i] == 1) continue;
//
//			for (int j = 2; i * j <= 246913; j++) arr[i * j] = 1;
//		}
//
//		for (int i = N + 1; i <= 2 * N; i++)
//		{
//			if (arr[i] == 0) count++;
//		}
//
//		std::cout << count << '\n';
//		std::cin >> N;
//	}
//}

/* --- < 9020 > --- */

/*
< 문제 >
	1보다 큰 자연수 중에서  1과 자기 자신을 제외한 약수가 없는 자연수를 소수라고 한다.
	예를 들어, 5는 1과 5를 제외한 약수가 없기 때문에 소수이다.
	하지만, 6은 6 = 2 × 3 이기 때문에 소수가 아니다.

	골드바흐의 추측은 유명한 정수론의 미해결 문제로,
	2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있다는 것이다.
	이러한 수를 골드바흐 수라고 한다.
	또, 짝수를 두 소수의 합으로 나타내는 표현을 그 수의 골드바흐 파티션이라고 한다.
	예를 들면, 4 = 2 + 2, 6 = 3 + 3, 8 = 3 + 5, 10 = 5 + 5, 12 = 5 + 7, 14 = 3 + 11, 14 = 7 + 7이다.
	10000보다 작거나 같은 모든 짝수 n에 대한 골드바흐 파티션은 존재한다.

	2보다 큰 짝수 n이 주어졌을 때, n의 골드바흐 파티션을 출력하는 프로그램을 작성하시오.
	만약 가능한 n의 골드바흐 파티션이 여러 가지인 경우에는 두 소수의 차이가 가장 작은 것을 출력한다.

< 입력 >
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	각 테스트 케이스는 한 줄로 이루어져 있고 짝수 n이 주어진다.

< 출력 >
	각 테스트 케이스에 대해서 주어진 n의 골드바흐 파티션을 출력한다.
	출력하는 소수는 작은 것부터 먼저 출력하며, 공백으로 구분한다.

< 제한 >
	4 ≤ n ≤ 10,000

< 풀이 >
	에라토스테네스의 알고리즘을 이용해 1부터 10000까지 소수를 구한다.
	첫째값을 입력값의 절반부터 시작해 1씩 감소시킨다. 소수이면 두째값이 소수인지 판별한다.
	만약 첫째값, 둘째값 모두 소수이면 결과를 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	int* arr = new int[10001]{ 1,1 };
//	int T;
//	std::cin >> T;
//
//	for (int i = 2; i <= 10000; i++)
//	{
//		for (int j = 2; i * j <= 10000; j++) arr[i * j] = 1;
//	}
//
//	for (; T > 0; T--)
//	{
//		int N;
//		std::cin >> N;
//
//		int size = N / 2;
//
//		for (int i = size; i <= 10000; i++)
//		{
//			if (arr[i] == 1) continue;
//			else {
//				int temp = N - i;
//
//				if (arr[temp] == 0)
//				{
//					(i < temp) ? std::cout << i << ' ' << temp << '\n' : std::cout << temp << ' ' << i << '\n';
//					break;
//				}
//			}
//		}
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int* arr = new int[10001]{ 1,1 };
//	int T;
//	std::cin >> T;
//
//	for (int i = 2; i <= 10000; i++)
//	{
//		for (int j = 2; i * j <= 10000; j++) arr[i * j] = 1;
//	}
//
//	for (; T > 0; T--)
//	{
//		int N;
//		std::cin >> N;
//
//		int length = N / 2;
//
//		for (int i = 0; i < length; i++)
//		{
//			int temp1 = length - i;
//			int temp2 = N - temp1;
//
//			if (arr[temp1] == 0)
//			{
//				if (arr[temp2] == 0) {
//					std::cout << temp1 << ' ' << temp2 << '\n';
//					break;
//				}
//			}
//		}
//	}
//}