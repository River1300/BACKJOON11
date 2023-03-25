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