/* ----- < 15단계 백트래킹 > ----- */
//
//
//
//
//
/* --- < 15649 > --- */

/*
< 문제 >
	자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는
	프로그램을 작성하시오.

	#. 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열

< 입력 >
	첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)

< 출력 >
	한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.
	중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.

	수열은 사전 순으로 증가하는 순서로 출력해야 한다.

< 깊이 우선 탐색( DFS, Depth - First Search ) >
	< Description > : 루트 노드에서 시작해서 다음 분기로 넘어가기 전에 해당 분기를 완벽하게 탐색하는 방법
		#1. 미로를 탐색할 때 한 방향으로 갈 수 있을 때까지 계속 가다가 더 이산 갈 수 없게 되면 가장 가까운 갈림길로 돌아와서 이곳으로 부터 다른 방향으로 다시 탐색
		#2. 즉, 넓게 탐색하기 전에 깊게 탐색하는 것
		#3. 사용하는 경우 : 모든 노드를 방문하고자 하는 경우에 사용
		#4. 깊이 우선 탐색이 너비 우선 탐색보다 좀더 간단
		#5. 단순 검색 속도 자체는 너비 우선 탐색에 비해 느림
	< 특징 >
		#1. 자기 자신을 호출하는 순환 알고리즘의 형태를 가지고 있다.
		#2. 전위 순회를 호맣나 다른 형태의 트리 순회는 모두 DFS의 한 종류이다.
		#3. 그래프 탐색의 경우 어떤 노드를 방문 했었는지 여부를 반드시 검사해야 한다.

< 풀이 >
	< 목표 > : 1부터 N까지의 자연수 중에서 중복 없이 M개의 수열을 "모두" 출력
		1) N과 M을 입력 받는다.
		2) M은 N보다 크면 않된다.
		3) N은 8보다 크면 않된다.
		4) 수열을 저장할 배열을 만든다.
		5) 백트래킹을 위한 방문 확인 배열을 만든다.
		6) for문으로 1부터 N까지 반복한다.
		7) 방문한 적 없는 수는 수열로 저장시키고 더 깊은 노드로 이동한다.
		8) 최종 목적지에서 저장된 수열을 출력한다.
		9) for문으로 돌아와서 다음 인덱스 수로 다른 수열을 저장하며 반복한다.
*/

//#include <iostream>
//
//int N, M;
//int arr[9];
//bool visited[9];
//
//void DFS(int count)
//{
//	if (count == M)
//	{
//		for (int i = 0; i < M; i++) { std::cout << arr[i] << ' '; }
//		std::cout << '\n';
//	}
//	else
//	{
//		for (int i = 1; i <= N; i++)	// N : 1 2 3
//		{
//			if (!visited[i])			// [i = 1]			| [i = 2]
//			{
//				visited[i] = true;		// [숫자1] = true	| [숫자2] = true
//				arr[count] = i;			// [0] = 1			| [1] = 2
//				DFS(count + 1);			// [1] ->			| [2] ->
//				visited[i] = false;		// [숫자1] = false	| [숫자2] = false
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//	DFS(0);
//}

//#include <iostream>
//
//int N, M;
//int arr[9];
//bool Check[9];
//
//void DFS(int count)
//{
//	if (count == M)
//	{
//		for (int i = 0; i < M; i++) { std::cout << arr[i] << ' '; }
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		if (!Check[i])
//		{
//			Check[i] = true;
//			arr[count] = i;
//			DFS(count + 1);
//			Check[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//	DFS(0);
//}

/* --- < 15650 > --- */

/*
< 문제 >
	자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는
	프로그램을 작성하시오.

	#. 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
	#. 고른 수열은 오름차순이어야 한다.

< 입력 >
	첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)
< 출력 >
	한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.
	중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.

	수열은 사전 순으로 증가하는 순서로 출력해야 한다.

< 풀이 >
	< 목표 > : 오름차순으로 정렬된 1 ~ N까지, M개의 수열을 모두 출력
		1) N과 M을 출력 받는다.
		2) M은 N보다 크면 않된다.
		3) N은 8보다 크면 않된다.
		4) 수열을 저장할 배열을 만든다.
		5) 백트래킹을 위한 방문 확인 배열을 만든다.
		6) for문을 1부터 N까지 반복한다.
		7) 단, 재귀를 통해 깊은 노드로 들어갈 때
			=> 현재 노드의 for문 [i]인덱스보다 더 큰 값으로 다음 노드 for문을 만든다.
		8) 방문한 적 없는 수는 수열로 저장시키고 더 깊은 노드로 이동한다.
		9) 최종 목적지에서 저장된 수열을 출력한다.
		10) for문으로 돌아와서 다음 인덱스 수로 다른 수열을 저장하며 반복한다.
*/

