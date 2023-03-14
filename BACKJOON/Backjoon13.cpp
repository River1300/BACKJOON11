/* ----- < 13�ܰ� ���� 1 > ----- */
//
//
//
//
//
/* --- < 1085 > --- */

/*
< ���� >
	�Ѽ��� ���� (x, y)�� �ִ�.
	���簢���� �� ���� ��ǥ�࿡ �����ϰ�,
	���� �Ʒ� �������� (0, 0), ������ �� �������� (w, h)�� �ִ�.
	���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� x, y, w, h�� �־�����.

< ��� >
	ù° �ٿ� ������ ������ ����Ѵ�.

< ���� >
	1 �� w, h �� 1,000
	1 �� x �� w-1
	1 �� y �� h-1
	x, y, w, h�� ����
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
< ���� >
	�� ���� �־����� ��,
	�࿡ ������ ���簢���� ����� ���ؼ� �ʿ��� �� ��° ���� ã�� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	�� ���� ��ǥ�� �� �ٿ� �ϳ��� �־�����.
	��ǥ�� 1���� ũ�ų� ����, 1000���� �۰ų� ���� �����̴�.

< ��� >
	���簢���� �� ��° ���� ��ǥ�� ����Ѵ�.

< ^ ������ >
	�� ���� ���� �ڸ��� ��Ʈ�� ���� �ٸ� ��� 1�� ��ȯ( ��Ʈ XOR )
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
< ���� >
	���� ����Ʈ�ε��� �� ������ ���̰� 3, 4, 5�� �ﰢ���� ���� �ﰢ���ΰ��� �˾Ƴ´�.
	( w = 4, h = 3, v = 5 )
	�־��� ������ ���̷� �ﰢ���� �������� �ƴ��� �����Ͻÿ�.

< �Է� >
	�Է��� �������� �׽�Ʈ���̽��� �־����� �������ٿ��� 0 0 0�� �Էµȴ�.
	�� �׽�Ʈ���̽��� ��� 30,000���� ���� ���� ������ �־�����, �� �Է��� ���� ���̸� �ǹ��Ѵ�.

< ��� >
	�� �Է¿� ���� ���� �ﰢ���� �´ٸ� "right", �ƴ϶�� "wrong"�� ����Ѵ�.

< Ǯ�� >
	���� �ﰢ�� = ���� �� ������ ������ ���� �� ���� ������ ����.
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
< ���� >
	�ð� �ִ� �¾����� ���� �쿡�� Ŀ�ٶ� ���ܹ��� �ִ�.
	���� �¾��̴� �� �翡�� �ڶ�� ���ܰ� ����ü �� ���� �Ǵ��� �ñ�������.
	��� �˾Ƴ� �� �ִ��� ����� �����ϴٰ� ���� ���� ���̵� ���ö���.
	����ī! 1m2�� ���̿� �ڶ�� ���� ������ ��Ƹ� ����,
	���ܹ��� ���̸� ���ϸ� ��ʽ��� �̿��Ͽ� ������ �Ѱ����� ���� �� �ִ�.

	1m2�� ���̿� �ڶ�� ������ ������ ��ƷȰ�, ���� ���ܹ��� ���̸� ���ϸ� �ȴ�.
	���ܹ��� ��-�� ����̰ų� ��-�ڸ� 90��, 180��, 270�� ȸ���� ���(��, ��, �� ���)�� �������̴�.
	�������� ���� ���(�������� ��)�� ��� ���� �����̰ų� ���� �����̾���.
	���� �� �����̿��� ����Ͽ� ���� �ѷ��� ���鼭 ���� ���̸� ��� �����Ͽ���.

	���� ��� ���ܹ��� �� �׸��� ���� ����̶�� ����.
	�׸����� �������� ����, ������ ����, �Ʒ����� ����, ������ �����̴�.
	�� �׸��� ������ ���������� ����Ͽ�, �ݽð�������� �������� 30m, �������� 60m,
	�������� 20m, �������� 100m, �������� 50m,
	�������� 160m �̵��ϸ� �ٽ� ��������� �ǵ��ư��� �ȴ�.

	�� �׸��� ���ܹ�  ������ 6800m2�̴�.
	���� 1m2�� ���̿� �ڶ�� ������ ������ 7�̶��,
	�� �翡�� �ڶ�� ������ ������ 47600���� ���ȴ�.

	1m2�� ���̿� �ڶ�� ������ ������,
	���ܹ��� �̷�� �������� ������ �� ���������� ����Ͽ� �ݽð��������
	�ѷ��� ���鼭 ������ ���� ����� ���̰� ������� �־�����.
	�� ���ܹ翡�� �ڶ�� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù ��° �ٿ� 1m2�� ���̿� �ڶ�� ������ ������ ��Ÿ���� ���� ���� K (1 �� K �� 20)�� �־�����.
	���ܹ��� ��Ÿ���� �������� ������ �� ���������� ����Ͽ� �ݽð��������
	�ѷ��� ���鼭 ������ ���� ����� ���� (1 �̻� 500 ������ ����) ��
	��° �ٺ��� �ϰ� ��° �ٱ��� �� �ٿ� �ϳ��� ������� �־�����.
	���� ���⿡�� ������ 1, ������ 2, ������ 3, ������ 4�� ��Ÿ����.

< ��� >
	ù° �ٿ� �Է����� �־��� �翡�� �ڶ�� ������ ���� ����Ѵ�.

< Ǯ�� >
	ū �簢������ ���� �簢���� ���� �Ǵ� ����
	�ٸ�, ���� �簢���� ��� ���� ���̳�?

	���ǿ� ���� ������ �ݽð� �������� ������ �־����� ������ �ݵ��
	ù ��° �߸��� ���� ���� �� ��° �߸��� ���� ���� index�� 1����, �� �پ� ���� ���̴�.

	���� �� ��° �߸��� ���� ���� ã�� �ٸ� �׿� ���� index+2�� indxe+3�� ���� ������ ���� �ȴ�.
*/

