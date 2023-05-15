/* ----- < 복잡한 형식들 > ----- */
//
//
//
//
//
/* --- < 형식 변환( Type Conversion ) > --- */

/*
< 형식( Type ) > : 형식은 해당 객체의 사용 가능한 값과 적용할 수 있는 연산을 정의한다.
	#. 객체는 주어진 타입의 값을 저장하는 메모리 공간이다.
	#. 값은 주어진 타입으로 메모리 공간의 비트 집합을 해석한 것이다.
	#. 변수는 객체에 이름을 붙여 둔 것이다.
	#. < 선언( declaration ) > : 객체의 이름을 지정하는 구분이다.
	#. < 정의( definition ) > : 객체의 메모리 공간을 할당하는 일종의 선언이다.
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 컴퓨터의 메모리 공간은 항상 비트구조로 되어 있다. 어떤 타입의 값을 저장하더라도 컴퓨터에는|
| 비트화 되어 있기 때문에 타입이 없다면 그 값이 무엇인지 컴퓨터가 알 수 없다.				|
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/

//#include <iostream>
//
//int main()
//{
//	int myInt{ 1 };
//	// std::string myStr{ myInt }; 서로 다른 형식은 저장할 수 없다.
//
//	long long myLong{ myInt };
//	// 4byte인 myInt를 8byte인 myLong에 대입한다.
//	// 두 객체는 다른 type이지만 정상적으로 컴파일이 진행된다.
//	// 이를 형식 변환이라 한다.
//
//	char myChar{ myInt };
//	int value = 1.6;
//	// 4byte 형식은 1byte 형식에 저장할 경우 데이터 손실이 발생할 수 있다.
//	// 큰 저장 공간에 있는 값이 작은 저장 공간으로 넘어가면서 발생할 수 있는 문제이다.
//	// 실수를 정수에 저장할 경우 소수점 아래가 전부 잘려나간다.
//}

/* < 암시적 형변환( implicit conversion ) > */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 기본적으로 형식 변환의 원칙은 '정보 손실을 최소화'할 수 있는 방향으로 수행한다는 것이다.|
| 정보 손실은 저장 공간이 큰 값에서 작은 값으로 이동할 때 발생하는 것이 기본이지만 정수와 |
| 실수에서도 발생한다.																	  |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 암시적 형변환 > : 컴파일러가 자동으로 하나의 기본 자료형을 다른 자료형으로 변환한다.
	#. < 숫자 승격( numeric promotion ) > : 한 자료형의 값이 더 큰 유사한 자료형의 값으로 변환
		=> 형식 변환이 되어도 데이터가 그대로 보존된다.
	#. < 숫자 변환( numeric conversion ) > : 한 자료형의 값이 더 작은 유사한 자료형의 값으로 변환
		=> 형식 변환으로 인해 데이터가 손실될 수도 있다.
*/

//#include <iostream>
//
//int main()
//{
//	float myFloat = 3;
//	double myDouble = 3;
//	// 정수값을 실수 타입에 저장하여 암시적 형변환이 발생
//	double d(0.12f);
//	// float형식의 리터럴 0.12f값을 더 큰 유사한 자료형의 값으로 변환하여 저장
//}

/* < 명시적 형변환( explicit conversion ) > */

/*
< 명시적 형변환 > : 프로그래머가 직접 지정하는 형변환으로 Type Cast라고 부른다.
	#. 변환 하려는 형식 앞에'(형식)'을 붙여서 명시적으로 표현한다.
	#. 큰 형식에서 작은 형식으로 변환하면 저장공간의 크기 때문에 값이 잘려 나간다.
	#. 명시적으로 표기해도 불가능한 캐스팅이 있다.
*/

//#include <iostream>
//
//int main()
//{
//	int myInt = 1000;
//	unsigned char myChar = myInt;
//	// char 형식의 문자를 명시적 형변환을 통해 정수 형태로 출력하였다.
//	// int 형식으로 1000이라는 값은 2진수로 0011 1110 1000인데
//	// char 형식은 최대 255의 값을 담기 때문에 1byte에 해당하는 1110 1000만 출력할 수 있다.
//	int A = 10;
//	int B = 4;
//	float myFloat = A / B;
//	myFloat = (float)A / B;
//	//A를 명시적으로 형식 변환하여 float형식으로 진행되어 2.5f라는 값을 변수에 저장한다.
//	char c = 'a';
//	std::cout << static_cast<int>(c) << '\n';
//}

/* --- < 별칭( Alias ) > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| std::vector<std::string>과 같이 type을 입력하기 길어서 사용할 때 매우 귀찮은 상황이 있다.|
| 별칭이라는 기능을 사용하면 이러한 긴 입력을 짧게 줄일 수 있다.						   |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< typedef > : typedef 기존형식 별칭;
	=> typedef std::pair<int, std::string> Pair;
< using > : using 별칭 = 기존형식;
	=> using Music = std::vector<int, std::vector<int>>;
*/

/* --- < 열거형( Enumeration Type ) > --- */

/*
< 열거형 > : 집합타입으로 새로운 형식을 정의하여, 유한한 집합을 표현할 수 있다.
	#. 내부적으로 정수 형식이다.
	#. 명시적 형변환을 통해 정수로 변환이 가능하다.
	#. 반대로 정수형에서 명시적으로 열거형으로 변환이 가능하다.
	#. 열거형은 상수로 해석된다.
*/

