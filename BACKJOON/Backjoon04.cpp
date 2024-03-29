/* ----- < 4단계 1차원 배열 > ----- */
//
//
//
//
//
/* --- < 2577 > --- */

/*
< 문제 >
	세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에
	0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
	예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고,
	계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

< 입력 >
	첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다.
	A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은 자연수이다.

< 출력 >
	첫째 줄에는 A × B × C의 결과에 0 이 몇 번 쓰였는지 출력한다.
	마찬가지로 둘째 줄부터 열 번째 줄까지 A × B × C의 결과에 1부터 9까지의 숫자가
	각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//// 1. 연산된 값을 자릿수 별로 나누는 작업이 필요
////		=> 숫자를 1의자리 10의자리 100의자리... 나누기 위해 문자열을 활용한다.
////		=> 그러면 자릿수를 나눌수 있고 문자열 길이를 활용하여 반복문으로 숫자를 카운트 할 수 있다.
//	int A{ 150 }, B{ 266 }, C{ 427 };
//	int arr[10]{};
//	int result = A * B * C;
//
//	std::string stringToNum = std::to_string(result);
//// 2. 각 자릿수의 숫자가 무엇인지 확인하는 작업이 필요
//// 3. 숫자를 세는 작업이 필요
//	for (int i = 0; i < stringToNum.length(); i++)
//	{
//		arr[stringToNum[i] - '0']++;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		std::cout << arr[i] << '\n';
//	}
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int number{ 1991 };
//	int arr[10]{};
//	std::string stringToNum = std::to_string(number);
//
//	for (int i = 0; i < stringToNum.length(); i++)
//	{
//		arr[stringToNum[i] - '0']++;
//	}
//}

/* --- < 2577 > --- */

/*
< 문제 >
	두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다.
	예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다.
	수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다.
	그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다.
	이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.

< 출력 >
	첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	int inputNumber[10]{ 43,143,56,86,105,227,336,555,44,99 };
//// 1. 입력받은 배열을 순회하면서 42로 나눈 몫을 구한다.
////		=> 0 ~ 41까지의 배열을 만들어 두고 나눈 몫을 ++ 저장해 나간다.
//	int count[42]{};
//
//	for (int i = 0; i < 10; i++)
//	{
//		count[inputNumber[i] % 42]++;
//	}
//// 2. 0 ~ 41까지 인덱스를 순회하면서 다른 값을 센다.
//	int other{};
//
//	for (int i = 0; i < 42; i++)
//	{
//		if (count[i] != 0) other++;
//	}
//}

/* --- < 1546 > --- */

/*
< 문제 >
	세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다.
	일단 세준이는 자기 점수 중에 최댓값을 골랐다.
	이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.

	예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.

	세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 시험 본 과목의 개수 N이 주어진다.
	이 값은 1000보다 작거나 같다.
	둘째 줄에 세준이의 현재 성적이 주어진다.
	이 값은 100보다 작거나 같은 음이 아닌 정수이고, 적어도 하나의 값은 0보다 크다.

< 출력 >
	첫째 줄에 새로운 평균을 출력한다.
	실제 정답과 출력값의 절대오차 또는 상대오차가 10-2 이하이면 정답이다.
*/

