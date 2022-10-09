#include <stdio.h>

int main(void)
{
	printf("Hello World\n");
	return 0;

	/*
	독하게 시작하는 C 프로그래밍 1강)
	
	솔루션 > 프로젝트(한 솔루션에는 복수의 프로젝트가 있을 수 있다.)
	프로젝트 빌드(proeject build) 단축키 : F7
	솔루션 빌드 단축키(solution build) : ctrl + shift + B
	실행(run) 단축키 : ctrl + F5(주의 ctrl 필수 F5키는 debug mode run)

	독하게 시작하는 C 프로그래밍 2강)
	
	1. compile 과정
	- 소스코드 : HelloWorld.c 설계도 역할, compiler를 통해 기계어로 번역
	- 기계어 : HelloWorld.Obj 부품 역할, Linker를 통해 부품들을(Obj files) link하여 exe을 조립
	- 실행파일 : HelloWorld.exe 완성품 역할

	2. 소스코드의 종류
	- .c : 정의용(definition)
	- .h : 선언용(declaration) ex) #include <stdio.h>의 stdio.h

	3. int main(void)
	- 함수 정의 및 선언부
	- int : 반환형식
	- void : 매개변수
	- 즉 main은 매개변수 없이 int를 반환하는 함수라는 의미

	4. {} Block Scope
	- 하나의 변위(범위)를 만든다.
	- {} 안을 Body라고 한다.
	- 하나의 구문은 ;로 끝난다. 하나의 구문은 여러 항(item)으로 이루어진다.
	- 절차적 흐름 : 위에서 아래로 실행된다.
	
	5. main 함수
	- main 함수의 시작 = 프로그램의 시작
	- main 함수가 반환 = 프로그램의 종료

	6. #include
	- (컴파일)전처리기 : compile 전 즉 소스코드를 기계어로 번역하기 전에
	  stdio.h file을 소스코드의 일부로 포함하여 compile하라는 의미
	  즉 stdio.h + HelloWorld.c -> compile

	7. caller / callee
	- main함수 안에 printf함수 호출시(call)
	  main함수 = caller(호출자)
	  printf함수 = callee(피호출자)
	  "매개변수" = "실인수"
	  "문자열" = "문자배열"
	  "\n" = "개행문자"

	8. 에러 위치 확인 단축키 = F4
	- F7로 프로젝트 빌드시 에러 발생하면 바로 F4를 누르면 에러 위치로 이동한다.
	*/
}