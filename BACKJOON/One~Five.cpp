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

/* --- < 좌측값( L_Value )과 우측값( R_Value ) > --- */

/*
< L_Value > : 저장할 수 있는 실명의 객체
	#. 한줄의 코드를 넘어서도 lvalue는 지워지지 않는다.
	#. 주로 변수를 지칭한다.
	#. rvalue는 lvalue로 변환될 수 없다.

< R_Value > : 저장할 수 없는 무명의 객체
	#. 현재 식 이외에는 유지되지 않는 임시 값이다.
	#. 리터럴, 상수, 연산식등을 지칭한다.
	#. lvalue가 rvalue로 변환될 수 있다.

< 배열의 이름은 L_Value가 아니다 > : 배열 이름은 메모리의 위치만 지정할 뿐이다.
	#. 배열 첨자를 이용하여 특별한 공간을 지정하고 있을 때 lvalue가 된다.
*/

//#include <iostream>
//
//int main()
//{
//	int arrayOne[5]{ 1,2,3,4,5 };
//	int arrayTwo[5]{};
//
//	arrayTwo[0] = arrayOne[0];
//
//	//arrayTwo = arrayOne;
//}

/* --- < 문자열( Character Array, String ) > --- */

/*
< 문자열 > : 문자들로 이루어진 집합을 말한다.
	#. 문자( Character ) + 배열( Array )
	#. 문자 리터럴 : 작은 따옴표로 둘러 싸여 있다. 'a'
	#. 문자열 리터럴 : 큰 따옴표로 둘러 싸여 있다. "Hello"
*/

//#include <iostream>
//
//int main()
//{
//	char c[6]{ 'R','i','v','e','r','\0' };
//	c[0] = 'M';
//
//	char std[6]{ "River" };
//}

//#include <iostream>
//
//struct Student
//{
//	char name[10];
//	int num;
//	int score;
//};
//int main()
//{
//	Student tom;
//	std::cout << "Input : ";
//	std::cin >> tom.name >> tom.num >> tom.score;
//}

//#include <iostream>
//
//int main()
//{
//	char myText[20]{ "Greetings!" };
//
//	std::cout << myText << " : " << &myText << '\n';
//	std::cout << "Greetings!" << " : " << &"Greetings!" << '\n';
//}

//#include <iostream>
//
//int main()
//{
//	char nameOne[10]{ "River" };
//	char* pointer{ nameOne };
//
//	std::cout << nameOne << " : " << &nameOne << " : " << &nameOne[0] << '\n';
//	std::cout << pointer << " : " << &pointer << " : " << (pointer + 0) << '\n';
//	std::cout << sizeof nameOne << " : " << sizeof nameOne[0] << " : "
//		<< sizeof & nameOne << " : " << sizeof & nameOne[0] << '\n';
//
//	const char* name = "River";
//	std::cout << name << " : " << (void*)name << '\n';
//}

/* --- < 문자열 스트림( String Stream ) > --- */

/*
< stream > : 입출력을 추상화해서 나타내어 준다.

< sstream( string ) > : 문자열로부터 입력을 받는다.
	#. ostring stream : 문자열 포맷을 조합하여 저장할 때 사용한다.
	#. string stream : 문자열에서 내가 원하는 자료형의 데이터를 추출할 때 사용한다.
	#. istring stream : 문자열 포맷을 parsing할 때 사용한다.
		#. parsing : 일련의 문자열을 의미있는 token( 어휘 분석의 단위 )으로 분해하고 그것들로 이루어진 Parse tree를 만드는 과정

< istream( input ) > : 사용자로부터 입력 받는다.

< ifstream( file ) > : 파일로부터 입력 받는다.
*/

//#include <iostream>
//
//int main()
//{
//	int array[10];
//	int sum{};
//
//	for (int i = 0; i < 10; i++)
//	{
//		std::cout << i + 1 << " : ";
//		std::cin >> array[i];
//		sum += array[i];
//	}
//	std::cout << sum / 10;
//}

