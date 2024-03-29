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

//#include <iostream>
//
//int main()
//{
//// 왼쪽에 N개의 지점, 오른쪽에 M개의 지점 : M은 N보자 작을 수 없다.
//// 왼쪽 <-> 오른쪽 다리 연결 : 한 개의 지점에는 한 개의 다리만 연결될 수 있다.
//// N개 만큼의 다리를 연결 : 다리가 서로 겹칠 수( 크로스 )없다.
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
//int EN[15];			// English : A열, B열, C열, D열... 세로 열
//int N, result;		// Number : 1행, 2행, 3행... 가로 행
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
//	{	// i를 행이라고 가정하고 몇 번째 행에 queen이 들어가는지 입력해 준다.
//		for (int i = 0; i < N; i++)
//		{	// x = 0, i = 0이라고 가정하면 EN[x] = i는 0,0에 queen이 들어 같다는 의미
//			// 즉 인덱스는 열, 내부 원소는 행을 뜻한다.
//			EN[x] = i;
//			// 열에 중복되는 퀸이 없다면 다음 열로 진입, 중복되는 퀸이 있다면 for문의 i를 증가
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

//#include <iostream>		// 목표 : 스도쿠의 빈칸을 채우자.
//#include <utility>
//#include <vector>
//
//int board[9][9];							// 0 ~ 8 까지의 9 * 9 스도쿠 보드 선언
//std::vector<std::pair<int, int>> points;	// 사용자가 입력한 빈칸의 위치 저장
//int cnt;
//bool found;									// 목표 달성 여부
//
//bool check(std::pair<int, int> p)			// p 에는 빈칸의 x, y좌표가 들어있고 해당 좌표에는 1 ~ 9의 숫자가 있다.
//{
//	int square_x = p.first / 3;				// 3 * 3 영역을 만들기 위해 구역을 나눈다.
//	int square_y = p.second / 3;			//		=> 스도쿠는 0,0 ~ 8,8 인덱스까지 있다.
//
//	// #5. 수직, 수평으로 된 배열에 같은 값이 있는지 확인한다.
//	for (int i = 0; i < 9; i++)
//	{	//		=> 같은 행(p.first)에 같은 값이 있으면 false로 반환
//		if (board[p.first][i] == board[p.first][p.second] && i != p.second) { return false; }
//		//		=> 같은 열(p.second)에 같은 값이 있으면 false로 반환
//		if (board[i][p.second] == board[p.first][p.second] && i != p.first) { return false; }
//	}
//
//	// #6. 3 * 3 구역안에서 같은 값이 있는지 확인한다.
//	for (int i = 3 * square_x; i < 3 * square_x + 3; i++)
//	{	//	=> 3 * square_ : 3 * 3 배열의 시작 인덱스
//		for (int j = 3 * square_y; j < 3 * square_y + 3; j++)
//		{	//	=> 3 * square_ + 3 : 3 * 3 배열의 끝 인덴스
//			if (board[i][j] == board[p.first][p.second]) 
//			{	//	=> 전달받은 p 좌표의 값과 3 * 3 배열의 값들 중 같은 값이 있으면 false로 반환
//				if (i != p.first && j != p.second) { return false; }
//			}
//		}
//	}
//	
//	// #7. 같은 값이 없다면 true로 반환
//	return true;
//}
//
//void sudoku(int n)
//{
//	if (n == cnt)
//	{	// 빈칸을 모두 채웠다면 완성된 스도쿠를 출력한다.
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				std::cout << board[i][j] << ' ';
//			}
//			std::cout << '\n';
//		}
//		found = true;
//		return;
//	}
//
//	for (int i = 1; i <= 9; i++)
//	{	// #4. 1 ~ 9까지의 수를 빈칸 좌표에 하나씩 넣어 본다.
//		board[points[n].first][points[n].second] = i;
//		//		=> 빈칸 좌표에 넣은 값이 유효한지 확인한다.
//		//		=> 값이 유효 하다면 다음 빈칸을 채우러 재귀 호출해 간다.
//		if (check(points[n])) { sudoku(n + 1); }
//		if (found) { return; }	//		=> 이미 모든 빈칸을 채웠다면 리턴
//	}
//	
//	board[points[n].first][points[n].second] = 0;
//	return;
//}
//
//int main()
//{
//	std::pair<int, int> point;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{	// #1. 사용자로부터 스도쿠를 입력 받는다.
//			std::cin >> board[i][j];
//			if (board[i][j] == 0)
//			{	// #2. 사용자가 0을 입력하였을 경우
//				cnt++;					//	=> 빈칸의 개수를 한 개 증가 시킨다.
//				point.first = i;		//	=> 빈칸의 행 좌표를 저장한다.
//				point.second = j;		//	=> 빈칸의 열 좌표를 저장한다.
//				points.push_back(point);//	=> 빈칸의 행,열 좌표를 벡터에 저장한다.
//			}
//		}
//	}
//	// #3. 0부터 시작하여 cnt개수가 될 때까지 빈칸을 채운다.
//	sudoku(0);
//}

