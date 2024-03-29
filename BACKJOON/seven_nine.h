#pragma once

/*
오류
오류의 종류

컴파일 시간 오류(CompileTimeError)
컴파일러가 찾아 낸 오류로 가장 수정하기 쉬운 오류다.
	문법 오류, 타입 오류
링크 시간 오류(LinkTimeError)
링커가 탐지한 오류로 역시 수정하기 쉽다. 주로 외부 라이브러리의 잘못된 사용으로 발생한다.
실행 시간 오류(RunTimeError)
프로그램을 실행하는 동안 발생하는 오류로 프로그래머가 용의주도하고 꼼꼼하다면 그나마 수정하기 귑다.
	컴퓨터가 감지한 오류 : 컴퓨터가 허용하지 않는 계산을 하려고 할 때 발생
	라이브러리가 감지한 오류 : 라이브러리가 혀용하지 않는 계산에서 발생
	사용자가 감지한 오류 : 프로그래머가 직접 허용되지 않는 계산을 지정하고, 오류를 발생
논리 오류
찾기 가장 어려운 오류/ 입력 -> 연산 -> 결과 모두 문제 없이 실행되는데, 결과가 다름

오류의 원인

잘못된 명세
	프로그램 명세를 프로그램의 목적과 해야할 일을 명시하는 것
	기획서에서 바로 시작하는 경우도 많다. 이러한 명세서에 논리적인 결함이 있을 경우 그대로 구현한 프로그램은 당연히
	오류를 가지고 있다.
불완전한 프로그램
	처음부터 불완전하게 프로그램을 개발하는 프로그래머는 없다. 다만 개발 과정은 시간과의 싸움인지라 부족한
	시간에 쫓기다 보면 어쩔 수 없이 급하게 코딩하는 경우가 생기고 오류가 발생할 수 있다.
예상 밖의 인자
	함수에 사용되는 입력은 주의해야 한다. 나이를 입력 받아 계산하는 함수가 -1과 같이 음수가 매개 변수로 전달되면 어ㄸㄹ가
	문자열을 인자로 받는 함수가 빈 문자열을 받으면
예상 밖의 입력
	프로그램은 주로GUI를 이용해 사용자와 상호 작용한다.
	정수를 입력 받는데 사용자가 문자열을 입력한다거나, 다른 작업을 진행 중에 버튼을 누른다거나 하는 상황이 언제
	든지 발생할 수 있다. 사용자는 절대로 프로그래머나 기획자가 의도한대로 행동하지 안는다.
예상 밖의 상태
	주어진 입력을 계산하기 위해 배열을 사용하고 있다고 가정해 보자, 그런데 이 배열의 내용이 잘못되었다면? 당연히 결과도
	잘못 나올 것이다. 이렇게 계산을 위해 숨겨진 자료 구조는 프로그램을 작성할 때 눈으로 볼 수 ㅇ벗기 때문에 익숙해 지기
	전까지 실수할 가능일서 높다.
논리 오류
	
컴파일 시간 오류
최근 컴파일러는 거의 실시간으로 컴파일 에러를 잡아 주기 때문에 문법 실수, 오타등은 손쉽게 파악할 수 있다.
다만, 에러 메세지는 그리 친절하지 않다.
	오류 : 오류가 발생하면 컴파일이 더이상 진행되지 안흔다.
	경고 : 경고는 컴파일이 성공적으로 진행되고, 프로그램도 실행할 수있다.
	하지만 의도치 않은 결과가 나올 수 있다.

링크 시간 오류
	링크 과정에 발생하는 오류로 조금 어렵긴 하지만 코드를 훑어보면 찾을 수 있다.

예외
	지금까지 살펴본 오류에 대한 처리를 지원하는 것이 예외이며, 예외는 다음과 같이 구성되어 있다.
		오류 발생
			함수가 처리할 수 없는 오류가 발생하면 이를 프로그래머가 인지해서 일반적인 return이 아닌
			예외를 던진다.
		예외 탐지 및 처리
			함수를 직간접적으로 호출한 모든 쪽에서 계산을 시도해보고 예외를 잡아내서 해당 예외에
			대한 처리를 수행

double linear_equation(int a, int b)
	if(a == 0)
		throw std::logic_error("divide by zero!");
	return -((double)b / a);
int main()
	int a;
	int b;
	std::cout<<"두 정수를 입력하세요 : ";
	std::cin>> a >> b;

	try
		std::cout<<linear_equation(a, b);
	catch(std::logic_error)
		std::cerr<< "Divede by zero!";
프로그래머가 계산에서 오류를 탐지하고 logic_error 예외를 던진다.
함수를 사용하기 전에 try{} 구문으로 계산을 시도한다.
try블록에서 던져진 예외를 catch 한다.
예외 대응
예외를 사용하면 지금까지의 오류 처리해 비해 안전하게 처리할 수 있으며, 오류 감지와 처리가 명확하게
분리될 수 있다. 예외에 대한 C++ 사용법은 매우 복잡하고 다양하다.

기본 예외 처리

int main()
	try
		// your code
		return 0;
	catch(std::exception e)
		std::cerr<< "error : "<< e.what();
		return 1;
	catch(...)
		std::cerr<<"unknown error!";
		return 2;
*/