//#include <iostream>
//
//int N, M;
//int arr[9];
//bool visited[9];
//
//void DFS(int num, int count)
//{
//	if (count == M)
//	{
//		for (int i = 0; i < M; i++) std::cout << arr[i] << ' ';
//	}
//	else
//	{
//		for (int i = num; i <= N; i++)
//		{
//			if (!visited[i])
//			{
//				visited[i] = true;
//				arr[count] = i;
//				DFS(i + 1, count + 1);
//				visited[i] = false;
//			}
//		}
//	}
//}
//int main()
//{
//	std::cin >> N >> M;
//	DFS(1, 0);
//}

/* --- < 15651 > --- */

/*
< 문제 >
	자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을
	모두 구하는 프로그램을 작성하시오.

	#. 1부터 N까지 자연수 중에서 M개를 고른 수열
	#. 같은 수를 여러 번 골라도 된다.

< 입력 >
	첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 7)

< 출력 >
	한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.
	중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.

	수열은 사전 순으로 증가하는 순서로 출력해야 한다.

< 풀이 >
	< 목표 > : 값이 중복될 수 있는 1 ~ N까지, M개의 수열을 모두 출력
		1) N과 M을 입력 받는다.
		2) M은 N보다 크면 않된다.
		3) N은 7보다 크면 않된다.
		4) 수열을 저장할 배열을 만든다.
		5) for문으로 1부터 N까지 반복한다.
		6) 최종 목적지에서 저장된 수열을 출력한다.
		7) for문으로 돌아와서 다음 인덱스 수로 다른 수열을 저장하며 반복한다.
< 다른 풀이 >
	이 문제는 조합을 구하는 문제다
	1부터 N까지의 수 중에서 중복을 허용하여 M개를 선택하는 경우의 수를 구해야 한다.
	이를 구현하기 위해서는 백트래킹 알고리즘을 사용하면 된다.
	백트래킹은 DFS를 이용한 알고리즘으로, 현재 상태에서 다음 상태로 넘어가기 전에 현재 상태에서 가능한
	모든 경우를 시도하며 해를 찾는 방법이다.

	1. 리스트를 만들어서 선택한 숫자를 저장
	2. DFS 함수를 만든다. 이 함수는 형재 선택한 숫자의 개수와 마지막으로 선택한 숫자를 인자로 받는다.
	3. count가 M이 되면 선택한 숫자를 출력하고 리턴한다.
	4. last부터 N까지의 수 중에서 하나를 선택하고 DFS 함수를 재귀적으로 호출한다.
	5. 선택한 숫자를 리스트에 추가하고 DFS함수를 호출한다.
	7. DFS 함수에서 리턴하면서 마지막으로 추가한 숫자를 리스트에서 제거한다.
*/

//#include <iostream>
//
//int N, M;
//int arr[8];
//
//void DFS(int count)
//{
//	if (count == M)
//	{
//		for (int i = 0; i < M; i++) std::cout << arr[i] << ' ';
//	}
//	else
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			arr[count] = i;
//			DFS(count + 1);
//		}
//	}
//}
//int main()
//{
//	std::cin >> N >> M;
//	DFS(0);
//}

//#include <iostream>
//#include <vector>
//
//int N, M;
//std::vector<int> nums;
//
//void DFS(int count)
//{
//	if (count == M)
//	{
//		for (int i : nums) std::cout << i << ' ';
//		std::cout << '\n';
//		return;
//	}
//	
//	for (int i = 1; i <= N; i++)	// 1 2 3
//	{
//		nums.push_back(i);			// [0] = 1
//		DFS(count + 1);			// [1],1	// [1] = 1	// [2],1 // 
//		nums.pop_back();
//	}
//}
//int main()
//{
//	std::cin >> N >> M;
//	DFS(0);
//}

/* --- < 15652 > --- */

/*
< 문제 >
	자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을
	모두 구하는 프로그램을 작성하시오.

	#. 1부터 N까지 자연수 중에서 M개를 고른 수열
	#. 같은 수를 여러 번 골라도 된다.
	#. 고른 수열은 비내림차순이어야 한다.
	#. 길이가 K인 수열 A가 A1 ≤ A2 ≤ ... ≤ AK-1 ≤ AK를 만족하면, 비내림차순이라고 한다.

< 입력 >
	첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)

< 출력 >
	한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.
	중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.

	수열은 사전 순으로 증가하는 순서로 출력해야 한다.

< 풀이 >
	< 목표 > : 중복이 가능한 오름차순으로 정렬된 1 ~ N까지, M개의 수열을 모두 출력
		1) N과 M을 출력 받는다.
		2) M은 N보다 크면 않된다.
		3) N은 8보다 크면 않된다.
		4) 수열을 저장할 배열을 만든다.
		5) for문을 1부터 N까지 반복한다.
		6) 단, 재귀를 통해 깊은 노드로 들어갈 때
			=> 현재 노드의 for문 [i]인덱스보다 더 큰 값으로 다음 노드 for문을 만든다.
		7) 최종 목적지에서 저장된 수열을 출력한다.
		8) for문으로 돌아와서 다음 인덱스 수로 다른 수열을 저장하며 반복한다.
*/

