#pragma once
/*
복잡한 형식들

Type Conversion(형식 변환)
타입과 객체
타입에 대해 다시 한번 정리해 보자.
	타입은 해당 객체의 사용 가능한 값과 적용할 수 있는 연산을 정의한다.
	객체는 주어진 타입의 값을 저장하는 메모리 공간이다.
	값은 주어진 타입으로 메모리 공간의 비트 집합을 해석한 것이다.
	변수는 객체에 이름을 붙여 둔 것이다.
	선언(declaration)은 객체의 이름을 지정하는 구문
	정의(definition)은 객체의 메모리 공간을 할당하는 일존의 선언
컴퓨터의 메모리 공간은 항상 비트구조로 되어있습니다. 어떤 타입의 값을 저장하더라도 컴퓨터에는 비트와되어있다.
즉 타입이 없다면 그 값이 무엇인지 알지 못한다.
현실을 예로 들면 10이라는 숫자 자체는 아무런 의미도 없지만 거기에 10원 10kgm 10m등 어떤 단위가
붙어야 그 숫자가 의미를 가지게 되는 것처럼 변수도 타입에 의해 의미를 가지게 된다.

마찬가지로 RAM에 할당된 다음 값은 그 자체로는 아무 의미가 없다. 01001000
위 메모리를 int로 접근하면 2진수를 10진수로 변환한 72가된다. 하지만 char로 접근하여 '0'이라는 문자가 된다.
타입의 규칙에 따라 객체를 이용하는 것을 타입안정성이라고 부르는다. C++는 편의성읠 위해 완전한 타입 안정성을
보장하지 안는다. 프로그래밍을 하다보면 타입을 변환하게 되는 경우가 있다.

int a = 1;
std::string myString = a;
변수를 설명할 떄 특정 형식을 저장하기 위해 형식을 지정한다고 했으며, 서로 다른 형식은 저장할 수 없다고
했으므로 위 예제는 컴파일이 되지 않는다. 정수형을 문자열형에 배정하려고 했는데, 이러한 표현이 허용되지 않는다.

int a = 1;
long long x = a;
위 예제는 int(4 byte)형을 long long(8 byte)형에 대입했는데, 정상적으로 컴파일이 되며 아무련 에러도 없다.
이러한 것을 형식 변환이라고 부르며, 위 예제에서는 자체적으로 변환이 일어나서 int가 long long으로 변환된다.
크기가 작은 것에서 큰 것으로 변환은 안전하게 변환된다.

int a = 1024;
char x = a;
하지만 int(4byte)에서 char(1byte)처럼 저장 공간이 큰 것을 작은 것으로 변환하면 값이 잘려나갈 수 값에 없다.
이러한 것을 축소변환(narrow conversion)이라고 부르며 프로그램에서 알 수 없는 에로의 주범이 되기도 한다.

int a = 1024;
char x{a};

정수와 실수를 변활 할 때는 항상 주의해야 한다. 실수를 정수로 변환하면 소수점 아래가 전부 잘려나간다.
int value = 1.6; -> 1
int a= 10
int b = 3;
int c = a/b -> 3

암시적 변환 혹은 묵시적 변환
기본적으로 타입 변환의 원식은 정보 손실을 최소화 할 수 있는 방향으로 수행한다는 것이다. 정보 손실은 저장 공간
이 큰 값에서 작은 값으로 이동할 때 발생하는 것이 기본이지만 정수와 실수에서도 발생한다.

이런 자동적인 타입 변환을 암시적 변환이라ㅗ 부르며 혼란의 요지가 될 가능성이 높다. 따라서 연산을 작성할 때는
의도를 명시적으로 표현하는 것이 좋다.

int(1.5f);
int{1.5f};
static_cast<int>(1.5f);
정수와 실수의 연산을 항상 이러한 타입 변환을 염두에 두고 작성합니다.

암시적 형변환
	컴파일러가 허용하는 형변환으로 프로그래머가 특별한 작업을 하지 않아도 자동적으로 변환이 일어난다.
	형식에서 각 형시의 크기를 살펴 봤는데, 그 크기가 작은 것에서 큰 것으로으 ㅣ변환은 대부분 허용

명시적 형변환 프로그래머가 직접 지정하는 형변환으로 Type cast라고 부른다.
	변환 하려는 형식 앞에 (형식)을 붙여서 변시적으로 표현한다.
	큰 형식으서 작은 형식으로 변환하면 저장공간의 크기 때문에 값이 잘려나간다.
	명시적으로 표시해도 불가능한 캐스팅이 있다.

int myInteger = 1000;
unsigned char myCharacter = myInteger;

std::cout<<myInteger<<std::endl;
std::cout<<int(myCharacter)<<std::endl;
명시적으로 형변환을 위해 (byte)라는 것을 붙여줬고, 에러 없이 실행이 가능하다. 출력 결과는 1000과 232이다.

형식의 크기가 작아서 작려 나갔다는 것은 알겠는데, 어떻게 잘린 것인지 살펴 보기 위해 각 결과를 2진수로 표기해 보자

1000(10) = 0011 1110 1000
 232(10) =      1110 1000
 결과를 잘 보면 unsigned char는 8bit 표현 범위를 가지므로 8자리만 저장할 수 있으므로 ,입력된 값의 오른쪽에서
 8개 비트만 저장되고 나머지는 잘려 나간다. 이렇게 형식의 저장공간에 따라 값이 잘려나간다.

 별칭(alias)
 unsigned int와 같은 타입은 매우 길어서 사용할 때 매우 귀찬다. 컴파일러는 프로그래머를 조금 더 편리하게
 만들어 주기 위해 별칭이라는 기능을 제공하낟. 자주 사용되는지 않지만 알고 넘어가자
 typedef 기존 형식 별칭;
 typedef unsigned int uint;
 uint a = 1;
using 별칭 = 기존 형식;
using uint = unsined int;
uint a =1;

typedef와 별칭/형식 순서가 다르다. using 은 단순한 타입 이외에도 다양한 기능이 존재하므로 매우 편리한다.
using namespace std

열거형
지금까지 살펴본 형식들은 정수 문자열등 단순한 형식이다. 이번에는 좀더 복잡하지만 유용한 형식들에 대해
알아보자.
RPG의 공격 데미지 타입을 한번 생각해 보자. 이 형식은 공격 타입{ 물리, 마법, 고정 }으로 정의할 수 있다.
그런데 이런 형식은 C++언어에는 없다.

열거형식은 집합타입으로 새로운 형식을 정의하고 정의한 타입으로 다른 형식처럼 변수를 선언해서 사용하면 된다.
enum 집합타입
{
	원소1,
	원소2,
	...
	원소n
};

enum AttackType { Physical, Magical, Fixed };
AttackType type = Physical;

switch(type)
	case Physical:
		break;
	case Magical:
		break;
	case Fixed:
		break;
열거형은 내부적으로 정수형이다. 즉, Physical은 0, Magical은 1, Fixed는 3이된다.
그래서 열거형은 명시적 형변환을 통해 성수로 변환이 가능하다. 반대로 정수형에서 명시적으로 열거형으로 변환도 된다.

열거형은 다음과 같이 각각 값을 지정해 줄 수 있다. 사용범을 생향하면 자동으로 0부터 시작한다.
enum 집합타입
	원소1 = 값;
	원소2 = 값,
	...
색상 표현이 16진수로 되어있는데 이또한 열거형으로 편리하게 가능하다.
enum Color
	Red = 0xFFFF0000,
	Magenta = 0xffff00ff,
	Pink = 0xffffc0cb,
지금까지 살펴 본 특징을 통해 이미 눈치 챘겠지만 이러한 열거형은 상수라는 점을 기억하라.

플래그
플래그라는 용어, 복선, 암시를 나타내기 위한 단어, 프로그래머 용어이다.
가령 RPG게임에서 보조 퀘스트 4개의 클리어 여부를 저장한다고 가정하면 각 퀘스트는 필수가 아니므로 선택적으로
클리어가 가능할 텐데, 5번째 보조퀘스트는 1,3번 퀘스트를 수행해야만 열린다고 생각해 보세요. 프로그램에는 각
각 퀘스트의 클리어 정보가 있어야 하는데, 어떻게 구성하는 것이 좋을까
bool quest1 = false;
bool quest2 = false;
bool quest3 = false;
bool quest4 = false;
if(quest1 && quest3) 5번 퀘스트 시작
퀘스트가 4개 더 추가되면? 코딩이 엄청 복잡해 질거다.

다음과 같은 4비트 공간을 가정해 보자. 각 비트는 서로 독립되어 있어서 비트별로 다른 특성을 부여할 수 있다.
따라서 각 비트를 퀘스트의 클리어 여부로 사용할 수 있다.
0 0 0 0
이렇게 각 비트가 독립적인 상태를 나타내는 것을 깃발과 같다고 하여 만들어진 개념이 flag이다.
int questComplete{0};
questComplete |= 1;
questComplete |= 4;

if(questComplete & 1 && questComplete & 4) 5번 퀘스트 시작
비트 연산으로 4개의 플래그를 정수 하나에 담는다. 1과 4는 정수 리터럴이라 헷갈릴 수 있어더 다음과 같이 표현하기도 한다.
quest |= 0x01;
quest |= 0x04;
quest |= 0b0001;
quest |= 0b0100;
enum QuestCleared
	quest1 = 0b0001,
	quest2 = 0b0010,
	quest3 = 0b0100,
	...
단 주의할 점은 enum 자체에 quest1 | quest3 = 0b0101은 정의되어 있지 않는다. 따라서 정수로 값을 저장하는 것에 
주의해야 한다.

구조체
가령 RPG게임에서 플레이어는 다음과 같은 능력치 정보를 가지고 있다.
체력, 마력, 힘, 마법, 방어력 등
이런 능력치 정보를 각각 개별 정보로 사용해도 되지만 ,하나의 형식처럼 묶을 수 있다면 더 효율적으로 
만들 수 있다. 5인 파티로 구성된 게임이면 위와 같은 변수를 HP1, HP2, HP3,... 과 같이 5벌씩 만들어야 한다.

이런 경우를 위해 구조체라는 개념이 있다.
struct 형식이름
	형식 멤버1;
	형식 멤버2;
위와 같이 struct 형식이름을 선언해주고 블록으로 멤버들을 정의해주면 된다.
struct Ability
	int HP;
	int MP;
	int strength;
	int magic;
	int defense;

struct Ability warriorAbility;

warrioAbility.HP = 10000;
warriorAbility.MP = 0;
...
struct Ability 구조체 Ability형을 선언한다.
struct Ability warriorAbility;
가장 앞에 struct키워드를 붙이고 일반 변수 선언과 동일하게 "형식명 변수명"을 사용한다.
전사 클래스의 능력치에 대한 구조체이다.
구조체의 각 멤버에 값을 집어 넣는다. 형식 이름.멤버와 같은 형식으로 점 연산자를 사용하여 접근한다.
warriorAbility.HP = 100;
구조체는 다음과 같이 선언과 동시에 정의도 가능하다.
struct Ability
	int HP;
	...
} warrior, magicioa, thief,...
주의할 점은 구조체는 형식(type)이라는 것이다. 
Ability.HP = 10 / int = 10
구조체 역시 변수로 만들고 사용할 수 있다.

구조체 선언 방법
위에서 살펴본 선언이외에 다양한 스타일이 존재한다.

구조체 초기화
구조체를 초기화하려면 위에서 언급한대로 간단히 구조체 타입의 객체를 만들고 점 연산자를 통해 멤버들에 값을 지정하면 된다.
struct stat mageS;
mageS.HP = 100;
mageS.MP = 1000;
...
귀찬으닌 C++11 이후부터 나온 유니폼 초기화를 사용하다.
stat mageS{100,1000,10,10,10,10};
값의 순서는 구조체에 선언한 멤버 변수들의 순서이다.
다음과 같이 멤버들의 일부만 초기화하고 나머지는 기본값을 사용할 수도 있다.
stat mageS{10,10};

초기값 기본적으로 기본값으로 초기화 됩니다. 정수형의 초기값은 0이기 때문에 구조체가 0으로 초기화 되는 것입니다.
만약 초기값을 다른 것으로 지정하려면? 구조체를 선언할 떄 다음과 같이 멤버에 지정해 둘 수도 있다.
struct stat
	int HP{100};
	int MP{10};
	int ...
	...
당연히 구조체 선언에 사용된 초기값이 있다고 하더라도, 구조체 변수를 선언할 떄 넘겨준 ㅏㅄ이 있으면 해당 값으로
초기화 된다.

구조체 수정
구조체 멤버들을 수정하기 위해서는 마찬가지로 점 연산자를 통해 개별 멤버 변수에 값을 대입하면되나.ㄷ
하지만 일괄적으로 변경할 경우에는?
이때도 마찬가지로 유니폼 초기화 식을 사용할 수 있다.
mageS = {10000,10001,1001} / mageS = stat{1000,10101,1011,10};
위 표기는 사싱 다음과 같은 표기를 간략하게 표현하기 위해 생략한 것이다.
즉 새로운 stat오브젝트를 초기화한뒤 해당 오브젝트에 대입, 즉 복사한 것이라 복수 있다.
그리고 다른 오브젝트의 값을 그대로 복사해서 초기화 하는 것도 가능하낟.
stat cloneA{mageS};
이 코드는 mageS의 모든 멤버를 cloneA로 복사 생성한 것이다.
*/