// (ū �簢�� ���� - ���� �簢�� ����) * ���� ����
// ū �簢�� ���� = ���� �� ���� �� * ���� �� ���� ��
// ���� �簢�� ���� = ���� �� ��(����/����)�� ���� �پ����� �� �ۿ� ����.( +1 %6�� ���� �� )
//					=> �̶� �� ���� ū ���� �ε��� ���� ���Ͽ� �� ���� �ε����� +3, �ƴϸ� +2�� ���� �簢���� ���� ���Ѵ�.
//					=> ((���� �� ���� �� + 1) % 6) == ���� �� ���� �� ? ����/���� �ε��� ���� : ����/���� �ε��� ���� X
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
< ���� >
	19���� ���� ������ �츣�� ��������Ű�� ����Ŭ���� ������ �� �ý� �������� �����ߴ�.
	�ý� �����п��� �� �� T1(x1,y1), T2(x2,y2) ������ �Ÿ��� ������ ���� ���� �� �ִ�.

	D(T1,T2) = |x1-x2| + |y1-y2|

	�� �� ������ �Ÿ��� ������ ������ ���Ǵ� ��Ŭ���� �����п����� ���ǿ� ����.
	���� �ý� �����п��� ���� ���Ǵ� ��Ŭ���� �����п��� ���� ���ǿ� ����.

	��: ��� ���� � ������ �Ÿ��� ������ ������ ����
	������ R�� �־����� ��, ��Ŭ���� �����п��� ���� ���̿�,
	�ý� �����п��� ���� ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� ������ R�� �־�����. R�� 10,000���� �۰ų� ���� �ڿ����̴�.

< ��� >
	ù° �ٿ��� ��Ŭ���� �����п��� �������� R�� ���� ���̸�,
	��° �ٿ��� �ý� �����п��� �������� R�� ���� ���̸� ����Ѵ�.
	������� ������ 0.0001���� ����Ѵ�.

