/* ----- < 13단계 기하 1 > ----- */
//
//
//
//
//
/* --- < 1085 > --- */

/*
< 문제 >
	한수는 지금 (x, y)에 있다.
	직사각형은 각 변이 좌표축에 평행하고,
	왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다.
	직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 x, y, w, h가 주어진다.

< 출력 >
	첫째 줄에 문제의 정답을 출력한다.

< 제한 >
	1 ≤ w, h ≤ 1,000
	1 ≤ x ≤ w-1
	1 ≤ y ≤ h-1
	x, y, w, h는 정수
*/

//#include <iostream>
//
//int main()
//{
//	int x, y, w, h;
//	std::cin >> x >> y >> w >> h;
//
//	int high{ h - y };
//	int low{ y - 0 };
//	int right{ w - x };
//	int left{ x - 0 };
//
//	if (high <= low && high <= right && high <= left) std::cout << high << '\n';
//	else if (low <= high && low <= right && low <= left) std::cout << low << '\n';
//	else if (right <= high && right <= low && right <= left) std::cout << right << '\n';
//	else std::cout << left << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int x, y, w, h;
//	std::cin >> x >> y >> w >> h;
//
//	std::cout <<
//		std::min(std::min(x, w - x), std::min(y, h - y));
//}

/* --- < 3009 > --- */

/*
< 문제 >
	세 점이 주어졌을 때,
	축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.

< 입력 >
	세 점의 좌표가 한 줄에 하나씩 주어진다.
	좌표는 1보다 크거나 같고, 1000보다 작거나 같은 정수이다.

< 출력 >
	직사각형의 네 번째 점의 좌표를 출력한다.

< ^ 연산자 >
	두 항의 같은 자리의 비트가 서로 다를 경우 1을 반환( 비트 XOR )
*/

//#include <iostream>
//
//int main()
//{
//	std::pair<int, int> point[3];
//
//	for (int i = 0; i < 3; i++) {
//		std::cin >> point[i].first >> point[i].second;
//	}
//
//	std::pair<int, int> result;
//
//	if (point[0].first == point[1].first) result.first = point[2].first;
//	else if (point[0].first == point[2].first) result.first = point[1].first;
//	else result.first = point[0].first;
//
//	if (point[0].second == point[1].second) result.second = point[2].second;
//	else if (point[0].second == point[2].second) result.second = point[1].second;
//	else result.second = point[0].second;
//
//	std::cout << result.first << ' ' << result.second << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int aX, bY, cX, dY, eX, fY;
//	std::cin >> aX >> cX >> eX >> bY >> dY >> fY;
//
//	printf("%d %d", aX ^ cX ^ eX, bY ^ dY ^ fY);
//}

// 0101 1001 1100
// 0011 0110 0011
// 0110 1111 1111
// 0011 1001 1100
// 0101 0110 0011

//#include <iostream>
//
//int main()
//{
//	int x = 0, y = 0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		int a, b;
//		std::cin >> a >> b;
//
//		x ^= a;
//		y ^= b;
//	}
//	std::cout << x << ' ' << y << '\n';
//}

/* --- < 4153 > --- */

/*
< 문제 >
	과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다.
	( w = 4, h = 3, v = 5 )
	주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.

< 입력 >
	입력은 여러개의 테스트케이스로 주어지며 마지막줄에는 0 0 0이 입력된다.
	각 테스트케이스는 모두 30,000보다 작은 양의 정수로 주어지며, 각 입력은 변의 길이를 의미한다.

< 출력 >
	각 입력에 대해 직각 삼각형이 맞다면 "right", 아니라면 "wrong"을 출력한다.

< 풀이 >
	직각 삼각형 = 작은 두 변들의 제곱은 가장 긴 변의 제곱과 같다.
	(3*3)+(4*4)=5*5
	9+16=25;
*/

//#include <iostream>
//
//int main()
//{
//	int x, y, z;
//
//	while (std::cin >> x >> y >> z)
//	{
//		if (x == 0 && y == 0 && z == 0) break;
//
//		if (x > y && x > z) {
//			(y * y + z * z == x * x) ?
//				std::cout << "right\n" : std::cout << "wrong\n";
//		}
//		else if (y > x && y > z) {
//			(x * x + z * z == y * y) ?
//				std::cout << "right\n" : std::cout << "worng\n";
//		}
//		else if (z > x && z > y) {
//			(x * x + y * y == z * z) ?
//				std::cout << "right\n" : std::cout << "wrong\n";
//		}
//	}
//}

