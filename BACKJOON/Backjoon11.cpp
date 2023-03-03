/* ----- < 11�ܰ� ���� > ----- */
//
//
//
//
//
/* --- < 2750 > --- */

/*
< ���� >
	N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ���� ���� N(1 �� N �� 1,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� �� �־�����. �� ���� ������ 1,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.

< ��� >
	ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
*/

//#include <iostream>
//
//int main()
//{
//	int number[1000]{};
//
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++) { std::cin >> number[i]; }
//
//	for (int i = 1; i < N; i++)
//	{
//		int j = i;
//		int target = number[i];
//
//		while (--j >= 0 && target < number[j])
//		{
//			number[j + 1] = number[j];
//			number[j] = target;
//		}
//	}
//	for (int i = 0; i < N; i++) { std::cout << number[i] << '\n'; }
//}

/* --- < 2751 > --- */

/*
< ���� >
	N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ���� ���� N(1 �� N �� 1,000,000)�� �־�����.
	��° �ٺ��� N���� �ٿ��� ���� �־�����. �� ���� ������ 1,000,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.

< ��� >
	ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
*/

//#include <iostream>
//
//void PrintArray(int input[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << input[i] << '\n';
//	}
//}
//
//void Merge(int input[], int start, int half, int end, int temp[])
//{
//	int i{ start };
//	int j{ half + 1 };
//	int tempIndex{};
//
//	while (i <= half && j <= end)
//	{
//		if (input[i] < input[j]) { temp[tempIndex++] = input[i++]; }
//		else { temp[tempIndex++] = input[j++]; }
//	}
//
//	while (i <= half) { temp[tempIndex++] = input[i++]; }
//	while (j <= end) { temp[tempIndex++] = input[j++]; }
//
//	tempIndex = 0;
//	for (int i = start; i <= end; i++)input[i] = temp[tempIndex++];
//}
//
//void MergeSort(int input[], int start, int end, int temp[])
//{
//	if (start >= end) return;
//	int half = (start + end) / 2;
//
//	MergeSort(input, start, half, temp);
//	MergeSort(input, half + 1, end, temp);
//	Merge(input, start, half, end, temp);
//}
//
//int main()
//{
//	std::cin.tie(NULL);
//	std::ios::sync_with_stdio(false);
//
//	int N;
//	std::cin >> N;
//
//	int* arr = new int[N];
//	int* tempArray = new int[N];
//
//	for (int i = 0; i < N; i++) { std::cin >> arr[i]; }
//
//	MergeSort(arr, 0, N - 1, tempArray);
//	PrintArray(arr, N);
//}

/* --- < 10989 > --- */