//#include <iostream>
//#include <utility>
//#include <vector>
//
//int board[9][9];
//std::vector<std::pair<int, int>> points;
//int cnt;
//bool found;
//
//bool check(std::pair<int, int> p)
//{
//	int square_x = p.first / 3;
//	int square_y = p.second / 3;
//
//	for (int i = 0; i < 9; i++)
//	{
//		if (board[p.first][i] == board[p.first][p.second] && i != p.second) return false;
//		if (board[i][p.second] == board[p.first][p.second] && i != p.first) return false;
//	}
//
//	for (int i = 3 * square_x; i < 3 * square_x + 3; i++)
//	{
//		for (int j = 3 * square_y; j < 3 * square_y + 3; j++)
//		{
//			if (board[i][j] == board[p.first][p.second])
//			{
//				if (i != p.first && j != p.second) return false;
//			}
//		}
//	}
//	return true;
//}
//
//void sudoku(int N)
//{
//	if (N == cnt)
//	{
//		for (int i = 0; i < 9; i++)
//		{
//			for (int j = 0; j < 9; j++)
//			{
//				std::cout << board[i][j] << ' ';
//			}
//			std::cout << '\n';
//		}
//		found = true;
//		return;
//	}
//
//	for (int i = 1; i <= 0; i++)
//	{
//		board[points[N].first][points[N].second] = i;
//		if (check(points[N])) sudoku(N + 1);
//		if (found) return;
//	}
//
//	board[points[N].first][points[N].second] = 0;
//	return;
//}
//
//int main()
//{
//	std::pair<int, int> point;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			std::cin >> board[i][j];
//			if (board[i][j] == 0)
//			{
//				cnt++;
//				point.first = i;
//				point.second = j;
//				points.push_back(point);
//			}
//		}
//	}
//	sudoku(0);
//}

//#include <iostream>
//
//void PrintArray(int input[], int size)
//{
//	for (int i = 0; i < size; i++) std::cout << input[i] << ' ';
//}
//void Swap(int& value1, int& value2)
//{
//	int temp = value1;
//	value1 = value2;
//	value2 = temp;
//}