//#include <iostream>
//
//int N, M;
//int arr[9];
//
//void DFS(int num, int count)
//{
//	if (count == M)
//	{
//		for (int i = 0; i < M; i++) std::cout << arr[i] << ' ';
//		std::cout << '\n';
//	}
//	else
//	{
//		for (; num <= N; num++)
//		{
//			arr[count] = num;
//			DFS(num, count + 1);
//		}
//	}
//}
//int main()
//{
//	std::cin >> N >> M;
//	DFS(1, 0);
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n, m;
//vector<int> seq; // 수열을 저장할 vector
//
//void dfs(int idx, int cnt) { // idx: 현재 수를 선택할 수 있는 범위, cnt: 현재까지 선택한 수의 개수
//	if (cnt == m) { // 수열의 길이가 m이면 출력
//		for (int i = 0; i < m; i++) {
//			cout << seq[i] << " ";
//		}
//		cout << '\n';
//		return;
//	}
//	for (int i = idx; i <= n; i++) {
//		seq.push_back(i); // 수열에 i를 추가
//		dfs(i, cnt + 1); // i를 선택한 경우에 대해 다음 수를 탐색
//		seq.pop_back(); // 수열에서 i를 제거하여 다른 경우의 수열을 만듦
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	dfs(1, 0); // 1부터 시작하여 탐색
//	return 0;
//}

/* --- < 9663 > --- */

/*
< 문제 >
	N-Queen 문제는 크기가 N × N인 체스판 위에 퀸 N개를 서로 공격할 수 없게 놓는 문제이다.

	N이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 N이 주어진다. (1 ≤ N < 15)

< 출력 >
	첫째 줄에 퀸 N개를 서로 공격할 수 없게 놓는 경우의 수를 출력한다.

< 풀이 >
	N-Queen 문제는 백트래킹의 가장 대표적인 예제로서,
	퀸의 특성상 체스판 한 행당 한 개의 퀸만 존재할 수 있다는 것을
	전제로 깔아두고 시작하는 것이 좋다.
	즉 이 문제를 풀기 위해서 N*N짜리 배열을 직접 만들 필요 없이,
	크기가 N인 일차원 배열을 만든 후, 각 열에 몇번째 행의 퀸이 있는지를 저장하면 된다.
	예를 들어  N = 4일때,

	일차원 배열 col [] 에 이런식으로 저장하면 된다.
	col[0] = 0번째 열에 존재하는건 1행의 퀸이므로 1 저장
	col[1] = 1번째 열에 존재하는건 3행의 퀸이므로 3 저장
	col[2] = 2번째 열에 존재하는건 0행의 퀸이므로 0 저장
	col[3] = 3번째 열에 존재하는건 2행의 퀸이므로 2 저장

	그후 한 행씩 퀸을 배치해가면서 총 배치 행수가 N이 되면
	조건을 만족하는 경우의 수를 1개씩 늘려주는 방식으로 백트래킹을 진행할 수 있다.

	따라서 재귀함수의 매개변수에는 현재 몇번째 행을 채우고 있는지를
	기록하는 Level이라는 인자를 사용해야 한다.

	먼저 이 문제에서 체크해야하는것은, 임의로 배치한 퀸이 다른 퀸과
	같은 행 또는 같은 열에 있는가를 살펴야하며, 대각선에 위치해있는가를 살펴야한다.

	이 때, 같은 행과 열에 있는지 확인하는 방법은 매우 간단하지만,
	대각선에 위치해있는지를 찾는 방식이 다소 까다로울 수 있다.
	먼저 기본적으로 대각선에 존재하는 좌표일 경우, (X, Y)의 대각선에 위치한 좌표
	(A, B)에서 반드시 X-A = Y-B를 만족한다.

	예를 들어 (0 , 1)을 기준으로 했을때,
	대각선에 있는 점들 (1, 2) (2, 3) 은 반드시 (0 - 1) = (1 - 2) = -1, (0 - 2) = (1 - 3) = -2를
	만족한다는 것이다.

	따라서 우리가 정의한 col이라는 1차원 배열의 정의에 따라서
	X좌표와 Y좌표의 차이가 일정한 값을 가질 경우 해당 퀸과 대각선에 있다고 판단할 수 있다.
*/

//#include <iostream>
//
//int EN[15];			// English : A열, B열, C열, D열... 세로 열
//int N, result;		// Number : 1행, 2행, 3행... 가로 행
//
//bool check(int NUM)
//{
//	for (int i = 0; i < NUM; i++)
//	{	// 열(인덱스) 끼리 비교하여 행(내부 원소)이 같은지 확인 ||
//		// 대각선으로 queen이 있는지 확인
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

