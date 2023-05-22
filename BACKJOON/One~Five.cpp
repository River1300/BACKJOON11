/* ----- < ������ ���ĵ� > ----- */
//
//
//
//
//
/* --- < ���� ��ȯ( Type Conversion ) > --- */

/*
< ����( Type ) > : ������ �ش� ��ü�� ��� ������ ���� ������ �� �ִ� ������ �����Ѵ�.
	#. ��ü�� �־��� Ÿ���� ���� �����ϴ� �޸� �����̴�.
	#. ���� �־��� Ÿ������ �޸� ������ ��Ʈ ������ �ؼ��� ���̴�.
	#. ������ ��ü�� �̸��� �ٿ� �� ���̴�.
	#. < ����( declaration ) > : ��ü�� �̸��� �����ϴ� �����̴�.
	#. < ����( definition ) > : ��ü�� �޸� ������ �Ҵ��ϴ� ������ �����̴�.
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
| ��ǻ���� �޸� ������ �׻� ��Ʈ������ �Ǿ� �ִ�. � Ÿ���� ���� �����ϴ��� ��ǻ�Ϳ���|
| ��Ʈȭ �Ǿ� �ֱ� ������ Ÿ���� ���ٸ� �� ���� �������� ��ǻ�Ͱ� �� �� ����.				|
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
*/

//#include <iostream>
//
//int main()
//{
//	int myInt{ 1 };
//	// std::string myStr{ myInt }; ���� �ٸ� ������ ������ �� ����.
//
//	long long myLong{ myInt };
//	// 4byte�� myInt�� 8byte�� myLong�� �����Ѵ�.
//	// �� ��ü�� �ٸ� type������ ���������� �������� ����ȴ�.
//	// �̸� ���� ��ȯ�̶� �Ѵ�.
//
//	char myChar{ myInt };
//	int value = 1.6;
//	// 4byte ������ 1byte ���Ŀ� ������ ��� ������ �ս��� �߻��� �� �ִ�.
//	// ū ���� ������ �ִ� ���� ���� ���� �������� �Ѿ�鼭 �߻��� �� �ִ� �����̴�.
//	// �Ǽ��� ������ ������ ��� �Ҽ��� �Ʒ��� ���� �߷�������.
//}

/* < �Ͻ��� ����ȯ( implicit conversion ) > */

/*
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
| �⺻������ ���� ��ȯ�� ��Ģ�� '���� �ս��� �ּ�ȭ'�� �� �ִ� �������� �����Ѵٴ� ���̴�.|
| ���� �ս��� ���� ������ ū ������ ���� ������ �̵��� �� �߻��ϴ� ���� �⺻������ ������ |
| �Ǽ������� �߻��Ѵ�.																	  |
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
< �Ͻ��� ����ȯ > : �����Ϸ��� �ڵ����� �ϳ��� �⺻ �ڷ����� �ٸ� �ڷ������� ��ȯ�Ѵ�.
	#. < ���� �°�( numeric promotion ) > : �� �ڷ����� ���� �� ū ������ �ڷ����� ������ ��ȯ
		=> ���� ��ȯ�� �Ǿ �����Ͱ� �״�� �����ȴ�.
	#. < ���� ��ȯ( numeric conversion ) > : �� �ڷ����� ���� �� ���� ������ �ڷ����� ������ ��ȯ
		=> ���� ��ȯ���� ���� �����Ͱ� �սǵ� ���� �ִ�.
*/

//#include <iostream>
//
//int main()
//{
//	float myFloat = 3;
//	double myDouble = 3;
//	// �������� �Ǽ� Ÿ�Կ� �����Ͽ� �Ͻ��� ����ȯ�� �߻�
//	double d(0.12f);
//	// float������ ���ͷ� 0.12f���� �� ū ������ �ڷ����� ������ ��ȯ�Ͽ� ����
//}

/* < ����� ����ȯ( explicit conversion ) > */

/*
< ����� ����ȯ > : ���α׷��Ӱ� ���� �����ϴ� ����ȯ���� Type Cast��� �θ���.
	#. ��ȯ �Ϸ��� ���� �տ�'(����)'�� �ٿ��� ��������� ǥ���Ѵ�.
	#. ū ���Ŀ��� ���� �������� ��ȯ�ϸ� ��������� ũ�� ������ ���� �߷� ������.
	#. ��������� ǥ���ص� �Ұ����� ĳ������ �ִ�.
*/

//#include <iostream>
//
//int main()
//{
//	int myInt = 1000;
//	unsigned char myChar = myInt;
//	// char ������ ���ڸ� ����� ����ȯ�� ���� ���� ���·� ����Ͽ���.
//	// int �������� 1000�̶�� ���� 2������ 0011 1110 1000�ε�
//	// char ������ �ִ� 255�� ���� ��� ������ 1byte�� �ش��ϴ� 1110 1000�� ����� �� �ִ�.
//	int A = 10;
//	int B = 4;
//	float myFloat = A / B;
//	myFloat = (float)A / B;
//	//A�� ��������� ���� ��ȯ�Ͽ� float�������� ����Ǿ� 2.5f��� ���� ������ �����Ѵ�.
//	char c = 'a';
//	std::cout << static_cast<int>(c) << '\n';
//}

