//#include <iostream>
//
//int main()
//{
//// 1. N개 만큼의 숫자를 받아서 그 수를 정렬한다.
//	int N;
//	std::cin >> N;
//// 2. 문제에서 제한한 범위까지 배열을 만든다.
////		=> 그 배열의 인덱스는 입력 받은 수로 가정한다.
//	int arr[10001]{};
//	for (int i = 0; i < N; i++)
//	{
//		int num;
//		std::cin >> num;
//// 3. 이제 각 인덱스에 해당하는 숫자가 추가될 때마다 배열 원소의 값이 +1씩 증가한다.
//		arr[num]++;
//	}
//// 4. 배열 원소가 0이 아닌 값을 갯수만큼 반복하여 출력하면 된다.
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
//// 1. (x,y)좌표를 입력 받을 변수, 여러 개의 좌표를 받을 변수를 만든다.
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
//// 2. 배열 변수에 값이 모두 저장 되었다면 이제 알고리즘으로 정렬한다.
////	=> std::sort()함수는 기본적으로 first를 먼저 비교하여 정렬하고 first 값이 같다면 second로 비교하여 정렬한다.
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
//// 1. 이번에는 second를 먼저 비교해서 정렬할 것
////		=> 람다식으로 std::sort를 수정해 준다.
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
//// 1. N개의 좌표를 입력 받으면 죽복되는 값들을 모두 제거하고 오름차순으로 출력해야 한다.
////		=> 좌표를 입력 받으면서 입력 받은 순서대로 다른 공간에 추가로 저장한다.
//	std::vector<int> point(N);
//	std::vector<int> result(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> point[i];
//		result[i] = point[i];
//	}
//// 2. 입력 받은 좌표를 정렬하고 중복되는 값을 찾아 지운다.
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

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	int N, M;
//	std::cin >> N >> M;
//	std::vector<int> card(N, 0);
//	int temp;
//	for (int i = 0; i < N; i++) std::cin >> card[i];
//	std::sort(card.begin(), card.end());
//
//	std::vector<int> check(M, 0);
//	std::vector<int> answer(M, 0);
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> check[i];
//		int low{};
//		int high = N - 1;
//
//		while (low <= high)
//		{
//			int mid = (low + high) / 2;
//			if (card[mid] == check[i]) {
//				answer[i]++;
//				break;
//			}
//			else if (card[mid] > check[i]) {
//				high = mid - 1;
//			}
//			else if (card[mid] < check[i]) {
//				low = mid + 1;
//			}
//		}
//	}
//	for (auto e : answer) std::cout << e << ' ';
//}

//#include <iostream>
//#include <unordered_map>
//
//int main()
//{
//	int N, M, count;
//	std::cin >> N >> M;
//	std::string s;
//	
//	std::unordered_map<std::string, int> name;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> s;
//		name[s] = 1;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> s;
//		if (name[s]) count += 1;
//	}
//	std::cout << count;
//}

//#include <iostream>
//#include <unordered_map>
//#include <string>
//
//int main()
//{
//	int N, M;
//	std::cin >> N >> M;
//	std::unordered_map<std::string, std::string> poket;
//	std::string name;
//	for (int i = 1; i <= N; i++)
//	{
//		std::cin >> name;
//		poket[name] = std::to_string(i);
//		poket[std::to_string(i)] = name;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> name;
//		std::cout << poket[name] << '\n';
//	}
//}

//#include <iostream>
//#include <unordered_map>
//
//int main()
//{
//	int N, M, X;
//	std::unordered_map<int, int> card;
//
//	for (std::cin >> N; N--;)
//		std::cin >> X, card[X]++;
//	for (std::cin >> M; M--;)
//		std::cin >> X, std::cout << card[X] << ' ';
//}

//#include <iostream>
//#include <map>
//
//int main()
//{
//	std::map<std::string, int> MP;
//	std::string S;
//
//	int N, M, cnt;
//	std::cin >> N >> M;
//
//	for (int i = 0; i < N + M; i++)
//	{
//		std::cin >> S;
//		MP[S]++;
//		if (MP[S] > 1)cnt++;
//	}
//	std::cout << cnt;
//	for (auto i : MP) {
//		if (i.second == 2) {
//			std::cout << '\n' << i.first;
//		}
//	}
//}

//#include <iostream>
//#include <map>
//
//int main()
//{
//	int S, N, M;
//	std::cin >> N >> M;
//	std::map<int, int> AB;
//
//	for (int i = 0; i < N + M; i++)
//	{
//		std::cin >> S;
//		(AB[S]) ? AB.erase(S) : AB[S] = 1;
//	}
//	std::cout << AB.size();
//}

//#include <iostream>
//#include <unordered_map>
//
//int main()
//{
//	std::string S;
//	std::cin >> S;
//
//	std::unordered_map<std::string, int> MP;
//	std::string temp;
//
//	for (int i = 0; i < S.size(); i++)
//	{
//		for (int j = 1; j <= S.size(); j++)
//		{
//			temp = S.substr(i, j);
//			MP[temp]++;
//		}
//	}
//	std::cout << MP.size() << '\n';
//}

