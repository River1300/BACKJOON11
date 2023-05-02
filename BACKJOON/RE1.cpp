/* ----- < RE > ----- */
//
//
//
//
//
/* --- < 이미지 회전 알고리즘( Rotate Matrix ) > --- */

/*
< 문제 > :
	가로 세로가 N픽셀인 이미지가 2차원 배열에 저장되어 있다.
	이 이미지가 90도 회전하는 알고리즘을 별도의 저장 공간 사용 없이 구현하여라.
		=> 여기서 말하는 저장 공간이란 배열이나 해쉬 테이블 등의 자료 구조를 말한다.

< 해결 방법 > :
	문제를 간단하게 만들기 위하여 우선 레이어 단위로 맨 바깥쪽에 있는 레이어를 왼쪽으로 90도
	움직이는 방법을 생각해 보자.
		#. TOP 라인을 LEFT 라인으로 옮기고
		#. RIGHT 라인을 TOP 라인으로 옮기고
		#. BOTTOM 라인을 RIGHT 라인으로 옮기고
		#. LEFT 라인을 BOTTOM 라인으로 옮긴다.

	레이어 한칸이 움직일 때마다 시작점은 1씩 증가하고 끝점은 1씩 감소한다.
	이때 라인별로 고정된 인덱스 값과 1씩 증감하는 인덱스 값이 있다.
		#. 즉 레이어별로 반복되는 for문과 라인 안에 배열 한칸 단위로 반복되는 for문이 있다.
		#. 이때 고정된 인덱스는 시작 점이 끝점을 넘을 때까지 반복해 주면 된다.
			=> 그래야만 홀 수일 때도 가장 안쪽 레이어가 바뀐다.
*/

//#include <iostream>
//
//int main()
//{
//	int block[5][5]{
//		{0,0,1,0,0},
//		{0,0,1,0,0},
//		{0,0,1,1,1},
//		{0,0,1,0,0},
//		{0,0,1,0,0}
//	};
//
//	while (true)
//	{
//		int key{};
//		int temp{};
//
//		std::cout << "0 = 좌회전, 1 = 우회전\n";
//		std::cout << "입력 : ";
//		std::cin >> key;
//
//		switch (key)
//		{
//		case 0:
//			for (int start = 0, end = 4; start < end; start++, end--)
//			{
//				for (int i = start, j = end; i < end; i++, j--)
//				{
//					temp = block[start][i];
//					block[start][i] = block[i][end];
//					block[i][end] = block[end][j];
//					block[end][j] = block[j][start];
//					block[j][start] = temp;
//				}
//			}
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					std::cout << block[i][j] << ' ';
//				}
//				std::cout << '\n';
//			}
//			break;
//
//		case 1:
//			for (int start = 0, end = 4; start < end; start++, end--)
//			{
//				for (int i = start, j = end; i < end; i++, j--)
//				{
//					temp = block[start][j];
//					block[start][j] = block[i][start];
//					block[i][start] = block[end][i];
//					block[end][i] = block[j][end];
//					block[j][end] = temp;
//				}
//			}
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					std::cout << block[i][j] << ' ';
//				}
//				std::cout << '\n';
//			}
//			break;
//
//		default:
//			std::cout << "\n\n";
//			return;
//		}
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int block[5][5]{
//		{0,0,1,0,0},
//		{0,0,1,0,0},
//		{0,0,1,1,1},
//		{0,0,1,0,0},
//		{0,0,1,0,0},
//	};
//
//	while (true)
//	{
//		int key{};
//		int temp{};
//
//		std::cin >> key;
//
//		switch (key)
//		{
//		case 0:
//			for (int start = 0, end = 4; start < end; start++, end--)
//			{
//				for (int i = start, j = end; i < end; i++, j--)
//				{
//					temp = block[start][i];
//					block[start][i] = block[i][end];
//					block[i][end] = block[end][j];
//					block[end][j] = block[j][start];
//					block[j][start] = temp;
//				}
//			}
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					std::cout << block[i][j] << ' ';
//				}
//				std::cout << '\n';
//			}
//			break;
//		}
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int block[5][5]{
//		{0,0,1,0,0},
//		{0,0,1,0,0},
//		{0,0,1,1,1},
//		{0,0,1,0,0},
//		{0,0,1,0,0},
//	};
//
//	while (true)
//	{
//		int key{};
//		int temp{};
//		std::cin >> key;
//
//		switch (key)
//		{
//		case 0:
//			for (int start = 0, end = 4; start < end; start++, end--)
//			{
//				for (int i = start, j = end; i < end; i++, j--)
//				{
//					temp = block[start][i];
//					block[start][i] = block[i][end];
//					block[i][end] = block[end][j];
//					block[end][j] = block[j][start];
//					block[j][start] = temp;
//				}
//			}
//		}
//	}
//}

/* --- < 정삼각형 만들기 > --- */

/*
< 문제 > :
	N이라는 정수를 입력받고 N층 만큼의 삼각형을 그린다.
	for문을 이용하여 정삼각형을 그린다.

< 해결 방법 > :
	문제를 간단하게 만들기 위해 2층짜리 정삼각형을 그려보자.
	1층은 첫번째 칸에 공백이 와야 하고 이후 그림이 온다.
	2층은 첫번째 칸에 그림, 그리고 공백, 다시 그림이 온다.
	층이 증가할 수록 그림은 증가하고 첫번째 칸 공백은 줄어든다.
*/

//#include <iostream>
//
//int main()
//{
//	int N;
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = N - 1; j > i; j--) std::cout << ' ';
//		for (int j = 0; j <= i; j++) std::cout << "M ";
//		std::cout << '\n';
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = N - 1; j >= i; j--) std::cout << ' ';
//		for (int j = 0; j <= i; j++) std::cout << "M ";
//		std::cout << '\n';
//	}
//}

