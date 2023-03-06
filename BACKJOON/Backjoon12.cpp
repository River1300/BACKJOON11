/* ----- < 12단계 집합과 맵 > ----- */
//
//
//
//
//
/* --- < 10815 > --- */

/*
< 문제 >
	숫자 카드는 정수 하나가 적혀져 있는 카드이다.
	상근이는 숫자 카드 N개를 가지고 있다.
	정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 가지고 있는지 아닌지를
	구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다.
	둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다.
	숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.
	두 숫자 카드에 같은 수가 적혀있는 경우는 없다.

	셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다.
	넷째 줄에는 상근이가 가지고 있는 숫자 카드인지 아닌지를 구해야 할 M개의 정수가 주어지며,
	이 수는 공백으로 구분되어져 있다.
	이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다

< 출력 >
	첫째 줄에 입력으로 주어진 M개의 수에 대해서,
	각 수가 적힌 숫자 카드를 상근이가 가지고 있으면 1을, 아니면 0을 공백으로 구분해 출력한다.

< 풀이 >
	상근이가 가지고 있는 카드 [card], 가지고 있는지 확인하는 [check]
	벡터 두 개를 이용한다.

	확인하는 카드 수만큼 반복하면서 이분 탐색을 한다.
	상근이의 카드들을 정렬시켜야 이분 탐색이 가능하다.

	확인 카드를 들고 상근이의 카드 목록을 보면서 이 카드가 있는지를 확인한다.
	low와 high를 가지고 가운데인 mid값을 도출하면서

	상근이의 카드[mid] < 확인카드이면 low를 mid+1로 변경한다.
	상근이의 카드 > 확인카드 high를 mid-1로 변경한다.

	low   mid   high
	[1][2][4][6][10]
		  [2]	=> check[i] < card[mid] 확인카드가 더 작은 값일 경우

	low high
	mid
	[1][2][4][6][10]
	[2]		=> check[i] > card[mid]
*/

//#include <iostream>
//#include <set>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	std::set<int> nNum;
//	int number;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> number;
//		nNum.insert(number);
//	}
//
//	int M;
//	std::cin >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> number;
//		std::set<int>::iterator itr;
//
//		itr = nNum.find(number);
//
//		if (itr == nNum.end()) std::cout << "0 ";
//		else { std::cout << "1 "; }
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//	std::vector<int> card(N, 0);
//
//	for (int i = 0; i < N; i++) std::cin >> card[i];
//	std::sort(card.begin(), card.end());
//
//	int M;
//	std::cin >> M;
//	std::vector<int> check(M, 0);
//	std::vector<int> answer(M, 0);
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> check[i];
//
//		int low{};
//		int high = N - 1;
//
//		while (low <= high)
//		{
//			int mid = (low + high) / 2;
//
//			if (card[mid] == check[i]) {
//				answer[i]++;
//			}
//			else if (card[mid] < check[i]) {
//				low = mid + 1;
//			}
//			else if (card[mid] > check[i]) {
//				high = mid - 1;
//			}
//		}
//	}
//	for (auto e : answer) { std::cout << e << ' '; }
//}

//#include <iostream>
//#include <set>
//
//int main()
//{
//// 1. N개의 카드를 입력 받아 배열에 집어 넣는다.
//	int N;
//	std::cin >> N;
//
//	std::set<int> nNum;
//	int number;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> number;
//		nNum.insert(number);
//	}
//// 2. M개의 숫자를 입력 받아 카드 값과 매칭해 본다.
//	int M;
//	std::cin >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> number;
//
//		std::set<int>::iterator itr;
//
//		itr = nNum.find(number);
//
//		if (itr == nNum.end()) std::cout << "0 ";
//		else std::cout << "1 ";
//	}
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//// 1. 일단 동적 배열을 통해 모든 카드를 입력 받는다.
//	int N;
//	std::cin >> N;
//	std::vector<int> card(N, 0);
//
//	for (int i = 0; i < N; i++) std::cin >> card[i];
//// 2. 앞으로 입력 받을 값과 카드 값을 비교하기 위해 배열을 정렬한다.
//	std::sort(card.begin(), card.end());
//
//	int M;
//	std::cin >> M;
//// 3. 입력 받은 값을 저장할 배열과 확인하는 배열을 만든다.
//	std::vector<int> check(M, 0);
//	std::vector<int> answer(M, 0);
//
//	for (int i = 0; i < M; i++)
//	{
//// 4. 값을 입력 받고 카드와 비교를 한다.
////		=> 이때 카드를 2등분하여 값과 카드 중간 값을 비교한다.
////		=> 카드 중간 값이 더 작은 값일 경우 2등 분한 카드들 중 위쪽 카드를 다시 2등분 한다.
////		=> 카드 중간 값이 더 클 경우 2등분 한 카드들 중 아래쪽 카드를 다시 2등분 한다.
////		=> 이렇게 비교해도 값이 나오지 않는다면 배열을 초기화 한 0을 출력한다.
//		std::cin >> check[i];
//
//		int low{};
//		int high = N - 1;
//
//		while (low <= high)
//		{
//			int mid = (low + high) / 2;
//
//			if (card[mid] == check[i]) {
//				answer[i]++;
//				break;
//			}
//			else if (card[mid] < check[i]) {
//				low = mid + 1;
//			}
//			else if (card[mid] > check[i]) {
//				high = mid - 1;
//			}
//		}
//	}
//	for (auto e : answer) std::cout << e << ' ';
//}