/*
GitHub

형상 관리 SCM
소프트웨어 구성 관리라고도 부르는 이 기능은 프로젝트의 변경 사항을 체계적으로 추적하고 관리하기 위한
것으로 소스 코드의 버전 관리를 포함한 빌드 구조, 개발 환경 등 프로그래밍에 필요한 전반적인 기능들을 모두 모아둔 시스템을 말한다.

형상 관리란 소프트웨어 개발에서 소스 코트나 문서 등의 변경 사항을 관리하는 일련의 프로세스와 도구를 말한다.
SCM은 여러 개발자가 동시에 작업하고 있는 프로젝트에서 중요한 역할을 한다.

일반적으로 SCM 시스템은 소스 코드를 저장하고 관리하며, 소스 코드의 버전을 추적하고, 변경 내용을 검토하고,
변경 이력을 추적하고, 다양한 브랜치를 만들어 다른 버전을 관리할 수 있다. 또한 SCM은 다양한 협업 도구를 제공한다.
예를 들어 여러 개발자가 동시에 작업하고 있는 경우, SCM은 다른 개발자의 작업과 충돌하지 않도록 하기 위해
코드를 통합하고 충돌을 해결하는 도구를 제공한다.

SCM 시스템은 소프트웨어 개발에서 필수적인 도구 중 하나이며, 팀의 협업과 프로젝트의 효율성을 높이는 데
큰 역할을 한다. 대표적인 SCM 시스템으로는 Git, SVN, Mercurial이 있다.

브랜치는 SCM에서 프로젝트를 관리하는 방법 중 하나이다. 브랜치는 특정 시점에서 현재 코드 베이스에서
분기하여 새로운 버전의 코드를 만드는 것이다. 이렇게 만들어진 브랜치는 독립적인 코드 베이스를 가지게 되며, 다른 브랜치와는
독립적으로 변경 사항을 추가하고 관리할 수 있다.

예를 들어, 여러 개발자들이 동시에 작업을 진행하면서 브랜치를 사용할 수 이있다. 각 개발자는 자신이 담당하는
기능 개발을 위한 브랜치를 만들어서 코드 변경 작업을 수행합니다. 이렇게 만들어진 브랜치는 다른 개발자으 ㅣ작업
과는 독립적으로 변경 사항을 추가하고 관리할 수 있다. 이 후에 브랜치에서 변경된 내용을 다시 메인 브랜치에
병합하여 전체 코드 베이스에 반영할 수 있다.

브랜치는 SCM에서 개발자들이 작업을 더욱 효과적으로 관리할 수 있도록 도와준다. 브랜치를 적절히 활용하면 다양한 기능
개발과 버그 수정 등을 병행하며, 개발 작업을 보다 안정적이고 체계적으로 수행할 수 있다.

버전 관리 시스템 VSS
로컬 방식
	말그대로 사용자의 컴퓨터에 저장하는 것입니다.가장 기본적인 방법이므로 사용하기 쉽지만, 다른 사람과의
	협업에서는 불편할 수 밖에 없다. 개인 컴퓨터에만 저장되므로 백업같은 수단이 없어 안정성도 매우 떨어진다.
서버 방식
	모든 소스 코드는 서버에 저장된다. 프로그래머들은 각 이 서버에 접속해서 수정을 원하는 코드를 받아 온
	다음 로컬에서 작업을 수행한다. 작업이 끝나면 본인의 코드를 서버로 올린다.
클라우드 방식
	서버에 저장되는 형태는 동일하지만 프로그래머들은 각자 자신의 컴퓨터에도 동일한 프로젝트 사본을 한 벌씩
	가지고 있다. 작업이 끝나면 본인의 프로젝트와 서버의 프로젝트를 동기화 한다.
VSS는 Visual SourceSafe의 약자로, 마이크로소프트에서 개발한 소스트웨어 버전 관리 시스템이다.
이 시스템은 개발자나 팀이 소스 코드나 문서, 바이너리 파일 등의 변경 내역을 추적하고 관리할 수 있도록 지원한다.

VSS는 파일 레벨에서 변경 이력을 추적하며, 이전 버전으로 롤백할 수 있고 여러 사용자가 동시에 작업하면
충돌을 방지하기 위해 파일 잠금 기능을 제공한다.
또한 백업 및 복원 기능도 제공하여, 소스 코드나 문서 등이 손상되거나 삭제되었을 때 데이터를 복구할 수 있다.

하지만 VSS는 오래 전에 개발된 시스템으로 최신 기술과 트랜드에 비해 기능이 제한적이며, 대규모 프로젝트에 적합하지 않을 수 있다.
따라서 최근에는 Git, Subversion 등의 다른 버전 관리 시스템이 보다 많이 사용되고 있다.

Git & GitHub
Git은 분산 버전 관리 시스템이다. 개발자들이 소스 코드와 같은 파일을 저장하고 관리하는 데 사용된다. 
Git을 사용하면 여러 명의 개발자가 동시에 작업하고, 작업 내용을 추적하며, 이전 버전으로 되돌리는 등의 작업을
할 수 있다.

GitHub는 Git을 사용하는 웹 기반 호스팅 서비스이다. 개발자들은 GitHub를 사용하여 자신의 Git 저장소를 호스팅하고,
다른 개발자들과 협력하여 작업을 할 수 있다. GitHub는 오픈 소스 프로젝트를 호스팅하는 데 매우 인기 있다.

GitHub를 사용하면 다른 개발자들과 협력하여 코드를 컴토하고, 수정하고, 결합할 수 있다.
또한 이슈 트래커를 사용하여 버그를 추적하고 기능 요청을 관리할 수 있다.
GitHub는 커뮤니티 기반 개발을 촉진하며, 개발자들이 다양한 오픈 소스 프로젝트에 기여하는 것을 돕는다.

Git과 GitHub는 현대 소프트웨어 개발의 중요한 부분이 되어, 프로그래머들은 이를 알고 있어야 한다.

저장소(Repository)
	저장소는 파일, 문서, 코드 및 기타 프로젝트 자산의 버전을 관리하는 데 사용된다. 저장소는 Git 또는 GitHub에서
	생성할 수 있다.
	Git에서 저장소는 로컬 컴퓨터에 있는 디렉토리이다. 이 디렉토리는 Git에 의해 버전 관리가 가능한 Git
	저장소로 변환된다. 이후에는 개발자들이 코드를 작성하고 변경 사항을 추적할 수 있다. 개발자는 로컬 저장소
	에서 작업하고, Git을 사용하여 변경 사항을 커밋하고, 로컬 저장소에서 작업을 업데이트할 수 있다.

	GitHub에서 저장소는 Git 저장소에 호스팅되는 것으로 다른 개발자들과 공유할 수 있다.
	개발자들은 Git 저장소를 GitHub에 업로드하고, 다른 개발자들과 협력할 수 있다. 저장소를 공개적으로 공개할 수
	도있고 비공개적으로 개인 또는 팀에서만 사용할 수도 있다.

	저장소는 개발자들이 프로젝트를 추적하고, 버전을 관리하며, 다른 개발자들과 공유하는 데 중요한 역할을 한다.
	Git 및 GutHub에서 저장소는 프로젝트의 핵심이 되는 요소이다.
	로컬 저장소
		여러분의 컴퓨터의 폴더, 여기에 존재하는 파일들만 Git에서 버전 관리를 해준다.
		Working Directory: 현재 작업 공간
		Stage ( or Index ): 수정된 내용들을 추려서 모아두는 임시 곤간
	원격 저장소
		GitHub에서 여러분들을 위한 개별 서버를 준비해 준다. 여러분의 로컬 저장소에 대응되는 온라인 공간인
		셈이다. 로컬 저장소에서 작업을 수행한 다음 commit이라는 과정으로 서버에 변경 사항을 반영하는 구조이다.
커밋(Commit)
	저장소의 변경 내용을 저장하는 것을 의미한다. 개발자들은 파일을 수정하거나 새 파일을 추가한 후, 변경
	사항을 커밋하여 Git 저장소에 저장한다.

	커밋은 Git 저장소의 버전은 생성하며, 각각의 커밋은 고유한 해시값을 가지고 있다. 이를 통해 개발자들은 저장
	소에서 이전 버전으로 쉽게 돌아갈 수 있다.
	커밋은 변경 사항의 설명을 포함하는 커밋 메시지와 함께 생성된다.

	Git에서 커밋은 로컬 저장소에서 생성되며, 다른 개발자들과 공유하기 전에는 로컬 저장소에만
	존재한다. 이후에는 Git을 사용하여 원격 저장소에 커밋을 푸시할 수 있다.
	GitHub에서 커밋은 Git 저장소에 있는 커밋의 역사를 시각적으로 표시하는 그래프로 볼 수 있다.

	커밋은 프로젝트 개발 및 버전 관리에서 중요한 역할을 한다. 커밋을 통해 개발자들은 변경 사항을
	추적하고, 다른 개발자들과 협력할 수 있다. 또한 커밋은 프로젝트를 안정적으로 관리하는데
	필요한 기반을 제공한다.
스태시(Stash)
	현재 작업 중인 변경 사항을 일시적으로 저장하는 기능이다. 개발자들은 작업 중인 변경 사항이나 커밋하지
	않은 파일이 있을 때, 스태시를 사용하여 변경 사항을 일시적으로 저장하고 다른 브렌치로 전환할 수 있다.

	스태시를 사용하면 변경 사항을 커밋하지 않고 일시적으로 저장할 수 있다.
	스태시는 현재 작업 중인 변경 사항을 일시적으로 저장하는 스태시 스택으로 관리된다.
	스태시를 사용하면 변경 사항을 일시적으로 저장하고 다른 브랜치로 저놔,
	작업이 완료된 후 스태시를 다시 적용하여 변경 사항을 복원할 수 있다.

	스태시는 일시적인 변경 사항을 저장할 때 유용하다. 개발자가 여러 작업을 수행하고,
	커밋하지 않은 변경 사항이 있을 때 스태시를 사용하여 변경 사항을 일시적으로 저장하 수잇다.
	이를 통해 다른 브랜치로 전환하여 작업하고, 작업이 완료된 후 스태시를 다시 적용하여 변경 사항을
	복원할 수 있다.
체크인(Check In)
	커밋과 유사한 개념, 체크인은 변경된 코드를 로컬 저장소에 저장하는 것을 의미한다. 체크인은 Git 저장
	소에서 코드의 번전을 생성하며, 버전을 기록한다.

	체크인은 대개 소프르퉤어 개발 프로세스의 일부로 사용된다. 코드를 작성한 후 변경 사항을 로컬
	저장소에 체크인하여 다른 개발자들과 변경 사항을 공유하고 프로젝트를 관리한다.

	Git에서 체크인은 커밋과 , 체크인 메시지를 작성하여 변경 사항을 설명하고, 변경 사항을 로컬 저장소에
	커밋하나. 이후에느 Git을 사용하여 원격 저장소에 치크인을 푸시할 수 있다.

	GitHub에서 체크인은 Git 저장소의 변경 사항을 시각적으로 표시하는 그래프로 볼 수 있다. 체크인
	그래프를 사용하면 개발자들은 저장소의 이전 버전으로 쉽게 돌아갈 수 있다.

	체크인은 Git 및 GitHub에서 프로젝트 개발 및 버전 관리에ㅓ 중요한 역할을 한다.
	체크인을 통해 변경 사항을 추적하고, 다른 개발자들과 협력할 수 있으며 프로젝트를 안정적으로 관리하는데
	필요한 기반을 제공한다.
푸시(Push)
	로컬 저장소에 있는 병셩 사항을 원젹 저장소에 업로드하는 것을 의미한다.
	즉, 로컬 저장소에 작성한 커밋을 원격 저장소에 반영하는 작업이다.
풀(Pull)
	원격 저장소에서 변경된 내욜을 로컬 저장소로 가져오는 작업을 의미한다. 즉, 로컬 저장소와 원격 저장소 간의
	차이점을 확인하고 원격 저장소에서 변경된 코드를 로컬 저장소에 반영하는 작업이다.
브랜치(Branch)
	Git 저장소에서 여러 개발자가 동시에 작업할 수 있는 코드베이스의 복사본입니다.
	브랜치를 사용하면 프로젝트의 다른 버전을 동시에 개발하고, 변경 사항을 다른 브랜치에 적용하고, 변경 사항이 안정화될 때까지
	메인 브랜치에 병합할 수 있다.

	브랜치를 만들면 Git 저장소에서 복사본이 생성된다. 이 복사본은 새로운 브랜치 이름으로 저장된다. 브랜치는 기존의
	커밋을 기반으로 작성된다. 이렇게 하면 개발자들은 독립적으로 다른 브랜치에서 작업할 수 있으며 변경 사항을
	다른 브랜치에 영향을 주지 않고 변경하 ㅅ ㅜ있다.
	각 팀원은 자신이 담당하는 작업에 해당하는 브랙치를 만들고, 작업을 완료한 후 변경 사항을 메인 브랜치로
	병합할 수 있다.
병합(Merge)
	브랜치에서 개발한 변경 사항을 다른 브랜치에 동합하는 것, 이를 통해 여러 개발자가 각각의 브랜치에서
	작업한 변경 사항을 하나의 코드베이스로 병합하여 관리할 수 있다.

	Git에서 병합은 두 개의 브랜치를 선택하고, 변경 사항을 하나로 합치는 과정을 말한다. 일반적으로 병합은
	메인 브랜치로 다른 브랜치에서 변경된 내용을 가져오는 작업이다. 개발자 A와 B가 각각 다른 브랜치에서 작하고
	있다면, 메인 브랜치로 A와 B가 작업한 내뇽을 병합할 수이싸.
http://git-scm.com/book/ko/v2
*/