/* --- < ��Ī( Alias ) > --- */

/*
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
| std::vector<std::string>�� ���� type�� �Է��ϱ� �� ����� �� �ſ� ������ ��Ȳ�� �ִ�.|
| ��Ī�̶�� ����� ����ϸ� �̷��� �� �Է��� ª�� ���� �� �ִ�.						   |
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
< typedef > : typedef �������� ��Ī;
	=> typedef std::pair<int, std::string> Pair;
< using > : using ��Ī = ��������;
	=> using Music = std::vector<int, std::vector<int>>;
*/

/* --- < ������( Enumeration Type ) > --- */

/*
< ������ > : ����Ÿ������ ���ο� ������ �����Ͽ�, ������ ������ ǥ���� �� �ִ�.
	#. ���������� ���� �����̴�.
	#. ����� ����ȯ�� ���� ������ ��ȯ�� �����ϴ�.
	#. �ݴ�� ���������� ��������� ���������� ��ȯ�� �����ϴ�.
	#. �������� ����� �ؼ��ȴ�.
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
//		std::cout << "���� ������ 3�� ������.\n";
//		break;
//	case Magical:
//		std::cout << "���� ������ 100�� ������.\n";
//		break;
//	case Fixed:
//		std::cout << "���� ������ 30�� ������.\n";
//		break;
//	default:
//		std::cout << "������!!!\n";
//		break;
//	}
//
//	switch (wall)
//	{
//	case White:
//		std::cout << "��� Ī�� �Ѵ�.\n";
//		break;
//	case Magenta:
//		std::cout << "���� ĥ�� �Ѵ�\n";
//		break;
//	case Pink:
//		std::cout << "��ȫ�� ĥ�� �Ѵ�.\n";
//		break;
//	default:
//		std::cout << "ȸ�� ĥ�� �Ѵ�.\n";
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
//		std::cout << "�Ѵ� ���̱� ������...\n";
//	}
//}

/* --- < ����ü( Structure ) > --- */

/*
< ����ü > : �پ��� type�� �ϳ��� ī�װ��� ���� �� �ִ�.
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

/* ----- < �迭 > ----- */
//
//
//
//
//
/* --- < �迭( Array ) > --- */

/*
< �迭 > : ������ ������ ���� ���� �� ������ �� �ִ� ���
	#. ���� ������[ũ��];
	#. ������[�ε���] = ��;
	#. ������ �ڿ� ���ȣ[]�� �ٿ� �ְ� ũ�⸦ �����ϸ� �迭�� ������ �����ϴ�.
		#. []��ȣ�� ÷��( subscript )��� �θ���.
	#. ���� �������ų� ����� ���� ������ �ڿ� ���ȣ�� �ε���( ���� )�� ������ ��� �Ѵ�.
	#. �ε����� 0�� �������� ����Ѵ�.

< �迭�� ũ�� ���� > : �迭 ÷�ڴ� �پ��� ���·� ������ �����ϴ�.
	#. �ٸ�, �迭�� ������ �� ũ��� ����� �����ϴ�.
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

/* --- < 2���� �迭( 2-Dimensional Array ) > --- */

/*
< 2���� �迭 > : �迭�� �迭�̶�� �������� �迭 �ڿ� �ٽ� �迭�� �ٿ��� [][]ǥ���Ѵ�.
	#. ũ�⸦ ������ ���� [��][��]�� ���� �����Ѵ�.
		=> ����( �� )�� ���� ������ �Ʒ��� ���� ���� ��
		=> ����( �� )�� ���� ������ ������ ���� ���� ��
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

/* --- < ������( L_Value )�� ������( R_Value ) > --- */

/*
< L_Value > : ������ �� �ִ� �Ǹ��� ��ü
	#. ������ �ڵ带 �Ѿ�� lvalue�� �������� �ʴ´�.
	#. �ַ� ������ ��Ī�Ѵ�.
	#. rvalue�� lvalue�� ��ȯ�� �� ����.

< R_Value > : ������ �� ���� ������ ��ü
	#. ���� �� �̿ܿ��� �������� �ʴ� �ӽ� ���̴�.
	#. ���ͷ�, ���, ����ĵ��� ��Ī�Ѵ�.
	#. lvalue�� rvalue�� ��ȯ�� �� �ִ�.

< �迭�� �̸��� L_Value�� �ƴϴ� > : �迭 �̸��� �޸��� ��ġ�� ������ ���̴�.
	#. �迭 ÷�ڸ� �̿��Ͽ� Ư���� ������ �����ϰ� ���� �� lvalue�� �ȴ�.
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

/* --- < ���ڿ�( Character Array, String ) > --- */

