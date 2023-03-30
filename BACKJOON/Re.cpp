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
//	Monster wolf{ Wolf,"Ȳõ����",10 };
//	Monster demon{ Demon,"��ť����",100 };
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
//// 1. T1�� T2�� ��ǥ �� �ְ� �� ���� Z��� ������ �Ÿ� <---> R1, R2 �� ���� �־�����.
//// 2. T1 ��ǥ�������� Z ��ǥ���������� �Ÿ��� R1�̶�� Z�� ���� �� �ִ� ��ǥ������ T1�� �߽����� R1 �������� ����
////		=> ���� ������ ��� �׵θ� �����̴�. �̴� T2�� ���������̴�.
//// 3. T1�� �� �µθ��� T2�� �� �µθ��� ��ġ�� ��ǥ������ Z�� ���� �� �ִ� ���̴�.
//// 4. Z�� ���� �� �ִ� �� ���� ������ �� 3���� �����Ѵ�.
////		=> T1�� T2�� ��ǥ�� ����, R1�� R2�� �Ÿ��� ���� ��, �� ������ �� ���� ������ ��
////		=> T1�� ���� T2�� �� �µθ��� �� ������ ��ĥ ��, �� ���� ������(R1, R2)�� T1, T2���� �Ÿ����� ������
////		=> T1�� T2�� �Ÿ��� R1 + R2�� �Ÿ��� ���Ƽ� �� �� ������ ������ ��
//	std::pair<int, int> point[2];
//	double r1, r2;
//	std::cin >> point[0].first >> point[0].second >> r1
//		>> point[1].first >> point[1].second >> r2;
//// 5. T1, T2 ���� �� ��ǥ�鰣�� �Ÿ��� �˾ƾ� ���� �µθ��� ���� ��ġ���� �ƴ��� �� �� �ִ�.
//	double D{ (sqrt(pow(point[0].first - point[1].first, 2)
//	+ pow(point[0].second - point[1].second, 2))) };
//// 6. �������� ���� ���Ѵ�.
//	double RD{ std::abs(r1 - r2) };
//
//// �� ��ǥ���� �Ÿ��� 0�̰� �������� ���� ���ٸ� ������ ��ġ�� ���̴�.
//	if (D == 0 && r1 == r2) std::cout << -1 << '\n';
//	// �� ��ǥ���� �Ÿ��� �� ���� ������ ���̺��� �۰�, �������� ���� �� ��ǥ���� �Ÿ����� �۴ٸ� �ΰ��� ����
//	else if (D < r1 + r2 && (RD < D)) std::cout << 2 << '\n';
//	// �� ��ǥ���� �Ÿ��� �� ���� ������ ���̿� ���ų�, �� ��ǥ���� �Ÿ��� �������� ���� ������ �� ���� ����
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

//#include <iostream>
//
//int main()
//{
//// ���ʿ� N���� ����, �����ʿ� M���� ���� : M�� N���� ���� �� ����.
//// ���� <-> ������ �ٸ� ���� : �� ���� �������� �� ���� �ٸ��� ����� �� �ִ�.
//// N�� ��ŭ�� �ٸ��� ���� : �ٸ��� ���� ��ĥ ��( ũ�ν� )����.
//	int T;
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		int N, M;
//		std::cin >> N >> M;
//
//		int link{ 1 };
//		for (int j = 0; j < N; j++)
//		{
//			link *= M - j;
//			link /= 1 + j;
//		}
//		std::cout << link << '\n';
//	}
//}

//#include <iostream>
//
//int EN[15];			// English : A��, B��, C��, D��... ���� ��
//int N, result;		// Number : 1��, 2��, 3��... ���� ��
//
//bool check(int NUM)
//{
//	for (int i = 0; i < NUM; i++)
//	{
//		if (EN[i] == EN[NUM] || abs(EN[NUM] - EN[i]) == NUM - i) return false;
//	}
//	return true;
//}
//
//void nqueen(int x)
//{
//	if (x == N) result++;
//	else
//	{	// i�� ���̶�� �����ϰ� �� ��° �࿡ queen�� ������ �Է��� �ش�.
//		for (int i = 0; i < N; i++)
//		{	// x = 0, i = 0�̶�� �����ϸ� EN[x] = i�� 0,0�� queen�� ��� ���ٴ� �ǹ�
//			// �� �ε����� ��, ���� ���Ҵ� ���� ���Ѵ�.
//			EN[x] = i;
//			// ���� �ߺ��Ǵ� ���� ���ٸ� ���� ���� ����, �ߺ��Ǵ� ���� �ִٸ� for���� i�� ����
//			if (check(x)) nqueen(x + 1);
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N;
//	nqueen(0);
//	std::cout << result;
//}

