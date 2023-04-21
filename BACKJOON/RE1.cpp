/* ----- < RE > ----- */
//
//
//
//
//
/* --- < �̹��� ȸ�� �˰���( Rotate Matrix ) > --- */

/*
< ���� > :
	���� ���ΰ� N�ȼ��� �̹����� 2���� �迭�� ����Ǿ� �ִ�.
	�� �̹����� 90�� ȸ���ϴ� �˰����� ������ ���� ���� ��� ���� �����Ͽ���.
		=> ���⼭ ���ϴ� ���� �����̶� �迭�̳� �ؽ� ���̺� ���� �ڷ� ������ ���Ѵ�.

< �ذ� ��� > :
	������ �����ϰ� ����� ���Ͽ� �켱 ���̾� ������ �� �ٱ��ʿ� �ִ� ���̾ �������� 90��
	�����̴� ����� ������ ����.
		#. TOP ������ LEFT �������� �ű��
		#. RIGHT ������ TOP �������� �ű��
		#. BOTTOM ������ RIGHT �������� �ű��
		#. LEFT ������ BOTTOM �������� �ű��.

	���̾� ��ĭ�� ������ ������ �������� 1�� �����ϰ� ������ 1�� �����Ѵ�.
	�̶� ���κ��� ������ �ε��� ���� 1�� �����ϴ� �ε��� ���� �ִ�.
		#. �� ���̾�� �ݺ��Ǵ� for���� ���� �ȿ� �迭 ��ĭ ������ �ݺ��Ǵ� for���� �ִ�.
		#. �̶� ������ �ε����� ���� ���� ������ ���� ������ �ݺ��� �ָ� �ȴ�.
			=> �׷��߸� Ȧ ���� ���� ���� ���� ���̾ �ٲ��.
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
//		std::cout << "0 = ��ȸ��, 1 = ��ȸ��\n";
//		std::cout << "�Է� : ";
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

/* --- < ���ﰢ�� ����� > --- */

/*
< ���� > :
	N�̶�� ������ �Է¹ް� N�� ��ŭ�� �ﰢ���� �׸���.
	for���� �̿��Ͽ� ���ﰢ���� �׸���.

< �ذ� ��� > :
	������ �����ϰ� ����� ���� 2��¥�� ���ﰢ���� �׷�����.
	1���� ù��° ĭ�� ������ �;� �ϰ� ���� �׸��� �´�.
	2���� ù��° ĭ�� �׸�, �׸��� ����, �ٽ� �׸��� �´�.
	���� ������ ���� �׸��� �����ϰ� ù��° ĭ ������ �پ���.
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

/* --- < �Ľ�Į�� �ﰢ�� > --- */

/*
< ���� > :
	N�� ��ŭ�� �Ľ�Į �ﰢ���� �׸���.
	�Ľ�Į�� �ﰢ���� �ٷ� �� ���� �� ���� ���� ���� ���� ���� �� ���� �����ϸ� �ȴ�.

< �ذ� ��� > :
	������ �� ���� ���� 0�� 0�࿡ 1�̶�� ���� ���� ������ �ش�.
	���� ���Ե� �� ����( �迭�� �Ѿ�� ���� )������ 0�� ������ �ش�.
	����� ���� �Ʒ��� �������� �ﰢ���� �׷� ������.
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

/* --- < �Ǻ���ġ ���� > --- */

/*
< ���� > :
	ù �޿��� ���� �¾ �䳢 �� �ָ��� �����Ѵ�.
	�� �� �̻��� �� �䳢�� ���� �����ϴ�.
	���� ������ �䳢 �� ���� �Ŵ� ���� �� ���� ���´�.
	�䳢�� ���� �ʴ´�.
	���ڸ� �Է¹ް� �Է¹��� ���ڸ� ���� �ʴ� �Ǻ���ġ ������ ����ϼ���.
	���� 10�� �Է� �޾��� ��� 1, 1, 2, 3, 5, 8���� �����ǰԲ� �ۼ��ϼ���.

< �ذ� ��� > :
	���� �⺻���� �Ǻ���ġ ������ Base, Recursive Case�� �����.
	�� �� �Է� ���� ���� ���� ���ϴ� ������ �ɾ� �ش�.
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