/*
Git

버전 관리란?
	버전 관리 시스템은 파일 변화를 시간에 따라 기록했다가 나중에 특정 시점의 버전을
	다시 꺼내올 수 있는 시스템이다. 

	버전 관리 시스템(VCS - Version Control System)
		VCS로 이미지나 레이아웃의 버전(변경 이력 혹은 수정 내용)을 관리하는 것은 매우 현명하다.
		VCS를 사용하면 각 파일을 이전 상태로 되돌릴 수 있고, 
		프로젝트를 통째로 이전 상태로 되돌릴 수 있고, 
		시간에 따라 수정 내용을 비교해 볼 수 있고, 
		누가 문제를 일으켰는지도 추적할 수 있고, 
		누가 언제 만들어낸 이슈인지도 알 수 있다.
		VCS를 사용하면 파일을 잃어버리거나 잘못 고쳤을 때도 쉽게 복구할 수 있다.
	
	로컬 버전 관리
		RCS(Revision Control System)
			RCS는 기본적으로 Patch Set(파일에서 변경되는 부분)을 관리한다.
			이 Patch Set은 특별한 형식의 파일로 저장한다. 
			그리고 일련의 Patch Set을 적용해서 모든 파일을 특정 시점으로 되돌릴 수 있다.
	중앙집중식 버전 관리(CVCS)
		CVS, Subversion, Perforce 같은 시스템은 파일을 관리하는 서버가 별도로 있고 
		클라이언트가 중앙 서버에서 파일을 받아서 사용(Checkout)한다.
		CVCS 환경은 로컬 VCS에 비해 장점이 많다. 모두 누가 무엇을 하고 있는지 알 수 있다. 
		관리자는 누가 무엇을 할지 꼼꼼하게 관리할 수 있다. 
		모든 클라이언트의 로컬 데이터베이스를 관리하는 것보다 VCS 하나를 관리하기가 훨씬 쉽다.
		그러나 이 CVCS 환경은 몇 가지 치명적인 결점이 있다. 
		가장 대표적인 것이 중앙 서버에 발생한 문제다. 
		만약 서버가 한 시간 동안 다운되면 그동안 아무도 다른 사람과 협업할 수 없고
		사람들이 하는 일을 백업할 방법도 없다. 
		그리고 중앙 데이터베이스가 있는 하드디스크에 문제가 생기면 프로젝트의 모든 히스토리를 잃는다.
	분산 버전 관리 시스템
		Git, Mecurial, Bazaar, Darcs 같은 DVCS에서의 클라이언트는
		단순히 파일의 마지막 스냅샷을 Checkout 하지 않는다.
		그냥 저장소를 히스토리와 더불어 전부 복제한다. 
		서버에 문제가 생기면 이 복제물로 다시 작업을 시작할 수 있다. 
		클라이언트 중에서 아무거나 골라도 서버를 복원할 수 있다. 
		Clone은 모든 데이터를 가진 진정한 백업이다.
		게다가 대부분의 DVCS 환경에서는 리모트 저장소가 존재한다. 
		리모트 저장소가 많을 수도 있다. 
		그래서 사람들은 동시에 다양한 그룹과 다양한 방법으로 협업할 수 있다. 
		계층 모델 같은 중앙집중식 시스템으로는 할 수 없는 워크플로를 다양하게 사용할 수 있다.

Git 기초
	
	차이가 아니라 스냅샷
		Subversion 비슷한 놈들과 Git의 가장 큰 차이점은 데이터를 다루는 방법에 있다. 
		큰 틀에서 봤을 때 VCS 시스템 대부분은 관리하는 정보가 파일들의 목록이다. 
		CVS, Subversion, Perforce, Bazaar 등의 시스템은 각 파일의 변화를 시간순으로 관리하면서 
		파일들의 집합을 관리한다(보통 델타 기반 버전관리 시스템이라 함).
		Git은 이런 식으로 데이터를 저장하지도 취급하지도 않는다. 
		대신 Git은 데이터를 파일 시스템 스냅샷의 연속으로 취급하고 크기가 아주 작다. 
		Git은 커밋하거나 프로젝트의 상태를 저장할 때마다 파일이 존재하는 그 순간을 중요하게 여긴다. 
		파일이 달라지지 않았으면 Git은 성능을 위해서 파일을 새로 저장하지 않는다. 
		단지 이전 상태의 파일에 대한 링크만 저장한다. Git은 데이터를 스냅샷의 스트림처럼 취급한다.
	거의 모든 명령을 로컬에서 실행
		거의 모든 명령이 로컬 파일과 데이터만 사용하기 때문에 네트워크에 있는 다른 컴퓨터는 필요 없다.
		Git의 이런 특징에서 나오는 미칠듯한 속도는 오직 Git느님만이 구사할 수 있는 전능이다. 
		프로젝트의 모든 히스토리가 로컬 디스크에 있기 때문에 모든 명령이 순식간에 실행된다.
	Git의 무결성
		Git은 데이터를 저장하기 전에 항상 체크섬을 구하고 그 체크섬으로 데이터를 관리한다. 
		그래서 체크섬을 이해하는 Git 없이는 어떠한 파일이나 디렉토리도 변경할 수 없다. 
		체크섬은 Git에서 사용하는 가장 기본적인(Atomic) 데이터 단위이자 Git의 기본 철학이다. 
		Git 없이는 체크섬을 다룰 수 없어서 파일의 상태도 알 수 없고 심지어 데이터를 잃어버릴 수도 없다.
	Git은 데이터를 추가할 뿐
		Git으로 무얼 하든 Git 데이터베이스에 데이터가 추가 된다. 
		되돌리거나 데이터를 삭제할 방법이 없다. 
		다른 VCS처럼 Git도 커밋하지 않으면 변경사항을 잃어버릴 수 있다. 
		하지만, 일단 스냅샷을 커밋하고 나면 데이터를 잃어버리기 어렵다.
	세 가지 상태
		Git은 파일을 Committed, Modified, Staged 이렇게 세 가지 상태로 관리한다.
			Committed란 데이터가 로컬 데이터베이스에 안전하게 저장됐다는 것을 의미한다.
			Modified는 수정한 파일을 아직 로컬 데이터베이스에 커밋하지 않은 것을 말한다.
			Staged란 현재 수정한 파일을 곧 커밋할 것이라고 표시한 상태를 의미한다.
		이 세 가지 상태는 Git 프로젝트의 세 가지 단계와 연결돼 있다. 
		Git 디렉토리, 워킹 트리, Staging Area 이렇게 세 가지 단계를 이해하고 넘어가자.
			Git 디렉토리는 Git이 프로젝트의 메타데이터와 객체 데이터베이스를 저장하는 곳을 말한다.
				이 Git 디렉토리가 Git의 핵심이다. 
				다른 컴퓨터에 있는 저장소를 Clone 할 때 Git 디렉토리가 만들어진다.
			워킹 트리는 프로젝트의 특정 버전을 Checkout 한 것이다.
				Git 디렉토리는 지금 작업하는 디스크에 있고 
				그 디렉토리 안에 압축된 데이터베이스에서 파일을 가져와서 워킹 트리를 만든다.
			Staging Area는 Git 디렉토리에 있다.
				단순한 파일이고 곧 커밋할 파일에 대한 정보를 저장한다.
				Git에서는 기술용어로는 “Index” 라고 하지만, “Staging Area” 라는 용어를 써도 상관 없다.

		Git으로 하는 일은 기본적으로 아래와 같다.
			워킹 트리에서 파일을 수정한다.
			Staging Area에 파일을 Stage 해서 커밋할 스냅샷을 만든다. 
			모든 파일을 추가할 수도 있고 선택하여 추가할 수도 있다.
			Staging Area에 있는 파일들을 커밋해서 Git 디렉토리에 영구적인 스냅샷으로 저장한다.
		Git 디렉토리에 있는 파일들은 Committed 상태이다. 
		파일을 수정하고 Staging Area에 추가했다면 Staged이다. 
		그리고 Checkout 하고 나서 수정했지만, 아직 Staging Area에 추가하지 않았으면 Modified이다.

Git 설치
	Windows에 설치
		공식 배포판은 Git 웹사이트에서 내려받을 수 있다. 
		http://git-scm.com/download/win에 가면 자동으로 다운로드가 시작된다.
		이 프로젝트가 'Git for Windows’인데, Git 자체와는 다른 별도의 프로젝트다. 
		자세한 정보는 https://git-for-windows.github.io/에서 확인한다.
		자동화된 설치 방식은 Git Chocolatey 패키지를 통해 이용해볼 수 있다. 
		패키지는 커뮤니티에 의해 운영되는 프로그램인 점을 알려드린다.

		Windows에서도 Git을 사용하는 또 다른 방법으로 'GitHub Desktop’을 설치하는 방법이 있다.
		이 인스톨러는 CLI와 GUI를 모두 설치해준다. 
		설치하면 Git을 Powershell에서 사용할 수 있다. 
		인증정보(Credential) 캐싱과 CRLF 설정까지 잘 된다. 이런 것들은 차차 배우게 될 것인데, 
		Git 사용자라면 쓰게 될 기능들이다. 'GitHub Desktop’은 GitHub Desktop 웹사이트에서 내려받는다.

Git 최초 설정
	'git config’라는 도구로 설정 내용을 확인하고 변경할 수 있다. 
	Git은 이 설정에 따라 동작한다. 이때 사용하는 설정 파일은 세 가지나 된다.
		/etc/gitconfig 파일: 시스템의 모든 사용자와 모든 저장소에 적용되는 설정이다. 
		git config --system 옵션으로 이 파일을 읽고 쓸 수 있다. 
		(이 파일은 시스템 전체 설정파일이기 때문에 수정하려면 시스템의 관리자 권한이 필요하다.)

		~/.gitconfig, ~/.config/git/config 파일: 특정 사용자(즉 현재 사용자)에게만 적용되는 설정이다. 
		git config --global 옵션으로 이 파일을 읽고 쓸 수 있다. 특정 사용자의 모든 저장소 설정에 적용된다.

		.git/config : 이 파일은 Git 디렉토리에 있고 특정 저장소(혹은 현재 작업 중인 프로젝트)에만 적용된다.
		--local 옵션을 사용하면 이 파일을 사용하도록 지정할 수 있다.
		하지만 기본적으로 이 옵션이 적용되어 있다. 
		(당연히, 이 옵션을 적용하려면 Git 저장소인 디렉토리로 이동 한 후 적용할 수 있다.)
	사용자 정보
		Git을 설치하고 나서 가장 먼저 해야 하는 것은 사용자이름과 이메일 주소를 설정하는 것이다. 
		Git은 커밋할 때마다 이 정보를 사용한다. 한 번 커밋한 후에는 정보를 변경할 수 없다.
	편집기
		사용자 정보를 설정하고 나면 Git에서 사용할 텍스트 편집기를 고른다. 
		기본적으로 Git은 시스템의 기본 편집기를 사용한다.

Git 저장소 만들기
	주로 다음 두 가지 중 한 가지 방법으로 Git 저장소를 쓰기 시작한다.
		아직 버전관리를 하지 않는 로컬 디렉토리 하나를 선택해서 Git 저장소를 적용하는 방법
		다른 어딘가에서 Git 저장소를 Clone 하는 방법
	기존 디렉토리를 Git 저장소로 만들기
		버전관리를 하지 아니하는 기존 프로젝트를 Git으로 관리하고 싶은 경우 우선 프로젝트의
		디렉토리로 이동한다. 이러한 과정을 처음 해보는 것이라면 시스템마다 조금 다른 점을 주의하자.
	기존 저장소를 Clone 하기
		다른 프로젝트에 참여하려거나(Contribute) Git 저장소를 복사하고 싶을 때 git clone 명령을 사용한다.

수정하고 저장소에 저장하기
	만질 수 있는 Git 저장소를 하나 만들었고 워킹 디렉토리에 Checkout도 했다. 
	이제는 파일을 수정하고 파일의 스냅샷을 커밋해 보자. 
	파일을 수정하다가 저장하고 싶으면 스냅샷을 커밋한다.
		워킹 디렉토리의 모든 파일은 크게 Tracked(관리대상임)와 Untracked(관리대상이 아님)로 나눈다. 
		Tracked 파일은 이미 스냅샷에 포함돼 있던 파일이다. 
		Tracked 파일은 또 Unmodified(수정하지 않음)와 Modified(수정함)
		그리고 Staged(커밋으로 저장소에 기록할) 상태 중 하나이다. 
		간단히 말하자면 Git이 알고 있는 파일이라는 것이다.

	그리고 나머지 파일은 모두 Untracked 파일이다. 
	Untracked 파일은 워킹 디렉토리에 있는 파일 중 스냅샷에도 Staging Area에도 포함되지 않은 파일이다. 
	처음 저장소를 Clone 하면 모든 파일은 Tracked이면서 Unmodified 상태이다. 
	파일을 Checkout 하고 나서 아무것도 수정하지 않았기 때문에 그렇다.

실행하기
	Create New Repository
		저장소의 이름과 이 저장소에 대한 설명을 입력한 뒤 public 옵션을 선택한다.
		저장소에 미리 README 파일을 만들어 놓는 경우 Initialize this repository with a README 체크
		gitigmore이나 license에 대해서는 나중에 추가하거나 변경할 수 있으므로 None을 선택한다.
		Create Repository
		Git Bash에서 글로벌 이름과 이메일 등록
파일 작성, 편집
	비쥬얼 스튜디오 코드 -> terminal -> new terminal
	터미널에서 깃 초기화 git init
*/