//#include <iostream>
//
//enum AttackType { Phsycal, Magical, Fixed };
//enum Color { White = 0xFFFFFF, Magenta = 0xFF00FF, Pink = 0xFFC0CB };
//
//int main()
//{
//	AttackType shotSword{ Phsycal };
//	Color wall{ Pink };
//
//	switch (shotSword)
//	{
//	case Phsycal:
//		std::cout << "물리 데미지 3을 입혔다.\n";
//		break;
//	case Magical:
//		std::cout << "마법 데미지 100을 입혔다.\n";
//		break;
//	case Fixed:
//		std::cout << "고정 데미지 30을 입혔다.\n";
//		break;
//	default:
//		std::cout << "빗나감!!!\n";
//		break;
//	}
//
//	switch (wall)
//	{
//	case White:
//		std::cout << "흰색 칭을 한다.\n";
//		break;
//	case Magenta:
//		std::cout << "갈색 칠을 한다\n";
//		break;
//	case Pink:
//		std::cout << "분홍색 칠을 한다.\n";
//		break;
//	default:
//		std::cout << "회색 칠을 한다.\n";
//		break;
//	}
//
//	enum QuestFlag { None = 0, Q1 = 1, Q2 = 2, Q3 = 4, Q4 = 8, Q5 = 16 };
//
//	int QuestComplete{ None };
//
//	QuestComplete = Q1;
//	QuestComplete = QuestFlag(QuestComplete | Q3);
//	QuestComplete = QuestFlag(QuestComplete | Q4);
//	if (QuestComplete && Q1 && QuestComplete & Q3)
//	{
//		std::cout << "둘다 참이기 때문에...\n";
//	}
//}

/* --- < 구조체( Structure ) > --- */

/*
< 구조체 > : 다양한 type을 하나의 카테고리로 묶을 수 있다.
*/

//#include <iostream>
//
//struct Status
//{
//	int HP;
//	int MP;
//	int POWER;
//	int MAGIC;
//};
//int main()
//{
//	Status warrior{ 100,0,10,0 };
//	warrior.HP = 999;
//	warrior.MP = 5;
//	warrior.POWER = 32;
//	warrior.MAGIC = 1;
//
//	warrior = { 10000,10,99,3 };
//}

/* ----- < 배열 > ----- */
//
//
//
//
//
/* --- < 배열( Array ) > --- */

/*
< 배열 > : 동일한 형식의 값을 여러 개 저장할 수 있는 기능
	#. 형식 변수명[크기];
	#. 변수명[인덱스] = 값;
	#. 변수명 뒤에 대괄호[]를 붙여 주고 크기를 지정하면 배열로 선언이 가능하다.
		#. []기호를 첨자( subscript )라고 부른다.
	#. 값을 가져오거나 사용할 때는 변수명 뒤에 대괄호로 인덱스( 순서 )를 지정해 줘야 한다.
	#. 인덱스는 0을 기준으로 출발한다.

< 배열의 크기 지정 > : 배열 첨자는 다양한 형태로 지정이 가능하다.
	#. 다만, 배열을 선언할 때 크기는 상수만 가능하다.
*/

//#include <iostream>
//
//enum Order { Friend = 10 };
//struct Point2D
//{
//	double x;
//	double y;
//};
//
//int main()
//{
//	int arr[5];
//	arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4; arr[4] = 5;
//	for (int i = 0; i < 5; i++) std::cout << arr[i] << ' ';
//
//	int arr1[5]{};
//	int arr2[Friend]{};
//
//	int x{ 1 };
//	// int arr3[x]; error
//	int arr4[3 * 3]{};
//
//	Point2D pt[3]
//	{
//		{1.0, 1.0},
//		{2.0, 2.0},
//		{3.0, 3.0}
//	};
//	pt[0].x = 1.5;
//	pt[1].y = 5.1;
//
//	std::cout << pt[0].x << ", " << pt[0].y << '\n';
//	std::cout << pt[1].x << ", " << pt[1].y << '\n';
//
//	int myArray[15]{
//		0,0,1,0,0,
//		0,1,1,1,0,
//		1,1,1,1,1
//	};
//
//	for (int i = 0; i < 15; i++)
//	{
//		std::cout << myArray[i] << ' ';
//		if ((i + 1) % 5 == 0) { std::cout << '\n'; }
//	}
//}

/* --- < 2차원 배열( 2-Dimensional Array ) > --- */

/*
< 2차원 배열 > : 배열의 배열이라는 개념으로 배열 뒤에 다시 배열을 붙여서 [][]표기한다.
	#. 크기를 지정할 때는 [행][열]과 같이 지정한다.
		=> 가로( ㅡ )로 줄을 그으며 아래로 세는 것을 행
		=> 세로( ㅣ )로 줄을 그으며 옆으로 세는 것을 열
*/

//#include <iostream>
//
//int main()
//{
//	int arr[3][5]
//	{
//		{0,0,1,0,0},
//		{0,1,1,1,0},
//		{1,1,1,1,1}
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			std::cout << arr[i][j] << ' ';
//		}
//		std::cout << '\n';
//	}
//}

//#include <iostream>
//#include <array>
//#include <vector>
//
//int main()
//{
//	std::array<std::array<int, 5>, 3> arr
//	{
//		0,0,1,0,0,
//		0,1,1,1,0,
//		1,1,1,1,1
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			std::cout << arr[i][j] << ' ';
//		}	std::cout << '\n';
//	}
//
//	std::vector<std::vector<int>> vec(3, std::vector<int>(5));
//
//	vec[0] = { 0,0,1,0,0 };
//	vec[1] = { 0,1,1,1,0 };
//	vec[2] = { 1,1,1,1,1 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			std::cout << vec[i][j] << ' ';
//		}	std::cout << '\n';
//	}
//}