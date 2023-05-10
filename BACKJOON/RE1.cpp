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

/* --- < �ϳ����� ž > --- */

/*
< ���� > :
	N���� ���ǰ� ��� �� ���� ������ �ʱ⿡�� ���� ���ʿ� ������� �׿��ִ�.
	�̸� ���� ������ ������� �ű�� ���� �������� ������ ������ ����.
	1. �� ���� �ϳ��� ���Ǹ� �ű� �� �ִ�.
	2. ū ������ ���� ���� ���� �־�� �ȵȴ�.

< �ذ� ��� > :
	���� �ؿ� ����ִ� ������ ������ �ű���� ���� ���ǵ��� �켱 ����� �Űܾ� �Ѵ�.
	�׸��� ����� �Ű� ���� ���ǵ� ���� ������� �Űܾ� �Ѵ�.
*/

//#include <iostream>
//
//void Move(int N, char A, char B)
//{
//	static int num{};
//	std::cout << ++num << " : ";
//	std::cout << A << "�� �ִ� " << N << "������ " << B << "�� �ű��.\n";
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
//	std::cout << A << "�� �ִ� " << N << "������ " << B << "�� �ű��.\n";
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

/* --- < ��Ŭ���� ȣ���� > --- */

/*
< ���� > :
	������ �� �ڿ��� a, b�� �־����� ��. �� �� ���̿� �����ϴ� �ִ� �����( GCD )�� ���϶�.
	1. ����� : �� �� �̻��� ����� ���( ����� 0���� �������� �� )
		=> �ִ� ����� : ����� �� ���� ū ��
	2. ����� : �� �� �̻��� ����� ���( ���� ��� 3�� 4�� ������� 3�� ����̸鼭 ���ÿ� 4�� ��� )
		=> �ּ� ����� : ����� �� ���� ���� ��

< �ذ� ��� > :
	������ �� �ڿ��� a, b �� ū ���� a��� �����Ѵ�.
	a�� b�� ���� �������� n�̶�� �ϸ� ( a % b = n )
	n�� 0�� ��, b�� �ִ� �����( GCD )�̴�.
	���� n�� 0�� �ƴ϶��, a�� b���� �ٽ� �ְ� n�� b�� ������ �� �ٽ� ������ �۾��� �ݺ��Ѵ�.
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

/* --- < ���� �Է°� �ߺ� Ȯ�� > --- */

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

/* --- < ���� �迭�� ���� > --- */

/*
< ���� > :
	����ڷ� ���� n�� ������ �Է¹ް� nũ�� ��ŭ�� 1���� �����迭�� ���ڿ� Ÿ������ �����.
	����ڷ� ���� ���� �̸��� �Է� �ް� �Է� ���� �̸��� �� ���� �� �̸��� ����Ѵ�.

< �ذ� ��� > :
	���� �迭�� �迭�� ũ�⸦ ������ �Ҵ� ���� �� �ִ�.
	���� �� �̸��� ���� �迭 index�� ���� ������ �д�.
	size()��� �Լ��� ��ȣ ���� ������ ��ȯ �ϹǷ� -1�� ���� ������
	429496....�� ���� ������ ū ���� ���� ���� �ؾ� �Ѵ�.
*/

//#include <iostream>
//
//int main()
//{
//	int count;
//
//	std::cout << "�� ���� ģ���� �ֳ� : ";
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
//		std::cout << "�̸� " << i + 1 << " �� �Է��ϼ��� : ";
//		std::cin >> pName[i];
//
//		if (pName[i].size() > maxlen) {
//			maxlen = pName[i].size();
//			longest = i;
//		}
//	}
//	std::cout << '\n';
//	std::cout << "�̸��� ���� �� ģ���� " << pName[longest] << " �Դϴ�.\n";
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

/* --- < ���� ����( Insertion Sort ) > --- */

