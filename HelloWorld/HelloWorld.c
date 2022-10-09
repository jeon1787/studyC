#include <stdio.h>

int main(void)
{
	printf("Hello World\n");
	return 0;

	/*
	���ϰ� �����ϴ� C ���α׷��� 1��)
	
	�ַ�� > ������Ʈ(�� �ַ�ǿ��� ������ ������Ʈ�� ���� �� �ִ�.)
	������Ʈ ����(proeject build) ����Ű : F7
	�ַ�� ���� ����Ű(solution build) : ctrl + shift + B
	����(run) ����Ű : ctrl + F5(���� ctrl �ʼ� F5Ű�� debug mode run)

	���ϰ� �����ϴ� C ���α׷��� 2��)
	
	1. compile ����
	- �ҽ��ڵ� : HelloWorld.c ���赵 ����, compiler�� ���� ����� ����
	- ���� : HelloWorld.Obj ��ǰ ����, Linker�� ���� ��ǰ����(Obj files) link�Ͽ� exe�� ����
	- �������� : HelloWorld.exe �ϼ�ǰ ����

	2. �ҽ��ڵ��� ����
	- .c : ���ǿ�(definition)
	- .h : �����(declaration) ex) #include <stdio.h>�� stdio.h

	3. int main(void)
	- �Լ� ���� �� �����
	- int : ��ȯ����
	- void : �Ű�����
	- �� main�� �Ű����� ���� int�� ��ȯ�ϴ� �Լ���� �ǹ�

	4. {} Block Scope
	- �ϳ��� ����(����)�� �����.
	- {} ���� Body��� �Ѵ�.
	- �ϳ��� ������ ;�� ������. �ϳ��� ������ ���� ��(item)���� �̷������.
	- ������ �帧 : ������ �Ʒ��� ����ȴ�.
	
	5. main �Լ�
	- main �Լ��� ���� = ���α׷��� ����
	- main �Լ��� ��ȯ = ���α׷��� ����

	6. #include
	- (������)��ó���� : compile �� �� �ҽ��ڵ带 ����� �����ϱ� ����
	  stdio.h file�� �ҽ��ڵ��� �Ϻη� �����Ͽ� compile�϶�� �ǹ�
	  �� stdio.h + HelloWorld.c -> compile

	7. caller / callee
	- main�Լ� �ȿ� printf�Լ� ȣ���(call)
	  main�Լ� = caller(ȣ����)
	  printf�Լ� = callee(��ȣ����)
	  "�Ű�����" = "���μ�"
	  "���ڿ�" = "���ڹ迭"
	  "\n" = "���๮��"

	8. ���� ��ġ Ȯ�� ����Ű = F4
	- F7�� ������Ʈ ����� ���� �߻��ϸ� �ٷ� F4�� ������ ���� ��ġ�� �̵��Ѵ�.
	*/
}