//#include <iostream>
//
//int EN[15];
//int N, result;
//
//bool check(int NUM)
//{
//	for (int i = 0; i < NUM; i++)
//	{
//		if (EN[i] == EN[NUM] || abs(EN[NUM] - EN[i]) == NUM - i) return false;
//	}
//	return true;
//}
//
//void nqueen(int x)
//{
//	if (x == N) result++;
//	else
//	{
//		for (int i = 0; i < N; i++)
//		{
//			EN[x] = i;
//			if (check(x)) nqueen(x + 1);
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N;
//	nqueen(0);
//	std::cout << result;
//}

#include <iostream>		// ��ǥ : �������� ��ĭ�� ä����.
#include <utility>
#include <vector>

int board[9][9];							// 0 ~ 8 ������ 9 * 9 ������ ���� ����
std::vector<std::pair<int, int>> points;	// ����ڰ� �Է��� ��ĭ�� ��ġ ����
int cnt;
bool found;									// ��ǥ �޼� ����

bool check(std::pair<int, int> p)			// p ���� ��ĭ�� x, y��ǥ�� ����ְ� �ش� ��ǥ���� 1 ~ 9�� ���ڰ� �ִ�.
{
	int square_x = p.first / 3;				// 3 * 3 ������ ����� ���� ������ ������.
	int square_y = p.second / 3;			//		=> ������� 0,0 ~ 8,8 �ε������� �ִ�.

	// #5. ����, �������� �� �迭�� ���� ���� �ִ��� Ȯ���Ѵ�.
	for (int i = 0; i < 9; i++)
	{	//		=> ���� ��(p.first)�� ���� ���� ������ false�� ��ȯ
		if (board[p.first][i] == board[p.first][p.second] && i != p.second) { return false; }
		//		=> ���� ��(p.second)�� ���� ���� ������ false�� ��ȯ
		if (board[i][p.second] == board[p.first][p.second] && i != p.first) { return false; }
	}

	// #6. 3 * 3 �����ȿ��� ���� ���� �ִ��� Ȯ���Ѵ�.
	for (int i = 3 * square_x; i < 3 * square_x + 3; i++)
	{	//	=> 3 * square_ : 3 * 3 �迭�� ���� �ε���
		for (int j = 3 * square_y; j < 3 * square_y + 3; j++)
		{	//	=> 3 * square_ + 3 : 3 * 3 �迭�� �� �ε���
			if (board[i][j] == board[p.first][p.second]) 
			{	//	=> ���޹��� p ��ǥ�� ���� 3 * 3 �迭�� ���� �� ���� ���� ������ false�� ��ȯ
				if (i != p.first && j != p.second) { return false; }
			}
		}
	}
	
	// #7. ���� ���� ���ٸ� true�� ��ȯ
	return true;
}

void sudoku(int n)
{
	if (n == cnt)
	{	// ��ĭ�� ��� ä���ٸ� �ϼ��� ������ ����Ѵ�.
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				std::cout << board[i][j] << ' ';
			}
			std::cout << '\n';
		}
		found = true;
		return;
	}

	for (int i = 1; i <= 9; i++)
	{	// #4. 1 ~ 9������ ���� ��ĭ ��ǥ�� �ϳ��� �־� ����.
		board[points[n].first][points[n].second] = i;
		//		=> ��ĭ ��ǥ�� ���� ���� ��ȿ���� Ȯ���Ѵ�.
		//		=> ���� ��ȿ �ϴٸ� ���� ��ĭ�� ä�췯 ��� ȣ���� ����.
		if (check(points[n])) { sudoku(n + 1); }
		if (found) { return; }	//		=> �̹� ��� ��ĭ�� ä���ٸ� ����
	}
	
	board[points[n].first][points[n].second] = 0;
	return;
}

int main()
{
	std::pair<int, int> point;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{	// #1. ����ڷκ��� ������ �Է� �޴´�.
			std::cin >> board[i][j];
			if (board[i][j] == 0)
			{	// #2. ����ڰ� 0�� �Է��Ͽ��� ���
				cnt++;					//	=> ��ĭ�� ������ �� �� ���� ��Ų��.
				point.first = i;		//	=> ��ĭ�� �� ��ǥ�� �����Ѵ�.
				point.second = j;		//	=> ��ĭ�� �� ��ǥ�� �����Ѵ�.
				points.push_back(point);//	=> ��ĭ�� ��,�� ��ǥ�� ���Ϳ� �����Ѵ�.
			}
		}
	}
	// #3. 0���� �����Ͽ� cnt������ �� ������ ��ĭ�� ä���.
	sudoku(0);
}