/*
이 문제는 백트래킹 알고리즘을 사용하여 해결할 수 있다. 백트래킹 알고리즘은 가능한 모든 조합을 시도하며,
조건에 맞지 않는 조합을 제외하여 최종적으로 원하는 결과를 도출하는 방법이다.
먼저, check() 함수는 해당 위치에 퀸을 놓을 수 있는지 체크하는 함수이다. 이 함수는 현재 놓을 퀸의
위치를 받아와 이전에 놓았던 퀸들과 충돌 여부를 판단한다.
열이나 대각선상에 다른 퀸이 있다면 퀸을 놓을 수 없으므로 false를 반환하고 그렇지 않으면 퀸을 놓을 수 
있으므로 true를 반환한다.
다음으로 dfs()함수는 백트래킹 알고리즘을 구현한 함수이다. 이 함수는 현재 놓을 퀸의 위치를 받아와
해당 위치에서 가능한 모든 열에 퀸을 놓아 본다. 이 때 check()함수를 사용하여 충돌 여부를 판단하고,
충돌이 없는 열에 대해서만 다음 행으로 이동한다. 다음 행으로 이동할 때는 현재 행에 놓인 퀸의 열
번호를 col 벡터에 저장한 후 'pop'한다.
*/

//#include <iostream>
//#include <vector>
//
//int N;	// 체스판 크기
//int ans = 0;	// 퀸을 놓는 경우의 수
//std::vector<int> col;	// 각 행에 놓인 퀸의 열 번호
//
//bool check(int x, int y) {	// 해당 위치에 퀸을 놓을 수 있는지 체크
//	for (int i = 0; i < x; i++) {
//		if (y == col[i] || x - i == abs(y - col[i])) return false;
//	}
//	return true;
//}
//
//bool dfs(int row) {	// 백트래킹
//	if (row == N) {	// 퀸 N개를 모두 놓았으면 경우의 수 1 증가
//		ans++;
//		return;
//	}
//	for (int i = 0; i < N; i++) {
//		if (check(row, i)) {
//			col.push_back(i);
//			dfs(row + 1);
//			col.pop_back();
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N;
//	dfs(0);
//	std::cout << ans << std::endl;
//	return 0;
//}

/* --- < 2580 > --- */

/*
< 문제 >
	스도쿠는 18세기 스위스 수학자가 만든 '라틴 사각형'이랑 퍼즐에서 유래한 것으로
	현재 많은 인기를 누리고 있다.
	이 게임은 아래 그림과 같이 가로, 세로 각각 9개씩 총 81개의 작은 칸으로 이루어진
	정사각형 판 위에서 이뤄지는데, 게임 시작 전 일부 칸에는 1부터 9까지의 숫자 중 하나가 쓰여 있다.

	나머지 빈 칸을 채우는 방식은 다음과 같다.

	각각의 가로줄과 세로줄에는 1부터 9까지의 숫자가 한 번씩만 나타나야 한다.
	굵은 선으로 구분되어 있는 3x3 정사각형 안에도 1부터 9까지의 숫자가 한 번씩만 나타나야 한다.

	위의 예의 경우, 첫째 줄에는 1을 제외한 나머지 2부터 9까지의 숫자들이 이미 나타나 있으므로
	첫째 줄 빈칸에는 1이 들어가야 한다.

	또한 위쪽 가운데 위치한 3x3 정사각형의 경우에는 3을 제외한 나머지 숫자들이
	이미 쓰여있으므로 가운데 빈 칸에는 3이 들어가야 한다.

	게임 시작 전 스도쿠 판에 쓰여 있는 숫자들의 정보가 주어질 때 모든 빈 칸이 채워진
	최종 모습을 출력하는 프로그램을 작성하시오.

< 입력 >
	아홉 줄에 걸쳐 한 줄에 9개씩 게임 시작 전 스도쿠판 각 줄에 쓰여 있는 숫자가
	한 칸씩 띄워서 차례로 주어진다.
	스도쿠 판의 빈 칸의 경우에는 0이 주어진다.
	스도쿠 판을 규칙대로 채울 수 없는 경우의 입력은 주어지지 않는다.

< 출력 >
	모든 빈 칸이 채워진 스도쿠 판의 최종 모습을 아홉 줄에 걸쳐
	한 줄에 9개씩 한 칸씩 띄워서 출력한다.

	스도쿠 판을 채우는 방법이 여럿인 경우는 그 중 하나만을 출력한다.

< 풀이 >
	스도쿠는 각 행과 열, 그리고 3x3크기의 구역 9개에 각각 1~9 까지의 숫자가
	단 한번씩만 들어가야하는 규칙을 가지고 있다.

	따라서 해당 문제를 풀이하기 위해서는 스도쿠가 유효한지 체크하는 check함수가 필요하고,
	check함수는 같은 행 또는 열에 혹시 같은 숫자가 있는지,
	3x3크기의 구역에 같은 숫자가 있는지를 체크해주는 함수가 될 것이다.

	그 후, 백트래킹을 통해서 0이 입력된 빈칸 부분에 1부터 9까지의 숫자를 차례로 넣어보고,
	모든 칸을 채웠을 때 결과를 호출하면 되는 문제이다.
*/

