#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

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

// 콘솔 텍스트 색상 변경해주는 함수
void setColor(unsigned short text) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}

void main()
{
	SetConsoleTitle(TEXT("Text_Love_Simulation_정민정 제작"));
	setColor(VIOLET);
	printf("텍스트 미연시 게임\n");
	system("COLOR 08");
	printf("1.게임 시작\n2.게임 종료\n");
	int answer;
	scanf_s("%d", &answer);
	
	if (answer==1)
	{
		printf("게임이 실행 중입니다.\n");
		printf("플레이 이름을 입력해주세요: ");
		char name[20];
		scanf("%s", &name);
	}
	else if (answer ==2)
	{
		printf("게임을 플레이 해주셔서 감사합니다.");
	}
	else
	{
		printf("잘 못 입력하셨습니다 \n다시 시도해주세요");
	}

	int a, b, c, d;
	int love = 0; //호감도

	//#첫만남
	printf("[오늘은 전학 첫날이다.]\n후.. 잘 해낼 수 있을까?\n[앞으로의 학교 생활을 걱정하며 밑만 보고 걸어갔다.]\n[그러다 한 소녀와 부딪히게 되었다.]\n");
	printf("??? : 뭐야, 앞도 못 보고 다니는 거야? 방해하지 말고 비켜.\n");
	printf("1.정말 미안해! 너한테 피해를 준 것 같아.\n2.부딪힌 건 네가 앞을 잘 안 보고 있어서 그런 거 아니야?\n3.괜찮아? 다친 곳은 없지?\n");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("피해 ? 흥, 네가 뭘 할 수 있다고.그냥 신경 끄고 지나가.\n");
		love += 20;
		break;
	case 2:
		printf("뭐 ? 네가 잘못해놓고는 지금 나한테 뭐라고 한 거야 ?\n");
		love -= 10;
		break;
	case 3:
		printf("내가 다쳤을 리 없잖아.걱정할 필요 없어.\n");
		love += 10;
		break;
	default:
		break;
	}
	//이벤트 #1 마니또
	printf("\n그렇게 학교 생활을 보내던 중 학급에서 마니또를 하게 되었다.\n나의 마니또는 아이리 저번에 부딪혔던 그녀였다.\n아이리 내가 너의 마니또야\n아이리:흥, 그래서 뭐.\n");
	printf("1.네가 필요로 하는 건 다 챙겨줄게. 걱정하지 마.\n2.그냥 형식적으로만 챙길게, 너무 신경 쓰지 마.\n3.솔직히, 너도 별로 마니또가 필요하진 않지?\n");
	scanf("%d", &b);
	switch (b)
	{
	case 1:
		if(love>=20)
		printf("(작게 웃으며) 진짜로? 그럼… 조금 기대해볼게. 너무 부담은 주지 마.\n");
		else if (love >= 10)
			printf("뭐, 기대는 안 하지만… 네가 그렇게 말하니 한 번 믿어볼게.\n");
		else
			printf("흥, 굳이 네가 챙겨줄 거 없어. 나 혼자서도 충분하니까.\n");
		love += 20;
		break;
	case 2:
		if (love >= 20)
			printf("(작게 웃음) 그럼, 형식적이라도… 괜찮아. 너무 무리하지 않아도 돼.\n");
		else if (love >= 10)
			printf("그래, 너무 부담 주지 않는 게 좋겠지. 알아서 해.\n");
		else
			printf("형식적? 차라리 아무것도 하지 않는 게 나을 것 같은데.\n");
		love += 0;
		break;
	case 3:
		if (love >= 20)
			printf("필요 없진 않아… 그래도 네가 챙겨준다면 그건 좀 특별할지도 몰라.\n");
		else if  (love >= 10)
			printf("필요 없다니… 뭐, 그렇게 생각할 수도 있겠지만. 그래도, 네가 할 거면 하든가.\n");
		else
			printf("당연하지. 난 이런 게임 따위에 신경 안 써. 그러니 아예 하지 마.\n");
		love -= 10;
		break;
	default:
		break;
	}
		
	//#이벤트2 담력시험
	printf("수학여행을 가게 되었다. 친구들과 즐겁게 놀다가 밤에 뒤쪽 산으로 담력시험을 하러 가기로 하였다\n뽑기로 짝을 뽑았는데 짝은 아이리였다.\n");
	printf("1.무서우면 내 손 잡아.같이 걷자.\n2.이런 거 무서워하는 거 아니지? 괜히 겁먹은 거 아니야?\n3.그래도 혹시 무서울 수도 있으니 내가 앞서 걸을게.\n");
	scanf("%d", &c);
	switch (c)
	{
	case 1: //대사 바꿔야함
		if(love>=20)
		printf("(작게 웃으며) 진짜로? 그럼… 조금 기대해볼게. 너무 부담은 주지 마.\n");
		else if (love >= 10)
			printf("뭐, 기대는 안 하지만… 네가 그렇게 말하니 한 번 믿어볼게.\n");
		else
			printf("흥, 굳이 네가 챙겨줄 거 없어. 나 혼자서도 충분하니까.\n");
		love += 20;
		break;
	case 2:
		if (love >= 20)
			printf("(작게 웃음) 그럼, 형식적이라도… 괜찮아. 너무 무리하지 않아도 돼.\n");
		else if (love >= 10)
			printf("그래, 너무 부담 주지 않는 게 좋겠지. 알아서 해.\n");
		else
			printf("형식적? 차라리 아무것도 하지 않는 게 나을 것 같은데.\n");
		love -= 10;
		break;
	case 3:
		if (love >= 20)
			printf("필요 없진 않아… 그래도 네가 챙겨준다면 그건 좀 특별할지도 몰라.\n");
		else if  (love >= 10)
			printf("필요 없다니… 뭐, 그렇게 생각할 수도 있겠지만. 그래도, 네가 할 거면 하든가.\n");
		else
			printf("당연하지. 난 이런 게임 따위에 신경 안 써. 그러니 아예 하지 마.\n");
		love += 10;
		break;
	default:
		break;
	}
	
	return 0;
}