//#include <iostream>
//
//int main()
//{
//// 1. 학생이 받은 점수, 최고 점수, 평균 점수를 담을 공간이 필요하다.
////		=> 이때 점수는 소수점으로 떨어진다.
//	float arr[4]{ 15.3,91,45.3,66 };
//	float max{};
//	float avg{};
//// 2. 배열을 반복하며 최고 점수를 찾아낸다.
//	for (int i = 0; i < 4; i++)
//	{
//		if (max < arr[i])max = arr[i];
//	}
//// 3. 모든 점수의 재정의한 점수를 평균에 더한다.
//	for (int i = 0; i < 4; i++)
//	{
//		avg += arr[i] / max * 100;
//	}
//
//	std::cout << avg / 4 << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	float* arr = new float[N];
//	float max{};
//	float avg{};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> arr[i];
//		if (max < arr[i])max = arr[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		avg += arr[i] / max * 100;
//	}
//
//	std::cout << avg / N << '\n';
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//// 1. 세준이 이 양아치 새키가 점수 조작하려고 한다.
////		=> 자신이 받은 점수 중 가장 큰 점수( max )를 기준으로 [현재 점수 / 큰 점수 * 100]으로 조작한다.
//// 2. 문제가 씨발 시험본 과목이 몇개인지 모른다고 한다.
////		=> 과목을 내가 사용자 입력에 따라 유동적으로 바뀔 수 있다. 동적할당이 필요하다.
//// 3. 순서대로 정리 하자면 일단 과목의 갯수를 지정하고 과목에 따라 저장공간을 동적 할당한다.
////		=> 점수를 입력받고 입력 받으면서 최고 점수를 찾는다.
////		=> 조작한 점수를 따로 더해두고 과목 갯수로 나누면 끝
//	int N{ 4 };
//	
//	std::vector<float> vec(N);
//	float max{};
//	float avg{};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> vec[i];
//		if (max < vec[i])max = vec[i];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		avg += vec[i] / max * 100;
//	}
//
//	std::cout << avg / N << '\n';
//}

/* --- < 8958 > --- */

/*
< 문제 >
	"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다.
	문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다.
	예를 들어, 10번 문제의 점수는 3이 된다.

	"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

	OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 테스트 케이스의 개수가 주어진다.
	각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다.
	문자열은 O와 X만으로 이루어져 있다.

< 출력 >
	각 테스트 케이스마다 점수를 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//	char arr[80];
//
//	int count{};
//	int sum{};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> arr[i];
//		if (arr[i] != 'X')
//		{
//			count++;
//			sum += count;
//		}
//		else
//			count = 0;
//	}
//
//	std::cout << sum << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int* result = new int[N] {};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::string scores;
//		std::cin >> scores;
//		int count{};
//
//		for (int j = 0; j < scores.size(); j++)
//		{
//			if (scores[j] == 'O') {
//				count++;
//				result[i] += count;
//			}
//			else if (scores[j] == 'X') {
//				count = 0;
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << result[i] << '\n';
//	}
//}

/* --- < 4344 > --- */

