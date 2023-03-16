#pragma once

/*
컴파일과 링크 고급
헤더파일과 소스파일
C++언어는 선언과 정의로 구분되어 있다.
보통 프로그램을 작성하다보면 상당히 많은 양의 코드를 입력하게 되며, 효율적으로 작성하기 위해 반복되는
작업들을 따로 묶어서 선언하는 경우가 많다. 또한 다른 사람이 만들어둔 편리한 기능들을 가져다 사용할 경우도
있다. 그래서, 선언과 정의를 다음과 같이 개별 파일로 묶어둔다.

헤더파일 : 함수나 변수의 선언을 모아둔 파일, 어떤 기능이 있는지, 어떤 규격인지 알려주는 용도
소스파일 : 함수나 변수의 정의를 모아둔 파일, 실제 기능을 구현하는 곳
라이브러리 파일 : 소스파일을 코드가 아닌 컴파일된 기계어로 제공하는 파일, 주로 자신이 만든 기능을 배포,
프레임 워크 처럼 한 번 만들고 자주 수정하지 않는 기능을 포함시킬 떄 사용
C++의 전신인 C언어에서는 h와 c를 사용했다. C++이 되면서 이를 구분하기 위해 많은 확장자들이 생겼지만,
이번 강의에서는 비주얼 스튜디어가 기본으로 생성하는 h와 cpp를 사용하겠다. xcode등 다른 ide를 사용하면 기본
값이 다를 수 있다.
#include 지시사
우리가 만든 다음 코드의 컴파일 및 링크를 조금더 자세히 살펴보겠다.
MyHeader.h
#pragma once

int Square(int x);
Square함수에 대한 선언이다. 헤더는 크게 사용자가 만든 헤더와 시스템 헤더로 구분된다.
시스템 헤덩 : C++언어 및 standard library에서 기본적으로 제공하는 기능들이 있다.
이러한 기능들을 시스템 헤더라 부른다. ide정확하게는 컴파일어에 기본적으로 내장되어 있다.
사용자 헤더 : 프로그래머가 직접 만든 헤터

첫번째 전처리기 지시자인 #pragma once는 단 한번만 선언하라는 의미이다. #include를 사용하여 MyHeader.h를
여러 소스파일에서 포함시킬 수 있다.이럴 켱우 중복 선언 에러가 발생할 수 있다. 따라서 중복선언을 피하기
위해 #pragma once를 명시해 줘야 한다.

MySource.cpp
#include "MyHeader.h"

int Square(int x)
	return x * x;
Square함수에 대한 저으이이다. 기존 코드들과 차이점이 있다면 #include ""이다.

#include < ... > : 시스템 헤더 파일을 포함한다.
	정확하게는 시스템에 정의되어 있는 경로에서 찾는 다는 의미이다.
#include " ... " : 사용자 헤더 파일을 포함한다.
	정확하게는 다음과같이 여러번 탐색을 한다.
	1. 현재 소스가 있는 디렉토리
	2. 현재 헤더가 있는 디렉토리
	3. 시스템에 정의되어 있는 디렉토리
약간 의미는 다르지만, 통일성을 위해 시스템 헤더는 <>, 사용자 헤더는 ""사용하면 된다.

Main.cpp
#include <iostream>
#include "MyHeader.h"

using namespace std;

int main()
	cout<<Square(2)<<'\n';
	cout<<pow(2,2)<<'\n';
시스템 헤더는 #include <iostream> / 사용자 헤더는 #include "MyHeader.h"로 구분하여 포함시킨다.

컴파일과 링크
위 예제의 컴파일과 링크 과정을 조금 살펴보자. 우선 헤더와 소스파일의 관계를 살펴보자
기본적으로 헤더 파일은 컴파일에 사용되지 않는다. 대신 소스파일의 전처리기 지시다 .#include를 통해
소스 파일에 포함된다. 전처리기라고 부르는 이유가 바로 컴파일 이전 단계에 수해되어 소스파일을 수정하기 떄문

즉, MySource.cpp를 컴파일 할때는 내부적으로 다음과 같이 된다.
int Square(int x);

int Square(int x)
	return x * x;
#include 지시자가 MyHeader.h.를 포함시키기 때문에 헤더 파일의 내용에 해당 라인에 삽입되는 것

Main역시 마찬가지

int Sqare(int x);

usinng namespace std;

int main()
	cout<<Square(2),,'n\'

iostream의 내요ㅛㅇㅇ느 엄청나게 길고, 여러개의 다른 헤더파일을 추가로 포함하고 있기 때문에
개념으로만 이해하기바란다. 주의할께 이단계에서는 함수의 선언만 포함되며, 정의는 MYSouce에 속해있다.
수동으로 컴파일을 진행해 보자
1. 빌드 > 솔루셔 정리를 눌러서 현재 프로젝트의 중간 파일들을 모두 청소한다.
2. MySource.cpp를 열고 빌드 > 컴파일을 눌러서 컴파일을 진행한다.
3. 마찬가지로 main을 열고 빌드 컴파일을 누른다.
프로젝트 폴더를 Debug라는 폴더가 있고 해당 폴더를 열어보면 컴파일 결과물을 볼 수 있다.
컴파일러가 컴파일을 성공하면 각각 MYSource.obj, main.obj라는 목적어 파일을 만들어 둔다. 목적어 파일은 헤더 파일의
내용을 포함 시킨 후 다음 단계인 링크에 필요한 정보들을 미리 모아두는 것이다.

다음 단계는 링크이다. 위에서 만들어진 목적어 파일을 연동하여 실행파일을 만든 것이 링크이다.

정적 라이브러리와 동적 라이브러리
보통 프로그램을 제작하다 보면 외부 라이브러리라는 것을 많이 사용하게 된다. 다른 개발자가 미리 만들어 둔
유용한 기능을 가져다 사용하는 방식이다. 다른 개발자가 소스를 공개할 수도 있지만, 지적 재산권 문제나
개발 속도 측면에서는 이렇게 소스를 복사하여 사용하는 것은 좋은 방식이 아니다. 따라서 컴파일이 모두 끝난 obj파일
들을 한 번에 묶어서 링크에 사용할 수 있도록 해주는 것이 라이브러리다.

정적 라이브러리
정적 라이브러리는 정적, 즉 변경할 수 없다는 의미다. 한 번 만들어진 라이프버리는 lib파일로 사용하는데
이렇게 한 번 만들어진 내부 기능은 변경할 수 있는 방법이 없다. 만약 버그 수정이나 기능 추가등으로 인해 내용을
변경해야 한다면 lib파일을 재배포 하는 방법밖에 없다.
정적 라이브러리는 보통 헤더파일과 라이브러리파일을 제공하며, 이를 각각 컴파일/링크 단계에 추가해 준다.
헤더파일은 당연히 우리의 소스 코드에 직접 include를 통해 지정해 준다.
라이브러리는 외부 종속성에 추가해 주는데 비주얼 스튜디오에서는 다음과 같이 지정해 준다.

프로젝트 > 속성 을 누르면 나타나는 설정화면으로 링커 > 입력 > 추가 종속성에 추가할 라이브러리 파일을 
넣어 주면 된다.

동적 라이브러리
정적 라이브러리는 내용이 변경되어 라이브러리 파일을 재배포해도 큰 문제가 있다. 사용자가 해당 라이브러리를 갱신
하기 위해서는 자신의 프로젝트를 다시 빌드해 줘야 합니다. 가령 다음과 같은 예를 들어 보자
1. 게임의 피명적인 버그 발견
2. 디버그 해보니 외부 라이브러리의 버그로 새로운 버전으로 업데이트 필요
3. 새로운 라이브러리를 다운 받고 프로젝트 다시 빌드
4. 사용자에게 실행파일 재배포

위와 같은 흐름이 된다. 개발 프로세스에서 3번 이슈는 치명적이다. 상용 프로젝트는 빌드 한번 하는데 몇시간
씩 걸린다. 그리고 QA팀 입장에서는 프로젝트가 빌드되면 전체 검수를 다시 해야 한다.
최근에는 인터넷이 빨라져서 부담이 없긴 하지만 사용자에게 재배포 하는 이슈도 크다.

위와 같은 문제로 인해 잔머리를 굴려 만든 것이 실행시간에 링크가 가능한 동적 라이브러리이다. dll
동적 라이브러리는 링크 과정에서 간단한 정보만 남겨놓고, 실행 시간에 그 정보를 이용해 기능을 링크 하는 방식을
사용한다. 따라서 라이브러리의 기능이 변경되어도 다시 빌드할 필요 없이 간단히 라이브러리만 배포하면 된다.

이러한 동적 라이브러리는 헤더파일과 라이브러리파일 그리고 동적 라이브러리 파일을 제공한다.
동적 라이브러리의 lib는 정적 라이브러리으 ㅣ그것과는 달리 내부에 함수 본체와 같은 상세 정보는 없고 오직
정보만을 기록하고 있다. 함수 본체는 dll에 들어있다.

스택과 큐
컴퓨터는 기본적으로 입력을 받아 계산하고 출ㄹ력하는 것이다. 따라서 자료를 입력/출력으로 전달할 때나 계산에
사용할 때의 정보가 매우 중요하다. 기본 형인 정수만 사용해서는 표현 범위가 제한되기 때문에 다양한 방식을 사용하는데 
이러한 것을 자료구조하 부른다.
이러한 자료 구조 중 가장 기본적이면서 하드웨어ㅡ, 소프트웨어 구조 모두에서 사용되는 것이 스택과 큐이다.

스택
사전적으로 쌓는다는 의미다.
책을 쌓게 되면, 순서대로 위에서 부터 하나씩 꺼내야 한다. 가장 바다에 놓인 책을 뽑는 것도 않된다.
이러한 특성을 후입선출 또는 LIFO라고 한다.
스택은 가장 최근 작업이 중요한 경우에 주로 사용된다. 대표적으로 함수 호출 관리에 스택이 사용된다.

큐
사전적으로 줄을 서다라는 의미다.
가장 먼저 온 손님은 그만큼 오래 기다렸기 때문에 가장 먼저 처리해 줘야 한다.
큐는 여러 개 실행되는 작업을 순차적으로 처리할 때 사용된다. 대표적으로 윈도의 메시지 처리 및 프로세스 관리네
사용된다.
*/

