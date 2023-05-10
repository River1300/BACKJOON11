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

/* --- < 퀵 정렬( Quick Sort ) > --- */

/*
< 문제 > :
	배열의 특정 원소를 피벗값으로 지정한다.
	피벗보다 작은 값을 왼쪽으로, 큰 값을 오른쪽으로 정렬한다.
	피벗 기준으로 리스트를 좌/우로 분할한다.
	피벗 선택에 따라 알고리즘의 성능이 매우 차이가 난다.

< 해결 방법 > :
	1. 피벗 지정
		=> 가운데로 피벗을 지정할 경우, 좌우 블록을 처리하기 위해 왼쪽( i ), 오른쪽( J )을 지정
	2. 다음 피벗을 찾기 위해 탐색
		=> arr[i] < pivot 이면 i를 증가
		=> arr[j] > pivot 이면 j를 감소
	3. 더 이상 이동이 불가능하면 i와 j의 값 교체
		=> 즉, 왼쪽에 작은값을 나열하고 오른쪽에 큰 값을 나열한다.
	4. i와 j값이 교차한다면 pivot을 기준으로 좌우 정렬이 끝난 상태이다.
	5. pivot을 중심으로 나열된 좌,우 배열을 재귀로 다시 정렬한다.
*/

//#include <iostream>
//
//void PrintArray(int input[], int size)
//{
//	for (int i = 0; i < size; i++) std::cout << input[i] << ' ';
//}
//void Swap(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void QuickSort(int input[], int left, int right)
//{
//	int i = left;
//	int j = right;
//	int pivot = input[(left + right) / 2];
//	int temp;
//
//	do {
//		while (input[i] < pivot) i++;
//		while (input[j] > pivot) j--;
//
//		if (i <= j)
//		{
//			Swap(input[i], input[j]);
//			i++;
//			j--;
//		}
//	} while (i <= j);
//
//	if (left < j) QuickSort(input, left, j);
//	if (i < right) QuickSort(input, i, right);
//}

//#include <iostream>
//
//void PrintArray(int input[], int size)
//{
//	for (int i = 0; i < size; i++) std::cout << input[i] << ' ';
//}
//void Swap(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void QuickSort(int input[], int left, int right)
//{
//	int i = left;
//	int j = right;
//	int pivot = input[(left + right) / 2];
//	int temp;
//
//	do {
//		while (input[i] < pivot) { i++; }
//		while (input[j] > pivot) { j--; }
//
//		if (i <= j)
//		{
//			Swap(input[i], input[j]);
//			i++;
//			j--;
//		}
//	} while (i <= j);
//
//	if (left < j) QuickSort(input, left, j);
//	if (i < right) QuickSort(input, i, right);
//}

/* --- < 클래스 관계 > --- */

/*
is part of : Composition 결합성
	engine is part of car : ~의 구성 요소
		=> 복잡한 객체는 조금 더 간단한 객체로 구성되어 있다.
	A is part of B : A는 B의 일부 구성 요소다.
		A는 한 번에 하나의 객체에만 존재한다.
		A는 B에 의해 관리된다.
		A는 B의 존재를 모른다.
has a : Aggregation 집단화
	car has tire : ~을 가지고 있다.
		=> 복잡한 객체는 별도로 관리되는 다른 간단한 객체로 구성되어 있다.
	A has a B : B는 A의 일부 구성 요소다.
		=> B는 한 번에 여러 오브젝트에 소속될 수 있다.
		=> B는 A에 의해 관리되지 않는다.
		=> B는 A의 존재를 모른다.
use a : Association 연관화
	father use a car : ~을 사용할 수 있다.
	A use a B : B는 A와 관련이 없다.
		B는 여러 오브젝트에 소속될 수 있다.
		B는 A에 의해 관리되지 않는다.
		B는 A의 존재를 알 수도 있고 모를 수도 있다.
is a : Generalization 일반환 Spectialication 특수화
	Car <- Suv <- Jeep <- Rubicon
		<-방향으로 갈수록 일반화 -> 갈수록 특수화
		일반화 : 공통적으로 가지는 특성을 묶어서 상위 개념을 만드는 것
		특수화 : 일반화 개념으로 부터 고유 기능만 추가하는 것
*/

//class TIRE {};
//class ENGINE {};
//class CAR
//{
//	ENGINE No1;			// #. ENGINE is part of CAR
//	TIRE* Front;
//	TIRE* BACK;			// #. CAR has a TIRE
//};
//class FATHER
//{
//	CAR* SUV;			// #. FATHER use a CAR
//};

