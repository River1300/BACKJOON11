//#include <iostream>
//
//int main()
//{
//// 1. N�� ��ŭ�� ���ڸ� �޾Ƽ� �� ���� �����Ѵ�.
//	int N;
//	std::cin >> N;
//// 2. �������� ������ �������� �迭�� �����.
////		=> �� �迭�� �ε����� �Է� ���� ���� �����Ѵ�.
//	int arr[10001]{};
//	for (int i = 0; i < N; i++)
//	{
//		int num;
//		std::cin >> num;
//// 3. ���� �� �ε����� �ش��ϴ� ���ڰ� �߰��� ������ �迭 ������ ���� +1�� �����Ѵ�.
//		arr[num]++;
//	}
//// 4. �迭 ���Ұ� 0�� �ƴ� ���� ������ŭ �ݺ��Ͽ� ����ϸ� �ȴ�.
//	for (int i = 0; i <= 10000; i++)
//	{
//		if (arr[i] == 0) continue;
//
//		for (int j = 0; j < arr[i]; j++) std::cout << i << '\n';
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//// 1. (x,y)��ǥ�� �Է� ���� ����, ���� ���� ��ǥ�� ���� ������ �����.
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
//// 2. �迭 ������ ���� ��� ���� �Ǿ��ٸ� ���� �˰������� �����Ѵ�.
////	=> std::sort()�Լ��� �⺻������ first�� ���� ���Ͽ� �����ϰ� first ���� ���ٸ� second�� ���Ͽ� �����Ѵ�.
//	std::sort(point.begin(), point.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << point[i].first << ' ' << point[i].second << '\n';
//	}
//}

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
//// 1. �̹����� second�� ���� ���ؼ� ������ ��
////		=> ���ٽ����� std::sort�� ������ �ش�.
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
//	std::stable_sort(name.begin(), name.end(),
//		[](const std::pair<int, std::string> left, const std::pair<int, std::string> right)
//		{
//			return left.first < right.first;
//		});
//	for (auto e : name) std::cout << e.first << ' ' << e.second << '\n';
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//// 1. N���� ��ǥ�� �Է� ������ �׺��Ǵ� ������ ��� �����ϰ� ������������ ����ؾ� �Ѵ�.
////		=> ��ǥ�� �Է� �����鼭 �Է� ���� ������� �ٸ� ������ �߰��� �����Ѵ�.
//	std::vector<int> point(N);
//	std::vector<int> result(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> point[i];
//		result[i] = point[i];
//	}
//// 2. �Է� ���� ��ǥ�� �����ϰ� �ߺ��Ǵ� ���� ã�� �����.
//	std::sort(point.begin(), point.end());
//	point.erase(std::unique(point.begin(), point.end()), point.end());
//	
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << std::lower_bound(point.begin(), point.end(), result[i]) - point.begin() << ' ';
//	}	std::cout << '\n';
//}

//#include <iostream>
//
//int func(int input[5])
//{
//	int sum{};
//
//	for (int i = 0; i < 5; i++) sum += input[i];
//
//	return sum;
//}
//
//int main()
//{
//	int arr[5]{ 1,2,3,4,5 };
//	std::cout << func(arr);
//}