/* ----- < 12�ܰ� ���հ� �� > ----- */
//
//
//
//
//
/* --- < 10815 > --- */

/*
< ���� >
	���� ī��� ���� �ϳ��� ������ �ִ� ī���̴�.
	����̴� ���� ī�� N���� ������ �ִ�.
	���� M���� �־����� ��, �� ���� �����ִ� ���� ī�带 ����̰� ������ �ִ��� �ƴ�����
	���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ����̰� ������ �ִ� ���� ī���� ���� N(1 �� N �� 500,000)�� �־�����.
	��° �ٿ��� ���� ī�忡 �����ִ� ������ �־�����.
	���� ī�忡 �����ִ� ���� -10,000,000���� ũ�ų� ����, 10,000,000���� �۰ų� ����.
	�� ���� ī�忡 ���� ���� �����ִ� ���� ����.

	��° �ٿ��� M(1 �� M �� 500,000)�� �־�����.
	��° �ٿ��� ����̰� ������ �ִ� ���� ī������ �ƴ����� ���ؾ� �� M���� ������ �־�����,
	�� ���� �������� ���еǾ��� �ִ�.
	�� ���� -10,000,000���� ũ�ų� ����, 10,000,000���� �۰ų� ����

< ��� >
	ù° �ٿ� �Է����� �־��� M���� ���� ���ؼ�,
	�� ���� ���� ���� ī�带 ����̰� ������ ������ 1��, �ƴϸ� 0�� �������� ������ ����Ѵ�.

< Ǯ�� >
	����̰� ������ �ִ� ī�� [card], ������ �ִ��� Ȯ���ϴ� [check]
	���� �� ���� �̿��Ѵ�.

	Ȯ���ϴ� ī�� ����ŭ �ݺ��ϸ鼭 �̺� Ž���� �Ѵ�.
	������� ī����� ���Ľ��Ѿ� �̺� Ž���� �����ϴ�.

	Ȯ�� ī�带 ��� ������� ī�� ����� ���鼭 �� ī�尡 �ִ����� Ȯ���Ѵ�.
	low�� high�� ������ ����� mid���� �����ϸ鼭

	������� ī��[mid] < Ȯ��ī���̸� low�� mid+1�� �����Ѵ�.
	������� ī�� > Ȯ��ī�� high�� mid-1�� �����Ѵ�.

	low   mid   high
	[1][2][4][6][10]
		  [2]	=> check[i] < card[mid] Ȯ��ī�尡 �� ���� ���� ���

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
//// 1. N���� ī�带 �Է� �޾� �迭�� ���� �ִ´�.
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
//// 2. M���� ���ڸ� �Է� �޾� ī�� ���� ��Ī�� ����.
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
//// 1. �ϴ� ���� �迭�� ���� ��� ī�带 �Է� �޴´�.
//	int N;
//	std::cin >> N;
//	std::vector<int> card(N, 0);
//
//	for (int i = 0; i < N; i++) std::cin >> card[i];
//// 2. ������ �Է� ���� ���� ī�� ���� ���ϱ� ���� �迭�� �����Ѵ�.
//	std::sort(card.begin(), card.end());
//
//	int M;
//	std::cin >> M;
//// 3. �Է� ���� ���� ������ �迭�� Ȯ���ϴ� �迭�� �����.
//	std::vector<int> check(M, 0);
//	std::vector<int> answer(M, 0);
//
//	for (int i = 0; i < M; i++)
//	{
//// 4. ���� �Է� �ް� ī��� �񱳸� �Ѵ�.
////		=> �̶� ī�带 2����Ͽ� ���� ī�� �߰� ���� ���Ѵ�.
////		=> ī�� �߰� ���� �� ���� ���� ��� 2�� ���� ī��� �� ���� ī�带 �ٽ� 2��� �Ѵ�.
////		=> ī�� �߰� ���� �� Ŭ ��� 2��� �� ī��� �� �Ʒ��� ī�带 �ٽ� 2��� �Ѵ�.
////		=> �̷��� ���ص� ���� ������ �ʴ´ٸ� �迭�� �ʱ�ȭ �� 0�� ����Ѵ�.
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
< ���� >
	�� N���� ���ڿ��� �̷���� ���� S�� �־�����.
	�Է����� �־����� M���� ���ڿ� �߿��� ���� S�� ���ԵǾ� �ִ� ����
	�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ���ڿ��� ���� N�� M (1 �� N �� 10,000, 1 �� M �� 10,000)�� �־�����.

	���� N���� �ٿ��� ���� S�� ���ԵǾ� �ִ� ���ڿ����� �־�����.

	���� M���� �ٿ��� �˻��ؾ� �ϴ� ���ڿ����� �־�����.

	�Է����� �־����� ���ڿ��� ���ĺ� �ҹ��ڷθ� �̷���� ������,
	���̴� 500�� ���� �ʴ´�. ���� S�� ���� ���ڿ��� ���� �� �־����� ���� ����.

< ��� >
	ù° �ٿ� M���� ���ڿ� �߿� �� �� ���� ���� S�� ���ԵǾ� �ִ��� ����Ѵ�.
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
//// 1. ������ �迭�� ���� key�� ���ڿ�, value�� 1�� üũ�Ͽ� N���� ���ڿ��� �Է� �޴´�.
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
//// 2. ã�� ���ڿ��� Ű�� Ȱ���Ͽ� 1�� �ִٸ� ã�����̰� �ƴϸ� ��ã�� ��
//	while (M--) {
//		std::cin >> x;
//		if (S[x]) cnt += 1;
//	}
//	std::cout << cnt;
//}

/* --- < 1620 > --- */