/*
Git 설치
	Git Bash 필수 체크
		git --version
		git config --global core.autocrlf true
SourceTree 설치
	BitBucket 스킵
VS Code 설치
	이미 있음
VS Code의 기본 터미널을 Git Bash로 설정
	Select Default Profile
		Git Bash
	Material Icon Theme

Git 최초 설정
	이름 + 이메일
		git config --global user.name "name"
		git config --global user.email "email"

Git 사용하기
	Git에 저장할 폴더를 생성
	VS로 폴더를 열기
	파일 만들고 입력하기
		git status : 현재 파일 상태를 git의관점에서 보여줌
	SourceTree : 로컬 저장소에 폴더를 드래그
	폴더로 가서 .git 삭제해보기
		SourceTree에서 Create로 폴더 선택
			다시 .git 폴더가 생성됨을 확인 CLI의 init과 같은 형태
	.gitignore : git으로 보내지 않을, 관리하지 않을 파일
		파일이름 : 해당 파일을 무시
		/파일이름 : 최상위 폴더를 무시
		*.확장자 : 해당 확장자로 된 모든 파일을 무시
		!not_ignore_this.확장자 : 해당 확장자를 모두 무시하지만 이 확장자 만큼은 무시하지 말아라
	No Commits yet : 아직 버전이 없다.
	UnTrackedFile : 아직 git이 관리하지 않은 파일 들
	git add 파일이름.확장자 : 해당 파일만 커밋
	git add . : 모든 파일을 커밋

	파일 하나를 삭제한다. ->
	다른 파일의 내용을 수정해 본다. ->
	새로운 파일을 만들어 내용을 추가해 본다. ->

	git diff : 변경 사항을 보다 상세하게 보여준다.

	모든 변화를 다시 저장해보자 git add .

	git commit -m ""
*/