//#include <iostream>
//
//int main()
//{
//	const int COLUMN{ 10 };
//	int array[COLUMN];
//	int big{}, smol{};
//
//	for (int i = 0; i < COLUMN; i++)
//	{
//		std::cout << i + 1 << " : ";
//		std::cin >> array[i];
//		if (big < array[i] || i == 0) big = array[i];
//		if (smol > array[i] || i == 0) smol = array[i];
//	}
//}

//#include <iostream>
//
//int main()
//{
//	const int COLUMN{ 10 };
//	int array[COLUMN];
//	int big{};
//	int index{};
//	int temp;
//
//	for (int i = 0; i < COLUMN; i++)
//	{
//		std::cout << i + 1 << " : ";
//		std::cin >> array[i];
//	}
//
//	for (int i = 0; i < COLUMN; i++)
//	{
//		big = -1;
//		for (int j = i; j < COLUMN; j++)
//		{
//			if (big < array[j])
//			{
//				big = array[j];
//				index = j;
//			}
//		}
//		temp = array[index];
//		array[index] = array[i];
//		array[i] = temp;
//	}
//}

//#include <iostream>
//
//int array[10]{};
//
//void Quick(int* arr, int Start, int end)
//{
//	if (Start >= end) return;
//	int key = Start;
//	int go = Start + 1;
//	int back = end;
//	int temp;
//
//	while (go <= back)
//	{
//		while (arr[go] >= arr[key] && go <= end) go++;
//		while (arr[back] <= arr[key] && back > Start) back--;
//		if (go > back)
//		{
//			temp = arr[back];
//			arr[back] = arr[key];
//			arr[key] = temp;
//		}
//		else
//		{
//			temp = arr[back];
//			arr[back] = arr[go];
//			arr[go] = temp;
//		}
//	}
//	Quick(arr, Start, back - 1);
//	Quick(arr, back + 1, end);
//}

//#include <iostream>
//
//int main()
//{
//	const int COLUMN{ 10 };
//	int array[COLUMN];
//	int No1[COLUMN];
//	int num{};
//
//	for (int i = 0; i < COLUMN; i++)
//	{
//		std::cout << i + 1 << " : ";
//		std::cin >> array[i];
//	}
//	for (int i = 0; i < COLUMN; i++)
//	{
//		num = 10;
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (array[i] > array[j]) num--;
//		}
//		No1[i] = num;
//	}
//	for (int i = 0; i < COLUMN; i++) std::cout << array[i] << ' ';
//	for (int i = 0; i < COLUMN; i++) std::cout << No1[i] << ' ';
//}

//#include <iostream>
//
//int main()
//{
//	int array1[2][4]{
//		{1,2,3,4},
//		{5,6,7,8}
//	};
//	int array2[4][2];
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++) array2[j][i] = array1[i][j];
//	}
//}

//#include <iostream>
//
//int array[5][5];
//
//void WriteRecord(void)
//{
//	int sum;
//	for (int i = 0; i < 4; i++)
//	{
//		sum = 0;
//		std::cout << i + 1 << " : ";
//		for (int j = 0; j < 4; j++)
//		{
//			std::cout << j + 1 << " : ";
//			std::cin >> array[i][j];
//			sum += array[i][j];
//		}
//		array[i][4] = sum;
//	}
//}
//void WriteSumRecord(void)
//{
//	int sum;
//	for (int i = 0; i < 4; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < 4; j++)
//		{
//			sum += array[j][i];
//		}
//		array[4][i] = sum;
//		array[4][4] += sum;
//	}
//}

//#include <iostream>
//
//int main()
//{
//	char string[10]{};
//	std::cin >> string;
//
//	for (int i = 9; i >= 0; i--) std::cout << string[i];
//}

//#include <iostream>
//
//int main()
//{
//	char string[100];
//	int num = 0;
//	int temp;
//
//	std::cin >> string;
//	while (string[num] != 0) num++;
//	for (int i = 0; i < num / 2; i++)
//	{
//		temp = string[i];
//		string[i] = string[num - i - 1];
//		string[num - i - 1] = temp;
//	}
//}

//#include <iostream>
//
//int main()
//{
//	char string[100]{};
//	int num = 0;
//	std::cin >> string;
//	while (string[num] != 0) num++;
//	std::cout << num;
//}