/*
< ���� >
	���ڻ� : �׷� �ټؾ� ���� ������ ���ϸ� �����Ͱ� �Ǳ� ���� ������ �ϼ���Ű���� �Ͽ���.
	�ϴ� �װ� ���� ������ �ִ� ���ϸ� �������� ���ϸ��� �̸��� ���� ���ϸ��� ��ȣ�� ���ϰų�,
	���ϸ��� ��ȣ�� ���� ���ϸ��� �̸��� ���ϴ� ������ �ϵ��� �Ͽ���.
	���� ������ ����ϸ�, ���� ���� ���� ������ �ֵ��� �ϰڳ�.

< �Է� >
	ù° �ٿ��� ������ ���ϵǾ� �ִ� ���ϸ��� ���� N�̶� ���� ����� �ϴ� ������ ���� M�� �־���.
	N�� M�� 1���� ũ�ų� ����, 100,000���� �۰ų� ���� �ڿ����ε�,
	�ڿ����� ������ ����? �𸣸� ������� ������.
	���� �������� ������ ������ �غ� �Ǿ��־�.

	��° �ٺ��� N���� �ٿ� ���ϸ��� ��ȣ�� 1���� ���ϸ���� N���� �ش��ϴ� ���ϸ����
	�� �ٿ� �ϳ��� �Է����� ����.
	���ϸ��� �̸��� ��� ����θ� �̷�����ְ�,
	��, ��... ù ���ڸ� �빮���̰�, ������ ���ڴ� �ҹ��ڷθ� �̷���� �־�.
	����! �Ϻ� ���ϸ��� ������ ���ڸ� �빮���� ���� �־�.
	���ϸ� �̸��� �ִ� ���̴� 20, �ּ� ���̴� 2��.
	�� ���� �ٺ��� �� M���� �ٿ� ���� ������ϴ� ������ �Է����� ����.
	������ ���ĺ����θ� ������ ���ϸ� ��ȣ�� ���ؾ� �ϰ�, ���ڷθ� ������,
	���ϸ� ��ȣ�� �ش��ϴ� ���ڸ� ����ؾ���.
	�Է����� ������ ���ڴ� �ݵ�� 1���� ũ�ų� ����, N���� �۰ų� ����,
	�Է����� ������ ���ڴ� �ݵ�� ������ �ִ� ���ϸ��� �̸��� �־���. �׷� ȭ����!!!

< ��� >
	ù° �ٺ��� ���ʴ�� M���� �ٿ� ������ ������ ���� ���� ���������� ���ھ�!!!.
	�Է����� ���ڰ� ���Դٸ� �� ���ڿ� �ش��ϴ� ���ϸ��� �̸���,
	���ڰ� �������� �� ���ϸ��� �̸��� �ش��ϴ� ��ȣ�� ����ϸ� ��. �׷� ��ť~
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
< ���� >
	���� ī��� ���� �ϳ��� ������ �ִ� ī���̴�.
	����̴� ���� ī�� N���� ������ �ִ�.
	���� M���� �־����� ��,
	�� ���� �����ִ� ���� ī�带 ����̰� �� �� ������ �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ����̰� ������ �ִ� ���� ī���� ���� N(1 �� N �� 500,000)�� �־�����.

	��° �ٿ��� ���� ī�忡 �����ִ� ������ �־�����.
	���� ī�忡 �����ִ� ���� -10,000,000���� ũ�ų� ����, 10,000,000���� �۰ų� ����.

	��° �ٿ��� M(1 �� M �� 500,000)�� �־�����.

	��° �ٿ��� ����̰� �� �� ������ �ִ� ���� ī������ ���ؾ� �� M���� ������ �־�����,
	�� ���� �������� ���еǾ��� �ִ�. �� ���� -10,000,000���� ũ�ų� ����,
	10,000,000���� �۰ų� ����.

< ��� >
	ù° �ٿ� �Է����� �־��� M���� ���� ���ؼ�,
	�� ���� ���� ���� ī�带 ����̰� �� �� ������ �ִ����� �������� ������ ����Ѵ�.
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
< ���� >
	�������� �赵 ���� ����� ���ܰ�,
	���� ���� ����� ������ �־��� ��,
	�赵 ���� ���� ����� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� �赵 ���� ����� �� N, ���� ���� ����� �� M�� �־�����.

	�̾ ��° �ٺ��� N���� �ٿ� ���� �赵 ���� ����� �̸���,
	N+2° �ٺ��� ���� ���� ����� �̸��� ������� �־�����.
	�̸��� ���� ���� ���ĺ� �ҹ��ڷθ� �̷������, �� ���̴� 20 �����̴�.
	N, M�� 500,000 ������ �ڿ����̴�.

	�赵 ���� ����� ���ܿ��� �ߺ��Ǵ� �̸��� ������, ���� ���� ����� ���ܵ� ���������̴�.

< ��� >
	�躸���� ���� �� ������ ���������� ����Ѵ�.
*/