/* --- < 2477 > --- */

/*
< 문제 >
	시골에 있는 태양이의 삼촌 댁에는 커다란 참외밭이 있다.
	문득 태양이는 이 밭에서 자라는 참외가 도대체 몇 개나 되는지 궁금해졌다.
	어떻게 알아낼 수 있는지 골똘히 생각하다가 드디어 좋은 아이디어가 떠올랐다.
	유레카! 1m2의 넓이에 자라는 참외 개수를 헤아린 다음,
	참외밭의 넓이를 구하면 비례식을 이용하여 참외의 총개수를 구할 수 있다.

	1m2의 넓이에 자라는 참외의 개수는 헤아렸고, 이제 참외밭의 넓이만 구하면 된다.
	참외밭은 ㄱ-자 모양이거나 ㄱ-자를 90도, 180도, 270도 회전한 모양(┏, ┗, ┛ 모양)의 육각형이다.
	다행히도 밭의 경계(육각형의 변)는 모두 동서 방향이거나 남북 방향이었다.
	밭의 한 모퉁이에서 출발하여 밭의 둘레를 돌면서 밭경계 길이를 모두 측정하였다.

	예를 들어 참외밭이 위 그림과 같은 모양이라고 하자.
	그림에서 오른쪽은 동쪽, 왼쪽은 서쪽, 아래쪽은 남쪽, 위쪽은 북쪽이다.
	이 그림의 왼쪽위 꼭짓점에서 출발하여, 반시계방향으로 남쪽으로 30m, 동쪽으로 60m,
	남쪽으로 20m, 동쪽으로 100m, 북쪽으로 50m,
	서쪽으로 160m 이동하면 다시 출발점으로 되돌아가게 된다.

	위 그림의 참외밭  면적은 6800m2이다.
	만약 1m2의 넓이에 자라는 참외의 개수가 7이라면,
	이 밭에서 자라는 참외의 개수는 47600으로 계산된다.

	1m2의 넓이에 자라는 참외의 개수와,
	참외밭을 이루는 육각형의 임의의 한 꼭짓점에서 출발하여 반시계방향으로
	둘레를 돌면서 지나는 변의 방향과 길이가 순서대로 주어진다.
	이 참외밭에서 자라는 참외의 수를 구하는 프로그램을 작성하시오.

< 입력 >
	첫 번째 줄에 1m2의 넓이에 자라는 참외의 개수를 나타내는 양의 정수 K (1 ≤ K ≤ 20)가 주어진다.
	참외밭을 나타내는 육각형의 임의의 한 꼭짓점에서 출발하여 반시계방향으로
	둘레를 돌면서 지나는 변의 방향과 길이 (1 이상 500 이하의 정수) 가
	둘째 줄부터 일곱 번째 줄까지 한 줄에 하나씩 순서대로 주어진다.
	변의 방향에서 동쪽은 1, 서쪽은 2, 남쪽은 3, 북쪽은 4로 나타낸다.

< 출력 >
	첫째 줄에 입력으로 주어진 밭에서 자라는 참외의 수를 출력한다.

< 풀이 >
	큰 사각형에서 작은 사각형을 빼면 되는 문제
	다만, 작은 사각형을 어떻게 구할 것이냐?

	조건에 따라 무조건 반시계 방향으로 정보가 주어지기 때문에 반드시
	첫 번째 잘리지 않은 변과 두 번째 잘리지 않은 변은 index가 1차이, 즉 붙어 있을 것이다.

	따라서 두 번째 잘리지 않은 변을 찾는 다면 그에 따라 index+2와 indxe+3인 변의 정보를 쓰면 된다.
*/

// (큰 사각형 넒이 - 작은 사각형 넓이) * 참외 갯수
// 큰 사각형 넓이 = 가장 긴 세로 변 * 가장 긴 가로 변
// 작은 사각형 넓이 = 가장 긴 변(가로/세로)은 서로 붙어있을 수 밖에 없다.( +1 %6을 했을 떄 )
//					=> 이때 두 개의 큰 변의 인덱스 값을 비교하여 더 작은 인덱스는 +3, 아니면 +2로 작은 사각형의 변을 구한다.
//					=> ((가장 긴 가로 변 + 1) % 6) == 가장 긴 세로 변 ? 가로/세로 인덱스 연속 : 가로/세로 인덱스 연속 X
//					=> ((index + 2) %6) * ((index + 3) %6)