//#include <iostream>
//
//int main()
//{
//	char string[10]{};
//	int num{};
//
//	std::cin >> string;
//	for (int i = 0; i < 10; i++)
//	{
//		if (string[i] != 0)
//		{
//			num = string[i] - 32;
//			string[i] = num;
//			std::cout << string[i] << ' ';
//		}
//	}
//}

//#include <iostream>
//
//int main()
//{
//	char string1[10]{};
//	char string2[10]{};
//	char string3[20]{};
//	int index;
//
//	std::cin >> string1 >> string2;
//	for (int i = 0; i < 10; i++)
//	{
//		string3[i] = string1[i];
//		if (string1[i] == 0) {
//			index = i;
//			break;
//		}
//	}
//	for (int i = 0; i < 10; i++, index++)
//	{
//		string3[index] = string2[i];
//		if (string2[i] == 0) break;
//	}
//}

//#include <iostream>
//
//int main()
//{
//	int block[3][3]{
//		{0,1,0},
//		{0,1,1},
//		{0,1,0}
//	};
//	int num{};
//	int temp;
//
//	while (1)
//	{
//		std::cin >> num;
//		switch (num)
//		{
//		case 0:
//			for (int start = 0, end = 2; start < end; start++, end--)
//			{
//				for (int i = start, j = end; i < end; i++, j--)
//				{
//					temp = block[start][i];
//					block[start][i] = block[i][end];
//					block[i][end] = block[end][j];
//					block[end][j] = block[j][start];
//					block[j][start] = temp;
//				}
//			}
//		case 1:
//			for (int start = 0, end = 2; start < end; start++, end--)
//			{
//				for (int i = start, j = end; i < end; i++, j--)
//				{
//					temp = block[start][j];
//					block[start][j] = block[i][start];
//					block[i][start] = block[end][i];
//					block[end][i] = block[j][end];
//					block[j][end] = temp;
//				}
//			}
//		}
//	}
//}

//#include <iostream>
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 4; j > i; j--) std::cout << ' ';
//		for (int j = 0; j <= i; j++) std::cout << "M ";
//		std::cout << '\n';
//	}
//}

//#include <iostream>
//
//int main()
//{
//	const int COLUMN{ 5 };
//	int triangle[COLUMN][COLUMN]{};
//
//	for (int i = 0; i < COLUMN; i++)
//	{
//		if (i == 0) triangle[0][0] = 1;
//		else
//		{
//			int prevValue;
//			for (int j = 0; j <= i; j++)
//			{
//				prevValue = (j - 1 < 0) ? 0 : triangle[i - 1][j - 1];
//				triangle[i][j] = prevValue + triangle[i - 1][j];
//			}
//		}
//	}
//}

//#include <iostream>
//
//int main()
//{
//	const int COLUMN{ 5 };
//	int snails[COLUMN][COLUMN]{};
//
//	enum Direction { Right, Down, Left, Up };
//
//	Direction dir{ Right };
//
//	int value{ 1 };
//	int x{}, y{};
//	while (value <= COLUMN * COLUMN)
//	{
//		snails[y][x] = value;
//		value++;
//		switch (dir)
//		{
//		case Right:
//			x++;
//			if (x == COLUMN || snails[y][x] != 0)
//			{
//				x--;
//				y++;
//				dir = Down;
//			}
//			break;
//		case Down:
//			y++;
//			if (y == COLUMN || snails[y][x] != 0)
//			{
//				y--;
//				x--;
//				dir = Left;
//			}
//			break;
//		case Left:
//			x--;
//			if (x < 0 || snails[y][x] != 0)
//			{
//				x++;
//				y--;
//				dir = Up;
//			}
//			break;
//		case Up:
//			y--;
//			if (y < 0 || snails[y][x] != 0)
//			{
//				y++;
//				x++;
//				dir = Right;
//			}
//			break;
//		}
//	}
//}