/*
정렬
정렬 알고리즘은 기본 중의 기본이다.
간단한 알고리즘을 확인하기 위해 다음 배열을 실제로 정렬해 보자
8 7 2 3 1

순차 정렬 나 자신과 나머지 모든 값을 비교하며 연산
선택 정렬 현재 i번째 이후의 가장 작은 ㄱ밧을 찾아서 가장 앞으로 보내는 방식
	minIndex 가장 작은 값의 배열 인덱스를 저장한다.
거품 정렬 인접한 두개의 원소를 검사하여 큰 값을 뒤로 보내는 과정을 반복
삽입정렬 앞에서 부터 차례로 진행하면서 자신이 위치해야 할 곳에 값을 삽입하는 방식
*/

//#include <iostream>
//
//void SequntialSort(int input[], int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (input[i] > input[j]) Swap(input[i], input[j]);
//		}
//	}
//}
//void SelectionSort(int input[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		int minIndex = i;
//		for (int j = i; j < size; j++)
//		{
//			if (input[minIndex] > input[j]) minIndex = j;
//		}
//		if (minIndex != i) Swap(input[i], input[minIndex]);
//	}
//}
//void BubbleSort(int input[], int size)
//{
//	for (int phase = 0; phase < size - 1; phase++)
//	{
//		for (int k = 0; k < size - phase - 1; k++)
//		{
//			if (input[k] > input[k + 1]) Swap(input[k], input[k + 1]);
//		}
//	}
//}
//void InsertSort(int input[], int size)
//{
//	for (int i = 1; i < size; i++)
//	{
//		int j = i; 
//		int target = input[i];
//
//		while (--j >= 0 && target < input[j])
//		{
//			input[j + 1] = input[j];
//			input[j] = target;
//		}
//	}
//}
//
//void PrintArray(int input[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << input[i] << ' ';
//	}
//}
//void Swap(int& value1, int& value2)
//{
//	int temp = value1;
//	value1 = temp;
//	value1 = value2;
//	value2 = temp;
//}
//int main()
//{
//	const int size = 5;
//	int array[size]{ 8,7,2,3,1 };
//
//	PrintArray(array, size);
//}