/* --- < 파스칼의 삼각형 > --- */

/*
< 문제 > :
	N층 만큼의 파스칼 삼각형을 그린다.
	파스칼의 삼각형은 바로 윗 층의 두 개의 수를 더한 값을 현재 층 열에 대입하면 된다.

< 해결 방법 > :
	기준이 될 가장 윗층 0열 0행에 1이라는 값을 먼저 대입해 준다.
	값이 대입될 수 없는( 배열을 넘어가는 공간 )곳에는 0을 대입해 준다.
	계산을 통해 아래로 내려가며 삼각형을 그려 나간다.
*/

//#include <iostream>
//
//int main()
//{
//	const int N{ 10 };
//	int t[N][N]{};
//
//	for (int i = 0; i < N; i++)
//	{
//		if (i == 0) t[0][0] = 1;
//		else {
//			int preValue;
//
//			for (int j = 0; j <= i; j++)
//			{
//				preValue = (j - 1 < 0) ? 0 : t[i - 1][j - 1];
//				t[i][j] = preValue + t[i - 1][j];
//			}
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = N - 1; j > i; j--) std::cout << ' ';
//		for (int j = 0; j <= i; j++) std::cout << t[i][j] << ' ';
//		std::cout << '\n';
//	}
//}

//#include <iostream>
//
//int main()
//{
//	const int N{ 10 };
//	int t[N][N]{};
//
//	for (int i = 0; i < N; i++)
//	{
//		if (i == 0) t[0][0] = 1;
//		else
//		{
//			int preValue;
//			for (int j = 0; j <= i; j++)
//			{
//				preValue = (j - 1 < 0) ? 0 : t[i - 1][j - 1];
//				t[i][j] = preValue + t[i - 1][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = N - 1; j > i; j--) std::cout << ' ';
//		for (int j = 0; j <= i; j++) std::cout << t[i][j] << ' ';
//		std::cout << '\n';
//	}
//}

/* --- < 피보나치 수열 > --- */

/*
< 문제 > :
	첫 달에는 새로 태어난 토끼 한 쌍만이 존재한다.
	두 달 이상이 된 토끼는 번식 가능하다.
	번식 가능한 토끼 한 쌍은 매달 새끼 한 쌍을 낳는다.
	토끼는 죽지 않는다.
	숫자를 입력받고 입력받은 숫자를 넘지 않는 피보나치 수열을 출력하세요.
	만약 10을 입력 받았을 경우 1, 1, 2, 3, 5, 8까지 나열되게끔 작성하세요.

< 해결 방법 > :
	먼저 기본적인 피보나치 수열의 Base, Recursive Case를 만든다.
	이 후 입력 받은 값을 넘지 못하는 제약을 걸어 준다.
*/