//#include <iostream>
//
//enum MonsterType
//{
//	Wolf, Demon, Slime
//};
//
//struct Monster
//{
//	MonsterType type;
//	std::string name;
//	int HP;
//};
//
//std::string GetMonsterTypeString(MonsterType type)
//{
//	std::string typeString{};
//
//	switch (type)
//	{
//	case Wolf:
//		typeString = "Wolf";
//		break;
//	case Demon:
//		typeString = "Demon";
//		break;
//	case Slime:
//		typeString = "Slime";
//		break;
//	default:
//		typeString = "NONE";
//		break;
//	}
//	return typeString;
//}
//
//void PrintMonster(Monster monster)
//{
//	std::cout << "Type : " << GetMonsterTypeString(monster.type) << '\n';
//	std::cout << "Name : " << monster.name << '\n';
//	std::cout << "HP : " << monster.HP << '\n';
//}
//
//int main()
//{
//	Monster wolf{ Wolf,"황천늑대",10 };
//	Monster demon{ Demon,"써큐버스",100 };
//
//	PrintMonster(wolf);
//}

//#include <iostream>
//#include <ctime>
//
//void CreateAnswer();
//void InputNumber();
//bool CheckNumber();
//
//int gResultArray[3]{};
//int gInputArray[3]{};
//
//int main()
//{
//	CreateAnswer();
//
//	while (true)
//	{
//		InputNumber();
//		if (CheckNumber()) break;
//	}
//}
//
//void CreateAnswer()
//{
//	int usedDigit[10]{ 0 };
//	std::srand(std::time(nullptr));
//
//	for (int i = 0; i < 3; i++)
//	{
//		bool isDuplicated = true;
//		int random_digit{};
//
//		while (isDuplicated)
//		{
//			random_digit = std::rand() % 10;
//			if (usedDigit[random_digit] == 0) {
//				usedDigit[random_digit] = 1;
//				break;
//			}
//		}
//		gResultArray[i] = random_digit;
//		std::cout << random_digit;
//	}
//}

//#include <iostream>
//
//int main()
//{
//// 1. T1와 T2가 좌표 상에 있고 이 둘은 Z라는 적과의 거리 <---> R1, R2 가 각각 주어진다.
//// 2. T1 좌표지점에서 Z 좌표지점까지의 거리가 R1이라면 Z가 있을 수 있는 좌표지점은 T1을 중심으로 R1 반지름을 갖는
////		=> 원형 형태의 모든 테두리 지점이다. 이는 T2도 마찬가지이다.
//// 3. T1의 원 태두리와 T2의 원 태두리가 겹치는 좌표지점이 Z가 있을 수 있는 곳이다.
//// 4. Z가 있을 수 있는 두 원의 교점은 총 3가지 존재한다.
////		=> T1과 T2의 좌표가 같고, R1과 R2의 거리가 같을 때, 즉 완전이 두 원이 곂쳐질 때
////		=> T1의 원과 T2의 원 태두리의 두 지점만 겹칠 때, 두 원의 반지름(R1, R2)가 T1, T2간의 거리보다 길을때
////		=> T1과 T2의 거리와 R1 + R2의 거리가 같아서 딱 한 지점만 곂쳐질 때
//	std::pair<int, int> point[2];
//	double r1, r2;
//	std::cin >> point[0].first >> point[0].second >> r1
//		>> point[1].first >> point[1].second >> r2;
//// 5. T1, T2 각각 두 좌표들간의 거리를 알아야 원의 태두리가 서로 곂치는지 아닌지 알 수 있다.
//	double D{ (sqrt(pow(point[0].first - point[1].first, 2)
//	+ pow(point[0].second - point[1].second, 2))) };
//// 6. 반지름의 차를 구한다.
//	double RD{ std::abs(r1 - r2) };
//
//// 두 좌표간의 거리가 0이고 반지름이 서로 같다면 완전이 곂치는 원이다.
//	if (D == 0 && r1 == r2) std::cout << -1 << '\n';
//	// 두 좌표간의 거리가 두 원의 반지름 길이보다 작고, 반지름의 차가 두 좌표간의 거리보다 작다면 두개의 교점
//	else if (D < r1 + r2 && (RD < D)) std::cout << 2 << '\n';
//	// 두 좌표간의 거리가 두 원의 반지름 길이와 같거나, 두 좌표간의 거리가 반지름의 차와 같으면 한 개의 교점
//	else if (D == r1 + r2 || D == RD) std::cout << 1 << '\n';
//	else std::cout << 0 << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int count;
//	std::cin >> count;
//
//	int way[6], value[6];
//	for (int i = 0; i < 6; i++)
//	{
//		std::cin >> way[i] >> value[i];
//	}
//
//	int temp, index;
//	int max{ -1 };
//	for (int i = 0; i < 6; i++)
//	{
//		temp = value[i] * value[(i + 1) % 6];
//		if (max < temp)
//		{
//			max = temp;
//			index = i;
//		}
//	}
//	int min = value[(index + 3) % 6] * value[(index + 4) % 6];
//	std::cout << (max - min) * count << '\n';
//}