//#include <iostream>
//#include <utility>
//#include <vector>
//
//int board[9][9];							// 스도쿠 보드 선언
//std::vector<std::pair<int, int>> points;	// 빈칸의 위치 저장
//int cnt;
//bool found;									// 목표 달성 여부
//
//bool check(std::pair<int, int> p)			// p에는 빈칸의 x, y좌표가 들어있고 해당 좌표에는 1 ~ 9의 숫자가 있다.
//{
//	int square_x = p.first / 3;				// 3 * 3영역을 만들기 위해 구역을 나눈다.
//	int square_y = p.second / 3;			//		=> 스도쿠는 0, 0 ~ 8, 8인덱스까지 있다.
//	// 수직, 수평으로 된 배열에 같은 값이 있는지 확인한다.
//	for (int i = 0; i < 9; i++)
//	{	// 같은 행(p.first)에 같은 값이 있으면 false로 반환
//		if (board[p.first][i] == board[p.first][p.second] && i != p.second) return false;
//		// 같은 열(p.second)에 같은 값이 있으면 false로 반환
//		if (board[i][p.second] == board[p.first][p.second] && i != p.first) return false;
//	}
//	// 3 * 3구역안에서 같은 값이 있는지 확인한다.
//	for (int i = 3 * square_x; i < 3 * square_x + 3; i++)
//	{	// 3 * square_ : 3 * 3배열의 시작 인덱스
//		for (int j = 3 * square_y; j < 3 * square_y + 3; j++)
//		{	// 3 * square_ + 3 : 3 * 3배열의 끝 인덱스
//			if (board[i][j] == board[p.first][p.second])
//			{	// 전달받은 p 좌표의 값과 3 * 3배열의 값들 중 같은 값이 있으면 false로 반환
//				if (i != p.first && j != p.second) return false;
//			}
//		}
//	}
//	// 같은 값이 없다면 true로 반환
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
//	for (int i = 1; i <= 9; i++)
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
//		{	// 사용자로부터 스도쿠를 입력 받는다.
//			std::cin >> board[i][j];
//			if (board[i][j] == 0)
//			{	// 사용자가 0을 입력하였을 경우
//				cnt++;					//	=> 빈칸의 개수를 한 개 증가 시킨다.
//				point.first = i;		//	=> 빈칸의 행 좌표를 저장한다.
//				point.second = j;		//	=> 빈칸의 열 좌표를 저장한다.
//				points.push_back(point);//	=> 빈칸의 행,열 좌표를 벡터에 저장한다.
//			}
//		}
//	}
//	// 0부터 시작하여 cnt개수가 될 때까지 빈칸을 채운다.
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
//	for (int i = 1; i <= 9; i++)
//	{
//		board[points[N].first][points[N].second] = i;
//		if (check(points[N])) sudoku(N + 1);
//		if (found) return;
//	}
//	board[points[N].first][points[N].second] = 0;
//	return;
//}
//
//int main()
//{
//	std::pair<int, int> point;
//
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

/* --- < 14888 > --- */