/*
병합 정렬 : 분할 정복
	입력을 먼저 분할한다. 크기가 1이된 각 결과물을 서로 정렬하면서 처리한다.
	입력 배열 이외의 임시 배열이 하나 더 필요하다. 분할되어 있는 행렬을 합해서 저장해야 하는
	임시 공간이 필요하다. 매번 임시 공간을 만드는 것이 비횰적이므로 입력과 같은 크기의 배열을 만들어서 계속 함수에 넘겨
	주는 방식을 사용한다.
퀵 정렬 : 분할 정복
	배열의 특정 원소를 피벗값으로 지정한다.
	피벗보다 작은 값을 왼쪽으로, 큰 값을 오른쪽으로 정렬한다.
	피벗 기준으로 리스트를 좌/우로 분할한다.
	1 ~ 3과정을 반복한다.

	피벗 지정이 매우 중요하다. 피벗 선택에 따라 알고리즘의 성능이 매우 차이가 난다. 평균, 최소, 최대, 등
	피벗을 가운대로 지정한 경우
	가운대를 기준으로 왼쪽 배열의 끝을 i, 오른쪽 배열의 끝을 j로 지정한다.
	다음 피벗을 찾는다.
		arr[i]가 피벗보다 작으로 i++로 증가
		arr[j]가 피벗보다 크면 j--로 감소
		더이상 이용이 불가능하면( 왼쪽에 작은 값이 있고 오른쪽에 큰갑시 있다면 두 값을 바꿔 좌측으로 작은값
		우측으로 큰값을 배치)
*/