/*
< ���� > :
	�տ��� ���� ���ʷ� �����ϸ鼭 �ڽ��� ��ġ�ؾ� �� ���� ���� �����ϴ� ����� ������ �����.
	��ȯ( Swap )�� �ƴ϶� �ڽ��� ��ġ�� ���� ����( Insert )�ϱ� ������ �迭�� �����ϴ� ���� ���� �����ϴ�.

< �ذ� ��� > :
	0��° ���� : (0 ~ 0)�̹Ƿ� �ƹ��� �۾� ����
	1��° ���� : (1 ~ 0)�ݺ��ϸ鼭 ���� ���� �߰��ϸ� �� ���� ��ġ�� ����
	2��° ���� : (2 ~ 0)�ݺ�...
	3��° ���� : (3 ~ 0)�ݺ�...
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

/* --- < �� ����( Quick Sort ) > --- */

/*
< ���� > :
	�迭�� Ư�� ���Ҹ� �ǹ������� �����Ѵ�.
	�ǹ����� ���� ���� ��������, ū ���� ���������� �����Ѵ�.
	�ǹ� �������� ����Ʈ�� ��/��� �����Ѵ�.
	�ǹ� ���ÿ� ���� �˰����� ������ �ſ� ���̰� ����.

< �ذ� ��� > :
	1. �ǹ� ����
		=> ����� �ǹ��� ������ ���, �¿� ����� ó���ϱ� ���� ����( i ), ������( J )�� ����
	2. ���� �ǹ��� ã�� ���� Ž��
		=> arr[i] < pivot �̸� i�� ����
		=> arr[j] > pivot �̸� j�� ����
	3. �� �̻� �̵��� �Ұ����ϸ� i�� j�� �� ��ü
		=> ��, ���ʿ� �������� �����ϰ� �����ʿ� ū ���� �����Ѵ�.
	4. i�� j���� �����Ѵٸ� pivot�� �������� �¿� ������ ���� �����̴�.
	5. pivot�� �߽����� ������ ��,�� �迭�� ��ͷ� �ٽ� �����Ѵ�.
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

/* --- < Ŭ���� ���� > --- */

/*
is part of : Composition ���ռ�
	engine is part of car : ~�� ���� ���
		=> ������ ��ü�� ���� �� ������ ��ü�� �����Ǿ� �ִ�.
	A is part of B : A�� B�� �Ϻ� ���� ��Ҵ�.
		A�� �� ���� �ϳ��� ��ü���� �����Ѵ�.
		A�� B�� ���� �����ȴ�.
		A�� B�� ���縦 �𸥴�.
has a : Aggregation ����ȭ
	car has tire : ~�� ������ �ִ�.
		=> ������ ��ü�� ������ �����Ǵ� �ٸ� ������ ��ü�� �����Ǿ� �ִ�.
	A has a B : B�� A�� �Ϻ� ���� ��Ҵ�.
		=> B�� �� ���� ���� ������Ʈ�� �Ҽӵ� �� �ִ�.
		=> B�� A�� ���� �������� �ʴ´�.
		=> B�� A�� ���縦 �𸥴�.
use a : Association ����ȭ
	father use a car : ~�� ����� �� �ִ�.
	A use a B : B�� A�� ������ ����.
		B�� ���� ������Ʈ�� �Ҽӵ� �� �ִ�.
		B�� A�� ���� �������� �ʴ´�.
		B�� A�� ���縦 �� ���� �ְ� �� ���� �ִ�.
is a : Generalization �Ϲ�ȯ Spectialication Ư��ȭ
	Car <- Suv <- Jeep <- Rubicon
		<-�������� ������ �Ϲ�ȭ -> ������ Ư��ȭ
		�Ϲ�ȭ : ���������� ������ Ư���� ��� ���� ������ ����� ��
		Ư��ȭ : �Ϲ�ȭ �������� ���� ���� ��ɸ� �߰��ϴ� ��
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

/* --- < ���� �Լ�( virtual function ) > --- */