/* --- < 가상 함수( virtual function ) > --- */

/*
#. < virtual > : 파생 클래스에서 재정의 할 것으로 기대하는 멤버 함수
	#. 기대한다는 의미는 컴파일 될 때 해당 함수가 사용될지 결정되는 것이 아니라
	#. 실행시간( runtime )에 어떤 함수를 사용할 지를 결정한다는 의미이다.
	#. 즉, 함수를 호출하는 시점에서 어떤 함수를 연결( bind )할 지 결정하게 된다.

#. 기반 클래스에 가상 함수로 Attack()을 만들어 놓고
	=> 이를 상속받은 5개의 직업군 클래스가 각 특성에 맞는 Attack()을 오버라이딩 한다.
	=> 5개의 직업으로 이루어진 파티를 만들고, 다형성을 이용하여 기반 클래스의 포인터로 한 번에 묶어준다.
	=> 간단히 for문으로 모든 파생 클래스의 Attack()을 호출할 수 있다.
*/

//#include <iostream>
//
//class Character { public: virtual void Attack(); };
//
//class Warrior : public Character { public: void Attack(); };
//class Archer : public Character { public: void Attack(); };
//class Wizard : public Character { public: void Attack(); };
//class Priest : public Character { public: void Attack(); };
//class Thief : public Character { public: void Attack(); };
//
//int main()
//{
//	Character* party[5] = {
//		new Warrior,
//		new Archer,
//		new Wizard,
//		new Priest,
//		new Thief
//	};
//
//	for (int i = 0; i < 5; i++)
//	{
//		party[i]->Attack();
//	}
//}

/* --- < 멤버 함수의 포인터 > --- */

/*
< 일반 전역 함수 >	    : ret-type (*) (param-list)
		   #. 예제      : using fptr = int (*) (int)
		   #. 예제 호출 : fptr(3);

< 정적 멤버 함수 >		: ret-type (*) (param-list)
		   #. 예제      : using fptr = int (*) (int)
		   #. 예제 호출 : fptr(3);

< 비 정적 멤버 함수 >   : ret-type (class-name::*) (param-list)
		   #. 예제      : using fptr = int (MyClass::*) (int)
		   #. 예제 호출 : (instance.*fptr)(3);
*/

//#include <iostream>
//
//class MyFunctions
//{
//public:
//	static int NormalFunction(int x) { return x; }
//	static int SquareFunction(int x) { return x * x; }
//};
//
//using FunctionPtr = int(*)(int);
//
//int Sigma(FunctionPtr f, int m, int n)
//{
//	int sum = 0;
//	for (int i = m; i <= n; i++) { sum += f(i); }
//	return sum;
//}
//
//int main()
//{
//	std::cout << Sigma(&MyFunctions::NormalFunction, 1, 10) << '\n';
//}

//#include <iostream>
//
//class MyFunctions
//{
//public:
//	int NormalFunction(int x) { return x; }
//	int SquareFunction(int x) { return x * x; }
//};
//
//using FunctionPtr = int(MyFunctions::*)(int);
//
//int Sigma(MyFunctions& instance, FunctionPtr f, int m, int n)
//{
//	int sum = 0;
//	for (int i = m; i <= n; i++)
//	{
//		sum += (instance.*f)(i);
//	}
//	return sum;
//}
//
//int main()
//{
//	MyFunctions mf;
//	Sigma(mf, &MyFunctions::NormalFunction, 1, 10):
//}

/* --- < vector의 iterator사용 > --- */

/*
< iterator > : container를 순회하는 키워드
< .begin() > : container의 시작 원소를 가리킨다.
< .end() > : container의 끝 원소 바로 뒤를 가리킨다.
< size_type > : 원소의 개수의 TYPE
*/

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> vec{ 11,22,33,44,55,66,77,88,99 };
//
//	std::cout << "\t//ex) vec.front(), vec.back()\n";
//	std::cout << "vec.front() : " << vec.front() << '\n';
//	std::cout << "vec.back() : " << vec.back() << "\n\n\n";
//
//	std::cout << "\t//ex) std::vector<type>::iterator\n";
//	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
//	{
//		std::cout << *itr << ' ';
//	}
//}