/*
< 문제 >
	N개의 수로 이루어진 수열 A1, A2, ..., AN이 주어진다.
	또, 수와 수 사이에 끼워넣을 수 있는 N-1개의 연산자가 주어진다.
	연산자는 덧셈(+), 뺄셈(-), 곱셈(×), 나눗셈(÷)으로만 이루어져 있다.

	우리는 수와 수 사이에 연산자를 하나씩 넣어서, 수식을 하나 만들 수 있다.
	이때, 주어진 수의 순서를 바꾸면 안 된다.

	예를 들어, 6개의 수로 이루어진 수열이 1, 2, 3, 4, 5, 6이고,
	주어진 연산자가 덧셈(+) 2개, 뺄셈(-) 1개, 곱셈(×) 1개, 나눗셈(÷) 1개인 경우에는
	총 60가지의 식을 만들 수 있다.
	예를 들어, 아래와 같은 식을 만들 수 있다.

	1+2+3-4×5÷6
	1÷2+3+4-5×6
	1+2÷3×4-5+6
	1÷2×3-4+5+6
	식의 계산은 연산자 우선 순위를 무시하고 앞에서부터 진행해야 한다.
	또, 나눗셈은 정수 나눗셈으로 몫만 취한다.
	음수를 양수로 나눌 때는 C++14의 기준을 따른다.
	즉, 양수로 바꾼 뒤 몫을 취하고, 그 몫을 음수로 바꾼 것과 같다.
	이에 따라서, 위의 식 4개의 결과를 계산해보면 아래와 같다.

	1+2+3-4×5÷6 = 1
	1÷2+3+4-5×6 = 12
	1+2÷3×4-5+6 = 5
	1÷2×3-4+5+6 = 7
	N개의 수와 N-1개의 연산자가 주어졌을 때,
	만들 수 있는 식의 결과가 최대인 것과 최소인 것을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 수의 개수 N(2 ≤ N ≤ 11)가 주어진다.
	둘째 줄에는 A1, A2, ..., AN이 주어진다.
	(1 ≤ Ai ≤ 100) 셋째 줄에는 합이 N-1인 4개의 정수가 주어지는데,
	차례대로 덧셈(+)의 개수, 뺄셈(-)의 개수, 곱셈(×)의 개수, 나눗셈(÷)의 개수이다.

< 출력 >
	첫째 줄에 만들 수 있는 식의 결과의 최댓값을, 둘째 줄에는 최솟값을 출력한다.
	연산자를 어떻게 끼워넣어도 항상 -10억보다 크거나 같고,
	10억보다 작거나 같은 결과가 나오는 입력만 주어진다.
	또한, 앞에서부터 계산했을 때, 중간에 계산되는 식의 결과도
	항상 -10억보다 크거나 같고, 10억보다 작거나 같다.

< 풀이 >
	먼저 수열에 입력할 수를 입력받은 후, 연산자의 개수를 입력받는다.
	필자의 경우 operators라는 크기 4짜리 배열을 선언하였고,
	덧셈, 뺼셈, 곱셈, 나눗셈의 개수를 각각 입력받았다.

	그 후, 백트래킹을 사용하여 재귀로 문제를 해결한다.

	매개변수로는 여태까지 연산의 result값, 연산을 진행할 수의 인덱스를
	입력받도록 하는 백트래킹 재귀 함수를 정의하여 풀이가 가능하다.

	주어진 숫자와 연산자를 사용하여 만들 수 있는 모든 식의 결과 중에서 최댓값과 최솟값을 구하는 프로그램입니다.

	주어진 숫자는 N개이며, operands 배열에 저장됩니다. 연산자는 +, -, *, / 중에서 선택할 수 있으며, 
	각 연산자의 사용 횟수는 operators 배열에 저장된다. 
	예를 들어, operators[0]은 +의 사용 횟수, operators[1]은 -의 사용 횟수, operators[2]은 *의 사용 횟수, 
	operators[3]은 /의 사용 횟수를 의미한다.

	GetAnswer 함수는 재귀적으로 호출되며, 
	현재까지 만들어진 식의 결과(result)와 사용된 숫자의 개수(index)를 매개변수로 받는다.
	모든 숫자를 사용한 경우(index == N)에는 현재까지 만들어진 식의 결과를 최대값과 최소값과 비교하여 갱신한다.
	그리고 다시 이전 단계로 돌아가서, 사용 가능한 모든 연산자를 대입하여 다음 식을 만들도록 한다.
*/

//#include <iostream>
//
//int N;
//int operands[11];
//int operators[4];
//int myMin = 100000001;
//int myMax = -100000001;
//
//void GetAnswer(int result, int index)
//{
//	if (index == N)
//	{
//		if (result > myMax) myMax = result;
//		if (result < myMin)myMin = result;
//		return;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (operators[i] > 0)
//		{
//			operators[i]--;
//
//			if (i == 0) { GetAnswer(result + operands[index], index + 1); }
//			else if (i == 1) { GetAnswer(result - operands[index], index + 1); }
//			else if (i == 2) { GetAnswer(result * operands[index], index + 1); }
//			else { GetAnswer(result / operands[index], index + 1); }
//
//			operators[i]++;
//		}
//	}
//	return;
//}
//int main()
//{
//	std::cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> operands[i];
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		std::cin >> operators[i];
//	}
//	GetAnswer(operands[0], 1);
//	std::cout << myMax << '\n' << myMin << '\n';
//}

//#include <iostream>
//
//int N;
//int operands[11];
//int operators[4];
//int myMin = 10000001;
//int myMax = -10000001;
//
//void GetAnswer(int result, int index)
//{
//	if (index == N) {
//		if (result > myMax) myMax = result;
//		if (result < myMin) myMin = result;
//		return;
//	}
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
//int main()
//{
//	std::cin >> N;
//	for (int i = 0; i < N; i++) std::cin >> operands[i];
//	for (int i = 0; i < 4; i++) std::cin >> operators[i];
//
//	GetAnswer(operands[0], 1);
//}

/* --- < 14889 > --- */