#
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//int main()
//{
//	std::unordered_map<std::string, int> name;
//	std::string temp;
//
//	int N, M;
//	std::cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> temp;
//		name[temp]++;
//	}
//	int count{};
//	std::vector<std::string> result;
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> temp;
//		name[temp]++;
//
//		if (name[temp] == 2)
//		{
//			result.push_back(temp);
//			count++;
//		}
//	}
//	std::sort(result.begin(), result.end());
//
//	std::cout << count << '\n';
//	for (auto e : result) std::cout << e << '\n';
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
//	for (int i = 0; i < N + M; i++) {
//		std::cin >> S;
//		MP[S]++;
//		if (MP[S] > 1) cnt++;
//	}
//	std::cout << cnt;
//	for (auto i : MP) {
//		if (i.second == 2) {
//			std::cout << '\n' << i.first;
//		}
//	}
//}

/* --- < 1269 > --- */

/*
< ���� >
	�ڿ����� ���ҷ� ���� �������� �ƴ� �� ���� A�� B�� �ִ�.
	�̶�, �� ������ ��Ī �������� ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�� ���� A�� B�� ���� ��, (A-B)�� (B-A)�� �������� A�� B�� ��Ī �������̶�� �Ѵ�.

	���� ���, A = { 1, 2, 4 } �̰�, B = { 2, 3, 4, 5, 6 } ��� �� ��,
	A-B = { 1 } �̰�, B-A = { 3, 5, 6 } �̹Ƿ�,
	��Ī �������� ������ ������ 1 + 3 = 4���̴�.

< �Է� >
	ù° �ٿ� ���� A�� ������ ������ ���� B�� ������ ������ �� ĭ�� ���̿� �ΰ� �־�����.
	��° �ٿ��� ���� A�� ��� ���Ұ�,
	��° �ٿ��� ���� B�� ��� ���Ұ� �� ĭ�� ���̿� �ΰ� ���� �־�����.
	�� ������ ������ ������ 200,000�� ���� ������, ��� ������ ���� 100,000,000�� ���� �ʴ´�.

< ��� >
	ù° �ٿ� ��Ī �������� ������ ������ ����Ѵ�.
*/