//#include <iostream>
//#include <vector>
//
//int main()
//{
//	std::vector<int> vec{ 11, 22, 33, 44, 55, 66, 77, 88, 99 };
//
//	std::cout << "\t//ex) std::vector<type>::size_type\n";
//	for (std::vector<int>::size_type i = 0; i < vec.size(); i++)
//	{
//		std::cout << vec.at(i) << ' ';
//	}
//}

/* --- < quick-Algorithm > --- */

/*
< qsort() > : 퀵 정렬 알고리즘
	=> < void* Base > : container의 시작 지점
		=> vector.date() : 첫 번째 원소의 주소값을 반환해 준다.
	=> < size_t Num > : Base부터 몇 개 까지의 원소를 정렬할 것인지
	=> < size_t Size > : 원소 하나의 크기
		=> 시작 지점을 void포인터로 받기 때문에 원소 하나의 크기를 자동으로 알 수 없다.
	=> < CompareFunction > : 값을 비교하는 함수 포인터
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int Compare(const void* left, const void* right)
//{
//	int lhs = *static_cast<const int*>(left);
//	int rhs = *static_cast<const int*>(right);
//
//	if (lhs > rhs) { return -1; }
//	else if (lhs < rhs) { return 1; }
//	else { return 0; }
//
//	return rhs - lhs;
//}
//int main()
//{
//	std::vector<int> v{ 7,4,1,8,2,3,10,9,6,5 };
//
//	qsort(v.data(), v.size(), sizeof(v[0]), Compare);
//
//	for (auto e : v) std::cout << e << ' ';
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<int> v{ 3,2,5,4,1 };
//
//	qsort(v.data(), v.size(), sizeof(v[0]), [](const void* left, const void* right)
//		{
//			return *static_cast<const int*>(left) - *static_cast<const int*>(right);
//		});
//}

/* --- < for_each-Algorithm > --- */

/*
< for_each() > : 템플릿 형태로 각각에 원소들에 대해서 반복을 실행하는 함수
	=> < inputiterator > : iterator( 시작 부터 끝까지 )
		=> vec.begin(), vec.end()
	=> < function > : 함수( 함수를 받아서 실행 )

< Unary function > : 매개 변수가 한 개인 함수
< Binary function > : 매개 변수가 두 개인 함수
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<int> v{ 3,7,4,1,6,2,5 };
//	std::for_each(v.begin(), v.end(), [](int val) {
//		std::cout << val * val << ' ';
//		});
//}

/* --- < array.erase(std::unique(array.begin(), array.end()), array.end()) > --- */

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//int main()
//{
//	std::vector<int> v;
//
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(2);
//
//	for (auto e : v) std::cout << e << ' ';
//	std::cout << "\n\n";
//
//	std::unique(v.begin(), v.end());
//	for (auto e : v) std::cout << e << ' ';
//	std::cout << "\n\n";
//
//	std::sort(v.begin(), v.end());
//	for (auto e : v) std::cout << e << ' ';
//	std::cout << "\n\n";
//
//	std::vector<int>::iterator itr;
//	itr = std::unique(v.begin(), v.end());
//	for (auto e : v) std::cout << e << ' ';
//	std::cout << "\n\n";
//
//	std::cout << *itr << "\n\n";
//
//	v.erase(itr, v.end());
//	for (auto e : v) std::cout << e << ' ';
//	std::cout << "\n\n";
//}

/* --- < std::tuple > --- */

//#include <iostream>
//#include <tuple>
//
//int main()
//{
//	std::pair<int, std::string> myPair{ 1,"helloween" };
//	std::cout << myPair.first << " : " << myPair.second << '\n';
//
//	std::tuple<int, int, float, std::string> Noodle;
//	Noodle = std::make_tuple(530, 980, 580.0f, "SinLaMyun");
//	std::cout << std::get<0>(Noodle);
//	std::cout << std::get<1>(Noodle);
//}

/* < std::function 과 std::bind > */

//#include <iostream>
//#include <functional>
//
//void MyFunction(const int arg1) {}
//
//struct MyStruct { void operator()() {} };
//
//int main()
//{
//	std::function<void(const int)> functor1 = MyFunction;
//	std::function<void()> functor2 = MyStruct();
//	std::function<void()> functor3 = []() {};
//}