//#include <iostream>
//
//int main()
//{
//	std::pair<int, int> block[6];
//
//	int count;
//	std::cin >> count;
//
//	int high{}, width{};
//	int temp1, temp2;
//
//	for (int i = 0; i < 6; i++)
//	{
//		std::cin >> block[i].first >> block[i].second;
//
//		if ((block[i].first == 1 || block[i].first == 2) && width < block[i].second) {
//			width = block[i].second;
//			temp1 = i;
//		}
//		if ((block[i].first == 3 || block[i].first == 4) && high < block[i].second) {
//			high = block[i].second;
//			temp2 = i;
//		}
//	}
//
//	int index;
//
//	if (block[(temp1 + 1) % 6].second == block[temp2].second) index = temp2;
//	else index = temp1;
//
//	int mh{ block[(index + 2) % 6].second };
//	int mw{ block[(index + 3) % 6].second };
//
//	int big{ high * width };
//	int smol{ mh * mw };
//
//	std::cout << (big - smol) * count << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	int count;
//	std::cin >> count;
//
//	int way[6], value[6];
//	for (int i = 0; i < 6; i++) std::cin >> way[i] >> value[i];
//
//	int temp, index;
//	int max{ -1 };
//	for (int i = 0; i < 6; i++)
//	{
//		temp = value[i] * value[(i + 1) % 6];
//		if (max < temp) {
//			max = temp;
//			index = i;
//		}
//	}
//	int min = value[(index + 3) % 6] * value[(index + 4) % 6];
//	std::cout << (max - min) * count << '\n';
//}

/* --- < 3053 > --- */

/*
< 문제 >
	19세기 독일 수학자 헤르만 민코프스키는 비유클리드 기하학 중 택시 기하학을 고안했다.
	택시 기하학에서 두 점 T1(x1,y1), T2(x2,y2) 사이의 거리는 다음과 같이 구할 수 있다.

	D(T1,T2) = |x1-x2| + |y1-y2|

	두 점 사이의 거리를 제외한 나머지 정의는 유클리드 기하학에서의 정의와 같다.
	따라서 택시 기하학에서 원의 정의는 유클리드 기하학에서 원의 정의와 같다.

	원: 평면 상의 어떤 점에서 거리가 일정한 점들의 집합
	반지름 R이 주어졌을 때, 유클리드 기하학에서 원의 넓이와,
	택시 기하학에서 원의 넓이를 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 반지름 R이 주어진다. R은 10,000보다 작거나 같은 자연수이다.

< 출력 >
	첫째 줄에는 유클리드 기하학에서 반지름이 R인 원의 넓이를,
	둘째 줄에는 택시 기하학에서 반지름이 R인 원의 넓이를 출력한다.
	정답과의 오차는 0.0001까지 허용한다.

< 풀이 >
	반지름 * 반지름 * 3.14
	반지름 * 반지름 * 2
*/

//#include <iostream>
//
//int main()
//{
//	int R;
//	std::cin >> R;
//
//	double U{ static_cast<double>(R) * R * 3.14159265359 };
//	double T{ static_cast<double>(R) * R * 2 };
//
//	std::cout.precision(6);
//	std::cout.setf(std::ios::fixed, std::ios::floatfield);
//	std::cout << U << '\n' << T << '\n';
//}

/* --- < 1002 > --- */