/*
< ���� >
	N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ���� ���� N(1 �� N �� 1,000,000)�� �־�����.
	��° �ٺ��� N���� �ٿ��� ���� �־�����. �� ���� ������ 10,000���� �۰ų� ���� �����̴�.

< ��� >
	ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.

< Ǯ�� >
	Counting Sort - ��� ����
		#. ���Ұ� �񱳾��� ������ �� �ִ� ī���� ����
		#. ���Ұ� ������ �ʰ� �� ���Ұ� � �����ϴ��� ������ ���� �����ϴ� ���
		#. ��� ���Ҵ� ���� �������� �Ѵ�.
		#. �ð� ���⵵�� ������, �������Ŀ� ���� �Ϲ������� ������.
		#. ������ ���� ���� N�� �迭 �ϳ�, ����� ���� ���� K�� �迭 �ϳ�. O(N+K)�� ���� ���⵵�� ������.

	arr[N]{1, 0, 3, 1, 3, 1};
		=> arr �迭�� ���� �� �ִ� ���� 3�̴�.
		=> 0 ~ 3 ���� �ε����� ������ ����� ���� �迭�� �Ҵ��Ѵ�.
		=> temp[4] ����� ���� �迭�� ���Ҵ� ��� 0���� �ʱ�ȭ ��Ų��.
		=> �� ���ҵ��� ������ ����Ͽ� count[����]�� ��´�.
		=> temp[0] = 1, temp[1] = 3, temp[2] = 0, temp[3] = 2 �̷��� arr�迭�� �ִ� ���� ���� temp�ε����� ������ ��´�.
		=> �������� ����Ѵ�.
		=> �������� �̿��Ͽ� �����Ѵ�.
		=> ��������, ���ĵ� �迭�� �� ���� �� ��ġ�� Ȯ���ϴ� ���̶�� �����ϸ� �ȴ�.
		=> temp[1] += temp[0]; == 3 += 1 == count[i] += count[i-1]; == temp[1] = 4
		=> temp[2] += temp[1]; == 0 += 4 == count[i] += count[i-1]; == temp[2] = 4
		=> temp[3] += temp[2]; == 2 += 4 == count[i] += count[i-1]; == temp[3] = 6
		=> ���� ���� �ǹ̴� ������ ����.
		=> 0�� 0��°���� 1��° ���̱��� ��ġ�ϰ� ( 0 )
		=> 1�� 1��°���� 4��° ���̿� ( 1, 2, 3 )
		=> 2�� 4��°���� 4��° ���̿� ( X )
		=> 3�� 4��°���� 6��° ���̿� ( 4, 5 )��ġ�Ѵٴ� ���̴�.
		=> result[N] �������� �̿��ؼ� ���Ľ�Ű�� �ܰ�
		=> �̶� �־��� arr �迭�� �����ʿ��� �������� �����ؾ� ���������� �����ϴ�.
		=> arr[5] = 1, temp[1] = 4, �̶� ������ -1�� ���ְ� �� ��ġ�� ������. 4 - 1 = 3
		=> result[3] = 1 �������� temp[1]�� �ǹ��ϴ� ���� " 1�� 1��°���� 4��° ���̿�( 1, 2, 3 )��ġ�Ѵ�" �� ��
*/

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int num;
//	int arr[10001]{};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> num;
//		arr[num]++;
//	}
//
//	for (int i = 0; i <= 10000; i++)
//	{
//		if (arr[i] == 0) continue;
//
//		for (int j = 0; j < arr[i]; j++)
//		{
//			std::cout << i << '\n';
//		}
//	}
//}

/* --- < 2108 > --- */

/*
< ���� >
	���� ó���ϴ� ���� ����п��� ����� �߿��� ���̴�.
	����п��� N���� ���� ��ǥ�ϴ� �⺻ ��谪���� ������ ���� �͵��� �ִ�. ��, N�� Ȧ����� ��������.

	������ : N���� ������ ���� N���� ���� ��
	�߾Ӱ� : N���� ������ �����ϴ� ������ �������� ��� �� �߾ӿ� ��ġ�ϴ� ��
	�ֺ� : N���� ���� �� ���� ���� ��Ÿ���� ��
	���� : N���� ���� �� �ִ񰪰� �ּڰ��� ����

	N���� ���� �־����� ��, �� ���� �⺻ ��谪�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ���� ���� N(1 �� N �� 500,000)�� �־�����. ��, N�� Ȧ���̴�.
	�� ���� N���� �ٿ��� �������� �־�����. �ԷµǴ� ������ ������ 4,000�� ���� �ʴ´�.

< ��� >
	ù° �ٿ��� �������� ����Ѵ�.
	�Ҽ��� ���� ù° �ڸ����� �ݿø��� ���� ����Ѵ�.

	��° �ٿ��� �߾Ӱ��� ����Ѵ�.

	��° �ٿ��� �ֺ��� ����Ѵ�. ���� �� ���� ������ �ֺ� �� �� ��°�� ���� ���� ����Ѵ�.

	��° �ٿ��� ������ ����Ѵ�.
*/

//#include <iostream>
//#include <vector>
//#include <cmath>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<int> v1(N);
//	std::vector<int> v2(8001, 0);
//
//	int sum{};
//	int temp;
//	int max{};
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> v1[i];
//		sum += v1[i];
//		v2[v1[i] + 4000]++;
//	}
//
//	std::qsort(v1.data(), v1.size(), sizeof(v1[0]), [](const void* left, const void* right) {
//		return *static_cast<const int*>(left) - *static_cast<const int*>(right);
//		});
//
//	int index;
//	bool second{};
//
//	for (int i = 0; i <= 8000; i++)
//	{
//		if (v2[i] > max)
//		{
//			max = v2[i];
//			index = i;
//		}
//	}
//
//	for (int i = index + 1; i <= 8000; i++)
//	{
//		if (v2[i] == max)
//		{
//			index = i;
//			break;
//		}
//	}
//
//	int average = round(sum / static_cast<double>(N));
//
//	std::cout << average << '\n';
//	std::cout << v1[N / 2] << '\n';
//	std::cout << index - 4000 << '\n';
//	std::cout << v1[N - 1] - v1[0] << '\n';
//}