//#include <iostream>
//
//int Fibo(int N)
//{
//	if (N <= 2) return 1;
//	return Fibo(N - 2) + Fibo(N - 1);
//}
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		if (Fibo(i) < N) std::cout << Fibo(i) << ' ';
//		else break;
//	}
//}

//#include <iostream>
//
//int Fibo(int N)
//{
//	if (N <= 2) return 1;
//	return Fibo(N - 2) + Fibo(N - 1);
//}
//int main()
//{
//	int N;
//	std::cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		if (Fibo(i) < N) std::cout << Fibo(i) << ' ';
//		else break;
//	}
//}

/* --- < 하노이의 탑 > --- */

/*
< 문제 > :
	N개의 원판과 기둥 세 개가 있으며 초기에는 가장 왼쪽에 순서대로 쌓여있다.
	이를 가장 오른쪽 기둥으로 옮기는 퍼즐 게임으로 조건은 다음과 같다.
	1. 한 번에 하나의 원판만 옮길 수 있다.
	2. 큰 원판이 작은 원판 위에 있어서는 안된다.

< 해결 방법 > :
	가장 밑에 깔려있는 원판을 끝으로 옮기려면 위의 원판들을 우선 가운데로 옮겨야 한다.
	그리고 가운데로 옮겨 놓은 원판도 같은 방식으로 옮겨야 한다.
*/

//#include <iostream>
//
//void Move(int N, char A, char B)
//{
//	static int num{};
//	std::cout << ++num << " : ";
//	std::cout << A << "에 있는 " << N << "원판을 " << B << "로 옮긴다.\n";
//}
//void Hanoi(int N, char A, char B, char C)
//{
//	if (N == 1) Move(N, A, C);
//	else
//	{
//		Hanoi(N - 1, A, C, B);
//		Move(N, A, C);
//		Hanoi(N - 1, B, A, C);
//	}
//}
//int main()
//{
//	Hanoi(3, 'A', 'B', 'C');
//}

//#include <iostream>
//
//void Move(int N, char A, char B)
//{
//	static int num{};
//
//	std::cout << ++num << " : ";
//	std::cout << A << "에 있는 " << N << "원판을 " << B << "로 옮긴다.\n";
//}
//void Hanoi(int N, char A, char B, char C)
//{
//	if (N == 1) Move(N, A, C);
//	else
//	{
//		Hanoi(N - 1, A, C, B);
//		Move(N, A, C);
//		Hanoi(N - 1, B, A, C);
//	}
//}

/* --- < 유클리드 호제법 > --- */

/*
< 문제 > :
	임의의 두 자연수 a, b가 주어졌을 때. 두 수 사이에 존재하는 최대 공약수( GCD )를 구하라.
	1. 공약수 : 두 수 이상의 공통된 약수( 나누어서 0으로 떨어지는 값 )
		=> 최대 공약수 : 공약수 중 가장 큰 수
	2. 공배수 : 두 수 이상의 공통된 배수( 예를 들어 3과 4의 공배수는 3의 배수이면서 동시에 4의 배수 )
		=> 최소 공배수 : 공배수 중 가장 작은 수

< 해결 방법 > :
	임의의 두 자연수 a, b 중 큰 값이 a라고 가정한다.
	a를 b로 나눈 나머지를 n이라고 하면 ( a % b = n )
	n이 0일 때, b가 최대 공약수( GCD )이다.
	만약 n이 0이 아니라면, a에 b값을 다시 넣고 n을 b에 대입한 후 다시 나누는 작업을 반복한다.
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
//int main()
//{
//	int num1{ 22 };
//	int num2{ 4 };
//	std::cout << GCD(num1, num2) << (num1 * num2) / GCD(num1, num2);
//}

//#include <iostream>
//
//int GCD(int a, int b)
//{
//	return b != 0 ? GCD(b, a % b) : a;
//}
//int main()
//{
//	int num1{ 22 };
//	int num2{ 4 };
//	std::cout << GCD(num1, num2);
//}

/* --- < 무한 입력과 중복 확인 > --- */