//#include <iostream>
//
//int main()
//{
//	const int COLUMN{ 5 };
//	int square[COLUMN][COLUMN]{};
//	int value{ 1 };
//
//	int x{ COLUMN / 2 }, prevX{};
//	int y{ 0 }, prevY{};
//
//	square[y][x] = value;
//
//	while (value <= COLUMN * COLUMN)
//	{
//		prevX = x;
//		prevY = y;
//		value++;
//
//		y--;
//		x++;
//
//		if (y < 0) y = COLUMN - 1;
//		if (x >= COLUMN) x = 0;
//		if (square[y][x] != 0) {
//			x = prevX;
//			y = prevY + 1;
//		}
//		square[y][x] = value;
//	}
//}

/* ----- < 함수 > ----- */
//
//
//
//
//
/* --- < 함수( Function ) > --- */

/*
< 함수 > : 여러개의 명령어로된 집합으로 이러한 집합에 이름을 붙인 것

< 매개 변수 > : 함수가 수행할 명령에 필요한 것들
	#. < Callee > : 매개 변수, 함수 정의에 열거된 이름
	#. < Caller > : 인자, 함수 호출에 넘겨줄 값

< 매개 변수 기본값( Default ) > : 함수가 매개 변수로 인자를 받지 못하였을 경우 기본값을 자동 대입
	#. 매개 변수에 ( = 0 )을 기입하면 실행된다.
		=> < void Func(int a = 0); > : 기본값 설정은 함수 선언에만 있어도 작동한다.
	#. 기본값을 제공하는 매개 변수는 맨 뒤의 매개 변수부터 작성해야 한다.
		=> < void func(int a, int b = 1, int c = 0); >

< 가변 인자 > : 매개 변수로 어떤 인자든 올 수 있게 하는 기능
	#. < ... > : 말줄임표를 통해 사용할 수 있다.
		=> void Func(int num, ...);
		=> 첫 번째 매개 변수는 고정 매개 변수를 작성한 뒤 가변인자를 작성

< 재귀 호출 > : 내가 나를 부르는 함수
	#. < Base Case > : 더 이상 자를 수 없는 가장 작은 문제가 있어야 한다.
	#. < Recursive Case > : 문제를 작은 집합으로 나눌 수 있어야 한다.
*/

//#include <iostream>
//#include <stdarg.h>
//
//struct Song
//{
//	std::string name;
//	int trackNum;
//	int price;
//};
//
//Song Input(std::string name, int trackNum, int price)
//{
//	Song cd;
//
//	cd.name = name;
//	cd.trackNum = trackNum;
//	cd.price = price;
//
//	return cd;
//}
//
//int Sum(int a = 2, int b = 1)
//{
//	return a + b;
//}
//
//int Sum(int input[5])
//{
//	int sum{};
//	for (int i = 0; i < 5; i++) { sum += input[i]; }
//	return sum;
//}
//
//void function(int count, ...)
//{
//	va_list params;
//
//	va_start(params, count);
//
//	for (int i = 0; i < count; i++)
//	{
//		std::cout << va_arg(params, int);
//	}	std::cout << std::endl;
//}
//
//int main()
//{
//	Song Twice;
//
//	std::string name;
//	int trackNum;
//	int price;
//
//	std::cin >> name >> trackNum >> price;
//
//	Twice = Input(name, trackNum, price);
//
//	std::cout << Sum();
//}

/* < 매개 변수 일치 > */

/*
< 함수 구분 > : 함수는 변수와 다르게 이름이 같아도 컴파일러가 구분할 수 있다.
	#. 함수의 구분은 이름뿐만 아니라 매개 변수의 종류와 갯수도 포함된다.

< 함수 다형성 > : 똑같은 이름의 함수를 여러개 선언 및 정의할 수 있다.
	#. < 함수 오버로딩 > : 같은 이름의 함수를 여러개 쌓을( STACK ) 수 있다.
		#. 매개 변수와는 다르게 반환 값이 다를 경우는 오버로딩이 적용되지 않는다.

< Call Stack > : 함수가 호출될 때 RAM공간에 차곡차곡 쌓여지는 형태를 말한다.
	#. 함수가 반환될 때는 쌓여진 마지막 함수부터 차례로 반환된다.

< Stack > : 함수와 변수가 저장되는 RAM의 공간
	#. RAM안에 할당된 STACK공간이 가득차서 넘칠 경우 Stack Overflow에러가 발생한다.
*/