/*
< 문제 >
	조규현과 백승환은 터렛에 근무하는 직원이다.
	하지만 워낙 존재감이 없어서 인구수는 차지하지 않는다. 다음은 조규현과 백승환의 사진이다.

	이석원은 조규현과 백승환에게 상대편 마린(류재명)의 위치를 계산하라는 명령을 내렸다.
	조규현과 백승환은 각각 자신의 터렛 위치에서 현재 적까지의 거리를 계산했다.

	조규현의 좌표 (x1, y1)와 백승환의 좌표 (x2, y2)가 주어지고,
	조규현이 계산한 류재명과의 거리 r1과 백승환이 계산한 류재명과의 거리 r2가 주어졌을 때,
	류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	각 테스트 케이스는 다음과 같이 이루어져 있다.

	한 줄에 x1, y1, r1, x2, y2, r2가 주어진다. x1, y1, x2, y2는 -10,000보다 크거나 같고,
	10,000보다 작거나 같은 정수이고, r1, r2는 10,000보다 작거나 같은 자연수이다.

< 출력 >
	각 테스트 케이스마다 류재명이 있을 수 있는 위치의 수를 출력한다.
	만약 류재명이 있을 수 있는 위치의 개수가 무한대일 경우에는 -1을 출력한다.

< 풀이 >
	조규현의 좌표( x1, y1 )에서 류재명까지의 거리는 r1이다.
	그렇다면 조규현과 류재명이 있을 만한 위치는 마치 원처럼 보일 것이다.
	백승황의 좌표가 주어지고 류재명과의 거리인 r2가 주어진다.
	그러면 백승환과 조규현을 중심으로 류재명의 거리만큼 원을 그린 다음
	겹치는 부분이 류재명의 위치다.
	즉 두 원의 교점을 찾는 문제가 된다. 이 떄 교점의 개수는 총 3가지로 분류될 수 있다.
	1. 무수히 많은 교점, 2. 2개의 교점, 3. 1개의 교점
	1번은 조규현과 백승환의 좌표가 같고 거리가 같을 때 이다.
	2번은 r1의 길이와 r2의 길이가 조규현,백승환의 거리보다 길 때 이다.
		여기에 r2와 r1의 차이가 d보다 더 짧아야 한다.
	3번은 원이 내접했을 때 인데, r2 - r1의 값이 조규현,백승환의 거리와 같을 때이다.
	또 다른 3번은 r1 + r2가 조규현, 백승완의 거리와 같을 때 이다.

	두 점사이의 거리는 [루트((x2 - x1)^2 + (y2 - y1)^2)]이다.

	double pow( double x, double y );	는 x^y를 구한다.
	double sqrt( double x );			는 루트 x를 구한다.
	거리를 비교할 때, 실제 거리를 구하려면 제곱근을 씌워야 하지만
	여기서는 단순 크기 비교이므로 제곱을 한 값을 비교하는 것이 좋다.
	sqrt를 사용하면 헤더 파일이 추가되는 것 뿐만 아니라 double로 계산되기 때문에 항상 오차를
	야기할 수 있다.
*/

//#include <iostream>
//#include <math.h>
//
//int main()
//{
//	int T;
//	std::cin >> T;
//
//	std::pair<int, int> point[2];
//	double r1, r2;
//
//	for (int i = 0; i < T; i++)
//	{
//		std::cin >> point[0].first >> point[0].second >> r1 >> point[1].first >> point[1].second >> r2;
//
//		double D{ (sqrt(pow(point[0].first - point[1].first, 2)
//		+ pow(point[0].second - point[1].second, 2))) };
//		double RD{ std::abs(r1 - r2) };
//
//		if (D == 0 && r1 == r2) { std::cout << -1 << '\n'; }
//		else if (D < r1 + r2 && (RD < D)) { std::cout << 2 << '\n'; }
//		else if (D == r1 + r2 || D == RD) { std::cout << 1 << '\n'; }
//		else { std::cout << 0 << '\n'; }
//	}
//}

/* --- < 1004 > --- */

/*
< 문제 >
	어린 왕자는 소혹성 B-664에서 자신이 사랑하는 한 송이 장미를 위해 살아간다.
	어느 날 장미가 위험에 빠지게 된 것을 알게 된 어린 왕자는,
	장미를 구하기 위해 은하수를 따라 긴 여행을 하기 시작했다.
	하지만 어린 왕자의 우주선은 그렇게 좋지 않아서 행성계 간의 이동을 최대한 피해서 여행해야 한다.
	아래의 그림은 어린 왕자가 펼쳐본 은하수 지도의 일부이다.

	빨간 실선은 어린 왕자가 출발점에서 도착점까지 도달하는데 있어서
	필요한 행성계 진입/이탈 횟수를 최소화하는 경로이며,
	원은 행성계의 경계를 의미한다.
	이러한 경로는 여러 개 존재할 수 있지만 적어도 3번의 행성계
	진입/이탈이 필요하다는 것을 알 수 있다.

	위와 같은 은하수 지도, 출발점, 도착점이 주어졌을 때
	어린 왕자에게 필요한 최소의 행성계 진입/이탈 횟수를 구하는 프로그램을 작성해 보자.
	행성계의 경계가 맞닿거나 서로 교차하는 경우는 없다.
	또한, 출발점이나 도착점이 행성계 경계에 걸쳐진 경우 역시 입력으로 주어지지 않는다.

< 입력 >
	입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다.
	그 다음 줄부터 각각의 테스트케이스에 대해 첫째 줄에
	출발점 (x1, y1)과 도착점 (x2, y2)이 주어진다.
	두 번째 줄에는 행성계의 개수 n이 주어지며,
	세 번째 줄부터 n줄에 걸쳐 행성계의 중점과 반지름 (cx, cy, r)이 주어진다.

< 출력 >
	각 테스트 케이스에 대해 어린 왕자가 거쳐야 할 최소의 행성계 진입/이탈 횟수를 출력한다.

< 제한 >
	-1000 ≤ x1, y1, x2, y2, cx, cy ≤ 1000
	1 ≤ r ≤ 1000
	1 ≤ n ≤ 50
	좌표와 반지름은 모두 정수

< 풀이 >
	두 점이
	i) 둘 다 원 안에 있다면 0번
	ii) 둘 다 원 밖에 있다면 0번
	iii) 둘 중 하나만 원 안에 있다면 1번
	씩 더해주면 된다.
*/