/* --- < 1427 > --- */

/*
< ���� >
	�迭�� �����ϴ� ���� ����. ���� �־�����, �� ���� �� �ڸ����� ������������ �����غ���.

< �Է� >
	ù° �ٿ� �����Ϸ��� �ϴ� �� N�� �־�����. N�� 1,000,000,000���� �۰ų� ���� �ڿ����̴�.

< ��� >
	ù° �ٿ� �ڸ����� ������������ ������ ���� ����Ѵ�.
*/

//#include <iostream>
//
//int main()
//{
//	std::string N;
//	std::cin >> N;
//
//	char number;
//	int arr[10]{};
//
//	for (int i = 0; i < N.size(); i++)
//	{
//		number = N[i];
//		arr[(number - '0')]++;
//	}
//
//	for (int i = 9; i >= 0; i--)
//	{
//		for (int j = 0; j < arr[i]; j++) std::cout << i << '\n';
//	}
//}

/* --- < 11650 > --- */

/*
< ���� >
	2���� ��� ���� �� N���� �־�����.
	��ǥ�� x��ǥ�� �����ϴ� ������, x��ǥ�� ������ y��ǥ�� �����ϴ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ���� ���� N (1 �� N �� 100,000)�� �־�����.
	��° �ٺ��� N���� �ٿ��� i������ ��ġ xi�� yi�� �־�����.
	(-100,000 �� xi, yi �� 100,000) ��ǥ�� �׻� �����̰�, ��ġ�� ���� �� ���� ����.

< ��� >
	ù° �ٺ��� N���� �ٿ� ���� ������ ����� ����Ѵ�.

< Ǯ�� >
	STL sort�Լ��� �̿��ϸ� �˾Ƽ� vector�� first�� �������� �����ϰ�, first�� ������ second�� �������� �����Ѵ�.
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<std::pair<int, int>> point;
//
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::pair<int, int> temp;
//		std::cin >> temp.first >> temp.second;
//
//		point.push_back(temp);
//	}
//
//	std::sort(point.begin(), point.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << point[i].first << ' ' << point[i].second << '\n';
//	}
//}

/* --- < 11651 > --- */

/*
< ���� >
	2���� ��� ���� �� N���� �־�����.
	��ǥ�� y��ǥ�� �����ϴ� ������, y��ǥ�� ������ x��ǥ�� �����ϴ� ������ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ���� ���� N (1 �� N �� 100,000)�� �־�����.
	��° �ٺ��� N���� �ٿ��� i������ ��ġ xi�� yi�� �־�����.
	(-100,000 �� xi, yi �� 100,000) ��ǥ�� �׻� �����̰�, ��ġ�� ���� �� ���� ����.

< ��� >
	ù° �ٺ��� N���� �ٿ� ���� ������ ����� ����Ѵ�.
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<std::pair<int, int>> point;
//
//	int N;
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::pair<int, int> temp;
//		std::cin >> temp.first >> temp.second;
//
//		point.push_back(temp);
//	}
//
//	std::sort(point.begin(), point.end(),
//		[](const std::pair<int, int>& a, const std::pair<int, int>& b)
//		{
//			return (a.second != b.second) ? a.second < b.second : a.first < b.first;
//		});
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << point[i].first << ' ' << point[i].second << '\n';
//	}
//}

/* --- < 1181 > --- */

/*
< ���� >
	���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� ���ǿ� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	���̰� ª�� �ͺ���
	���̰� ������ ���� ������

< �Է� >
	ù° �ٿ� �ܾ��� ���� N�� �־�����.
	(1 �� N �� 20,000) ��° �ٺ��� N���� �ٿ� ���� ���ĺ� �ҹ��ڷ� �̷���� �ܾ �� �ٿ� �ϳ��� �־�����.
	�־����� ���ڿ��� ���̴� 50�� ���� �ʴ´�.

< ��� >
	���ǿ� ���� �����Ͽ� �ܾ���� ����Ѵ�. ��, ���� �ܾ ���� �� �Էµ� ��쿡�� �� ������ ����Ѵ�.
*/

//#include <iostream>
//#include <list>
//#include <algorithm>
//
//int main()
//{
//	std::list<std::string> name;
//
//	int N;
//	std::cin >> N;
//
//	std::string temp;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> temp;
//		name.push_back(temp);
//	}
//
//	name.sort([](const std::string left, const std::string right)
//		{
//			return (left.size() != right.size()) ? left.size() < right.size() : left < right;
//		});
//
//	name.unique();
//
//	for (auto e : name) std::cout << e << '\n';
//}