//// 순차 정렬
///* 인덱스 i와 j를 비교하고 정렬 순서에 맞지 않는다면 Swap한다. 
//이 짓을 i ~ SIZE(j+i ~ SIZE) 까지 일일이 하나 하나 작업한다. */
//void SequentialSort(int input[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (input[i] > input[j]) Swap(input[i], input[j]);
//		}
//	}
//}
//
//// 선택 정렬
///* 인덱스 i와 j를 비교하면서 작은값 혹은 큰값을 가지고 있는 인덱스를 발견할 때마다 그 인덱스를 
//변수로 저장해 둔다. 모든 값을 비교한 뒤에는 가장 작은값 혹은 가장 큰값의 인덱스가 변수로 저장될 것이고,
//이 값을 맨 앞의 값과 Swap한다. 이렇게 i ~ SIZE(j=i ~ SIZE) 까지 앞에서부터 차례로 정렬해 간다. */
//void SelectionSort(int input[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		int minIndex = i;
//		for (int j = i; j < size; j++)
//		{
//			if (input[minIndex] > input[j]) minIndex = j;
//		}
//		if (minIndex != i) Swap(input[i], input[minIndex]);
//	}
//}
//
//// 거품 정렬
///* 인덱스 i와 j를 비교하면서 바로 큰값, 혹은 작은 값을 뒤로 넘겨준다.
//이러면 뒤에서부터 정렬이 되고 j의 반복 횟수가 점차 줄어들게 된다. 
//i ~ SIZE-1(j ~ SIZE-i-1) */
//void BubbleSort(int input[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (input[j] > input[j + 1]) Swap(input[j], input[j + 1]);
//		}
//	}
//}
//
//// 삽입 정렬
///* 인덱스 i와 j를 비교하면서 i가 자신의 위치를 찾아 들어간다.
//반복 수가 더 적은것 같기는 한데 결국 매번 값을 바꾸는 것은 마찬가지 같다. */
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
//
//// 병합 정렬
///* 큰 문제를 작은 문제로 나눈다.
//일단 배열을 전달 받으면 반으로 가른다. 재귀 호출하여 반으로 가른 배열을 또 반으로 가른다. 
//이렇게 1칸의 배열이 될때 까지 가른다음 정렬하면서 합친다. 나누는 함수와 합치는 함수가 필요하다.
//나누는 함수에서 합치는 함수를 호출한다. */
//void Merge(int input[], int start, int half, int end, int temp[])
//{
//	int i = start; 
//	int j = half + 1;
//	int tempIndex = 0;
//
//	while (i <= half && j <= end)
//	{
//		if (input[i] < input[j]) temp[tempIndex++] = input[i++];
//		else temp[tempIndex++] = input[j++];
//	}
//
//	while (i <= half) temp[tempIndex++] = input[i++];
//	while (j <= end) temp[tempIndex++] = input[j++];
//
//	tempIndex = 0;
//	for (int i = start; i <= end; i++) input[i] = temp[tempIndex++];
//}
//void MergeSort(int input[], int start, int end, int temp[])
//{
//	if (start >= end) return;
//
//	int half = (start + end) / 2;
//
//	MergeSort(input, start, half, temp);
//	MergeSort(input, half + 1, end, temp);
//	Merge(input, start, half, end, temp);
//}
//
//// 퀵 정렬
///* 기준점을 잡고 왼쪽 배열에는 작은값을, 오른쪽 배열에는 큰 값을 담는다.
//왼쪽에 작은 값들이 모두 모이고 오른쪽에 큰 값들이 모두 모였다면 재귀함수로 그 값을들 다시 왼쪽 오른쪽으로
//나누어 또 같은 방식으로 정렬한다. */
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
//		if (i <= j)
//		{
//			Swap(input[i], input[j]);
//			i++;
//			j--;
//		}
//	} while (i <= j);
//	if (left < j) QuickSort(input, left, j);
//	if (i < right) QuickSort(input, i, right);
//}
//
//int main()
//{
//	const int SIZE = 5;
//	int array[SIZE]{ 8,7,2,3,1 };
//
//	// SORT ALGORITHM
//
//	PrintArray(array, SIZE);
//}

/*
병합 정렬은 분할 정복 방식을 이용한 정렬 알고리즘 중 하나. 이 알고리즘은 배열을 반으로 나눈 후 각각 정렬하고,
다시 합병하는 과정을 반복하여 정렬한다. 이 과정에서 부분 배열을 정렬하는 데에도 분할 정복 방식을 사용하므로,
배열을 분할하는 데 log n만큼의 시간이 소요되고, 각 부분 배열을 합병하는 데 n만큼의 시간이 소요된다.
*/

//#include <iostream>
//using namespace std;
//void merge(int arr[], int left, int mid, int right, int temp[]) {
//    int i = left; // 왼쪽 부분 배열의 시작 인덱스
//    int j = mid + 1; // 오른쪽 부분 배열의 시작 인덱스
//    int k = left; // 임시 배열의 시작 인덱스
//    temp[right + 1]; // 임시 배열
//
//    // 두 부분 배열에서 더 작은 값을 임시 배열에 복사
//    while (i <= mid && j <= right) {
//        if (arr[i] <= arr[j]) {
//            temp[k++] = arr[i++];
//        }
//        else {
//            temp[k++] = arr[j++];
//        }
//    }
//
//    // 왼쪽 부분 배열이 남은 경우, 임시 배열에 복사
//    while (i <= mid) {
//        temp[k++] = arr[i++];
//    }
//
//    // 오른쪽 부분 배열이 남은 경우, 임시 배열에 복사
//    while (j <= right) {
//        temp[k++] = arr[j++];
//    }
//
//    // 임시 배열을 원래 배열로 복사
//    for (int i = left; i <= right; i++) {
//        arr[i] = temp[i];
//    }
//}
//void mergeSort(int arr[], int left, int right, int temp[]) {
//    if (left < right) {
//        int mid = (left + right) / 2;
//        mergeSort(arr, left, mid, temp); // 왼쪽 부분 배열 정렬
//        mergeSort(arr, mid + 1, right, temp); // 오른쪽 부분 배열 정렬
//        merge(arr, left, mid, right, temp); // 두 부분 배열 병합
//    }
//}