/* --- < 14425 > --- */

/*
< 문제 >
	총 N개의 문자열로 이루어진 집합 S가 주어진다.
	입력으로 주어지는 M개의 문자열 중에서 집합 S에 포함되어 있는 것이
	총 몇 개인지 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 문자열의 개수 N과 M (1 ≤ N ≤ 10,000, 1 ≤ M ≤ 10,000)이 주어진다.

	다음 N개의 줄에는 집합 S에 포함되어 있는 문자열들이 주어진다.

	다음 M개의 줄에는 검사해야 하는 문자열들이 주어진다.

	입력으로 주어지는 문자열은 알파벳 소문자로만 이루어져 있으며,
	길이는 500을 넘지 않는다. 집합 S에 같은 문자열이 여러 번 주어지는 경우는 없다.

< 출력 >
	첫째 줄에 M개의 문자열 중에 총 몇 개가 집합 S에 포함되어 있는지 출력한다.
*/

//#include <iostream>
//#include <set>
//
//int main()
//{
//	int N, M;
//	std::cin >> N >> M;
//
//	std::set<std::string> S;
//
//	int count{};
//	std::string name;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> name;
//		S.insert(name);
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> name;
//
//		std::set<std::string>::iterator itr;
//		itr = S.find(name);
//
//		if (itr == S.end()) continue;
//		else count++;
//	}
//	std::cout << count << '\n';
//}

//#include <iostream>
//#include <map>
//
//int N, M, cnt;
//std::string x;
//
//std::map<std::string, int> S;
//
//int main()
//{
//	std::cin >> N >> M;
//
//	while (N--)
//	{
//		std::cin >> x;
//		S[x] = 1;
//	}
//
//	while (M--)
//	{
//		std::cin >> x;
//		if (S[x]) cnt += 1;
//	}
//	std::cout << cnt;
//}

//#include <iostream>
//#include <map>
//
//// 1. 맵으로 배열을 만들어서 key를 문자열, value를 1로 체크하여 N개의 문자열을 입력 받는다.
//int N, M, cnt;
//std::string x;
//
//std::map<std::string, int> S;
//
//int main()
//{
//	std::cin >> N >> M;
//
//	while (N--) {
//		std::cin >> x;
//		S[x] = 1;
//	}
//// 2. 찾는 문자열을 키로 활용하여 1이 있다면 찾은것이고 아니면 못찾은 것
//	while (M--) {
//		std::cin >> x;
//		if (S[x]) cnt += 1;
//	}
//	std::cout << cnt;
//}

/* --- < 1620 > --- */

/*
< 문제 >
	오박사 : 그럼 다솜아 이제 진정한 포켓몬 마스터가 되기 위해 도감을 완성시키도록 하여라.
	일단 네가 현재 가지고 있는 포켓몬 도감에서 포켓몬의 이름을 보면 포켓몬의 번호를 말하거나,
	포켓몬의 번호를 보면 포켓몬의 이름을 말하는 연습을 하도록 하여라.
	나의 시험을 통과하면, 내가 새로 만든 도감을 주도록 하겠네.

< 입력 >
	첫째 줄에는 도감에 수록되어 있는 포켓몬의 개수 N이랑 내가 맞춰야 하는 문제의 개수 M이 주어져.
	N과 M은 1보다 크거나 같고, 100,000보다 작거나 같은 자연수인데,
	자연수가 뭔지는 알지? 모르면 물어봐도 괜찮아.
	나는 언제든지 질문에 답해줄 준비가 되어있어.

	둘째 줄부터 N개의 줄에 포켓몬의 번호가 1번인 포켓몬부터 N번에 해당하는 포켓몬까지
	한 줄에 하나씩 입력으로 들어와.
	포켓몬의 이름은 모두 영어로만 이루어져있고,
	또, 음... 첫 글자만 대문자이고, 나머지 문자는 소문자로만 이루어져 있어.
	아참! 일부 포켓몬은 마지막 문자만 대문자일 수도 있어.
	포켓몬 이름의 최대 길이는 20, 최소 길이는 2야.
	그 다음 줄부터 총 M개의 줄에 내가 맞춰야하는 문제가 입력으로 들어와.
	문제가 알파벳으로만 들어오면 포켓몬 번호를 말해야 하고, 숫자로만 들어오면,
	포켓몬 번호에 해당하는 문자를 출력해야해.
	입력으로 들어오는 숫자는 반드시 1보다 크거나 같고, N보다 작거나 같고,
	입력으로 들어오는 문자는 반드시 도감에 있는 포켓몬의 이름만 주어져. 그럼 화이팅!!!

< 출력 >
	첫째 줄부터 차례대로 M개의 줄에 각각의 문제에 대한 답을 말해줬으면 좋겠어!!!.
	입력으로 숫자가 들어왔다면 그 숫자에 해당하는 포켓몬의 이름을,
	문자가 들어왔으면 그 포켓몬의 이름에 해당하는 번호를 출력하면 돼. 그럼 땡큐~
*/