< Ǯ�� >
	������ * ������ * 3.14
	������ * ������ * 2
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
< ���� >
	�������� ���ȯ�� �ͷ��� �ٹ��ϴ� �����̴�.
	������ ���� ���簨�� ��� �α����� �������� �ʴ´�. ������ �������� ���ȯ�� �����̴�.

	�̼����� �������� ���ȯ���� ����� ����(�����)�� ��ġ�� ����϶�� ������ ���ȴ�.
	�������� ���ȯ�� ���� �ڽ��� �ͷ� ��ġ���� ���� �������� �Ÿ��� ����ߴ�.

	�������� ��ǥ (x1, y1)�� ���ȯ�� ��ǥ (x2, y2)�� �־�����,
	�������� ����� ��������� �Ÿ� r1�� ���ȯ�� ����� ��������� �Ÿ� r2�� �־����� ��,
	������� ���� �� �ִ� ��ǥ�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
	�� �׽�Ʈ ���̽��� ������ ���� �̷���� �ִ�.

	�� �ٿ� x1, y1, r1, x2, y2, r2�� �־�����. x1, y1, x2, y2�� -10,000���� ũ�ų� ����,
	10,000���� �۰ų� ���� �����̰�, r1, r2�� 10,000���� �۰ų� ���� �ڿ����̴�.

< ��� >
	�� �׽�Ʈ ���̽����� ������� ���� �� �ִ� ��ġ�� ���� ����Ѵ�.
	���� ������� ���� �� �ִ� ��ġ�� ������ ���Ѵ��� ��쿡�� -1�� ����Ѵ�.

< Ǯ�� >
	�������� ��ǥ( x1, y1 )���� ����������� �Ÿ��� r1�̴�.
	�׷��ٸ� �������� ������� ���� ���� ��ġ�� ��ġ ��ó�� ���� ���̴�.
	���Ȳ�� ��ǥ�� �־����� ��������� �Ÿ��� r2�� �־�����.
	�׷��� ���ȯ�� �������� �߽����� ������� �Ÿ���ŭ ���� �׸� ����
	��ġ�� �κ��� ������� ��ġ��.
	�� �� ���� ������ ã�� ������ �ȴ�. �� �� ������ ������ �� 3������ �з��� �� �ִ�.
	1. ������ ���� ����, 2. 2���� ����, 3. 1���� ����
	1���� �������� ���ȯ�� ��ǥ�� ���� �Ÿ��� ���� �� �̴�.
	2���� r1�� ���̿� r2�� ���̰� ������,���ȯ�� �Ÿ����� �� �� �̴�.
		���⿡ r2�� r1�� ���̰� d���� �� ª�ƾ� �Ѵ�.
	3���� ���� �������� �� �ε�, r2 - r1�� ���� ������,���ȯ�� �Ÿ��� ���� ���̴�.
	�� �ٸ� 3���� r1 + r2�� ������, ��¿��� �Ÿ��� ���� �� �̴�.

	�� �������� �Ÿ��� [��Ʈ((x2 - x1)^2 + (y2 - y1)^2)]�̴�.

	double pow( double x, double y );	�� x^y�� ���Ѵ�.
	double sqrt( double x );			�� ��Ʈ x�� ���Ѵ�.
	�Ÿ��� ���� ��, ���� �Ÿ��� ���Ϸ��� �������� ������ ������
	���⼭�� �ܼ� ũ�� ���̹Ƿ� ������ �� ���� ���ϴ� ���� ����.
	sqrt�� ����ϸ� ��� ������ �߰��Ǵ� �� �Ӹ� �ƴ϶� double�� ���Ǳ� ������ �׻� ������
	�߱��� �� �ִ�.
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
< ���� >
	� ���ڴ� ��Ȥ�� B-664���� �ڽ��� ����ϴ� �� ���� ��̸� ���� ��ư���.
	��� �� ��̰� ���迡 ������ �� ���� �˰� �� � ���ڴ�,
	��̸� ���ϱ� ���� ���ϼ��� ���� �� ������ �ϱ� �����ߴ�.
	������ � ������ ���ּ��� �׷��� ���� �ʾƼ� �༺�� ���� �̵��� �ִ��� ���ؼ� �����ؾ� �Ѵ�.
	�Ʒ��� �׸��� � ���ڰ� ���ĺ� ���ϼ� ������ �Ϻ��̴�.

	���� �Ǽ��� � ���ڰ� ��������� ���������� �����ϴµ� �־
	�ʿ��� �༺�� ����/��Ż Ƚ���� �ּ�ȭ�ϴ� ����̸�,
	���� �༺���� ��踦 �ǹ��Ѵ�.
	�̷��� ��δ� ���� �� ������ �� ������ ��� 3���� �༺��
	����/��Ż�� �ʿ��ϴٴ� ���� �� �� �ִ�.

	���� ���� ���ϼ� ����, �����, �������� �־����� ��
	� ���ڿ��� �ʿ��� �ּ��� �༺�� ����/��Ż Ƚ���� ���ϴ� ���α׷��� �ۼ��� ����.
	�༺���� ��谡 �´�ų� ���� �����ϴ� ���� ����.
	����, ������̳� �������� �༺�� ��迡 ������ ��� ���� �Է����� �־����� �ʴ´�.