//void Merge(int input[], int start, int mid, int end, int temp[])
//{
//    int i = start;
//    int j = mid + 1;
//    int tempIndex = 0;
//
//    // 3) 두 개의 집합을 비교하면서 작은 값을 배열에 저장한다. 이때 임시 배열이 필요하다.
//    while (i <= mid && j <= end)
//    {
//        if (input[i] < input[j]) temp[tempIndex++] = input[i++];
//        else temp[tempIndex++] = input[j++];
//    }
//
//    // 4) 왼쪽, 오른쪽 집단 중 하나라도 끝에 도달하면 위 반복문에서 탈출하게 된다. 이때 다른 집단의 배열이 남아 있기 때문에 남은 값을 순서대로 넣어 주면 된다.
//    if (i <= mid) temp[tempIndex++] = input[i++];
//    if (j <= end) temp[tempIndex++] = input[j++];
//
//    // 5) 정렬이 다 되었다면 원본에 다시 배정한다.
//    tempIndex = 0;
//    for (int i = start; i < end; i++) input[i] = temp[tempIndex++];
//}
//// 1) 나누는 함수가 먼저 (Divide), 당연히 정렬할 배열을 받아야 하고, 재귀 호출을 할 예정이기 때문에 시작, 끝 인덱스를 받는다. 
//void MergeSort(int input[], int start, int end, int temp[])
//{
//    if (start >= end) return;
//
//    int mid = (start + end) / 2;
//
//    MergeSort(input, start, mid, temp);
//    MergeSort(input, mid + 1, end, temp);
//
//    // 2) 다 나누고 난 뒤에 정렬하면서 합치기 시작한다.
//    Merge(input, start, mid, end, temp);
//}

/* header */

//struct Element
//{	// #. 원소 안에는 값과 다음 원소를 가리킬 포인터가 있다.
//	int value;
//	Element* pNext;
//};
//
//struct Single_Linked_List
//{	// #. 동적 자료구조의 시작점과 끝점을 가리킨다.
//	Element* head = nullptr;
//	Element* tail = nullptr;
//};
//
//Element* InputElement(Single_Linked_List& list, int value);
//int CountElement(Single_Linked_List& list);
//Element* FindElement(Single_Linked_List& list, int value);
//void PrintElement(Single_Linked_List& list);
//void DeleteElement(Single_Linked_List& list);
//void DeleteElement(Single_Linked_List& list, int value);
//
//#include <iostream>
//
//Element* InputElement(Single_Linked_List& list, int value)	// 원소 추가
//{
//	Element* one = new Element{ value };
//	if (list.head == nullptr && list.tail == nullptr) {
//		list.head = one;
//		list.tail = one;
//	}
//	else
//	{
//		list.tail->pNext = one;
//		list.tail = one;
//	}
//	return one;
//}
//
//int CountElement(Single_Linked_List& list)	// 원소 갯수
//{
//	Element* c = list.head;
//	int count{};
//	while (c != nullptr)
//	{
//		count++;
//		c = c->pNext;
//	}
//	return count;
//}
//
//Element* FindElement(Single_Linked_List& list, int value)	// 원소 찾기
//{
//	Element* f = list.head;
//	while (f != nullptr)
//	{
//		if (f->value == value) return f;
//		f = f->pNext;
//	}
//	return nullptr;
//}
//
//void PrintElement(Single_Linked_List& list) // 원소 출력
//{
//	Element* e = list.head;
//	while (e != nullptr)
//	{
//		std::cout << e->value << '\n';
//		e = e->pNext;
//	}
//}
//
//void DeleteElement(Single_Linked_List& list)	// 모든 원소 삭제
//{
//	Element* e = list.head;
//	while (e != nullptr)
//	{
//		Element* pTemp = e->pNext;
//		delete e;
//		e = pTemp;
//	}
//	list.head = list.tail = nullptr;
//}
//
//void DeleteElement(Single_Linked_List& list, int value)	// 특정 원소 삭제
//{
//	Element* e = list.head;
//	Element* preV{};
//	while (e != nullptr)
//	{
//		if (e->value == value) break;
//		preV = e;
//		e = e->pNext;
//	}
//
//	if (e == nullptr) return;
//	else if (list.head == e) list.head = e->pNext;
//	else if (list.tail == e)
//	{
//		list.tail = preV;
//		preV->pNext = e->pNext;
//	}
//	else { preV->pNext = e->pNext; }
//	delete e;
//}
//
//int main()
//{
//	Single_Linked_List myList;
//	InputElement(myList, 10);
//	InputElement(myList, 20);
//	InputElement(myList, 30);
//
//	std::cout << CountElement(myList) << '\n';
//	PrintElement(myList);
//	DeleteElement(myList, 30);
//	std::cout << CountElement(myList) << '\n';
//
//	DeleteElement(myList);
//}