//#include <iostream>
//
//int main()
//{
//	int T;
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		std::pair<int, int> start;
//		std::pair<int, int> end;
//		std::cin >> start.first >> start.second >> end.first >> end.second;
//
//		int N;
//		std::cin >> N;
//
//		int count{};
//		for (int j = 0; j < N; j++)
//		{
//			int x, y, r;
//			std::cin >> x >> y >> r;
//
//			double d1 =
//				(x - start.first) * (x - start.first)
//				+ (y - start.second) * (y - start.second);
//			double d2 =
//				(x - end.first) * (x - end.first)
//				+ (y - end.second) * (y - end.second);
//
//			bool s{ d1 > r * r ? false : true };
//			bool e{ d2 > r * r ? false : true };
//
//			if (s != e) { count++; }
//		}
//		std::cout << count << '\n';
//	}
//}

/* --- < 1358 > --- */

/*
< 문제 >
	지난주에, 민식주식회사는 IIHF(International Ice Hockey Federation)로부터 긴급한 전화를 받았다.

	IIHF는 같은 팀이 링크안에 너무 많으면 알람이 울리는 시스템을 설치해달라고 요청했다.
	시스템은 다음과 같이 3개의 부분으로 이루어진다.

	디지털카메라가 링크의 사진을 매 1초마다 찍는다.
	디지털카메라가 찍은 사진에서 각 선수의 위치를 뽑아낸다.
	하키 링크 안에 같은 팀 선수가 총 몇 명인지 계산한다.
	하키 링크는 (X, Y)가 가장 왼쪽 아래 모서리인 W * H 크기의 직사각형과,
	반지름이 H/2이면서 중심이 (X, Y+R), (X+W, Y+R)에 있는 두 개의 원으로 이루어져 있다.
	아래 그림을 참고한다.

	선수들의 위치가 주어질 때,
	링크 안 또는 경계에 있는 선수가 총 몇 명인지 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 수 W H X Y P가 주어진다.
	P는 선수의 수이다.
	W와 H는 100보다 작거나 같은 자연수이고,
	H는 짝수이다.
	X와 Y는 절댓값이 100보다 작거나 같은 정수이다.
	P는 최대 50인 자연수이다.
	둘째 줄부터 P개의 줄에 각 선수들의 x좌표와 y좌표가 주어진다.
	이 좌표는 절댓값이 300보다 작거나 같은 정수이다.

< 출력 >
	첫째 줄에 링크 안에 있는 선수의 수를 출력한다.
*/

//#include <iostream>
//#include <math.h>
//
//int main()
//{
//	double W, H, X, Y, P;
//	std::cin >> W >> H >> X >> Y >> P;
//
//	int count{};
//	double R = H / 2;
//	double xW{ X + W }, yH{ Y + H };
//	std::pair<double, double> LR{ X,Y + R }, RR{ xW,Y + R };
//
//	for (int i = 0; i < P; i++)
//	{
//		std::pair<double, double> temp;
//		std::cin >> temp.first >> temp.second;
//
//		if(temp.first >= X && xW >= temp.first
//			&& temp.second >= Y && yH >= temp.second) {
//			count++;
//		}
//		else
//		{
//			double C1 =
//				sqrt(pow(LR.first - temp.first, 2) + pow(LR.second - temp.second, 2));
//			double C2 =
//				sqrt(pow(RR.first - temp.first, 2) + pow(RR.second - temp.second, 2));
//
//			if (C1 <= R) { count++; }
//			else if (C2 <= R) { count++; }
//		}
//	}
//	std::cout << count << '\n';
//}