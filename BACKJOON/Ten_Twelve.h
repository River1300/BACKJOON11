#pragma once
/*
절차적 프로그래밍
정렬 알고리즘 및 자료구조를 실습해 봤는데 불편한 점이 있다.
거의 비슷한 기능을 매번 다시 구현해야 했다. 단일 연결 리스트와 이중 연결리스트는 구조체
멤버 하나만 다를 뿐인데, 모든 함수들을 다시 작성해야 했다.
이런식으로 프로그램으 ㅣ기능을 함수 단위를 바탄으로 작성하는 것을 절차적 프로그래밍이라 부른다.
함수를 다른 말로 프로시저라고도 부르기 때문에 절차적이라 함은 함수들로 프로그램을 작성한다는 의미가 되낟.

객체 지향 프로그래밍
이것이 C++의 핵심이다. ㅇ객체 지향 프로그래밍에 대해 언급하기 전에 객체가 무엇인지 알아보자
Object 객체
	현실 생활을 둘러싼 대상을 하나의 객체라고 볼 수 있다. 사람 한 명 한 명 자동차 한 대 하 ㄴ대
	건물 하 나 한하 각각 객체들이다. 이런 객체들이 모여서 현실 생활을 만들어 낸느 것이다.
	마찬가지로 우리가 만드는 프로그램도 객체들로 구성된 하나으 ㅣ큰 집합이다. 현실 세계를
	모델링 하듯이 프로그래밍을 하는 방법이 바로 객체 지향 프로그래밍이다.
	객체는 다음과 같이 상태와 행동을 가지고 있다. 옆 동네에서 객를 한마리 대여롸 보자.
Class
	클래ㅡ라는 것은 객체를 표현하기 위한 설계도 또는 틀이라고 보면 된다. 즉, 옆집 개를 나타내기 위해서는 일반적인
	개를 묘사해야 한다. 위 상태와 행동을 모두 가지고 있어야 한다.
	이런 추상적인 정보를 이용해서 옆집 개를 묘사할 수 있는데 이런 추상적인 정보를 클래스라 부른다.
	많이 보던 구조체와 매우 유사하지만 변수 말고 함수도 포함된 개념이다.
인스턴스
	추상적인 클래스에서 구체적인 객체를 생성하는 것이 인스턴스화이다. 이렇게 만들어진 객체를 인스턴스라 부
	른다.
	인스턴스의 사전적 의미는 예, 사례라는 뜻이다. 추상적인 개에서 하나으 ㅣ구체적인 사례를 만든 것이기 때문
	에 이런 단어를 사용하낟. 그럼 클래스로부터 객체를 인스턴화 해보자.
	구조체 변수를 정의하는 것과 큰 차이가 없다.
	Dog라는 추상적ㅇ니 개념에서 똘이라는 이름을 가진 구체적인 사례를 만들어 냈다. 동일하게
	이런 방식의 Dog라는 클래스로 부터 옆짐 뒷집 개도 무두 객체로 만들 수 있다.
	객체의 상태나 행동에 접근하려면 .을 찍어서 접근하면 된다. 위에서는 똘이의 상태 세부 정보를
	설정 하고, 짓기와 구르기 행동을 수행하도록 한 것이다.
C++의 클래스 워낙 OOP 언어들이 많아서 간단히 정리하면 된다.
상태와 행동은 OOP의 일반화된 개념이고, 각 언어별로 이러한 개념을 서로 다른 표현으로 사용하고 있다.
OOP의 특징
	흔히 OOP는 5가지의 특징을 가지고 있어야 한다고 한다.
		객체
		클래스
		캡슐화
		상속
		다형성
	캡슐화
		캡슐이라는 것은 무엇인가를 안에 집어 넣고 케이스를 씌운 것을 말한다. 가챠라던가 알약이라던가 등등
		캡슐이다. 이런 캡슐화의 기본적인 목적은 안에 무엇이 들어 있는지 모르게 하는 것입니다. 가챠 내용물을 안다면 가치가
		떨어질 테고,
		알약의 내용물을 안다면 환자가 먹지 않을 수도 있다. 게다가 내용물을 모르지만 항상 정량이고 
		내용물을 신경쓰지 않아도 된다.
		가끔 캡슐화는 정보 은닉의 개념으로 사용되기도 한다.
		불필요한 정보는 노출시키지 않고, 괜히 건드려서는 좋을 것이 없는 ㅓㄳ은 숨겨둔다.
	상속
		상속 또는 파생이라 부른다.
		위에서 서술한 옆집 개를 조금 더 넓은 의미로 살펴보면 다음과 같다.
		위 그림과 같이 각 객체들은 상관관계를 가지고 있으며 옆집 개 똘리는 개라는 상위 개념ㅇ을 가지고
		있다. 조금 더 상위로 동물이라는 개념도 가지고 있다. 이러한 계층 구조를 
		상속이라 부른다.
		여러 가지 용어가 있는 대 역시 한번 정리하자.
		나이와 색상은 모든 동물이 가지고 있는 상태이다. 개는 그런 동물의 상태를 그대로 이어받고, 개만의
		고유한 품종 상태를 가지고 있다. 행동 역시 마찬가지
		개를 인스턴스화한 똘이는 동물의 상태행동을 모두 가지고 있으며 개의 상태행동 역시 가지고 있다.
	다형성
		똘이는 개이면서 동물이다. 즉, 하나으 ㅣ객체가 어떤 경우에는 동물로 취급되고 어떤 경우에는
		개로 취급될 수 있다.
		상황에 따라 서로 다른 형태로 사용되는 것을 다형성이라 한다.
		이러한 다형성은 포인터를 통해서 얻을 수 있는데, 객체가 존재하는 메모리를 가리키는 포인터를 다음과 같이
		다양하게 해석할 수 있갇.
		옆집 개 똘이는 동물이다. 따라서 똘이를 동묽로 취급할 수 있다. 당연히 동물의 행동을 수행할 ㅅ ㅜ있고
		동물이 개라는 것을 명확하게 해 준 다음에는 개의 행동도 수행할 수 있다.
기타 용어
	생성자/ 소멸자
	객체가 생서욀때 불리는 것이 생성자이고 사라질 때 불리는 것이 소멸자 이다.
	C++에서 객체를 만들 때는 항상 생성자가 가장 먼저 작동한다.
	마찬가지로 소멸될 때 소멸자가 불린다.
	정적 맴버
	상태행동은 각 개체 고유한 값으로 만들어진다. 클래스로 똘이를 객체화 하면 상태행동은
	똘이라는 객체에 종속되어 진다.
	이런 특성과 반대되는 것이 정적 멤버로 static이라는 키워드가 붙는다.
	이렇게 정적ㅇ니 상태 행동은 클래스를 인스턴스화 해서 객체로 만들지 않아도 클래스에서 바로 사용할 수 있다.
	추상클래스
	추상클래스는 추상적인 개념을 담고있기 때문에 추상클래스 스스로 인스턴스화 할 수 없다.
	이를 인스턴스화 하려면 추상 클랫ㅡ를 상송 받아 자식 클래스에서 인스턴스화 해야 한다.
	아래에 설명할 인터페이스와 비슷하지만 여러 자식 클래스에서 공유할 수 있는 부모 클래스의 공통적인 정의를 제공하는 것이 추상 클래스으 ㅣ목적이다.
	추상 클래스는 추상 상태와 추상 행동을 가질 수 있는데 이 추상 메서드는 구현이 없이
	정의만 들어있다. 추상 클래스를 상송한 자식 클래슨느 무조건 이 추상 매서드를 구현해 줘야 한다.
	인터페이스
	서로 다른 두 장치를 접속시켜주는 부분이라는 뜻의 인터페이스는 USB와 같은 것을 의미한다.
	가령 A사 키보드를 USB로 컴퓨터에 꼽으나 B사 키보드를 꼽으나 타이핑은 정상적으로 잘된다.
	표준 입력 방식을 정해 놓고 이를 각 키보드사가 규격을 지키도록 가각의 방식으로 설계한다.
	이런 규격을 인터페이스라고 하며 C++에서는 추상 클래스를 사용하여 설계한다.
	보통 인터페이스는 상태는 없고 행동만 있으며, 실제 행동을 구현하지는 않는다.
	즉 빈 껍데기만 있으면 실제 구현은 이 인터페이스를 상속받은 클래스에서 구현해 준다.
*/

