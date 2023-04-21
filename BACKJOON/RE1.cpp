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