//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//int main()
//{
//	int N, M;
//	std::cin >> N >> M;
//
//	std::unordered_map<std::string, int> poket1;
//	std::unordered_map<int, std::string> poket2;
//	std::string temp;
//
//	for (int i = 1; i <= N; i++)
//	{
//		std::cin >> temp;
//
//		poket1[temp] = i;
//		poket2[i] = temp;
//	}
//
//	std::unique_ptr<std::string[]> Q
//		= std::make_unique<std::string[]>(M);
//
//	for (int i = 0; i < M; i++) std::cin >> Q[i];
//
//	for (int i = 0; i < M; i++)
//	{
//		if (poket1.find(*(Q.get())) != poket1.end()) {
//			std::cout << poket1[*(Q.get())] << '\n';
//		}
//		else std::cout << poket2[std::stoi(*(Q.get()))] << '\n';
//	}
//}

//#include <iostream>
//#include <string>
//#include <map>
//
//int main()
//{
//	std::map<std::string, std::string> poket;
//
//	int N, M;
//	std::cin >> N >> M;
//
//	std::string s;
//
//	for (int i = 1; i <= N; i++)
//	{
//		std::cin >> s;
//
//		poket[s] = std::to_string(i);
//		poket[std::to_string(i)] = s;
//	}
//
//	while (M--)
//	{
//		std::cin >> s;
//		std::cout << poket[s] << '\n';
//	}
//}

/* --- < 10816 > --- */

/*
< 문제 >
	숫자 카드는 정수 하나가 적혀져 있는 카드이다.
	상근이는 숫자 카드 N개를 가지고 있다.
	정수 M개가 주어졌을 때,
	이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다.

	둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다.
	숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

	셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다.

	넷째 줄에는 상근이가 몇 개 가지고 있는 숫자 카드인지 구해야 할 M개의 정수가 주어지며,
	이 수는 공백으로 구분되어져 있다. 이 수도 -10,000,000보다 크거나 같고,
	10,000,000보다 작거나 같다.

< 출력 >
	첫째 줄에 입력으로 주어진 M개의 수에 대해서,
	각 수가 적힌 숫자 카드를 상근이가 몇 개 가지고 있는지를 공백으로 구분해 출력한다.
*/

//#include <iostream>
//#include <unordered_map>
//
//int main()
//{
//	int N, M;
//	std::cin >> N >> M;
//
//	std::unordered_map<int, int> card;
//	int temp;
//
//	for (int i = 0; i < N; i++) {
//		std::cin >> temp;
//		card[temp] += 1;
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> temp;
//
//		if (card.find(temp) != card.end()) std::cout << card[temp] << ' ';
//		else std::cout << "0 ";
//	}
//}

//#include <iostream>
//#include <unordered_map>
//
//int main()
//{
//	int N, Q, X;
//	std::unordered_map<int, int> card;
//
//	for (std::cin >> N; N--;)
//		std::cin >> X, card[X]++;
//	for (std::cin >> Q; Q--;)
//		std::cin >> X, std::cout << card[X] << ' ';
//}

/* --- < 1764 > --- */

/*
< 문제 >
	김진영이 듣도 못한 사람의 명단과,
	보도 못한 사람의 명단이 주어질 때,
	듣도 보도 못한 사람의 명단을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 듣도 못한 사람의 수 N, 보도 못한 사람의 수 M이 주어진다.

	이어서 둘째 줄부터 N개의 줄에 걸쳐 듣도 못한 사람의 이름과,
	N+2째 줄부터 보도 못한 사람의 이름이 순서대로 주어진다.
	이름은 띄어쓰기 없이 알파벳 소문자로만 이루어지며, 그 길이는 20 이하이다.
	N, M은 500,000 이하의 자연수이다.

	듣도 못한 사람의 명단에는 중복되는 이름이 없으며, 보도 못한 사람의 명단도 마찬가지이다.

< 출력 >
	듣보잡의 수와 그 명단을 사전순으로 출력한다.
*/