/*
배열
지금까지의 변수는 하나에 하나의 값만을 가지고 있다. 가령 슈팅 게임에서 상위 10명의 하이스코어를
저장하는 경우, int score1, int score2, int score3 ...이런 식으로 동일한 형식의 값을 여러 개 저장
할 경우에는 사용할 수 있는 배열이 있다.
형식 변수명[크기];
변수명[인덱스]=값;
	변수명 뒤에 대괄호를 붙여 주고 크기를 지정하면 배열로 선언이 가능하다.
	값을 가져오거나 사용할 떄는 변수명 뒤에 대괄호로 인덱스를 지정해 줘야 한다.
	인덱스는 0 기준

int scores[10];

for(int i=0;i<10;i++)
	std::cout<<"INPUT score[" << i<<"] : ";
	std::cin>>scores[i];

for(int i=0;i<10;i++)
	std::cout<<i<<" : "<<scores[i]<<'\n';

int scores[10]; 정수형 10개를 한 묶으로 하는 배열 변수를 선언한다.
cin>> scores[i]; 키보드 입력으로 변수를 입력 받아 배열 저장한다. 배열에 접근하기 위해서 인덱스[]를 명시한다.
0 ~ 9까지 총 10번 반복한다.

첨자로 인덱스 지정하기
인덱스를 지정할 떄는 다음과 같이 다양하게 지정이 가능하다.
리터럴 scores[0]
상수 및 열거형 scores[Red];
변수 scores[x];
표현식 scores[x+1];

배열의 크기 지정하기
배열 첨자는 다양한 형태로 지정이 가능하지만, 배열을 선언할 떄 크기는 상수만 가능하다.
리터럴 int scores[3];
상수 및 열거형 const int arrayLength = 3; int scores[ArrayLength];
변수는 불가능

int scores[]배열을 준비할 때 그 크기를 명확하게 알 수 없으면 배열을 준비할 수 없다.
x자체가 변수라서 다른 곳에서 변경될 위험도 있기 때문에 문법상 허용하지 않는다.
배열은 실행할 떄 결정되는 것이 아니라 컴파일 될 때 미리 준비하는 것이다. 컴파일 타임 상수가 필요하다.

초기화 되지 않은 값
int scores[10];
for(int i=0;i<10;i++)
	std::cout<<i<<" : "<<scores<<'\n';
이번 예제는 배열을 정의한 뒤 바로 값을 출력해 보자.
기본적으로 변수들은 정의된 후 어떤 값도 저장되어 있지 않다. 정확하게는 전에도 언급한 쓰레기값이
들어있다.
변수들은 RAM에 자리잡고 있는데, 효율적인 관리를 위해 변수가 사라질 때 지우거나 하지않는다.
단순히 해당 객체의 이름과 연결되 어있는 공간의 연결만 끊어 주는 것이다. 따라서 새로 객체를 만들면 해당
메모리에는 이전에 사용한 혹은 다른 프로그램이 사용했던 값이 남아 있을 수도 있는데 이를 쓰레기 값이라 한다.

배열 초기화
유니폼 초기화를 사용하면 간단히 배열을 초기활 할 수 있다.
int scores[10]{1,2,3,4,5,6,7,8,9,10};
int scores[10]{1,2,3};
int scores[10]{};

int scores[10]{};
for(int i=0;i<10;i++)
	std::cin>>scores[i];
int totalScore{};
for(int i=0;i<10;i++)
	totalScore += scores[i];
std::cout<<"Total : "<<totalScore<<'\n';

구조체와 배열
struct Point2D
	double x; double y;

Point2D pts[3];
pts[0].x = 1.1;
pts[0].y = 1.1;
구조체 멤버에 접근하기 위해서 []기호로 배열의 우너소에 먼저 접근한 다음 점 연산자를 사용해한다.

다차원 배열
만약, 엑셀처럼 가로(행), 세로(열)이 있는 값은 어떻게 해야 하나?
int myArray[15] = {
	0, 0, 1, 0, 0,
	0, 1, 1, 1, 0,
	1, 1, 1, 1, 1, };
for(int i=0; i<15; i++)
	std::cout<<myArray[i];
	if((i+1)%5==0)
		std::cout<<'\n';
배열에 값을 순서대로 집어 넣어 출력한다. 다만 위 엑셀표는 5열로 되어 있느니, 5의 배수 마다 줄바꿈 하줘야 한다.

i행 j열의 값을 구하세요.
[(i - 1) * 5 + (j - 1)] 

2차원 배열
그래서 인덱스가 2개인 행렬을 표기하기 위해 2차원 배열이 있다.
int myArray[3][5] = {
	{0,0,1,0,0},
	{0,1,1,1,0},
	{1,1,1,1,1} };

for(int i=0; i<3;i++)
	for(int j=0; j<5;j++)
		std::cout<<myArray[i][j];
	std::cout<<'\n';
int myArray[3][5] = 
2차원 배열은 배열의 배열이라는 개념으로 배열 뒤에 다시 배열을 붙여서 [][]표기한다.
크기를 지정할 때는 [행,열]과 같이 지정하면 된다.
초기 값은 행/열 순으로 기입한다. 중괄호로 하나으 ㅣ행을 묶어서 표기하고, 쉼표로 구분해서 열을 표기한다.

이렇게 인덱스 차원이 하나인 배열을 1차원 배열이라고 부르며 인덱스가 2개인 배열을 2차우너 배열이라고 부른다.
3차원 4차원도 가능하다.

좌측값 우측값
배정문을 설명할 떄 기본적으로는 연산자의 좌측을 lvalue, 오른쪽을 rvalue라고 설명했다.
int x;
x = 3 + 4;
위 표현에서 x가 lvalue이며 3+4가 rvalue이다. x는 왼쪽에 나온다고 해서 lvalue,
대입하는 값은 오른쪽에서 나온다고 해서 rvalue이다. 
3 + 4 = x;
x + 1 = 3;
반대가 될 수는 없다.
int x=1,y=2;
x=y;
x는 lvalue, y는 rvalue가 될까? 아니다. 여기서 x,y는 모두 lvalue이다. 즉 개념적인 것은 왼쪽, 오른쪽이지만
실제로는 약간 다른 의미를  가지고 있다.
lvalue 저장할 수 개쳋, 한줄의 코드를 넘어 지속되는 개체, 변수 등, rvalue 불가능 이름 있음
rvalue 값, 현재 식 이외에는 유지되지 않는 임시 값, 리터럴, 상수, 연산식 등, lvalue가 rvalue로 변환되어 사용 가능

배열 변수는 lvalue가 아니다.
int array1[5]={1,2,3,4,5};
int array2[5]={};
array2[0]=array1[0];
array2 = array1;
array2[0]=array1[0] array2배열의 0번째 요소에 array1배열의 0번째 요소의 값을 대입한다.
array2=array1; 이건? 일단 에러다, 식이 수정할 수 있는 lvalue여야 합니다.
배열을 설명할 때 위와 같은 그림을 사용하여 메모리를 간략하게 표현한다. 여기에서 scores라는 변수
자체는 메모리의 위치만 지정할 뿐 특별한 공간을 지정하고 있지 않는다. 포인터
따라서 scores는 lavlue가 되지 않는다. 반면 scores[0]와 같은 경우는 값을 변경할 수 있는 lvalue가 된다.

참고로 array2 = array1; 이런 표현은 왜 사용하려 했을 까 array1을 모두 array2에 넣고 ㅣㅍ을 때 그렇다.
이런건 직접 하나하나 대입해 줘야 한다.

문자열
일련의 문자들로 이루어진 집합을 문자열이라 한다. 지난 번에도 예제를 위해 조금씩 다뤘지만, 배열 이후에 다루는 이류가
바로 문자 + 배열이기 때문이다.
문자 리터럴 'ㅁ'
문자열 리터럴 " 마마ㅏ마"
문자열은 널문자를 끝에 담고 있기 때문에 문자열의 길이는 길이 + 1이다.

메모리는 연속으로 쌓여있는 공간stack으로 되어 있고, 특정 부분에 변수를 할당하여 사용하는 방식이다.
문자열 공간[10]을 준비하면 널문자 때문에 9칸의 문자만 쓸 수 있다.

int number{1};
char ame[]{"Doggy"};
float average{90.1f};
std::ostringstream oss;
oss << number
	<<"번 학생 "
	<< name
	<<"는 평균 "
	<< average
	<<"입이다.";
std::cout<<oss.str();
*/
