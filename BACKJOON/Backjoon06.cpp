/* ----- < 6단계 문자열 > ----- */
//
//
//
//
//
/* --- < 10809 > --- */

/*
< 문제 >
	알파벳 소문자로만 이루어진 단어 S가 주어진다.
	각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를,
	포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 단어 S가 주어진다.
	단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.

< 출력 >
	각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치,
	... z가 처음 등장하는 위치를 공백으로 구분해서 출력한다.
	만약, 어떤 알파벳이 단어에 포함되어 있지 않다면 -1을 출력한다.
	단어의 첫 번째 글자는 0번째 위치이고, 두 번째 글자는 1번째 위치이다.
*/

//#include <iostream>
//
//int main()
//{
//	std::string name;
//	std::cin >> name;
//
//	int num[26];
//	std::fill_n(num, 26, -1);
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		int key = name[i] - 'a';
//		if (num[key] == -1) num[key] = i;
//	}
//
//	for (int i = 0; i < 26; i++) std::cout << num[i] << ' ';
//}

//#include <iostream>
//
//int main()
//{
//// 1. 문제를 정리하자면 소문자로 구성된 영단어를 입력받으면 그 단어에 포함된 스펠링이 몇 번째로 입력됬는지 물어본다.
////		=> 그러니까 bad은 a = 1, b = 0, c = -1, d = 2 이런식이다.
//// 2. 그러니깐 a ~ z까지 해당 스펠링이 몇번째로 적혔는지 출력하면 된다.
//// 3. 먼저 문자를 입력받은 문자열 공간이 필요하다.
//// 4. 그리고 a ~ z까지 번호로 부여된 정수 배열 공간이 필요하다.
//// 5. 정수 배열 공간은 우선 -1로 모두 채워둔다.
//// 6. 문자열을 순회하면서 아스키 코드로 문자를 정수화 한다.
//// 7. 정수화된 문자를 정수 배열 공간으로 대입하여 몇번째 입력됬는지 배정한다.
//	std::string name;
//	std::cin >> name;
//
//	int num[26];
//	std::fill_n(num, 26, -1);
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		int key = name[i] - 'a';
//		if (num[key] == -1) num[key] = i;
//	}
//
//	for (int i = 0; i < 26; i++) std::cout << num[i] << ' ';
//}

/* --- < 1157 > --- */

/*
< 문제 >
	알파벳 대소문자로 된 단어가 주어지면,
	이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오.
	단, 대문자와 소문자를 구분하지 않는다.

< 입력 >
	첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다.
	주어지는 단어의 길이는 1,000,000을 넘지 않는다.

< 출력 >
	첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다.
	단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	std::string name;
//	std::cin >> name;
//
//	int count[26]{};
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		int key;
//
//		if ('a' <= name[i] && name[i] <= 'z') {
//			key = name[i] - 'a';
//			count[key]++;
//		}
//		else if ('A' <= name[i] && name[i] <= 'Z') {
//			key = name[i] - 'A';
//			count[key]++;
//		}
//	}
//
//	int max{};
//	int equal{};
//	int index;
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (max < count[i]) {
//			max = count[i];
//			index = i;
//		}
//		else if (max == count[i]) {
//			equal = max;
//		}
//	}
//
//	if (max == equal) std::cout << '?';
//	else std::cout << static_cast<char>(index + 'A');
//}

//#include <iostream>
//
//int main()
//{
//// 1. 이번에는 대문자 소문자 모두 입력 받는다. 그리고 가장 많이 사용된 스펠링을 찾는다.
////		=> 대소문자를 감별하여 아스키 코드로 정수화 시킨다.
//// 2. 정수화 시킨 수를 인덱스로 활용하여 배열의 값을 증가시킨다.
//// 3. 배열을 순회하며 가장 큰 값을 찾는다.
//	std::string name;
//	std::cin >> name;
//
//	int count[26]{};
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		if ('a' <= name[i] && name[i] <= 'z') {
//			int key = name[i] - 'a';
//			count[key]++;
//		}else if ('A' <= name[i] && name[i] <= 'Z') {
//			int key = name[i] - 'A';
//			count[key]++;
//		}
//	}
//
//	int max{};
//	int equal{};
//	int index;
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (max < count[i]) {
//			max = count[i];
//			index = i;
//		}
//		else if (max == count[i]) {
//			equal = max;
//		}
//	}
//
//	if (max == equal) std::cout << '?';
//	else std::cout << static_cast<char>(index + 'A');
//}	

/* --- < 1152 > --- */

/*
< 문제 >
	영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
	이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오.
	단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

< 입력 >
	첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
	이 문자열의 길이는 1,000,000을 넘지 않는다.
	단어는 공백 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다.
	또한 문자열은 공백으로 시작하거나 끝날 수 있다.

< 출력 >
	첫째 줄에 단어의 개수를 출력한다.
*/