//#include <iostream>
//#include <functional>
//
//void F(int arg1, char arg2) { std::cout << arg1 << ", " << arg2 << '\n'; }
//
//int main()
//{
//	auto functor1 = std::bind(F, std::placeholders::_1, std::placeholders::_2);
//	functor1(1, 'a');
//	auto functor2 = std::bind(F, 99, std::placeholders::_1);
//	functor2('b');
//	auto functor3 = std::bind(F, std::placeholders::_2, std::placeholders::_1);
//	functor3('c', 3);
//}

/* ----- < Binary Search Tree( BST ) > ----- */

/*
< BST > : 재귀호출, 즉 깊이우선이 편리하다라는 것에서 출발하여 착안한 자료구조
	#. 트리 내부는 항상 정렬된 상태를 유지한다.
		=> 원소를 추가하면 자동으로 정렬이 되는 구조( In_Order )
	#. 모든 노드는 최대 2개의 자식 노드를 가질 수 있다.
	#. 왼쪽 서브 트리는 노드보다 작은 값이다.
	#. 오른쪽 서브 트리는 노드보다 큰 값이다.
	#. 각 노드의 양쪽 서브트리는 BST를 만족해야한다.
	#. Log n
*/

//#include <iostream>
//
//namespace myTree
//{
//	struct Node
//	{
//		int mData;
//		Node* mLeft;
//		Node* mRight;
//
//		Node(int data, Node* left, Node* right)
//		{
//			mData = data;
//			mLeft = left;
//			mRight = right;
//		}
//	};
//
//	class BinarySearchTree
//	{
//	private:
//		Node* mpRoot;
//
//	public:
//		BinarySearchTree() { mpRoot = CreateNode(0); }
//
//		Node* GetRoot() { return mpRoot; }
//
//		Node* CreateNode(int data) { return new Node(data, nullptr, nullptr); }
//
//		Node* Insert(Node* pParent, int data)
//		{
//			if (pParent == nullptr) { return CreateNode(data); }
//			if (data < pParent->mData) { Insert(pParent->mLeft, data); }
//			if (data > pParent->mData) { Insert(pParent->mRight, data); }
//			return pParent;
//		}
//
//	public:
//		void Visit(Node* pNode) { std::cout << pNode->mData << "-> "; }
//
//		void In_Order(Node* pNode)
//		{
//			if (pNode == nullptr) { return; }
//			In_Order(pNode->mLeft);
//			Visit(pNode);
//			In_Order(pNode->mRight);
//		}
//	};
//}
//int main()
//{
//	myTree::BinarySearchTree bst;
//
//	auto pRoot = bst.Insert(nullptr, 8);
//	bst.Insert(pRoot, 3);
//	bst.Insert(pRoot, 10);
//	bst.Insert(pRoot, 1);
//	bst.Insert(pRoot, 6);
//
//	bst.In_Order(pRoot);
//}

//#include <iostream>
//
//namespace myTree
//{
//	struct Node
//	{
//		int mData;
//		Node* mLeft;
//		Node* mRight;
//
//		Node(int data, Node* left, Node* right)
//		{
//			mData = data;
//			mLeft = left;
//			mRight = right;
//		}
//	};
//
//	class BinarySearchTree
//	{
//	private:
//		Node* mpRoot;
//
//	public:
//		BinarySearchTree() { mpRoot = CreateNode(0); }
//
//		Node* GetRoot() { return mpRoot; }
//
//		Node* CreateNode(int data) { return new Node(data, nullptr, nullptr); }
//		Node* Insert(Node* pParent, int data)
//		{
//			if (pParent == nullptr) { return CreateNode(data); }
//			if (data < pParent->mData) { pParent->mLeft = Insert(pParent->mLeft, data); }
//			if (data > pParent->mData) { pParent->mRight = Insert(pParent->mRight, data); }
//			return pParent;
//		}
//
//	public:
//		void Visit(Node* pNode) { std::cout << pNode->mData << "-> "; }
//		void In_Order(Node* pNode)
//		{
//			if (pNode == nullptr) { return; }
//			In_Order(pNode->mLeft);
//			Visit(pNode);
//			In_Order(pNode->mRight);
//		}
//	};
//}
//int main()
//{
//	myTree::BinarySearchTree bst;
//
//	auto pRoot = bst.Insert(nullptr, 8);
//	bst.Insert(pRoot, 3);
//	bst.Insert(pRoot, 10);
//	bst.In_Order(pRoot);
//}