/*
< 문제 >
	대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다.
	당신은 그들에게 슬픈 진실을 알려줘야 한다.

< 입력 >
	첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

	둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고,
	이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

< 출력 >
	각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	int C{ 3 };
//
//	for (int i = 0; i < C; i++)
//	{
//		int N{ 5 };
//		float avg{};
//
//		float* scores = new float[N] {};
//
//		for (int j = 0; j < N; j++)
//		{
//			std::cin >> scores[j];
//			avg += scores[j];
//		}
//
//		avg /= N;
//		float count{};
//
//		for (int j = 0; j < N; j++)
//		{
//			if (scores[j] > avg) count++;
//		}
//
//		std::cout.precision(3);
//		std::cout << (count / N) * 100 << "%\n";
//	}
//}

//#include <iostream>
//
//int main()
//{
//	float sc[10]{ 3.5,2.7,5,4.9,5,1.2,3.3,3,5,4 };
//	float sum{};
//
//	for (int i = 0; i < 10; i++)
//	{
//		sum += sc[i];
//	}
//
//	float avg = sum / 10;
//	float count{};
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (avg < sc[i]) count++;
//	}
//
//	std::cout << (count / 10) * 100 << "%\n";
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int A, B, C;
//	int arr[10]{};
//	int result{};
//
//	std::cin >> A >> B >> C;
//	result = A * B * C;
//
//	std::string stringToNum = std::to_string(result);
//	for (int i = 0; i < stringToNum.size(); i++) arr[stringToNum[i] - '0']++;
//	for (int i = 0; i < 10; i++) std::cout << arr[i] << '\n';
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int A, B, C;
//	int arr[10]{};
//	int result{};
//
//	std::cin >> A >> B >> C;
//	result = A * B * C;
//
//	std::string stringToNum = std::to_string(result);
//
//	for (int i = 0; i < stringToNum.size(); i++)
//	{
//		arr[stringToNum[i] - '0']++;
//	}
//	for (int i = 0; i < 10; i++) std::cout << arr[i] << '\n';
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	int A, B, C;
//	int arr[10]{};
//	int result{};
//
//	std::cin >> A >> B >> C;
//	result = A * B * C;
//
//	std::string stringToNum = std::to_string(result);
//
//	for (int i = 0; i < stringToNum.size(); i++) arr[stringToNum[i] - '0']++;
//}

//#include <iostream>
//
//int main()
//{
//	int inputNumber[10];
//	int count[42]{};
//	int other{};
//
//	for (int i = 0; i < 10; i++)
//	{
//		std::cin >> inputNumber[i];
//		inputNumber[i] = inputNumber[i] % 42;
//	}
//
//	for (int i = 0; i < 10; i++) count[inputNumber[i]]++;
//	for (int i = 0; i < 42; i++)
//	{
//		if (count[i] != 0) other++;
//	}
//	std::cout << other << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int inputNumber[10];
//	int count[42]{};
//	int other{};
//
//	for (int i = 0; i < 10; i++)
//	{
//		std::cin >> inputNumber[i];
//		inputNumber[i] = inputNumber[i] % 42;
//	}
//
//	for (int i = 0; i < 10; i++) count[inputNumber[i]]++;
//
//	for (int i = 0; i < 42; i++)
//	{
//		if (count[i] != 0) other++;
//	}
//	std::cout << other << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	float* scores = new float[N];
//	float max{};
//	float avg{};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> scores[i];
//		if (scores[i] > max) max = scores[i];
//	}
//
//	for (int i = 0; i < N; i++) avg += scores[i] / max * 100;
//
//	std::cout.precision(4);
//	std::cout << avg / static_cast<float>(N) << '\n';
//
//	delete[] scores;
//}

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	float* scores = new float[N];
//	float max{};
//	float avg{};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> scores[i];
//		if (scores[i] > max) max = scores[i];
//	}
//	for (int i = 0; i < N; i++) avg += scores[i] / max * 100;
//
//	std::cout.precision(4);
//	std::cout << avg / static_cast<float>(N) << '\n';
//	delete[] scores;
//}

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//	int* result = new int[N] {};
//
//	for (int j = 0; j < N; j++)
//	{
//		std::string scores;
//		std::cin >> scores;
//		int count{};
//
//		for (int i = 0; i < scores.size(); i++)
//		{
//			if (scores[i] == 'O')
//			{
//				count++;
//				result[j] += count;
//			}
//			else if (scores[i] == 'X')
//			{
//				count = 0;
//			}
//		}
//	}
//	for (int i = 0; i < N; i++) std::cout << result[i] << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int C;
//	std::cin >> C;
//
//	for (int i = 0; i < C; i++)
//	{
//		int N;
//		float avg{};
//
//		std::cin >> N;
//		float* scores = new float[N] {};
//
//		for (int j = 0; j < N; j++)
//		{
//			std::cin >> scores[j];
//			avg += scores[j];
//		}
//
//		avg /= N;
//		float count{};
//
//		for (int j = 0; j < N; j++)
//		{
//			if (scores[j] > avg) count++;
//		}
//
//		std::cout.precision(3);
//		std::cout.setf(std::ios::fixed, std::ios::floatfield);
//		std::cout << (count / static_cast<float>(N)) * 100 << "%\n";
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int N;
//	float avg{};
//
//	std::cin >> N;
//	float* scores = new float[N] {};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> scores[i];
//		avg += scores[i];
//	}
//	avg /= N;
//	float count{};
//
//	for (int i = 0; i < N; i++)
//	{
//		if (scores[i] > avg) count++;
//	}
//
//	std::cout.precision(3);
//	std::cout.setf(std::ios::fixed, std::ios::floatfield);
//	std::cout << (count / static_cast<float>(N)) * 100 << "%\n";
//}