//#include <iostream>
//
//void Merge(int input[], int start, int half, int end, int temp[])
//{
//	int i = start;
//	int j = half + 1;
//	int tempIndex = 0;
//
//	// 안전할 때
//	while (i <= half && j <= end)
//	{
//		// 정렬하면서 왼쪽 / 오른쪽 병합
//		if (input[i] < input[j])
//		{
//			temp[tempIndex++] = input[i++];
//		}
//		else
//		{
//			temp[tempIndex++] = input[j++];
//		}
//
//	}
//	// 남은 왼쪽 블럭 병합
//	// 남은 오른쪽 블록 병합
//	while (i <= half)
//	{
//		temp[tempIndex++] = input[i++];
//	}
//
//	tempIndex = 0;
//
//	for (int i = start; i <= end; i++)
//	{
//		input[i] = temp[tempIndex++];
//	}
//}
//
//void MergeSort(int input[], int start, int end, int temp[])
//{
//	if (start >= end) return;
//
//	int half = (start + end) / 2;
//
//	MergeSort(input, start, half, temp);
//	MergeSort(input, half + 1, end, temp);
//	// 병합
//	Merge(input, start, half, end, temp);
//}

//void QuickSort(int input[], int left, int right)
//{
//	int i = left;
//	int j = right;
//	int pivot = input[(left + right) / 2];
//	int temp;
//
//	do
//	{
//		while (input[i] < pivot) i++;
//		while (input[j] > pivot) j--;
//		if (i <= j)
//		{
//			Swap(input[i], input[j]);
//			i++;
//			j--;
//		}
//	} while (i <= j);
//
//	if (left < j)	QuickSort(input, left, j);
//	if (i < right) QuickSort(input, i, right);
//}