/*
#. < virtual > : �Ļ� Ŭ�������� ������ �� ������ ����ϴ� ��� �Լ�
	#. ����Ѵٴ� �ǹ̴� ������ �� �� �ش� �Լ��� ������ �����Ǵ� ���� �ƴ϶�
	#. ����ð�( runtime )�� � �Լ��� ����� ���� �����Ѵٴ� �ǹ��̴�.
	#. ��, �Լ��� ȣ���ϴ� �������� � �Լ��� ����( bind )�� �� �����ϰ� �ȴ�.

#. ��� Ŭ������ ���� �Լ��� Attack()�� ����� ����
	=> �̸� ��ӹ��� 5���� ������ Ŭ������ �� Ư���� �´� Attack()�� �������̵� �Ѵ�.
	=> 5���� �������� �̷���� ��Ƽ�� �����, �������� �̿��Ͽ� ��� Ŭ������ �����ͷ� �� ���� �����ش�.
	=> ������ for������ ��� �Ļ� Ŭ������ Attack()�� ȣ���� �� �ִ�.
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

/* --- < ��� �Լ��� ������ > --- */

/*
< �Ϲ� ���� �Լ� >	    : ret-type (*) (param-list)
		   #. ����      : using fptr = int (*) (int)
		   #. ���� ȣ�� : fptr(3);

< ���� ��� �Լ� >		: ret-type (*) (param-list)
		   #. ����      : using fptr = int (*) (int)
		   #. ���� ȣ�� : fptr(3);

< �� ���� ��� �Լ� >   : ret-type (class-name::*) (param-list)
		   #. ����      : using fptr = int (MyClass::*) (int)
		   #. ���� ȣ�� : (instance.*fptr)(3);
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

/* --- < vector�� iterator��� > --- */

/*
< iterator > : container�� ��ȸ�ϴ� Ű����
< .begin() > : container�� ���� ���Ҹ� ����Ų��.
< .end() > : container�� �� ���� �ٷ� �ڸ� ����Ų��.
< size_type > : ������ ������ TYPE
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
< qsort() > : �� ���� �˰���
	=> < void* Base > : container�� ���� ����
		=> vector.date() : ù ��° ������ �ּҰ��� ��ȯ�� �ش�.
	=> < size_t Num > : Base���� �� �� ������ ���Ҹ� ������ ������
	=> < size_t Size > : ���� �ϳ��� ũ��
		=> ���� ������ void�����ͷ� �ޱ� ������ ���� �ϳ��� ũ�⸦ �ڵ����� �� �� ����.
	=> < CompareFunction > : ���� ���ϴ� �Լ� ������
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
< for_each() > : ���ø� ���·� ������ ���ҵ鿡 ���ؼ� �ݺ��� �����ϴ� �Լ�
	=> < inputiterator > : iterator( ���� ���� ������ )
		=> vec.begin(), vec.end()
	=> < function > : �Լ�( �Լ��� �޾Ƽ� ���� )

< Unary function > : �Ű� ������ �� ���� �Լ�
< Binary function > : �Ű� ������ �� ���� �Լ�
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

/* < std::function �� std::bind > */

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
< BST > : ���ȣ��, �� ���̿켱�� ���ϴٶ�� �Ϳ��� ����Ͽ� ������ �ڷᱸ��
	#. Ʈ�� ���δ� �׻� ���ĵ� ���¸� �����Ѵ�.
		=> ���Ҹ� �߰��ϸ� �ڵ����� ������ �Ǵ� ����( In_Order )
	#. ��� ���� �ִ� 2���� �ڽ� ��带 ���� �� �ִ�.
	#. ���� ���� Ʈ���� ��庸�� ���� ���̴�.
	#. ������ ���� Ʈ���� ��庸�� ū ���̴�.
	#. �� ����� ���� ����Ʈ���� BST�� �����ؾ��Ѵ�.
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
//	// 1. ��� ����
//	struct Node
//	{
//		// 2. ��� �Ӽ�
//		int mData;
//		Node* pLeft;
//		Node* pRight;
//
//		// 3. ��� ������
//		Node(int data, Node* left, Node* right)
//		{
//			mData = data;
//			pLeft = left;
//			pRight = right;
//		}
//	};
//	// 4. Ʈ��
//	class BinarySearchTree
//	{
//		// 5. Ʈ�� �Ӽ�
//	private:
//		Node* mpRoot;
//
//	public:
//		// 6. Ʈ�� ������
//		BinarySearchTree() { mpRoot = CreateNode(0); }
//		// 7. Ʈ�� ��ȯ
//		Node* GetRoot() { return mpRoot; }
//		// 8. Ʈ�� ����
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