//#include <iostream>
//
//int main()
//{
//	std::string previous{};
//	std::string current;
//
//	while (std::cin >> current)
//	{
//		if (previous == current) {
//			std::cout << current << " is Repeated word\n";
//			break;
//		}
//		previous = current;
//	}
//}

//#include <iostream>
//
//int main()
//{
//	std::string prev{};
//	std::string cur;
//
//	while (std::cin >> cur)
//	{
//		if (prev == cur) break;
//		prev = cur;
//	}
//}

/* --- < 동적 배열의 기초 > --- */

/*
< 문제 > :
	사용자로 부터 n의 정수를 입력받고 n크기 만큼의 1차원 동적배열을 문자열 타입으로 만든다.
	사용자로 부터 영문 이름을 입력 받고 입력 받은 이름들 중 가장 긴 이름을 출력한다.

< 해결 방법 > :
	동적 배열을 배열의 크기를 변수로 할당 받을 수 있다.
	가장 긴 이름을 갖는 배열 index를 따로 저장해 둔다.
	size()멤버 함수는 부호 없는 정수를 반환 하므로 -1과 같은 음수는
	429496....과 같은 보수로 큰 값이 들어가니 주의 해야 한다.
*/

//#include <iostream>
//
//int main()
//{
//	int count;
//
//	std::cout << "몇 명의 친구가 있나 : ";
//	std::cin >> count;
//
//	if (count <= 1) return;
//
//	std::string* pName = new std::string[count]{};
//
//	int longest{};
//	size_t maxlen{};
//
//	for (int i = 0; i < count; i++)
//	{
//		std::cout << "이름 " << i + 1 << " 을 입력하세요 : ";
//		std::cin >> pName[i];
//
//		if (pName[i].size() > maxlen) {
//			maxlen = pName[i].size();
//			longest = i;
//		}
//	}
//	std::cout << '\n';
//	std::cout << "이름이 가장 긴 친구는 " << pName[longest] << " 입니다.\n";
//
//	delete[] pName;
//	pName = nullptr;
//}

//#include <iostream>
//
//int main()
//{
//	int count;
//	std::cin >> count;
//	if (count <= 1) return;
//
//	std::string* pName = new std::string[count]{};
//	int longest{};
//	size_t max{};
//
//	for (int i = 0; i < count; i++)
//	{
//		std::cin >> pName[i];
//
//		if (pName[i].size() > max)
//		{
//			max = pName[i].size();
//			longest = i;
//		}
//	}
//	std::cout << '\n';
//	std::cout << pName[longest] << '\n';
//
//	delete[] pName;
//	pName = nullptr;
//}

/* --- < 삽입 정렬( Insertion Sort ) > --- */

/*
< 문제 > :
	앞에서 부터 차례로 진행하면서 자신이 위치해야 할 곳에 값을 삽입하는 방식의 정렬을 만든다.
	교환( Swap )이 아니라 자신의 위치에 값을 삽입( Insert )하기 때문에 배열을 조작하는 것이 조금 복잡하다.

< 해결 방법 > :
	0번째 원소 : (0 ~ 0)이므로 아무런 작업 없음
	1번째 원소 : (1 ~ 0)반복하면서 작은 값을 발견하면 그 다음 위치로 삽입
	2번째 원소 : (2 ~ 0)반복...
	3번째 원소 : (3 ~ 0)반복...
*/

//#include <iostream>
//
//void InsertionSort(int input[], int size)
//{
//	for (int i = 1; i < size; i++)
//	{
//		int j = i;
//		int target = input[i];
//
//		while (--j >= 0 && target < input[j])
//		{
//			input[j + 1] = input[j];
//			input[j] = target;
//		}
//	}
//}
//int main()
//{
//	int arr[5]{ 7,8,2,3,1 };
//	InsertionSort(arr, 5);
//	for (int i = 0; i < 5; i++) std::cout << arr[i] << ' ';
//}

//#include <iostream>
//
//void InsertionSort(int input[], int size)
//{
//	for (int i = 1; i < size; i++)
//	{
//		int j = i;
//		int target = input[i];
//
//		while (--j >= 0 && target < input[j]) {
//			input[j + 1] = input[j];
//			input[j] = target;
//		}
//	}
//}
//int main()
//{
//	int arr[5]{ 7,8,2,3,1 };
//	InsertionSort(arr, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << arr[i] << ' ';
//	}
//}