//#include <iostream>
//#include <unordered_map>
//
//int main()
//{
//	int Asize, Bsize;
//	std::cin >> Asize >> Bsize;
//
//	std::unordered_map<int, int> AB;
//
//	int num;
//
//	for (int i = 0; i < Asize; i++)
//	{
//		std::cin >> num;
//		AB[num]++;
//	}
//
//	for (int i = 0; i < Bsize; i++)
//	{
//		std::cin >> num;
//		AB[num]++;
//	}
//
//	int count{};
//
//	for (auto e : AB)
//	{
//		if (e.second != 2) count++;
//	}
//
//	std::cout << count << '\n';
//}

//#include <iostream>
//#include <map>
//
//int main()
//{
//	int S, N, M;
//
//	std::map<int, int> AB;
//
//	for (int i = 0; i < N + M; i++)
//	{
//		std::cin >> S;
//		(AB[S]) ? AB.erase(S) : AB[S] = 1;
//	}
//
//	std::cout << AB.size();
//}

/* --- < 11478 > --- */

/*
< ���� >
	���ڿ� S�� �־����� ��, S�� ���� �ٸ� �κ� ���ڿ��� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�κ� ���ڿ��� S���� ���ӵ� �Ϻκ��� ���ϸ�, ���̰� 1���� ũ�ų� ���ƾ� �Ѵ�.

	���� ���, ababc�� �κ� ���ڿ���
	a, b, a, b, c, ab, ba, ab, bc, aba, bab, abc, abab, babc, ababc�� �ְ�, ���� �ٸ����� ������ 12���̴�.

< �Է� >
	ù° �ٿ� ���ڿ� S�� �־�����. S�� ���ĺ� �ҹ��ڷθ� �̷���� �ְ�, ���̴� 1,000 �����̴�.

< ��� >
	ù° �ٿ� S�� ���� �ٸ� �κ� ���ڿ��� ������ ����Ѵ�.
*/

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
//#include <unordered_map>
//
//int main()
//{
//// 1. ���� ���ڿ��� �Է� �޴´�.
//	std::string S;
//	std::cin >> S;
//// 2. ���� ���� ���ڿ��� �����Ѵ�.
////		=> ���ش� 0�� �ε��� ~ �� �ε�������
////		=> 1�� �ε��� ~ �� �ε������� ...
//// 3. ���������� ���� �ٸ� ���ڿ��� ������ ����ؾ� �Ѵ�.
////		=> �׷��Ƿ� �ߺ��Ǵ� ���ڿ��� ó���� �ϴµ� �̸� ���� map�� �̿��Ѵ�.
//	std::unordered_map<std::string, int> MP;
//	std::string temp;
//
//	for (int i = 0; i < S.size(); i++)
//	{
//		for (int j = i; j <= S.size(); j++)
//		{
//			temp = S.substr(i, j);
//			MP[temp]++;
//		}
//	}
//	std::cout << MP.size() << '\n';
//}