/*
< ���ڿ� > : ���ڵ�� �̷���� ������ ���Ѵ�.
	#. ����( Character ) + �迭( Array )
	#. ���� ���ͷ� : ���� ����ǥ�� �ѷ� �ο� �ִ�. 'a'
	#. ���ڿ� ���ͷ� : ū ����ǥ�� �ѷ� �ο� �ִ�. "Hello"
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

/* --- < ���ڿ� ��Ʈ��( String Stream ) > --- */

/*
< stream > : ������� �߻�ȭ�ؼ� ��Ÿ���� �ش�.

< sstream( string ) > : ���ڿ��κ��� �Է��� �޴´�.
	#. ostring stream : ���ڿ� ������ �����Ͽ� ������ �� ����Ѵ�.
	#. string stream : ���ڿ����� ���� ���ϴ� �ڷ����� �����͸� ������ �� ����Ѵ�.
	#. istring stream : ���ڿ� ������ parsing�� �� ����Ѵ�.
		#. parsing : �Ϸ��� ���ڿ��� �ǹ��ִ� token( ���� �м��� ���� )���� �����ϰ� �װ͵�� �̷���� Parse tree�� ����� ����

< istream( input ) > : ����ڷκ��� �Է� �޴´�.

< ifstream( file ) > : ���Ϸκ��� �Է� �޴´�.
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

/* ----- < �Լ� > ----- */
//
//
//
//
//
/* --- < �Լ�( Function ) > --- */

/*
< �Լ� > : �������� ��ɾ�ε� �������� �̷��� ���տ� �̸��� ���� ��

< �Ű� ���� > : �Լ��� ������ ��ɿ� �ʿ��� �͵�
	#. < Callee > : �Ű� ����, �Լ� ���ǿ� ���ŵ� �̸�
	#. < Caller > : ����, �Լ� ȣ�⿡ �Ѱ��� ��

< �Ű� ���� �⺻��( Default ) > : �Լ��� �Ű� ������ ���ڸ� ���� ���Ͽ��� ��� �⺻���� �ڵ� ����
	#. �Ű� ������ ( = 0 )�� �����ϸ� ����ȴ�.
		=> < void Func(int a = 0); > : �⺻�� ������ �Լ� ���𿡸� �־ �۵��Ѵ�.
	#. �⺻���� �����ϴ� �Ű� ������ �� ���� �Ű� �������� �ۼ��ؾ� �Ѵ�.
		=> < void func(int a, int b = 1, int c = 0); >

< ���� ���� > : �Ű� ������ � ���ڵ� �� �� �ְ� �ϴ� ���
	#. < ... > : ������ǥ�� ���� ����� �� �ִ�.
		=> void Func(int num, ...);
		=> ù ��° �Ű� ������ ���� �Ű� ������ �ۼ��� �� �������ڸ� �ۼ�

< ��� ȣ�� > : ���� ���� �θ��� �Լ�
	#. < Base Case > : �� �̻� �ڸ� �� ���� ���� ���� ������ �־�� �Ѵ�.
	#. < Recursive Case > : ������ ���� �������� ���� �� �־�� �Ѵ�.
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

/* < �Ű� ���� ��ġ > */

/*
< �Լ� ���� > : �Լ��� ������ �ٸ��� �̸��� ���Ƶ� �����Ϸ��� ������ �� �ִ�.
	#. �Լ��� ������ �̸��Ӹ� �ƴ϶� �Ű� ������ ������ ������ ���Եȴ�.

< �Լ� ������ > : �Ȱ��� �̸��� �Լ��� ������ ���� �� ������ �� �ִ�.
	#. < �Լ� �����ε� > : ���� �̸��� �Լ��� ������ ����( STACK ) �� �ִ�.
		#. �Ű� �����ʹ� �ٸ��� ��ȯ ���� �ٸ� ���� �����ε��� ������� �ʴ´�.

< Call Stack > : �Լ��� ȣ��� �� RAM������ �������� �׿����� ���¸� ���Ѵ�.
	#. �Լ��� ��ȯ�� ���� �׿��� ������ �Լ����� ���ʷ� ��ȯ�ȴ�.

< Stack > : �Լ��� ������ ����Ǵ� RAM�� ����
	#. RAM�ȿ� �Ҵ�� STACK������ �������� ��ĥ ��� Stack Overflow������ �߻��Ѵ�.
*/

/* --- < ����Լ�( Recursive Function ) > --- */

/*
< ����Լ� > : �Լ��� ���ο��� �ڱ� �ڽ��� �ٽ� ȣ���ϴ� �Լ��� ���Ѵ�.
	#. < ���� ����( Divide & Conquar ) > : ū ������ �߶� ���� ������ �����.
		#. �������� ������ �����( Recursive )���� �ذ��Ѵ�.
			=> ������ ������ ���� ������ ���� ����
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
//	std::cout << go << "�� " << end << "�� �̵�\n";
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
//	std::cout << strike << " ��Ʈ����ũ!, " << ball << " ��! \n";
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