/*
< 문제 >
	오늘은 스타트링크에 다니는 사람들이 모여서 축구를 해보려고 한다.
	축구는 평일 오후에 하고 의무 참석도 아니다.
	축구를 하기 위해 모인 사람은 총 N명이고 신기하게도 N은 짝수이다.
	이제 N/2명으로 이루어진 스타트 팀과 링크 팀으로 사람들을 나눠야 한다.

	BOJ를 운영하는 회사 답게 사람에게 번호를 1부터 N까지로 배정했고, 아래와 같은 능력치를 조사했다.
	능력치 Sij는 i번 사람과 j번 사람이 같은 팀에 속했을 때, 팀에 더해지는 능력치이다.
	팀의 능력치는 팀에 속한 모든 쌍의 능력치 Sij의 합이다.
	S[ij]는 S[ji]와 다를 수도 있으며, i번 사람과 j번 사람이 같은 팀에 속했을 때,
	팀에 더해지는 능력치는 S[ij]와 S[ji]이다.

	N=4이고, S가 아래와 같은 경우를 살펴보자.

	i\j	1	2	3	4
	1	 	1	2	3
	2	4	 	5	6
	3	7	1	 	2
	4	3	4	5

	예를 들어, 1, 2번이 스타트 팀, 3, 4번이 링크 팀에 속한 경우에 두 팀의 능력치는 아래와 같다.
	스타트 팀: S[1,2] + S[2,1] = 1 + 4 = 5
	링크 팀	 : S[3,4] + S[4,3] = 2 + 5 = 7

	1, 3번이 스타트 팀, 2, 4번이 링크 팀에 속하면, 두 팀의 능력치는 아래와 같다.
	스타트 팀: S[1,3] + S[3,1] = 2 + 7 = 9
	링크 팀	 : S[2,4] + S[4,2] = 6 + 4 = 10

	축구를 재미있게 하기 위해서 스타트 팀의 능력치와 링크 팀의 능력치의 차이를 최소로 하려고 한다.
	위의 예제와 같은 경우에는 1, 4번이 스타트 팀, 2, 3번 팀이 링크 팀에 속하면
	스타트 팀의 능력치는 6, 링크 팀의 능력치는 6이 되어서 차이가 0이 되고 이 값이 최소이다.

< 입력 >
	첫째 줄에 N(4 ≤ N ≤ 20, N은 짝수)이 주어진다. 둘째 줄부터 N개의 줄에 S가 주어진다.
	각 줄은 N개의 수로 이루어져 있고, i번 줄의 j번째 수는 Sij 이다.
	Sii는 항상 0이고, 나머지 Sij는 1보다 크거나 같고, 100보다 작거나 같은 정수이다.

< 출력 >
	첫째 줄에 스타트 팀과 링크 팀의 능력치의 차이의 최솟값을 출력한다.

< 풀이 >
	dfs를 활용한 조합 알고리즘을 사용하여 N명의 사람중 N/2명을 뽑는 조합의 모든 경우의 수를 찾고,
	이를 바탕으로 팀을 나눴을 때 두 팀의 능력치의 차이가 가장 최소가 될 때의 값을 저장하여 출력하면 되는 문제이다.

	i\j | A | B | C | D
	 A	| 0 | 1 | 2 | 3
	 B	| 4 | 0 | 5 | 6
	 C	| 7 | 1 | 0 | 2
	 D	| 3 | 4 | 5 | 0

	 N이 4명이라고 가정( A, B, C, D ) : team[4] = true, true, false, false, ...

	 두 개의 팀으로 나눌 때, 두 팀의 능력치 차이가 최소가 되도록 하는 문제를 푸는 코드이다. 이를 위해서는
	 팀을 구성하는 모든 경우의 수를 고려해야 하기 때문에 백트래킹 알고리즘이 사용된다.

	 코드는 다음과 같이 동작한다.

	 두 팀으로 나눌 수 있는 모든 경우의 수를 확인한다.
	 각 경우에 대해 두 팀의 능력치를 계산하여, 능력치 차이의 최소값을 갱신한다.
	 이를 위해, 다음과 같은 함수들이 사용되었다.
	 void TeamSet(int index, int count) : 백트래킹 알고리즘을 이용해 가능한 모든 팀 구성을 확인하낟.
	 index는 현재 확인 중인 선수 번호, count는 현재까지 선택된 선수 수를 나타낸다.
	 이 함수는 모든 가능한 경우의 수를 확인하면서, 각 경우에 대해 start팀과 link팀의 능력치를 
	 계산하고, 능력치 차이의 최소값을 계산한다.
	 int main(); 입력을 받은 후, TeamSet ㅎ마수를 호출하여 문제를 해결한다.
*/