/*
< ���� >
	�¶��� ������ ������ ������� ���̿� �̸��� ������ ������� �־�����.
	�̶�, ȸ������ ���̰� �����ϴ� ������,
	���̰� ������ ���� ������ ����� �տ� ���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� �¶��� ���� ȸ���� �� N�� �־�����. (1 �� N �� 100,000)

	��° �ٺ��� N���� �ٿ��� �� ȸ���� ���̿� �̸��� �������� ���еǾ� �־�����.
	���̴� 1���� ũ�ų� ������, 200���� �۰ų� ���� �����̰�, �̸��� ���ĺ� ��ҹ��ڷ� �̷���� �ְ�,
	���̰� 100���� �۰ų� ���� ���ڿ��̴�. �Է��� ������ ������ �־�����.

< ��� >
	ù° �ٺ��� �� N���� �ٿ� ���� �¶��� ���� ȸ���� ���� ��,
	���̰� ������ ������ ������ �� �ٿ� �� �� ���̿� �̸��� �������� ������ ����Ѵ�.

< Ǯ�� >
	stable_sort : ���� ������ �����ִ� �迭�� ���� �� �ϳ��� ��ҷ� ������ ���� �� �ٸ� ��ҵ��� ���� ������
			���� ���� ���� �״�� ������ �� �ֵ��� �ϴ� �����̴�.
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	std::vector<std::pair<int, std::string>> name;
//
//	int N;
//	std::cin >> N;
//
//	std::pair<int, std::string> temp;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> temp.first >> temp.second;
//		name.push_back(temp);
//	}
//
//	std::stable_sort(name.begin(), name.end(),
//		[](const std::pair<int, std::string> left, const std::pair<int, std::string> right)
//		{
//			return left.first < right.first;
//		});
//
//	for (auto e : name) std::cout << e.first << ' ' << e.second << '\n';
//}

/* --- < 18870 > --- */

/*
< ���� >
	������ ���� N���� ��ǥ X1, X2, ..., XN�� �ִ�. �� ��ǥ�� ��ǥ ������ �����Ϸ��� �Ѵ�.

	Xi�� ��ǥ ������ ��� X'i�� ���� Xi > Xj�� �����ϴ� ���� �ٸ� ��ǥ�� ������ ���ƾ� �Ѵ�.

	X1, X2, ..., XN�� ��ǥ ������ ������ ��� X'1, X'2, ..., X'N�� ����غ���.

< �Է� >
	ù° �ٿ� N�� �־�����.

	��° �ٿ��� ���� �� ĭ���� ���е� X1, X2, ..., XN�� �־�����.

< ��� >
	ù° �ٿ� X'1, X'2, ..., X'N�� ���� �� ĭ���� �����ؼ� ����Ѵ�.

< Ǯ�� >
	1. ������ ������������ ����
	2. �ߺ��� ���� (�޸��� unique�� erase�κ�. unique�� ���ϰ����� '�ߺ�ó���� �ڷ� �̷� ù��° ��ġ'�� ��ȯ�Ѵ�. ex 3�� ��ġ)
	3. �� �� ������ index���� �������� �䱸�ϴ� ����.

	������ �̹� �Է°��� ������������ �����س��ұ⿡,
	�Է¿��� �־��� ������ �־��� ���� index ���� ���������ߴ�.

	���� ���͸� �ΰ��� �װ�
	�� ���Ϳ� �����ϰ� �Է°��� �־��ְ� �ϳ��� ���͸� ������ �� �ߺ��� �������־���

	lower_bound�� ���� ����Ž���� �����Ͽ� �ε��� ���� ������־���.
	lower_bound : ����Ž�����. �ش��ϴ� ������ ũ�ų� �������� ���� ó�� �����ϴ� �� ��ġ�� ����. (���� ����)
*/

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::vector<int> point(N);
//	std::vector<int> result(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> point[i];
//		result[i] = point[i];
//	}
//
//	std::sort(point.begin(), point.end());
//	point.erase(std::unique(point.begin(), point.end()), point.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << std::lower_bound(point.begin(), point.end(), result[i]) - point.begin() << ' ';
//	}	std::cout << '\n';
//}