/*
POD
	직역하면 간단하고 오래된 데이터라는 의미로 단순한 메모리 구조를 가지는 객체를 말한다.
	Old에서 추측할 수 있겠지만 C언어에서 제공되는 타입들이 POD이다.
	POD의 장점은 원본 메모리에서 다른 메모리로 복사나 이동이 매우 쉬워서 컴퓨터 성능에 큰 부담이 없다는
	점이다.

	클래스를 작성하며 느끼겠지만 내부 구조가 복잡해지고 직접 메모리를 관리해야 하는 경우들이 생기는데 이런
	친구들은 POD에 속하지 않는다.

	C++에서는 POD다음과 같은 의미론으로 정의해 두었다.
		표준 레이아웃 타입
		C언어와 같은 레이아웃을 가지고 있다고 본다.
		간단한 타입
		사용자가 정의한 매우 간단한 자료 구조를 말한다.
	POD가 되기 위해서는 = default 키워드로 암시적 기본 생성자를 명시해야 한다.
무명 객체
	변수 초기화가 클래스 생성자와 비슷하게 생김
	다시 정리하자면 지금까지 사용한 일반 타입들 역시 내부에서는 객체로 처리된다.
	지금까지 살펴본 변수의 특성은 사실 C++객체의 특성이라고 볼 수 있다.
	return x * x;
	이번에는 반환값에 대해 조금 더 살펴보겠다.
	일반 타입 역시 객체라고 생각해 보면, 위 코드는 x * x를 담아 둘 수 있는 임시 객체가 필요하다.
	계산 결과를 저장한 다음 반환해야 하니까.
	즉 다음과 같다.
	int temp = x * x;
	return temp;
	컴파일러 내부에서는 이 작업이 이뤄진다만 임시로 사용하는 객체로 해당 코드 이외에는 사용할 필요가
	없으므로, 굳이 변수명을 붙이지 않고 사용한다. 이를 이름없는 객체라 부른다.
	즉 위 코드에는 다음과 같은 작업이 숨어 있다.
	quare(x)에서 x가 리터럴 2로 치환
	인자 2가 Square(int x)의 매개변수 x에 복사
	x * x를 무명객체에 저장
	무명 객체 반환 & 소멸

	반환값을 살펴봤다고 해서 무명객체가 반환할 때만 생성되는 것은 아니다. 대부분의 연산식에 이런 무명객체가
	사용된다.
	클래스를 사용하면ㄴ 객체가 생성될 때를 추적할 수 있으니, 무명객체를 직접 살펴본다.
	일반 타입 int와 비슷하게, 간단한 정수 멤버오 ㅏ초기화 및 + 연산자를 가지고 있다.
	int로 살펴본 예제들을 클래스로 변환해서 살펴보면 실제로 생성한 C1, C2이외에ㅗ 생성자가 3번 불리는 걸
	볼 수 있다. 이들이 무명 객체이다.
	+연산자를 오버로딩한 코드는 위와 같이 새로운 객체를 만들어서 반환해야 하조. 여기서 만들어지는
	겁니다.
	다음으로 테스트에 사용한 Square() 함수를 살펴본다. 이 친구는 CallByValue이므로 조금 더 효율적으로 만들기 위해 참조형
	을 사용해 보자.
*/