//#include <iostream>
//#include <vector>
//#include <cmath>
//
//bool team[20];
//int score[20][20];
//int N;
//int myMin{ 9999999 };
//
//void TeamSet(int index, int count)
//{
//	std::vector<int> start;
//	std::vector<int> link;
//	int start_score{};
//	int link_score{};
//
//	if (count == (N / 2))
//	{
//		for (int i = 0; i < N; i++)
//		{
//			if (team[i] == true) { start.push_back(i); }
//			else { link.push_back(i); }
//		}
//		for (int i = 0; i < (N / 2); i++)
//		{
//			for (int j = 0; j < (N / 2); j++)
//			{
//				start_score += score[start[i]][start[j]];
//				link_score += score[link[i]][link[j]];
//			}
//		}
//		if (abs(start_score - link_score) < myMin)
//		{
//			myMin = abs(start_score - link_score);
//		}
//		return;
//	}
//	for (int i = index; i < N; i++)
//	{
//		if (team[i]) continue;
//		else {
//			team[i] = true;
//			TeamSet(i, count + 1);
//			team[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++) std::cin >> score[i][j];
//	}
//
//	TeamSet(0, 0);
//	std::cout << myMin << '\n';
//}

//#include <iostream>
//#include <vector>
//#include <cmath>
//
//bool team[20];
//int score[20][20];
//int N;
//int myMin{ 999999 };
//
//void TeamSet(int index, int count)
//{
//	std::vector<int> start;
//	std::vector<int> link;
//	int start_score{};
//	int link_score{};
//
//	if (count == (N / 2))
//	{
//		for (int i = 0; i < N; i++)
//		{
//			if (team[i] == true) start.push_back(i);
//			else link.push_back(i);
//		}
//
//		for (int i = 0; i < (N / 2); i++)
//		{
//			for (int j = 0; j < (N / 2); j++)
//			{
//				start_score += score[start[i]][start[j]];
//				link_score += score[link[i]][link[j]];
//			}
//		}
//
//		if (abs(start_score - link_score) < myMin)
//		{
//			myMin = abs(start_score - link_score);
//		}
//		return;
//	}
//	for (int i = index; i < N; i++)
//	{
//		if (team[i]) continue;
//		else
//		{
//			team[i] = true;
//			TeamSet(i, count + 1);
//			team[i] = false;
//		}
//	}
//}
//int main()
//{
//	std::cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++) std::cin >> score[i][j];
//	}
//	TeamSet(0, 0);
//
//	std::cout << myMin << '\n';
//}

//#include <iostream>
//#include <vector>
//#include <cmath>
//
//bool team[20];
//int score[20][20];
//int N;
//int myMin{ 999999 };
//
//void TeamSet(int index, int count)
//{
//	std::vector<int> start;
//	std::vector<int> link;
//	int start_score{};
//	int link_score{};
//
//	if (count == (N / 2))
//	{
//		for (int i = 0; i < N; i++)
//		{
//			if (team[i] == true) start.push_back(i);
//			else { link.push_back(i); }
//		}
//
//		for (int i = 0; i < (N / 2); i++)
//		{
//			for (int j = 0; j < (N / 2); j++)
//			{
//				start_score += score[start[i]][start[j]];
//				link_score += score[link[i]][link[j]];
//			}
//		}
//
//		if (abs(start_score - link_score) < myMin)
//		{
//			myMin = abs(start_score - link_score);
//		}
//		return;
//	}
//
//	for (int i = index; i < N; i++)
//	{
//		if (team[i]) continue;
//		else
//		{
//			team[i] = true;
//			TeamSet(i, count + 1);
//			team[i] = false;
//		}
//	}
//}
//int main()
//{
//	std::cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++) std::cin >> score[i][j];
//	}
//	TeamSet(0, 0);
//	std::cout << myMin << '\n';
//}

//#include <iostream>
//#include <vector>
//#include <cmath>
//
//bool team[20];
//int score[20][20];
//int N;
//int myMin{ 9999999 };
//
//void TeamSet(int index, int count)
//{
//	std::vector<int> start;
//	std::vector<int> link;
//	int start_score{};
//	int link_score{};
//
//	if (count == (N / 2))
//	{
//		for (int i = 0; i < N; i++)
//		{
//			if (team[i] == true) start.push_back(i);
//			else link.push_back(i);
//		}
//		for (int i = 0; i < (N / 2); i++)
//		{
//			for (int j = 0; j < (N / 2); j++)
//			{
//				start_score += score[start[i]][start[j]];
//				link_score += score[link[i]][link[j]];
//			}
//		}
//		if (abs(start_score - link_score) < myMin) myMin = abs(start_score - link_score);
//		return;
//	}
//
//	for (int i = index; i < N; i++)
//	{
//		if (team[i]) continue;
//		else
//		{
//			team[i] = true;
//			TeamSet(i, count + 1);
//			team[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++) std::cin >> score[i][j];
//	}
//	TeamSet(0, 0);
//	std::cout << myMin << '\n';
//}