/*
포인터
C,C++언어가 오랫동안 사랑받을 수 있었던 가장 큰 기능이 바로 이 포인터 이다.
하지만, 이 포인터의 문턱을 넘지 못하고 프로그램을 포기하는 경우도 많다.
가장 강력한 기능인 만큼 위험성도 매우 크다. 대부분의 게임 크러시 주범은 이녀석이기도 하다.
후속 언어들 역시 이런 포인터의 장점을 무시할 수 없다. 하지만 워낙 사용하기 까다로운 친구이므로
각자 자기들 언어에 맞게 안전한 형태로 포장해서 사용한다. 어쨌든 그 뿌리는 C언어의 포인터라는 개념이므로
이것만 잘 익혀 두면 다른 언어의 고급 기능도 쉽게 다룰 수 있다. 물론 C++이 조금 불편하네 라는 생각은 
들 수 있다.

포인터
지난 시간에 살펴 본 컴퓨터에서 변수가 처리되는 방식을 다시 한 번 살펴보자, 프로그램에서 사용하는 단순 변수는 특정 메모리의
위치(주소)에 특정한 크기(바이트)로 저장된다.
C언어 개발자는 이런 개념에서 만약, 변수의 주소에 직접 접근하면 편하겠다라는 생각을 하게된다.
우체국에서 수 많은 우편물을 효율적을 ㅗ분류하기 위해 우편번호라는 것을 도입한 것처럼

이렇게 주소를 저장할 수 있는 개념을 만들기 위해 도입된 것이 포인터이다. 포인터는 사전적 의미로 가르키고
있는 것 입니다. 즉, 컴퓨터 메모리의 어딘가를 가리킨다. 포인터는 이러한 메모리에 직접 접근함으로 써 변수를
제어한다. 이렇게 메모리의 주소를 담당하는 단항 연산자가 두개있다.

주소 연산자 & : 우측 변수의 줏를 반환한다.
포인터 연산자 * : 우측 변수가 주소를 가리키는 포인터 변수라는 것을 명시한다.

int x{ 0 } : 일반 변수 x를 선언한다.
int *p : 변수 선언에서 *을 붙이면 해당 변수가 주소를 지정할 수 있는 포인터 변수라는 것을 명시한다.
p = &x : &기호는 우측 변수의 메모리 주소를 가져오는 것이므로 p변수는 x의 주소를 가지게된다.
x = 5 : x라는 변수에 5값을 대입
std::cout<< &x : 100, x라는 변수에 현재 메모리 주소에 위치
std::cout<< p : 100, p라는 변수는 x의 메모리 주소 즉 100을 가지고 있다.
std::cout<< &p : 200, p라는 포인터 변수 역시 변수이므로 메모리에 할당되어 있으니 자신의 주소를 따로 가지고 있다.

이것이 포인터라는 개념의 기초, 여기서 중요한 것은 메모리의 주소를 가리키더라도 해당 메모리에 들어 있는 값들을 해석할 수 있다는 의미
즉 타입이다. 메모리는 연속된 공간이므로 시작 주소만으로는 데이터를 정확하게 해석할 수 없다. x라는 변수
즉, 100이라는 주소를 해석하기 위해서는 여기세 int형이 들어 있다고 알 고 있어야 4바이트만 참조해서
100이라는 숫자를 정확하게 가져올 수 있다.

int a{ 1 }, b { 2 };
int * p;
p = &a;
a의 주소를 지정해 줌으로 써 p는 a를 가리키게 된다.
p = &b;
b의 주소를 지정해 주면 p는 a와의 연결을 끊고 b를 가리킨다.
포인터 변수를 사용할 때는 * 연산자를 표시해 줘서 이 변수가 포인터임을 알려주고,
가리키고 있는 객체의 값에 접근할 수 있게 된다.
std::cout<<*p<<'\n';
p가 가리키고 있는 값을 출력하라는 의미가 되서 2가 출력된다.
포인터 변수의 특징 중 하나는 다음과 같이 변수가 가리키고 있는 곳의 값을 변경하 수 있다는 것이다.
*p = 3;

int* p; : 정수형 포인터 p의 선언
p = &b; : 포인터의 값에 b의 조수 배정
*p = 3; : p가 가리키고 있는 곳의 값에 값을 배정

&연산자를 사용하여 변수와 변수의 주소값에 대해 확인할 수 있다. 주소값은 실행환경에 따라 다르기 떄문에 매번
다른 주소일 수도 있다. 메모리 상으 ㅣ변수에 대해 조금 더 자세히 살펴보면 다음과 같이 주소, 이름, 크기와
실제 값을 가지고 있다.

포인터 변수는 타임과 상관없이 주소값만 저장하게 되므로 기본적으로 4바이트로 되어 있다.

포인터 연산

포인터 변수 역시 변수이므로 연산을 수행할 수 있다.

int a {1};
int* p = &a;

std::cout<<p;
std::cout<<p+1;
std::cout<<p+2;

가령 p가 가리키는 주소가 2000이라고 가정하자.
그럼 이 친구는 2001, 2002가 되나? 2004, 2008이 된다. 포인터 변수에서 중요한 것은 주소도 있지만 타입도
중요하다. 해당 메모리 주소를 어떻게 해석하느냐를 위한 타입이 포인터 역참조에서는 필수이기 떄문이다.
따라서 포인터의 연산은 타입의 크기 만큼 이동하게 된다.

즉, 다음과 같다.
p = p + sizeof(int) * 1;
그나마 다행인 것은 곱하기나 나누기는 지원핮 ㅣ않는다. 포인터에 대한 연산은 오직 +-만 가능하다.
이 친구가 매우 헷갈리는 개념이다.

아무것도 가르키지 않는 포인터
기본적으로 모든 변수는 초기화 될 때, 기본값이라는 상태가 있다. int라면 0,
그럼 포인터 변수도 초기값이 있다. 포인터 변수의 기본값은 널이라 부른다. 아무것도 가르키지 않는 포인터이다.
int* p{0};
널 포인터는 0이라 볼수도 있다.
int* p{NULL};
E또는 C언어 전처리기에 미리 정의된 NULL리터럴을 사용해도 된다.
C++11에서는 nullptr이라는 키워드가 준비되어 있다.
int* p{nullptr};
0으로 사용되고 있기 때문에 함수 오버로딩등에서 혼란을 가져오기 때문에 nullptr을 사용하자.

타입이 없는 포인터
기본적으로 포인터는 타입이 중요하다고 한다. 그런데 타입이 없는 친구가 있는데 그것이 void 포인터 이다.
이는 타입이 없으므로 누구나 가리킬 수 있다. 하지만 타입이 없어서 역참조가 불가능한 특성을 가지고 있다.
보이드 포인터는 다양한 타입의 변수를 지정할 수 있는 장점을 가졌다.
보이드 포인터가 역참조를 하려면 몇가지 단계가 필요하다.
(char*)p  : p는 char타입을 지정하고 있으므로 다음과 같은 형변환이 필요하다.
*(char*)p : char*에서 역참조를 수행하기 위해 별을 추가로 붙인다.

포인터의 포인터
포인터 변수는 변수의 주소값을 저장하고 있다. 그럼 포인터 변수의 주소를 처리할 수 있을까?
int a{10};
int* p = &a;
int** pp = &p;

std::cout<<a; a의 값
std::cout<<*p; a의 값
std::cout<<*(*pp); pp가 가리키는 곳의 주소가, 가리키는 곳의 값을 출력 a
std::cout<<pp<<" : "<<*pp; pp의 주소와 p의 주소

중첩된 포인터라고 하더라도 오른쪽 부터 왼쪽으로 읽어 나가면 단순히 포인터 개념일 뿐이다.

구조체와 포인터


*/