/*
자료구조 훈련

스택
	스택은 LIFO의 특성을 가진 자료구조이다. 스택에 자료를 추가하거나 꺼낼때는 다음과 같은 명령을 사용한다.
	push, pop
큐
	큐는 FIFO의 특성을 가진 자료구조이다.
	enqueue, dequeue
	큐는 조금 신경을 써야 한다. 보통 큐는 뒤로 집어넣고 앞에서 꺼내는 방식으로 head, tail로 관리한다.
	[2][1][3][][] 여기서 2가 head 3이 tail
	enqueue(10) [2][1][3][10][] 여기서 2가 head 10이 tail
	dequeue [][1][3][10][]
	enqueue(2) [][1][3][10][20]
	dequeue [][][3][10][20]
	dequeue [][][][10][20]
	dequeue [][][][][20] 여기서 20이 head tail이다.
	실제로 남아있는 공간이 많지만 이 큐는 더 이상 사용이 불가능해진다. tail이 배열의 끝이라 더이상 추가가 안된다. 
	또한 값을 한번 더 꺼내면 head가 배열 크기를 넘어가 버려서 사용이 불가능 해진다.
	큐의 특성을 이용해서 데이터를 당겨와야 하낟.
	쉽게 생각할 수 있는 잔머리는 큐에서 하나 꺼내면 몽땅 좌측으로 땡겨오는 것이다.
	그런데 만약 배열의 크기가 거대하다면 매번 큐에서 값을 꺼낼때마다 수만개의 데이터를 옮겨야 하므로 성능면에서 매우 않좋다.
	
	배열의 남은 공간도 활용해 보자
	공간이 남아 있지만 사용할 수 있다는 것이 문제이므로 남은 공간을 활용하는 방법을 생각해 보자.
	현재 배열은 수평인 선형으로 생겼는데 이를 원형으로 만든다면?
	공간이 남아 있어도 작업이 불가능하지 않게된다. 큐가 가득 찬 조건은 tail이 head를 넘어간
	상황이 될 것입니다.
	이러한 개념을 환형 큐 또는 원형 큐라고 부른다. 인덱스 계산은 생각보다 쉽다.
	6개의 원소가 있다면 각 인덱스의 증가에 따른 값은 다음과 같다.
	0 1 2 3 4 5 6 7 8 ...
	0 1 2 3 4 5 0 1 2
	3개의 배열을 예로 들자
	[헤드,테일][][]
	인큐(1)
	[헤드][1,테일][]
	인큐(2)
	[헤드][1][2,테일] 큐는 가득찬 상태가 된다. 테일+1 %3 == 헤드
	빈칸이 하나 더 남아 있지만 그렇게 되면 비어 있는 상태 헤드==테일이 동일해 지기 때문에
	공간이 하나 남더라도 이런 방식은 피해야 한다.
	왜냐면 헤드==테일은 가득 참이 아닌 텅 비었음이라는 의미로 사용되기 떄문에
	디큐를 두번 할 경우 헤드는 테일과 같은 공간에 있게 된다.

동적 자료구조

	대부분의 게임에서는 고정된 크기의 배열을 사용하기에 매우 비효율적이다. 따라서 동적으로 자료를 생성하고 관리하는 것이
	자료 구조의 기본 중 ㅢ= 기본이다.
	당연히 동적으로 메모리를 할당하고 제거하는 것 자체에 연산이 들어가므로 성능에 영향을 준다. CPU/GPU의 소고==도는 '
	이러한 연산 정도는 무시해도 될 정도이다.
	일부 모바일 환경에서의 유니티엔딘은 엔진 자리체의 구조적 문제로 인해 성능을 향상시키기 위해 최대 개수를 제한하여
	정적 배열로 사용하기도 하지만, 무시해도 큰 지장은 없을 정도이다.
	int* myArray = new int[30];
	우선 30개으 ㅣ배열을 만들어 뛋다. 이를 통해 게임에서 사용되는 탄환을 관리하고 있다. 그런데
	보스가 더 많은 탄환을 사용해서 50개가 필요해 졌다. 위 배열을 50개로 확장해야 하는 것이다. 이는 
	50개의 동적 배열을 또 만들고 반복문을 사용하여 하나하나 일일이 복사 배정해야 한다.
	그리고 기존 배열을 삭제도 해야 하낟.

	자기 참조 구조체
	위와 같이 복사하는 과정 없이 상수 타입에 관리하려면 어떻게 해야 할까
	우선 구조체 하나를 new를 사용해 메모리에 할당하겠습니다. 그럼 메모리 ㅁ어딘가에 할당되어 만들어 진다.
	여기에 하나를 더 생성한 다음, 관리를 위해 연결해 줄 필요가 있다.
	포인터를 이용하낟.
	구조체 안에서 자기 자신을 가리키는 포인터를 만든다.

단일 연결 리스트
	빨래줄에 널린 빨래들 처럼 일렬로 나열된 동적 자료구조를 연결 리스트 혹은 링크드 리ㅡ트라보 부른다.
	각 원소는 다음 원소를 가르키는 포인터를 가지고 있으며 이를 사용하여 리스트를 탐색히 가능하다.

	자료구조를 관리하기 위해서는 다음과 같은 연산이 필수 있다.
		생성 : 원소를 생성해서 가장 뒤에 붙여 준다.
		개수 : 전체 우너소의 개수를 구한다.
		탐색 : 특정한 우너소를 검색해서 찾아낸다.
		삭제 : 특정 우너소를 삭제한다.
		삽입 : 특정 위치에 원소를 삽입한다.
	이러한 기능을 효율적으로 구하기 위해서는 다음과 같은 것이 필요하다.
		head : 리스트의 시작이다. 이를 통해 리스트를 관리하게 된다.
		tail : 리스트의 끝, tail 정보가 없다면, head에서 부터 끝까지 매번 계산해야 한다.

	리스트 생성
	새로운 원소를 만들고 가장 마지막에 붙여준다. head -> tail -> new
	1. 새로 원소 New를 할당
	2. tail(가장 마지막)의 next-> 를 New로 연결
	3. tail을 New로 지정
	원소 개수 세기
	전치 개수를 구하는 것은 간단하다. head에서 시작해서 next가 nullptr일 경우 까지 반복하거나
	next가 tail과 같을 때까지 반복하면 된다.
	리스트 전체 삭제
	동적으로 할당한 것은 항상 new ~ delete쌍을 맞워야 한다 차례대로 지우기 위해 임시 변수가 필요하고
	현재 원소를 햊해 버리면 next포인터가 보장되지 않기 때문이다.
	원소 삭제
	특정 원소 삭제는 조금 불편하다.
	지울 원소를 e1 -> e2 -> e3에서 e2라고 하면 e2의 각각 이전/이후 원소를 e1, e3를 연결 해야 한다.
	e2를 지우기 위해서는 e1 -> next = e3로 만들어 줘야 하는데 e3는 간단히 e2->next이므로 쉽게 처리되지만 e1
	은 항상 같이 구해둬야 한다.
	특히 지울 원소가 head, tail에 관련되어 있을 때는 별도록 처리해줘야 한다.
	e1(head) -> e2 : e2(head)
	head일 경우는 원소를 지우고 head->next를 새로운 head로 지정해주면 된다.
	e1 -> e2(tail) : e1(tail)
	tail일 경우는 또 이전 원소가 필요하다. tail을 지우고 이전 우너소를 새로운 tail로 지정한다. 
	그리고 안전을 위해 tail의 next를 nullptr로 지정한다.

	특정한 이름의 원소를 삭제하기 위해 파라미터로 이름을 추가로 받는다.
		이름으로 검색
		previous, element구하기
		가장 첫 원소면 head변경
		가장 마지막 원소면 tail변경
		중간 우너소면 previous의 링크 변경
		원소가 하나밖에 없어서 지우고 나면 빈 리스트일 떄 head,tail에 nullptr 대입
		찾아온 원소 제거

이중 연결 리스트
	링크드 리스트에서 불편한 점이 하나 있다. 특정한 위치의 원소를 삭제할 때이다.
	현재 내 위치에서 이전의 원소를 참조하려면 head부터 탐색해 와야 한다.
	즉 기존의 단방향링크드 리스트는 정방향으로 탐색이 용이하지만 역으로는 불편하다는 것이다.
	앞/뒤를 가리키는 포인터를 모두 가지고 있다면 정방향 역박향 모두 쉽게 탐색이 가능하다.
	이러한 것을 더블 링크드 리스트라 부른다.

	각 연산은 거의 비슷하지만 상황에 맞게 prev, next를 연결해 주면다.

스택 개발 개요
	스택은 특성상 항상 최상단에서 삽입 삭제가 이뤄진다. 따라서 단일 연결리스트로 구현하면 된다.
	매번 스택의 크기를 구하기 위해 탐색을 하지 말고, 개발로 변수를 만들고 관리하도록 한다.
*/