/*
C++ 프로그래밍은 클래스로 시작해서 클래스로 끝난다.
	클래스의 정의
		Class <클래스 이름>
			[접근제한자1] :
				<멤버>
					[접근제한자2] :
						멤버
						...
	클래스는 멤버들의 집합으로 이뤄진 데이터 형식이다.
	클래스의 크기는 구조체와 마찬가지로 멤버에 따라 변한다. 하지만 클래스의 크기에 멤버 함수는
	영향을 주지 않는다. 구조체와 동일한 방식으로 8바이트만 사용되며 멤버 함수는 시그니쳐 정보로 개별 처리되어 
	Cat::Meaw() 형태로 다른 함수들과 함께 특정 공간에 일괄 저장된다.
접근제한자
	클래스는 내부에서 사용되는 데이터는 다음의 3가지 방법으로 숨길 수 있다.
	public
	protected
	private
	클래스 내부/외부에서 모두 사용이 가능하다. 멤버함수는 물론이고, 객체로 만든 후 객체를 통해서도 읽고/쓸수있다.
	자신과 자신을 기반으로 하는 파생클래스에서 사용ㅇ ㅣ가능하다. 자신의 멤버함수 및 파생된
	멤버함수에서 읽고쓸수있다.
	클래스 내부에서만 사용이 가능하다. 기본 값으로 생략하면 private이다.
	즉, 멤버 함수에서만 해당 변수를 일고 쓸수 있다.
	접근 제한자는 동일한 속성을 묶을 수도 있고, 여러 번 사용해도 되기 때문에 보기좋은 코드를 작성할 때 사용하면된다.
이름 규칙
	클래스의 이름 규칙은 다음과 같은 룰을 사용한다.
	클래스 이름 첫글자 대문자 및 나머지 소문자
	멤버 변수 소문자.
	멤버 함수 파스칼 표기법
	이런 표기법은 소속팀마다 전부 다르기 때문에 유연하게 대응하는 것이 좋다.
클래스와 구조체
	멤버 함수를 제외하면 거의 구조체와 비슷하다. 사실 구조체는 모든 멤버가 public인 클래스의 일부분이라고 봐도 된다.
	즉 이미 여러분은 클래스를 알게 모르게 사용하고 있던 것
	게다가 C++에서는 구조체에 멤버함수를 작성해도 전혀 문제 없다.
	구조체 : 멤버 변수들만 존재하는 자료구조
	클래스 : 멤버 함수가 필요한 자료구조

멤버 함수의 구현
	멤버 함수는 당연히 본제가 있어야 한다. 클래스 선언 내부에 간단히 다음과 같이 만들 수 있다.
	위와 같이 간단한 함수는 이렇게 작성해도 보기 불편함이 없다.
	멤버 함수도 정의를 분리할 수 있다.
	반환형 클래스이름::함수명(매개변수 목록)
		반환
	일반 함수와 거의 비슷하지만 이 함수가 클래스에 속해 있다는 것을 알리기 위해
	몇가지 차이가 존재한다.
	위와 같이 두 개의 클래스가 있을 경우를 생각해 보자. 두 멤버함수는 동일한 이름이기 때문에
	구분해 주지 않으면 함수를 구현하기 어렵다.
	멤버 함수의 특징을 정리해 보면 다음과 같다.
		범위해결 연산자
			클래스이름::함수명 형태로 멤버함수의 소속 클래스를 명시한다. 이러현 ::를 범위 해결 연산자
			라 한다.
		접근제한자 생략
			함수의 선언에 이미 존재하므로 정의에는 생략한다.
	멤버 함수를 하나 더 만들어 보자. mAge 멤버는 private이라서 외부에서 접근할 방법이 없다.
	하지만 외수에서 mAge를 사용할 경우에는 어떻게 할까?

	private멤버변수는 클래스 내부에서만 접근이 가능하다고 했으므로 멤버 변수는 멤버 함수에서 제한 없이 사용이
	가능하다. 위와 같이 public으로 된 멤버 함수를 사용해서 그 값을 돌려주면 mAge변수에 신경쓰지 않고
	값을 구할 수 있다는 장점이 있다.

	멤버 함수의 선ㅇ너 순서
	이 코드는 f1() 단계에서 f2()가 선언되어 있지 않으므로 에러가 발생한다.
	하지만 멤버함수들은 이런 제약이 없다.
	클래스의 선언은 모든 내용이 마무리되는;을 만나는 순간 이뤄지는 것이므로 멤버함수들은
	그 존재를 서로 알고 있다.

this
	여기서 문제 mAge는 누구 것일까?
	비교를 위해 구조체와 일반 함수로 간단히 만들어 보자.
	위와 같이 Dog라는 타입의 객체에서 mAge를 반환해야 한다. 따라서 매개 변수로 객체를 반드시 넘겨주어야만
	해당 객체의 멤버를 접근할 수 있다.

	클래스 멤버함수의 경우를 살펴보자.
	mAge는 어떤 객체를 참고해야 할까? 이건 이 함수를 호출하느 쪽을 비교해 보면 알 수 있다.
	구조체 멤버함수
	멤버함수는 사용할 때 명시적으로 객체를 적어 주어야 한다.
	그렇기 때문에 멤버 함수는 항상 어떤 오브젝트에서 호출된 것인지 알고 있으므로 함수에 암시적 객체가
	존재한다고 가정할 수 있다.
	따라서 위 문제에 대한 정답은 Dog 클래스로 인스턴스화한 오브젝트의 멤버라는 점이다.
	클래스는 단순히 청사진 용도로 타입을 만드는 것 일 뿌니며, 실제 값은 메모리에 이름을 붙여서 할당한
	인스턴스가 들고 있다는 점을 주의해야 한다.

	이런 암시적 오브젝트를 명시적으로 사용하기 위해서는 this라는 키워드를 사용할 수 있다.
	this는 멤버 함수를 호출한 객체의 포인터를 나타낸다.
	
	this는 포인터라는 사실을 명심해야 한다.
	this는 객체 자신을 반환하거나 할 때 유용하게 사용되는데, 다음에 연산자와 관련된 기능를 살펴볼 때 
	추가로 설명한다. 모든 멤버 함수에서는 this라느 포인터가 존재한다.

멤버 함수 구현 분리
	지난 번 헤더 파일과 소스 파일의 예를 한 번 살펴봤다. 클래스는 어떤 식으로 구분할 까?
	헤더 파일 : 클래스의 정의
	소스 파일 : 멤버 함수 구현
	위와 같이 분리한 후 해당 클래스를 사용할 곳에서 헤더 파일을 포함시키면 된다.
	비주얼 스튜디오에서는 위와 같이 클래스를 개별 파일로 분리하는 작업을 도와 주는 기능이 있다.
	솔루션 탐색기의 소스 폴더에서 우클릭한 후 "추가 -> 클래스"를 눌러 주세요.
	그러면 헤더와 소스파일을 만들어 준다.

	가장 상단에 #pragma once가 자동으로 붙어 있다. 단어에서 추측할 수 있듯 이는 헤더 파일의 선언들을 오직
	한 번만 포함시키라는 의미다.

	이렇게 선언을 마치고 나면 정의를 간단히 만들 수 있는 기능도 있다.

클래스 객체의 사용법
	해당 형식으로 이름을 부여하고 선언하면 메모리에 할당되는데 이를 인스턴스화라고 부르며 생성된 객체를 인스턴
	스라 한다.

	Dog는 클래스이며 myDog는 Dog 클래스의 인스턴스라 부른다.
	클래스 멤버에 접근하기 위해서는 구조체와 마찬가지로 점 연산자를 사용하면 된다.
	myDog.mWeight = 2; : mWeight멤버에 2를 대입한다. public이므로 외부에서도 읽기/쓰기가 가능하다.
	myDog.mAge = 10; : mAge멤버 변수에 접근하려 하지만, private멤버이므로 클래스 외부에서는 접근이 허
	용되지 않는다.
	구조체와 마찬가지로 동적 할당 역시 가능하다. 포인터인 경우에는 화살표 연산자를 사용하면 된다.

캡슐화와 정보 은닉
위 클래스에서는 mAge가 private로 설정됭 ㅓ있어서 외부에서 값을 수 정할 수 없다.인텐리센스에는 표시되지도
않아서 존재하는 지도 모르고 사용할 수 있게 된다.

왜 이렇게 멤버를 숨겨햐 할까?
스마트폰은 통화 아이콘으로 간단히 다른 사람과 통화할 ㅅ ㅜ있는 기능을 제공하나.ㄷ 하지만 사람의 음성이
어떻게 디지털로 변환되고 무선 신홀ㄹ 타고 전송되는지 알 필욘없다.
마찬가지로 카메라도 그ㅓㅎ다.
이렇게 사용자에게 노출된 기능을 인터페이스라 부르며 이들을 내부에서 복잡한 기술로 작송시키는 것을 구현이라
한다.

캡슐화
	객체를 특정짓는 상태와 행동을 하나로 묶어서 관리하는 것을 캡슐화라 한다. 병원에서 처방을 받으면 알약을 받을 
	것이다. 캡슐형 알약은 내부에 무엇이 들어 있어도 모르고 간단히 복용할 수 업는 것 처럼 외부에서 객체를
	볼 때 단 하나으 ㅣ캑슐만 파악하면 되고 내부의 상태 행동은 몰라도 되도록 해 주기 때문에 명료한 프로그램 작성을 도와준다.

	3D모델링 데이터를 처리하는 클래스가 있다고 가정해 보자. 그럼 우리는 간단히 다음과 같이 화면에 캐릭터
	를 그릴 수 있다.
	복잡한 구현은 캡슐에 들어 있고 간단한 Load(), Draw()와 같은 인터페이스 만드로 화면에 3D 캐릭터를 그릴
	수 있다.

	캡슐화라는 장ㅂ점을 더욱 더 살리기 위해 클래스는 만은 것들을 내부에 포함할 수 있다.
	다른 크랠스나 구조체를 내부에 선언할 수도 있고 열거형과 같은 타입의 정의도 내부에 포함시킬 수 있다.

	색상을 표현하기 위한 Color 열거형과 장난감 객체를 위한 Toy 클래스를 Dog 내부에 선언 했다. 
	Color는 public이므로 외부에서도 사용이 가능하지만 Toy는 오직 클래스 내부에서만 사용할 수 있다.

	클래스 내부의 public 형식을 외부에서 사용하려면 범위 해결 연산자를 사용하면 된다.
	std::cout과 같은 형태로 어디에 속해 있는지를 명확하게 지정해 줘야 사용할 수 있다.

	이렇게 클래스 내부에 다른 자료형을 선언하는 것은 매우 유용하다. 고양이 클래스를 하나 만들자.

	동일한 이름을 가진 Color 열거형이 또 나왔나. 이를 클래스 외부에 사용하려면 이름이 충돌하기 떄문에
	동일하게 지을 수 없다. 클래스 외부에서 사용하려면 DogColor, CatColor와 같이 변수 이름을
	다르게 지정해 주고 DOG_WHILT, CAT_WHILT처럼 열거형 우너소들도 다른 이름으로 지정해 줘야 한다.

정보 은닉
	또한 캡슐화를 사용하여 외부에 불필요하거나 보안이 필요한 정보들을 숨길 수 있는데, 이를 정보
	은닉이라 한다.
	전역 변수와 같은 경우는 외부에서 마음대로 수정할 수 있어서 위험하다고 언급드렸다. 같은 이유로
	클래스의 멤버들도 숨겨두는 것이 안전한 경우가 많다.
	인벤토리 클래스를 사용하는 프로그래머가 위와 같이 작성하면 치명적인 에러가 발생한다. 
	이런 경우는 itemss를 숨기고 함수로 안전하게 처리하는 인터페이스를 만들어 주는 것이 좋다.

	이렇게 데이터를 숨기고 입력값이 안전한지 확인한 다음 반환하는 인터페이스를 제공하면 프로그램의 안정성도 매우 올라간다.
	이렇게 데이터의 정확성과 일관성을 유지하는 것을 무결성이라 부른다.

상수 멤버 함수
	상수 키워드는 지금까지 상수 선언, 매개변수의 상수 두 가지 경우를 살펴봤다. 멤버 함수도 상수 함수로 만들 수 있다.
	
	반환형 함수이름(매개변수) const;
	위와 같이 멤버 함수 선언 뒤에 const 라고 붙이면 이 멤버 함수는 상수 함수가 되며, 함수 내부에서
	클래스으 ㅣ멤버 어떤 값도 변경하지 않는다는 의미가 된다.

속성
	이러한 속성을 C++에서는 컴파일러 기능으로 지원하지 않지만, 멤버 함수를 통해 구현할 수 있다.
	이를 Getter Setter라 부른다. 영어 달력 클래스를 하나 살펴보자. 내부에서는
	연산을 위해 원을 정수로 관리하겠지만, 실제 사용자가 달력을 볼때는 제뉴어리와 같은 문자열을 보게
	되어야 하낟.
	위와 같이 내부에서 사용하는 데이터는 private로 접근을 막고 public 멤버 함수로 개터 새터를 만들어
	두면 설계하느 사람이나 사용하는 사람이나 실수도 적고 코드 읽기도 수월해 질 것이다.
*/