//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string name;
//	std::getline(std::cin, name);
//
//	int count{};
//
//	for (int i = 0; i < name.size() + 1; i++)
//	{
//		if (i == 0) {}
//		else if (name[i - 1] >= 'A' && name[i - 1] <= 'z' && name[i] == ' ') { count++; }
//		else if (name[i - 1] >= 'A' && name[i - 1] <= 'z' && name[i] == '\0') { count++; }
//	}
//
//	std::cout << count << '\n';
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string name;
//	std::getline(std::cin, name);
//
//	int count{};
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		if (32 < name[i] && name[i + 1] <= 32) { count++; }
//	}
//
//	std::cout << count << '\n';
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//// 1. 문장을 입력 받고 그 문장에 포함된 단어의 갯수를 출력하는 문제이다.
//// 2. 아스키 코드를 통해 문장의 공백과 널(문장의 끝)을 찾아내면된다.
//// 3. 널 = 0 , 공백 = 32 이다.
//// 4. 문장을 순회하면서 널이나 공백을 만날 때마다 단어의 갯수를 증가시킨다.
//	std::string name;
//	std::getline(std::cin, name);
//
//	int count{};
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		if (32 < name[i] && name[i + 1] <= 32) { count++; }
//	}
//	std::cout << count << '\n';
//}

/* --- < 2908 > --- */

/*
< 문제 >
	상근이의 동생 상수는 수학을 정말 못한다. 상수는 숫자를 읽는데 문제가 있다.
	이렇게 수학을 못하는 상수를 위해서 상근이는 수의 크기를 비교하는 문제를 내주었다.
	상근이는 세 자리 수 두 개를 칠판에 써주었다. 그 다음에 크기가 큰 수를 말해보라고 했다.
	상수는 수를 다른 사람과 다르게 거꾸로 읽는다.

	예를 들어, 734와 893을 칠판에 적었다면, 상수는 이 수를 437과 398로 읽는다.
	따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.

	두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 상근이가 칠판에 적은 두 수 A와 B가 주어진다.
	두 수는 같지 않은 세 자리 수이며, 0이 포함되어 있지 않다.

< 출력 >
	첫째 줄에 상수의 대답을 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	std::string num1, num2;
//	std::cin >> num1 >> num2;
//
//	int a, b;
//
//	a = (num1[0] - '0') + (num1[1] - '0') * 10 + (num1[2] - '0') * 100;
//	b = (num1[0] - '0') + (num1[1] - '0') * 10 + (num1[2] - '0') * 100;
//
//	if (a > b) { std::cout << a << '\n'; }
//	else { std::cout << b << '\n'; }
//}

/* --- < 5622 > --- */

/*
< 문제 >
	상근이의 할머니는 아래 그림과 같이 오래된 다이얼 전화기를 사용한다.
	전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다.
	숫자를 하나 누르면 다이얼이 처음 위치로 돌아가고, 다음 숫자를 누르려면 다이얼을 처음 위치에서 다시 돌려야 한다.

	숫자 1을 걸려면 총 2초가 필요하다.
	1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.

	상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다.
	즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다.
	예를 들어, UNUCIC는 868242와 같다.

	할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 최소 시간을 구하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어의 길이는 2보다 크거나 같고, 15보다 작거나 같다.

< 출력 >
	첫째 줄에 다이얼을 걸기 위해서 필요한 최소 시간을 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	std::string fx;
//	std::cin >> fx;
//
//	int count{};
//
//	for (int i = 0; i < fx.size(); i++)
//	{
//		for (char C : "ADGJMPTW") count += (fx[i] >= C);
//		count++;
//	}
//
//	std::cout << '\n';
//}

//#include <iostream>
//
//int main()
//{
//// 1. 전화 다이얼 버튼마다 영문자가 적혀 있고 어의없게도 숫자보다 영문자가 더 잘보여서 영문자로만 전화를 건다.
////		=> 다행이도 문자들간의 크기 비교가 가능하다.
//// 2. 각 다이얼의 시작 문자를 모아놓고 순회하며 입력받은 문자와 비교한다.
////		=> 입력된 문자가 다이얼 시작 문자보다 클때까지 1초씩 증가한다.
//	std::string fx;
//	std::cin >> fx;
//
//	int count{};
//
//	for (int i = 0; i < fx.size(); i++)
//	{
//		for (char C : "ADGJMPTW") count += (fx[i] >= C);
//		count++;
//	}
//
//	std::cout << count << '\n';
//}

/* --- < 1316 > --- */

/*
< 문제 >
	그룹 단어란 단어에 존재하는 모든 문자에 대해서,
	각 문자가 연속해서 나타나는 경우만을 말한다.

	예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고,
	kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만,
	aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

	단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

< 입력 >
	첫째 줄에 단어의 개수 N이 들어온다.
	N은 100보다 작거나 같은 자연수이다.
	둘째 줄부터 N개의 줄에 단어가 들어온다.
	단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

< 출력 >
	첫째 줄에 그룹 단어의 개수를 출력한다.
*/