< �Է� >
	�Է��� ù �ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����.
	�� ���� �ٺ��� ������ �׽�Ʈ���̽��� ���� ù° �ٿ�
	����� (x1, y1)�� ������ (x2, y2)�� �־�����.
	�� ��° �ٿ��� �༺���� ���� n�� �־�����,
	�� ��° �ٺ��� n�ٿ� ���� �༺���� ������ ������ (cx, cy, r)�� �־�����.

< ��� >
	�� �׽�Ʈ ���̽��� ���� � ���ڰ� ���ľ� �� �ּ��� �༺�� ����/��Ż Ƚ���� ����Ѵ�.

< ���� >
	-1000 �� x1, y1, x2, y2, cx, cy �� 1000
	1 �� r �� 1000
	1 �� n �� 50
	��ǥ�� �������� ��� ����

< Ǯ�� >
	�� ����
	i) �� �� �� �ȿ� �ִٸ� 0��
	ii) �� �� �� �ۿ� �ִٸ� 0��
	iii) �� �� �ϳ��� �� �ȿ� �ִٸ� 1��
	�� �����ָ� �ȴ�.
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
< ���� >
	�����ֿ�, �ν��ֽ�ȸ��� IIHF(International Ice Hockey Federation)�κ��� ����� ��ȭ�� �޾Ҵ�.

	IIHF�� ���� ���� ��ũ�ȿ� �ʹ� ������ �˶��� �︮�� �ý����� ��ġ�ش޶�� ��û�ߴ�.
	�ý����� ������ ���� 3���� �κ����� �̷������.

	������ī�޶� ��ũ�� ������ �� 1�ʸ��� ��´�.
	������ī�޶� ���� �������� �� ������ ��ġ�� �̾Ƴ���.
	��Ű ��ũ �ȿ� ���� �� ������ �� �� ������ ����Ѵ�.
	��Ű ��ũ�� (X, Y)�� ���� ���� �Ʒ� �𼭸��� W * H ũ���� ���簢����,
	�������� H/2�̸鼭 �߽��� (X, Y+R), (X+W, Y+R)�� �ִ� �� ���� ������ �̷���� �ִ�.
	�Ʒ� �׸��� �����Ѵ�.

	�������� ��ġ�� �־��� ��,
	��ũ �� �Ǵ� ��迡 �ִ� ������ �� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

< �Է� >
	ù° �ٿ� �� W H X Y P�� �־�����.
	P�� ������ ���̴�.
	W�� H�� 100���� �۰ų� ���� �ڿ����̰�,
	H�� ¦���̴�.
	X�� Y�� ������ 100���� �۰ų� ���� �����̴�.
	P�� �ִ� 50�� �ڿ����̴�.
	��° �ٺ��� P���� �ٿ� �� �������� x��ǥ�� y��ǥ�� �־�����.
	�� ��ǥ�� ������ 300���� �۰ų� ���� �����̴�.

< ��� >
	ù° �ٿ� ��ũ �ȿ� �ִ� ������ ���� ����Ѵ�.
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