//#include <iostream>
//
//namespace myTree
//{
//	struct Node
//	{
//		int mData;
//		Node* mLeft;
//		Node* mRight;
//
//		Node(int data, Node* left, Node* right)
//		{
//			mData = data;
//			mLeft = left;
//			mRight = right;
//		}
//	};
//
//	class BinarySearchTree
//	{
//	private:
//		Node* mpRoot;
//
//	public:
//		BinarySearchTree() { mpRoot = CreateNode(0); }
//
//		Node* GetRoot() { return mpRoot; }
//
//		Node* CreateNode(int data) { return new Node(data, nullptr, nullptr); }
//
//		Node* Insert(Node* pParent, int data)
//		{
//			if (pParent == nullptr) { return CreateNode(data); }
//			if (data < pParent->mData) { pParent->mLeft = Insert(pParent->mLeft, data); }
//			if (data > pParent->mData) { pParent->mRight = Insert(pParent->mRight, data); }
//			return pParent;
//		}
//
//	public:
//		void Visit(Node* pNode) { std::cout << pNode->mData << "-> "; }
//
//		void In_Order(Node* pNode)
//		{
//			if (pNode == nullptr) { return; }
//			In_Order(pNode->mLeft);
//			Visit(pNode);
//			In_Order(pNode->mRight);
//		}
//	};
//}
//int main()
//{
//	myTree::BinarySearchTree bst;
//	auto pRoot = bst.Insert(nullptr, 8);
//	bst.Insert(pRoot, 3);
//	bst.In_Order(pRoot);
//}

//#include <iostream>
//
//namespace myTree
//{
//	struct Node
//	{
//		int mData;
//		Node* mLeft;
//		Node* mRight;
//
//		Node(int data, Node* left, Node* right)
//		{
//			mData = data;
//			mLeft = left;
//			mRight = right;
//		}
//	};
//
//	class BinarySearchTree
//	{
//	private:
//		Node* mpRoot;
//
//	public:
//		BinarySearchTree() { mpRoot = CreateNode(0); }
//
//		Node* GetRoot() { return mpRoot; }
//
//		Node* CreateNode(int data) { return new Node(data, nullptr, nullptr); }
//
//		Node* Insert(Node* pParent, int data)
//		{
//			if (pParent == nullptr) { return CreateNode(data); }
//			if (data < pParent->mData) { pParent->mLeft = Insert(pParent->mLeft, data); }
//			if (data > pParent->mData) { pParent->mRight = Insert(pParent->mRight, data); }
//			return pParent;
//		}
//
//	public:
//		void Visit(Node* pNode) { std::cout << pNode -> mData << "-> "; }
//		void In_Order(Node* pNode)
//		{
//			if (pNode == nullptr) return;
//			In_Order(pNode->mLeft);
//			Visit(pNode);
//			In_Order(pNode->mRight);
//		}
//	};
//}
//int main()
//{
//	myTree::BinarySearchTree bst;
//
//	auto pRoot = bst.Insert(nullptr, 8);
//	bst.Insert(pRoot, 3);
//	bst.In_Order(pRoot);
//}

//#include <iostream>
//
//namespace myTree
//{
//	// 1. 노드 구성
//	struct Node
//	{
//		// 2. 노드 속성
//		int mData;
//		Node* pLeft;
//		Node* pRight;
//
//		// 3. 노드 생성자
//		Node(int data, Node* left, Node* right)
//		{
//			mData = data;
//			pLeft = left;
//			pRight = right;
//		}
//	};
//	// 4. 트리
//	class BinarySearchTree
//	{
//		// 5. 트리 속성
//	private:
//		Node* mpRoot;
//
//	public:
//		// 6. 트리 생성자
//		BinarySearchTree() { mpRoot = CreateNode(0); }
//		// 7. 트리 반환
//		Node* GetRoot() { return mpRoot; }
//		// 8. 트리 삽입
//		Node* CreateNode(int data) { return new Node(data, nullptr, nullptr); }
//		Node* Insert(Node* pParent, int data)
//		{
//			if (pParent == nullptr) { return CreateNode(data); }
//			if (data < pParent->mData) { Insert(pParent->pLeft, data); }
//			if (data > pParent->mData) { Insert(pParent->pRight, data); }
//
//			return pParent;
//		}
//
//	public:
//		void Visit(Node* pNode) { std::cout << pNode->mData << "-> "; }
//		void In_Order(Node* pNode)
//		{
//			if (pNode == nullptr) return;
//			In_Order(pNode->pLeft);
//			Visit(pNode);
//			In_Order(pNode->pRight);
//		}
//	};
//}