//#include <iostream>
//
//int main()
//{
//	int N;
//	std::cin >> N;
//
//	int count{ N };
//
//	for (int i = 0; i < N; i++)
//	{
//		std::string name;
//		std::cin >> name;
//
//		int temp = count;
//
//		for (int j = 0; j < name.size(); j++)
//		{
//			if (name[j] != name[j + 1] && name[j + 1] != '\0')
//			{
//				for (int k = j + 2; k < name.size(); k++)
//				{
//					if (name[j] == name[k])
//					{
//						count--;
//						break;
//					}
//				}
//			}
//
//			if (count != temp) break;
//		}
//	}
//
//	std::cout << count << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	std::string name;
//	std::cin >> name;
//
//	int num[26];
//	std::fill_n(num, 26, -1);
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		int key = name[i] - 'a';
//		if (num[key] == -1) num[key] = i;
//	}
//	for (int i = 0; i < 26; i++) std::cout << num[i] << ' ';
//}

//#include <iostream>
//
//int main()
//{
//	std::string name;
//	std::cin >> name;
//
//	int num[26];
//	std::fill_n(num, 26, -1);
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		int key = name[i] - 'a';
//		if (num[key] == -1) num[key] = i;
//	}
//	for (int i = 0; i < 26; i++) std::cout << num[i] << ' ';
//}

//#include <iostream>
//
//int main()
//{
//	std::string name;
//	std::cin >> name;
//
//	int count[26]{};
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		int key;
//
//		if ('a' <= name[i] && name[i] <= 'z')
//		{
//			key = name[i] - 'a';
//			count[key]++;
//		}
//		else if ('A' <= name[i] && name[i] <= 'Z')
//		{
//			key = name[i] - 'A';
//			count[key]++;
//		}
//	}
//
//	int max{};
//	int equal{};
//	int index;
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (max < count[i])
//		{
//			max = count[i];
//			index = i;
//		}
//		else if (max == count[i])
//		{
//			equal = max;
//		}
//	}
//
//	if (max == equal) std::cout << '?';
//	else std::cout << static_cast<char>(index + 'A');
//}

//#include <iostream>
//
//int main()
//{
//	std::string name;
//	std::cin >> name;
//
//	int count[26]{};
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		int key;
//
//		if ('a' <= name[i] && name[i] <= 'z')
//		{
//			key = name[i] - 'a';
//			count[key]++;
//		}
//		else if ('A' <= name[i] && name[i] <= 'Z')
//		{
//			key = name[i] - 'A';
//			count[key]++;
//		}
//	}
//
//	int max{};
//	int equal{};
//	int index;
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (max < count[i]) {
//			max = count[i];
//			index = i;
//		}
//		else if (max == count[i]) {
//			equal = max;
//		}
//	}
//
//	if (max == equal) std::cout << '?';
//	else std::cout << static_cast<char>(index + 'A');
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string name;
//	std::getline(std::cin, name);
//
//	int count{};
//
//	for (int i = 0; i < name.size() + 1; i++)
//	{
//		if (i == 0) {}
//		else if (name[i - 1] >= 'A' && name[i - 1] <= 'z' && name[i] == ' ') count++;
//		else if (name[i - 1] >= 'A' && name[i - 1] <= 'z' && name[i] == '\0') count++;
//	}
//	std::cout << count << '\n';
//}

//#include <iostream>
//#include <string>
//
//int main()
//{
//	std::string name;
//	std::getline(std::cin, name);
//
//	int count{};
//
//	for (int i = 0; i < name.size(); i++)
//	{
//		if (32 < name[i] && name[i + 1] <= 32) count++;
//	}
//	std::cout << count << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	std::string num1, num2;
//	std::cin >> num1 >> num2;
//
//	int a, b;
//	a = (num1[0] - '0') + (num1[1] - '0') * 10 + (num1[2] - '0') * 100;
//	b = (num2[0] - '0') + (num2[1] - '0') * 10 + (num2[2] - '0') * 100;
//
//	if (a > b) std::cout << a << '\n';
//	else std::cout << b << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	std::string num1, num2;
//	std::cin >> num1 >> num2;
//
//	int a, b;
//	a = (num1[0] - '0') + (num1[1] - '0') * 10 + (num1[2] - '0') * 100;
//}

//#include <iostream>
//
//int main()
//{
//	std::string fx;
//	std::cin >> fx;
//
//	int count{};
//	for (int i = 0; i < fx.size(); i++)
//	{
//		for (char C : "ADGJMPTW") count += (fx[i] >= C);
//		count++;
//	}
//}