//#include <iostream>
//
//int N;
//int operands[11];
//int operators[4];
//int min = 10001;
//int max = -10001;
//
//void GetAnswer(int result, int index)
//{
//	if (index == N) {
//		if (result > max) max = result;
//		if (result < min) min = result;
//		return;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (operators[i] > 0) {
//			operators[i]--;
//
//			if (i == 0) GetAnswer(result + operands[index], index + 1);
//			else if (i == 1) GetAnswer(result - operands[index], index + 1);
//			else if (i == 2) GetAnswer(result * operands[index], index + 1);
//			else GetAnswer(result / operands[index], index + 1);
//
//			operators[i]++;
//		}
//	}
//	return;
//}
//
//int main()
//{
//	std::cin >> N;
//	for (int i = 0; i < N; i++) std::cin >> operands[i];
//	for (int i = 0; i < 4; i++) std::cin >> operators[i];
//}

//struct Element
//{	// #리스트의 저장될 원소의 속성
//	int value;
//	Element* pNext;
//	Element* pPrev;
//};
//
//struct Double_Linked_List
//{	// #양방향 리스트의 속성
//	Element* head = nullptr;
//	Element* tail = nullptr;
//};
//
//#include <iostream>
//
//Element* InputElement(Double_Linked_List& list, int value)	// Input Element
//{
//	Element* one = new Element{ value };
//	if (list.head == nullptr && list.tail == nullptr)
//	{
//		list.head = one;
//		list.tail = one;
//	}
//	else
//	{
//		one->pPrev = list.tail;
//		list.tail->pNext = one;
//		list.tail = one;
//	}
//	return one;
//}
//
//int CountElement(Double_Linked_List& list)	// Count List
//{
//	Element* c = list.head;
//	int count{};
//	while (c != nullptr)
//	{
//		count++;
//		c = c->pNext;
//	}
//	return count;
//}
//
//Element* FindElement(Double_Linked_List& list, int value)
//{
//	Element* f = list.head;
//	while (f != nullptr)
//	{
//		if (f->value == value) return f;
//		f = f->pNext;
//	}
//	return nullptr;
//}
//
//void PrintElement(Double_Linked_List& list)
//{
//	Element* p = list.head;
//	while (p != nullptr)
//	{
//		std::cout << p->value << '\n';
//		p = p->pNext;
//	}
//}
//
//void DeleteElement(Double_Linked_List& list)
//{
//	Element* e = list.head;
//	while (e != nullptr)
//	{
//		Element* pTemp = e->pNext;
//		delete e;
//		e = pTemp;
//	}
//	list.head = list.tail = nullptr;
//}
//
//void DeleteElement(Double_Linked_List& list, int value)
//{
//	Element* e = FindElement(list, value);
//	if (e != nullptr)
//	{
//		if (e->pPrev == nullptr) list.head = e->pNext;
//		else e->pPrev->pNext = e->pNext;
//		if (e->pNext == nullptr) list.tail = e->pPrev;
//		else e->pNext->pPrev = e->pPrev;
//	}
//}