/*
생성자와 소멸자
기존 타입의 변수를 생성할 때 선언과 정의에 대해 설명했었다.
일반 타입의 변수는 위와 같이 기본값으로 초기화하거나 간단하게 초기값을 지정할 수 있다.
이 두가지를 편리하게 처리해 주는 C++유니폼 초기화식도 있다.

클래스 객체는 어떻게 될까. 멤버가 여러개 존재하므로 단일 표현식으로는 처리가 어렵다.
특히나 동적 객체들을 멤버로 가지고 있다면, 메모리 할당에 대한 복잡한 기능이 추가되어야 하므로 위와 같이 정의로는 불가능 하다.
게다가 캡슐화로 멤버를 숨긴다면?

이런 애매함을 해결하기 위해 C++클래스는 생성자와 소멸자라는 개념을 추가했다.

생성자
	클래스의 객체가 인스턴스화될 때 자동적으로 호출되는 특별한 멤버함수가 생성자이다.
	생성자는 클래스의 유효한 인스턴스를 생성하는 것을 담당하는데, 그 자료 멤버들을
	적절히 초기화 하는 것을 책임진다.

	클래스 생성자는 다음과 같은 규칙을 가지고 있다.
		클래스와 동일한 이름
		대소문자 모두 일치
		반환 타입 없음
		void 조차 없음

소멸자
	클래스 객체가 소멸될 때 객체가 사용하던 자료를 깨끗하게 징는 것을 담당하는 특별한 멤버함수가 소멸자
	소멸자는 다음과 같은 규칙을 가지고 있다.
		클래스와 동일한 이름에 접두어로 ~ 물결표를 붙인다.
		매개변수가 없다.
		반환타입도 없다.

	이렇게 이름을 붙여두긴 했지만 클래스가 생성될 때, 소멸될 때 자동으로 호출되는 함수라고 이해해
	두면 된다.

	위와 같은 형태가 생성자/소멸자이다. 이 코드에서는 MyClass로 인스턴스 c1을 만들고 어떤 멤버도 부른적이 없지만,
	실행해 보면 각각 생성자와 소멸자가 호출되는 것을 볼 수 있다.

	클래스 인스턴스 역시 기본적인 변수의 생성주기에 따라 자동으로 생성과 소멸이 이뤄지는데, 생성자와 소멸자는
	그 과정에서 사용자가 직접 개입해서 기능을 작성할 수 있다.

	그런데 지금까지 설명한 클래스 예제들에서는 생성자를 만들지 않았다. 생성자나 소멸자를 아예 제공하지 않
	으면 C++ 컴파일러는 기본 생성자를 자동으로 만들어 준다. 물론 내부에서는 특별한 일은 하지 않는다.
	뒤에 더 자세히 살펴보자.

	마지막으로 동적 메모리 할당에서 메모리를 할당하면 반드시 해제하는 습관을 들이라고 언급한 것 처럼,
	클래스 역시 생서자를 만들면 소멸자를 반드시 생성해 주는 것이 좋다.

생성자
	생성자에 대해 더 자세히 살펴 보자. 생성자는 주로 멤버 변수들을 초기화하는 용도로 사용되는데, 기본값
	혹은 사용자 지정값으로 하게 된다.

	생성자는 크게 다음의 두 가지 목적으로 사용한다.
		멤버 변수 초기화 기본값으로 초기화하거나 사용자가 넘겨둔 값으로 초기화하게 된다.
		필요한 기본 작업 멤버 변수 이외에도 자료구조를 준비하거, 사용할 데이터 파일을 불러오는 등의
		내부 작업이 필요하다.

	그런데 유니폼 초기화식으로 멤버를 초기화 할 수 있는데 생성자라는 별도의 기능이 필요할 까?
	위와 같이 유니폼 초기화는 public멤버들만 초기화 할 수 있으므로 에러가 발생한다. 따라서 사용자가
	원하는 값으로 초기화할 수 있는 생성자는 꼭 필요한 기능이다.

	기본 생성자
		기본 생성자는 매개변수가 없는 생성자의 형태로 멤버들을 기본값으로 초기화하는 생성자라 봐도 된다.
		인스턴스 q1은 인스턴스화할 때 아무런 인자를 넘겨주지 않는다. 이 때는 자동적으로 기본 생성자가 불려
		진다.

		이 과정을 좀더 살펴 보면
			1. Quest타입에 맞는 메모리 준비
			2. 메모리 공간에 이름 q1이라고 붙여서 객체 준비
			3. 생성자를 호출하여 초기화
			4. 생성자의 본제에서 mID = 1 대입 문을 통해 멤버 지정

		위 코드에서도 확인할 수 있지만 기본 타입(int)는 선언만 하고 초기화를 하지 않으면 쓰레기 값을 가지고 있다.

	생성자의 형태
		기본 생성자는 기본값으로만 초기화할 수 있으므로 사용자가 원하는 값으로는 초기화할 수 없다.
		생성자는 인스턴스 생성과정에서 자동으로 호출되는 특별함수 이긴 한다. 기본 적으로
		사용법은 함수랑 동일하다. 따라서 다음과 같이 매개변수가 다른 동일한 생성자도 여러개 만들
		수 있다.
		이제 퀘스트 클래스는 기본생성자와 매개변수를 2개 가지는 생성자 총 2개의 생성자를 가지고 있다.
		지난 시간에 반환값과 이름이 같고 매개변수가 다른 것을 오버로딩이라 설명했었다.
		생성자들 역시 동일한 규칙이 적용되서 매개변수만 다른 형태가 하나의 함수에 같이 존재할 수 있다.
		q1 q2인스턴스화에 모두 함수 형태로 생성자를 사용한다고 가정해 보면 위와 같은 표현이 맞다.
		하지만 q1은 에러가 발생한다.
		퀘스트를 반환하는 q1이라는 이름을 가진 함수의 선언으로 해석하기 때문이다. q2는 명백하게
		인자를 넘겨주기 때문에 함수 호출이라고 인식할 ㅅ ㅜ있으므로 생성자를 사용하게 된다.
		그럼 이제 유니폼 초기화와 함수 호출 형태의 생성자 사용법을 비교해 보자.

		Quest q1; 매개변수가 없으므로 기본 생성자.
		Quest q2(2, 100); 함수를 호출하는 형태로()표기안에 매개변수를 넘겨준다.
		Quest q1{}; 유니폼식을 사용했지만 역시 기본 생성자.
		Quest q2{2, 100}; 유니폼식을 사용하여 매개변수를 넘겨줄 수 있음
		Quest q3{3}; 잘못된 포기 같지만 매개변수 2개를 받는 생성자의 두번째 매개변수가 기본 값을
			가지고 있으므로 이 표기도 정상.

		역시 유니폼 초기화가 공통된 스타일을 가지고 있어서 이해하기 좋다.

		마지막으로 생성자가 많으면 오버로딩이 많아 지는 것이라 코드가 매우 햇갈린다.
		위 생성자는 다음과 같이 같략화 하는 것이 좋다.

	유니폼 초기화
		생성자를 잘 보면 변수의 초기화와 비슷하다는 것을 알 수 있다. 생성자를 통한 초기화와
		지금까지 배운 방식을 모두 정리해 보자.

		int a = 2; 복사 초기화 배정문을 통해 값을 대입하는 방식
		int b ( 2 ); 직접 초기화 함수 형태로 초기화를 수행하는 것으로 생성자와 같은 방식
		int c { 2 }; 복사/직접 초기화는 일부 타입에서만 작동하는데 모든 객체에 동일하게 작동하는 방식
		int d = { 2 }; 유니폼 초기화로 객체를 생성한 후 복사하는 방식

		Quest q1 = Quest(); 복사 초기화 새로 객체를 만들어 배정한다.
		Quest q2 ( 2, 1.0f ); 생성자를 직접 호출하여 초기화 한다
		MyClass c3 { 2, 1.0f }; 유니폼 초기화 퍼블릭 변수들을 초기화하는 유니폼 초기화 이다.
		MyClass c4 = { 2, 1.0f }; 유니폼 초기화를 사용하면 적절히 MyClass 객체로 만들어 준다.

		과거에는 함수 형태만 사용했지만 C++에서 무조건 유니폼 초기화식에 익숙해 지는게 좋다.
		표기가 동일한 것 이외에 몇가지 장점이 더 있다. 축소 변환을 잡아주는 건 이미 상펴봤다. 그 이외
		에도 OOP에서 장점이 많은 그건 뒤에서

		주의할 점은 클래스의 복사 초기화는 당연히 멤버가 많으면 많을 수록 느려질 테니 가급적 사용을 피하여
		한다.이ㅘ 관련된 내욜은 다음에

		int* p{}; 정수를 가리키는 포인터 p를 nullptr로 초기화
		MyClass* pClass{}; MyClass를 가리키는 포인터 pClass를 nullptr로 초기화
		MyClass* pClass{ new MyClass{} }; MyClass를 동적으로 생성한 다음 기본 생성자를 호출하여 초기화한 후
			plass 포인터가 가리키도록 지정

	암시적 기본 생성자
		생성자를 설명하기 전까지 살펴본 예제들은 생성자를 만든 적 없다. 바로 이전 생성자도 만들지 않았다.
		이렇게 프로그래머가 생성자를 제동하지 않으면 C++ 컴파일러는 자동적으로 암시적 기본 생성자를 만들어
		준다. 그렇지 않으면 MyClass의 인스턴스를 만들 수 없으니까

		당연히 암시적 기본 생성자는 코드의 편의를 위해 제공하는 기능이므로 멤버 초기화는 전혀 하지 않느다.
		즉, 생성자 본체는 텅 비어 있는 함수다.

		그럼 위와 같이 단순한 클래스에서 기본 값을 지정하려면 어떻게 해야 할까
		이미 구조체에서 다뤄밧다. 구조체가 클래스의 개념과 비슷하므로 당연히 멤버 변수 초기화 기능을
		사용할 수 있다.

		암시적 기본 생성자의 조건은 프로그래머가 생성자를 만들지 않았을 때 이다. 따라서 사용자가
		하나라도 생성자를 제공하면 암시적 기본 생성자는 만들어지지 않는다.

		그럼 위와 같이 매개 변수가 있는 생성자가 존재하는 클래스에서 기본 생성자를 사용하고
		싶으면 어떻게 해야 하나? 위에서 살펴본 기능으로 기본 생성자를 추가하려면 다음 두가지 형태가 있다.

		기본 인자를 가진 생성자 추가
		기본 생성자 추가.

		C++11부터는 이런 프로그래머의 의도를 조금 더 명시적으로 표현할 ㅅ ㅜ있도록 default라는 키워드가
		추가되었다.
		
	주의할 점은 객체의 생성 순서이다.
		main() ClassB타입으로 myClass를 인스턴스화, 즉 ClassB가 만들어 진다.
		ClassB ClassB는 멤버로 ClassA mA를 가지고 있으므로 ClassB를 생성하기 전에 ClassA를 먼저 인스턴스화
		해야 한다.
		ClassA 기본 생성자가 호출되어 객체 생성 ClassA::ClassA()
		ClassB 기본 생성자가 호출되어 객체 생성 ClassB::ClassB()

	클래스 내부에서 클래스를 선언할 수도 있다.
		ClassA a; ClassA를 사용할 땐 일반적인 형태이다.
		ClassA::ClassB b; ClassB를 인스턴스할 때는 주의하셔야 한다. ClassB는 ClassA의 내부에 존재하는 타입
		이므로 범위 지정 연산자ㅡㄹ 사용해야 한다.

	이 경우는 어떨까 외부에서 ClassB에 접근할 수 없다.
	이렇게 중첩된 클랫 타입은 캡슐화라는 개념에서는 매우 훌륭하지만, 개인적으로는 코드 읽기가 불편해서
	자 사용하지는 않는다.

	중첩된 크래래스는 접근 제한자에 영향을 받는다.

객체의 초기화 방법
	선언, 정의 그리고 초기화
	객체의 선언과 정의
	int x; x라는 이름을 가진 객체를 선언
	x = 1; x라는 객체에 값 1을 대입하여 정의
		
	선언과 동시에 정의하는 것을 초기화
	int x{ 1 }; x라는 이름을 가진 객체를 만들고 1로 초기화
	C++은 위와 같은 초기화식을 사용하는 것이 좋다고 언급했다.
	게다가 일부 타입은 초기화가 아니면 값을 지정할 수 없다.
		상수는 선언과 정의 형태로는 대입이 불가능

	생성자에서 사용한 구문들은 초기화가 아니라 대입 연산자를 사용해 값을 대입한 정의이다.

	멤버가 상수라면? 당연히 생성자에서 초기화가 불가능 하다. 따라서 클래스 멤버들을 초기화 할 수
	있는 다른 표준 방법이 필요한다.
		
	그렇다면 위에서 살펴본 것 처럼 멤버 변수들 역시 초기화를 할 수 있는 방법이 필요하다.
	이런 형태를 떠올리겠지만, 이건 내부에ㅓ 초기화하는 거승로 객체를 인스턴스화 할때 초기활 할 수 없다.
	이게 객체의 초기화 식인데, 여기서 넘겨 주는 것은 생성자로 넘어간다.

	멤버 초기화 리스트
	C++의 생성자에는 특수한 초기화 방법인 초기화 리스트라는 개념이 있다. 생성자로 객체를 생성할 때
	멤버 변수들을 초기화 하는 기능이다.

	Quest(int id = 1, int exp = 1) : mId(id), mExp(exp) {}
	콜론 이후에 초기화를 할 변수들의 초기화 식을 콤마로 나열한 것이 초기화식이다. 멤버 변수들을
	각각 초기화 했으니 생성자 본체에서는 아무것도 하지 않아도 된다.

	초기화식에 나열한 순서가 초기화 순서일까? 단순한 변수는 순서가 의미가 없을 수 있지만
	클래스를 멤버로 가질 떄는 순서도 중요하다.

	멤버 초기화식의 순서는 멤버 선언 순서를 따르라.
	멤버 변수들을 종속 관계로 만들지 마라.

대리 생성자
	생성자는 클래스를 만들 때 값을 초기화하거나 특정 작업을 수행하는 것이다. 따라서 다양한
	매개변수를 가지는 생성자를 만든다고 해도 대부분 수행하는 작업은 비슷할 수 밖에 없다.
	위 코드만 봐도 두 생성자 모두 멤버 초기화식이 겹칠 뿐만 아니라, 본체에서 하는 일도 겹치게 된다.

	생성자는 함수라고 했으니, 함수처럼 불러 주면 된다.
	Quest() : mId{ 1 }, mExp{ 1 } {}
	Quest(std::string excel) : Quest{} {}
	위 코드는 다음과 같은 과정을 거치게 된다.
		1. Quest q1{"1.xlsx" }; 인스턴스화
		2. Quest( std::string ) 생성자
			ㅁ. Quest() 생성자 멤버 초기화 식, 기본 퀘스틑 정보 초기화
			ㅁㅁ. 엑셀에서 ㅞ스트 정보 일기

소멸자
	소멸자는 생성자와 마찬가지로 특별한 멤버 함수로써 객체의 소멸에 자동적으로 사용되는 기능이다.
	소멸이라고 해서 객체를 없애는 것이 아니라 정확히는 깨끗하게 비우는 것이라 보면 된다.
	물리적인 메모리가 사라지는 것은 아니라 해당 메모리 공간을 비우는 것이기 때문에다.

	멤버가 동적으로 할당된 메모리라면 소멸자가 매우 중요하다. 동적으로 할당하는 배열을 가진 예제를
	하나 살펴보자.

	위에서 소멸자가 없다면 인스턴스화할 때 할당한 int 10개 분량의 메모리는 그냥 할당된 상태로 유지되므로
	메모리 누수가 발생한다. 따라서 생성자를 만들면 항상 소멸자를 작성하는 습관을 들이도록 한다.
*/