/* --- < 재귀함수( Recursive Function ) > --- */

/*
< 재귀함수 > : 함수의 내부에서 자기 자신을 다시 호출하는 함수를 말한다.
	#. < 분할 정복( Divide & Conquar ) > : 큰 문제를 잘라서 작은 문제로 만든다.
		#. 간단해진 문제를 재귀적( Recursive )으로 해결한다.
			=> 동일한 문제의 작은 집합을 가진 문제
*/

//#include <iostream>
//
//void ForLoop1(int n)
//{
//	if (n < 0)
//	{
//		std::cout << '\n';
//		return;
//	}
//	std::cout << n << ',';
//	ForLoop1(n - 1);
//}
//void ForLoop2(int n)
//{
//	if (n < 0)
//	{
//		std::cout << '\n';
//		return;
//	}
//	ForLoop2(n - 1);
//	std::cout << n << ',';
//}
//
//int Factor(int N)
//{
//	if (N == 1) { return 1; }
//
//	return N * Factor(N - 1);
//}
//
//int Fibo(int N)
//{
//	if (N <= 2) { return 1; }
//	return Fibo(N - 2) + Fibo(N - 1);
//}
//
//void Move(char go, char end)
//{
//	std::cout << go << "를 " << end << "로 이동\n";
//}
//
//void Hanoi(char A, char B, char C, int N)
//{
//	if (N == 1) { Move(A, C); }
//	else {
//		Hanoi(A, C, B, N - 1);
//		Move(A, C);
//		Hanoi(B, A, C, N - 1);
//	}
//}

//#include <iostream>
//
//enum MonsterType
//{
//	wolf, demon, slime
//};
//struct Monster
//{
//	MonsterType type;
//	std::string name;
//	int HP;
//};
//std::string GetMonsterTypeString(MonsterType type)
//{
//	std::string typeString{};
//
//	switch (type)
//	{
//	case wolf:
//		typeString = "WOLF";
//		break;
//	case demon:
//		typeString = "DEMON";
//		break;
//	case slime:
//		typeString = "SLIME";
//		break;
//	}
//	return typeString;
//}
//void PrintMonster(Monster monster)
//{
//	std::cout << GetMonsterTypeString(monster.type) << '\n';
//	std::cout << monster.name << '\n';
//	std::cout << monster.HP << '\n';
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
//	while (true)
//	{
//		InputNumber();
//		if (CheckNumber()) break;
//	}
//	return;
//}
//
//void CreateAnswer()
//{
//	int usedDigit[10]{};
//	std::srand(std::time(nullptr));
//
//	for (int i = 0; i < 3; i++)
//	{
//		bool isDuplicated = true;
//		int random_didgit{};
//
//		while (isDuplicated)
//		{
//			random_didgit = std::rand() % 10;
//			if (usedDigit[random_didgit] == 0)
//			{
//				usedDigit[random_didgit] = 1;
//				break;
//			}
//		}
//		gResultArray[i] = random_didgit;
//		std::cout << random_didgit;
//	}
//}
//void InputNumber()
//{
//	char input[4]{};
//	std::cin >> input;
//	for (int i = 0; i < 3; i++)
//	{
//		gInputArray[i] = input[i] - '0';
//	}
//}
//bool CheckNumber()
//{
//	int ball{}, strike{};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (gInputArray[i] == gResultArray[j])
//			{
//				if (i == j) strike++;
//				else ball++;
//			}
//		}
//	}
//	std::cout << strike << " 스트라이크!, " << ball << " 볼! \n";
//	if (strike == 3)
//	{
//		return true;
//	}
//	return false;
//}
//}

//#include <iostream>
//
//int Factor(int n)
//{
//	if (n == 0) return 1;
//	return n * Factor(n - 1);
//}
//
//#include <iostream>
//
//void Pibo(int a, int b, int c)
//{
//	if (c == 0) return;
//	std::cout << a << ' ' << b << ' ';
//	a += b;
//	b += a;
//
//	Pibo(a, b, --c);
//}
//
//int Fibo(int n)
//{
//	if (n == 1) return 0;
//	else if (n == 2) return 1;
//	else return Fibo(n - 1) + Fibo(n - 2);
//}