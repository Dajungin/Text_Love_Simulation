#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define Time 2000
#define SIZE 100000

#define Image 10000 //�̹��� ���� ũ��


void gotoxy(int x, int y); //Ŀ�� �ű�� �̸� ���� 

enum {
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VOILET,
	DAKR_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};

// ȭ���� ����� �Լ�
void clearConsole() {
#ifdef _WIN32
	system("cls"); // Windows�� ���
#else
	system("clear"); // Linux �Ǵ� macOS�� ���
#endif
}

// �ܼ� �ؽ�Ʈ ���� �������ִ� �Լ�
void setColor(unsigned short text) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}


void main()
{
#pragma region ���� �����

#pragma region ���� ���� 
	////ù ��° �Ű����� (������ �̸�)
	////�� ��° �Ű����� (������ ����� ���)
	//FILE* file = fopen("data.txt", "w");
	//
	//fputs("Character Information", file);
	//
	//fclose(file);

#pragma region ���� �б�
	//FILE* file = fopen("main.txt","r");
	//
	//char buffer[Image] = { 0, };
	////ù ��° �Ű����� : ���� �����͸� ������ �޸� ������ ������ ����
	////�� ��° �Ű����� : �� ������ �׸��� ũ��
	////�� ��° �Ű����� : �����͸� �о�� ������ �׸��� ��
	////�� ��° �Ű����� : �����͸� �о�� ������ ������ ����
	//
	//fread(buffer,1, Image, file);
	//printf("%s", buffer); 
	//fclose(file);

#pragma endregion

#pragma endregion 

	system("mode con: cols=70 lines=30"); //cols==���� , lines==���� //�ܼ�â ũ�� ����


	SetConsoleTitle(TEXT("Text_Love_Simulation_������ ����")); //�ܼ�â �̸� ����
	setColor(VIOLET);

	printf("�ؽ�Ʈ �̿��� ����\n");

	system("COLOR 08");
	printf("1.���� ����\n");

	printf("2.���� ����\n");
	int answer;
	scanf_s("%d", &answer);
	
	if (answer==1)
	{
		printf("==============================================\n");
		printf("������ ���� ���Դϴ�.\n");
		printf("==============================================\n");
		Sleep(Time); //�ð� �������� �Ѵ�.
		getchar();
		clearConsole();

		int a, b, c, d, e, f;
		int love = 0; //ȣ����

		//#ù����
		printf("[������ ���� ù���̴�.]\n��.. �� �س� �� ������?\n[�������� �б� ��Ȱ�� �����ϸ� �ظ� ���� �ɾ��.]\n[�׷��� �� �ҳ�� �ε����� �Ǿ���.]\n\n");
		printf("??? : ����, �յ� �� ���� �ٴϴ� �ž�? �������� ���� ����.\n\n");
		printf("1.���� �̾���! ������ ���ظ� �� �� ����.\n2.�ε��� �� �װ� ���� �� �� ���� �־ �׷� �� �ƴϾ�?\n3.������? ��ģ ���� ����?\n");
		scanf("%d", &a);

		switch (a)
		{
		case 1:
			printf("???: ����? ��, �װ� �� �� �� �ִٰ�.�׳� �Ű� ���� ������.\n");
			love += 20;
			break;
		case 2:
			printf("???: ��? �װ� �߸��س���� ���� ������ ����� �� �ž� ?\n");
			love -= 10;
			break;
		case 3:
			printf("???: ���� ������ �� ���ݾ�.������ �ʿ� ����.\n");
			love += 10;
			break;
		default:
			break;
		}

		//#�̸� ������
		Sleep(Time); //�ð� �������� �Ѵ�.
		getchar();
		clearConsole();
		printf("\n[���ο� �б�, ���ο� ��.. ���ο� ģ����..]\n[�׸��� �׷��� ������ ���� ¦��.. �Ʊ� �ε��ƴ� �׳࿴��.]\n\n");
		printf("�ȳ� �� ��Ź��. Ȥ�� �̸��� ��� ��?\n");

		printf("??? : �ʰ� �˾Ƽ� ���ϰ�?...\n�׸��� �̰� ����� ���� ���� �̸��� ���ؾ� �ϴ°� �ƴϾ�?\n");
		printf("�÷��� �̸��� �Է����ּ���: ");
		char name[20];
		scanf("%s", &name);
		printf("�̾� �� �̸��� %s�̾�.\n", name);

		FILE* file = fopen("base.txt", "r");
		char buffer[Image] = { 0, };
		fread(buffer, 1, Image, file);
		printf("%s", buffer);
		fclose(file);

		printf("���̸�: ...���̸���\n");

		//#¦��
		Sleep(Time); //�ð� �������� �Ѵ�.
		getchar();
		clearConsole();
		printf("\n������: ������ ¦�ð� �Բ� �� Ȱ���� �ҰŴ� �׷��� �˾Ƶη�\n\n");
		printf("1.�� ��Ź��. �츮 �� ���� �� ���� �ž�.\n2.�̰� ���� ������ ���� �� �� ����.\n3.���� ���� ������? �츮 �׳� ���� �ص� �� �� ������.\n");
		scanf("%d", &d);
		switch (d)
		{
		case 1:
			printf("���̸�: �� ���� �� ������ ���� �˾�.\n�ٵ��� ��, �ʶ�� �� �� �� ��������.\n");
			love += 10;
			break;
		case 2:
			printf("���̸�: ��, ���� ������ �;��ϴ� �� ���� ����������.\n�ʹ� ������ ���� ��.\n");
			love += 0;
			break;
		case 3:

			printf("���̸�: ���� �ϴٴϡ� �� ���� å�Ӱ��� ����.\n�׷��� ���� �� �ִٰ� ������?\n");
			love -= 10;
			break;
		default:
			break;
		}

		//#���ɽð�
		Sleep(Time);
		getchar();
		clearConsole();
		printf("\n[���ɽð� ���ǿ� ȥ�� �ɾ� �ִ� ���̸��� ������. ���� �𸣰� �׳࿡�� �ٰ�����.]\n\n");
		printf("1.ȥ�� �־�? ���� �� ������?\n2.��� ��? ȥ�� ���� ���� �� �ܷο� ���̳�.\n3.ȥ�� ���� ���� ������? �׷�, ���� �Ű� ���� ������\n");
		scanf("%d", &e);
		switch (e)
		{
		case 1:
			printf("���̸�: (��¦ ��� ǥ��) ȥ�� �Դ� �� �� ���ѵ���\n�׷���, �װ� ���� ���Ѵٸ��..\n");
			love += 10;
			break;
		case 2:
			printf("���̸�: �ܷӱ� ���� �ܷӴٴ� �ž�!\nȥ�� �־ �����ŵ�?\n");
			love += 5;
			break;
		case 3:

			printf("���̸�: �׷�, �ʴ� ������ �Ű� �� �ᵵ ��.\n���� ȥ�ڰ� �� ����.\n");
			love -= 5;
			break;
		default:
			break;
		}



		//�̺�Ʈ #1 ���϶�
		Sleep(Time);
		getchar();
		clearConsole();
		printf("\n�׷��� �б� ��Ȱ�� ������ �� �б޿��� ���϶Ǹ� �ϰ� �Ǿ���.\n���� ���϶Ǵ� ���̸� �׳࿴��.\n���̸� ���� ���� ���϶Ǿ�\n���̸�:��, �׷��� ��.\n\n");
		printf("1.�װ� �ʿ�� �ϴ� �� �� ì���ٰ�. �������� ��.\n2.�׳� ���������θ� ì���, �ʹ� �Ű� ���� ��.\n3.������, �ʵ� ���� ���϶ǰ� �ʿ����� ����?\n");
		scanf("%d", &b);
		switch (b)
		{
		case 1:
			if (love >= 35)
			{
				FILE* file = fopen("shy.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("���̸�: (�۰� ������) ��¥��? �׷��� ���� ����غ���.\n�ʹ� �δ��� ���� ��.\n");
		
			}
			else if (love >= 15)
			{
				FILE* file = fopen("smile.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("���̸�: ��, ���� �� ��������\n�װ� �׷��� ���ϴ� �� �� �Ͼ��.\n");
			}
				
			else
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("���̸�: ��, ���� �װ� ì���� �� ����.\n�� ȥ�ڼ��� ����ϴϱ�.\n");
			}
				
			love += 20;
			break;
		case 2:
			if (love >= 35)
			{
				FILE* file = fopen("smile.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("���̸�: (�۰� ����) �׷�, �������̶󵵡� ������.\n�ʹ� �������� �ʾƵ� ��.\n");
			}
				
			else if (love >= 15)
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("���̸�: �׷�, �ʹ� �δ� ���� �ʴ� �� ������.\n�˾Ƽ� ��.\n");
			}
			
			else
			{
				FILE* file = fopen("omo.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: ������?\n���� �ƹ��͵� ���� �ʴ� �� ���� �� ������.\n");
			}
				
			love += 0;
			break;
		case 3:
			if (love >= 35)
			{
				FILE* file = fopen("shy.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: �ʿ� ���� �ʾơ�\n�׷��� �װ� ì���شٸ� �װ� �� Ư�������� ����.\n");
			}
				
			else if (love >= 15)
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: �ʿ� ���ٴϡ� ��, �׷��� ������ ���� �ְ�����.\n�׷���, �װ� �� �Ÿ� �ϵ簡.\n");
			}
				
			else
			{
				FILE* file = fopen("sad.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: �翬����. �� �̷� ���� ������ �Ű� �� ��.\n�׷��� �ƿ� ���� ��.\n");
			}
				
			love -= 10;
			break;
		default:
			break;
		}

		//#���̸��� ���ο� ģ����
		Sleep(Time);
		getchar();
		clearConsole();
		printf("\n[������ �������ٰ� ���̸��� �ٸ� ģ����� ��ȭ�� �ϰ� �ִ� ����� ���δ�.]\n[�ٸ� ģ������ ��� ������ �� ���� ���̸����� ����� �巯�´�.]\n\n");
		printf("1.�ǿܷ� ģ������ ����. �׵��� ȥ�� �ִ� �� �˾Ҵµ�.\n2.�ʵ� ģ���� �տ����� �� �� ��︮��. ���� ����.\n3.ģ�������״� ������ �ƴϳ�? �����׸� �׷� ����?\n");
		scanf("%d", &f);
		switch (f)
		{
		case 1:
			printf("���̸�: ģ����? ��, ��¼�� ���ϡ�\n�׷��ٰ� Ư���� ģ�� �� �ƴϾ�.\n");
			love += 5;
			break;
		case 2:
			printf("���̸�: (��¦ ��Ȳ�ϸ�) ��? ���� ��︰�ٰ�?\n..���� �Ű� ���� ��.\n");
			love += 10;
			break;
		case 3:

			printf("���̸�: ��! ���� �����׸� �׷� �� �ƴϾ�!\n�������� ��.\n");
			love -= 5;
			break;
		default:
			break;
		}

		//#�̺�Ʈ2 ��½���
		Sleep(Time);
		getchar();
		clearConsole();
		printf("\n���п����� ���� �Ǿ���.\nģ����� ��̰� ��ٰ� �㿡 ���� ������ ��½����� �Ϸ� ����� �Ͽ���\n�̱�� ������ ¦�� ���̸�����.\n\n");
		printf("1.������� �� �� ���.���� ����.\n2.�̷� �� �������ϴ� �� �ƴ���? ���� �̸��� �� �ƴϾ�?\n3.�׷��� Ȥ�� ������ ���� ������ ���� �ռ� ������.\n");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			if (love >= 60)
			{
				FILE* file = fopen("shy.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: (��¦ �Ӿ��� �󱼷�) ��? ����, ��Ƶ� ������.\n��ġ��, �ʹ� �� ������ �� ��.\n");
			}
				
			else if (love >= 45)
			{
				FILE* file = fopen("smile.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: ���� ��ٴϡ� ��¥ �����̳�.\n�׷��� ���� ��Ƶ� ������.\n");
			}
				
			else
			{
				FILE* file = fopen("sad.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("���̸�: ��? �������? �׷� �� �ʿ� ����.\n�� �������� �ʰ�\n");
			}
				
			love += 20;
			break;
		case 2:
			if (love >= 60)
			{
				FILE* file = fopen("shy.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: (�۰�) �̡� ���� ���� ��.\n������ �ʶ� ���� �����ϱ� ������.\n");
			}
				
			else if (love >= 45)
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: �̸��� �� ���ݾ�.\n��ġ���� �װ� �׷��� ���ϴ� �̻��ϰ� ����ǳ�.\n");
			}
				
			else
			{
				FILE* file = fopen("sad.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: �����ٰ�? ������ ��.\n�� �� ���� �� �� �Ծ�.\n");
			}
				
			love -= 10;
			break;
		case 3:
			if (love >= 60)
			{
				FILE* file = fopen("smile.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: (�۰� ������) �ռ� ���� ������. �׷��� ������ �ڵ� ���ƺ� ��.\nȥ�� ������ ���� ������ ���̾�.\n");
			}
				
			else if (love >= 45)
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: �ռ� �ȴ´ٴϡ� �׷�, ������� ��.\n������ �� �װ� �ʿ� �����ϱ�.\n");
			}
				
			else
			{
				FILE* file = fopen("omo.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("���̸�: �װ� �ռ��� �ڿ� �ֵ�, �� ��� ����.\n�׳� ���� ������.\n");
			}
				
			love += 10;
			break;
		default:
			break;
		}

		//#���ΰ� ����
		Sleep(Time);
		getchar();
		clearConsole();
		printf("==============================================\n");
		printf("[�׷��� �߾��� ������ �ð��� ��������.\n");
		printf("%s : ���� �����̶��, �ð��� �̷��� ���� ������ �� ������.\nó���� ���� ����� �б���Ȱ�̶�� �����ߴµ�... \n���̸�, �� ���� �ڷ� ��� �� �޶�����.\nó���� �ٰ����� �������.�ʴ� ������ �� �о��, ������ ���� �ʴ� ��ó�� �������ϱ�.�׷����� �� �׷�����... \n�� �ڲٸ� �װ� �Ű� ������.���� ������������ ��� �ڿ� ������ ��¥ ������ �˰� �;����ϱ�.\n�츮�� �Բ��� �ð���, ��̱⵵ �߰�, ���� �����⵵ �߾�.�ʴ� �� ������ ���� ��������, ��� �������ٵ� ��ó�ޱ� ���� ����̶� �� �˰� ����.\n���� ��, �츰 ��� �ɱ� ? �ٽ� ������ �ɱ� ? �ƴϸ� �̴�� ������ ���� ���� �ɱ� ? ���� �� �𸣰ھ�.������, �и��� �� �ϳ� �־�.�װ� ���� ���� ������ ���� ������� ���� �Ŷ�� ��.\n���̸�, ���� �����ε� �װ� �ູ�ϱ� �ٶ�� �־�.\n ", name);
		printf("==============================================\n");
		printf("�������� �Ѿ�ϴ�. ���� ȣ���� : %d\n", love);
		printf("==============================================\n");
		Sleep(Time);
		clearConsole();

		if (love >= 70)
		{
			setColor(YELLOW);
			printf("���� ����\n");
			printf("[���̸��� ���� ���� ����� �����鼭 ���������, ���̸��� �ڽ��� ������ �غ��ϸ� ������ ������ ���� �־���.]\n");
			printf("���̸�: �ʶ� �̷��� ������ ���ϡ� �˰� �ƾ�.\n���� �� �翡 ������ �� �̻� ȥ�ڰ� �ƴ϶� ��.\n");
			printf("%s : �׵��� ������, �׸��� �����ε� �� ��Ź��\n", name);
			printf("���̸�: ������ ���� ����. \n�� ���п� �ٽ� ����� ���� �� �ְ� �ƾ�.\n");
			printf("������ �÷��� ���ּż� �����մϴ�.");
		}
		else if (love >= 31)
		{
			setColor(GRAY);
			printf("��� ����\n");
			printf("[���̸��� ���� ��������� ������, �츮�� ���ο��� ������ ������ ������ ���ߴ�. \n�츮�� �׷��� ���� �ָ��� ������ ���� ä �б���Ȱ�� �������Ͽ���.]\n");
			printf("���̸�: �츮�� �� ��������� �߳�. ������ ������ ���� ������ �����̾�.\n �׷���, �� ���� ȥ�ڰ� �ƴϴϱ� ������.\n");
			printf("%s : ���� �� ��������� ������ �ٵ�.\n", name);
			printf("���̸�: (��¦ �����ϰ�) �׷�, ������ \n��¼�� �̰� �츮���� �־��� �ּ������� ����.\n");
			printf("������ �÷��� ���ּż� �����մϴ�.");
		}
		else
		{
			setColor(RED);
			printf("��� ����\n");
			printf("[���̸��� ���� ���� ��ó�� �ָ� �ŷڸ� ���� ���Ͽ���. \n�츮�� �̷��� ������ ���� �Դ�.]\n");
			printf("���̸�: ���� �ͼ� �����غ��ϡ� �츰 ó������ ���� �ʾҴ� �� ����. \n�ʵ� �׷���? ���� �ʹ� ����߳� ��.\n");
			printf("%s : �׷�, �츮 ������� �� ����.\n", name);
			printf("���̸�: �˾Ҿ�. �׷�, ���� �ٽ� ����ĥ �� ������.\n");
			printf("������ �÷��� ���ּż� �����մϴ�.");
		}


		return 0;
		
	}
	else if (answer ==2)
	{
		printf("������ �÷��� ���ּż� �����մϴ�.");
		
	}
	else
	{
		printf("�� �� �Է��ϼ̽��ϴ� \n�ٽ� �õ����ּ���");
	}

	
}


void gotoxy(int x, int y) //Ŀ�� �ű�� 
{ 
	COORD Pos = { x, y };	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); 
}
