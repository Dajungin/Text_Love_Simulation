#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define Time 2000
#define SIZE 100000

#define Image 10000 //이미지 파일 크기


void gotoxy(int x, int y); //커서 옮기기 미리 선언 

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

// 화면을 지우는 함수
void clearConsole() {
#ifdef _WIN32
	system("cls"); // Windows의 경우
#else
	system("clear"); // Linux 또는 macOS의 경우
#endif
}

// 콘솔 텍스트 색상 변경해주는 함수
void setColor(unsigned short text) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}


void main()
{
#pragma region 파일 입출력

#pragma region 파일 쓰기 
	////첫 번째 매개변수 (파일의 이름)
	////두 번째 매개변수 (파일의 입출력 모드)
	//FILE* file = fopen("data.txt", "w");
	//
	//fputs("Character Information", file);
	//
	//fclose(file);

#pragma region 파일 읽기
	//FILE* file = fopen("main.txt","r");
	//
	//char buffer[Image] = { 0, };
	////첫 번째 매개변수 : 읽은 데이터를 저장하 메모리 버퍼의 포인터 변수
	////두 번째 매개변수 : 각 데이터 항목의 크기
	////세 번째 매개변수 : 데이터를 읽어올 데이터 항목의 수
	////네 변째 매개변수 : 데이터를 읽어올 파일의 포인터 변수
	//
	//fread(buffer,1, Image, file);
	//printf("%s", buffer); 
	//fclose(file);

#pragma endregion

#pragma endregion 

	system("mode con: cols=70 lines=30"); //cols==가로 , lines==세로 //콘솔창 크기 변경


	SetConsoleTitle(TEXT("Text_Love_Simulation_정민정 제작")); //콘솔창 이름 변경
	setColor(VIOLET);

	printf("텍스트 미연시 게임\n");

	system("COLOR 08");
	printf("1.게임 시작\n");

	printf("2.게임 종료\n");
	int answer;
	scanf_s("%d", &answer);
	
	if (answer==1)
	{
		printf("==============================================\n");
		printf("게임이 실행 중입니다.\n");
		printf("==============================================\n");
		Sleep(Time); //시간 지연으로 한다.
		getchar();
		clearConsole();

		int a, b, c, d, e, f;
		int love = 0; //호감도

		//#첫만남
		printf("[오늘은 전학 첫날이다.]\n후.. 잘 해낼 수 있을까?\n[앞으로의 학교 생활을 걱정하며 밑만 보고 걸어갔다.]\n[그러다 한 소녀와 부딪히게 되었다.]\n\n");
		printf("??? : 뭐야, 앞도 못 보고 다니는 거야? 방해하지 말고 비켜.\n\n");
		printf("1.정말 미안해! 너한테 피해를 준 것 같아.\n2.부딪힌 건 네가 앞을 잘 안 보고 있어서 그런 거 아니야?\n3.괜찮아? 다친 곳은 없지?\n");
		scanf("%d", &a);

		switch (a)
		{
		case 1:
			printf("???: 피해? 흥, 네가 뭘 할 수 있다고.그냥 신경 끄고 지나가.\n");
			love += 20;
			break;
		case 2:
			printf("???: 뭐? 네가 잘못해놓고는 지금 나한테 뭐라고 한 거야 ?\n");
			love -= 10;
			break;
		case 3:
			printf("???: 내가 다쳤을 리 없잖아.걱정할 필요 없어.\n");
			love += 10;
			break;
		default:
			break;
		}

		//#이름 나누기
		Sleep(Time); //시간 지연으로 한다.
		getchar();
		clearConsole();
		printf("\n[새로운 학교, 새로운 반.. 새로운 친구들..]\n[그리고 그렇게 정해진 나의 짝은.. 아까 부딪쳤던 그녀였다.]\n\n");
		printf("안녕 잘 부탁해. 혹시 이름이 어떻게 돼?\n");

		printf("??? : 너가 알아서 뭐하게?...\n그리고 이건 물어보는 쪽이 먼저 이름을 말해야 하는거 아니야?\n");
		printf("플레이 이름을 입력해주세요: ");
		char name[20];
		scanf("%s", &name);
		printf("미안 내 이름은 %s이야.\n", name);

		FILE* file = fopen("base.txt", "r");
		char buffer[Image] = { 0, };
		fread(buffer, 1, Image, file);
		printf("%s", buffer);
		fclose(file);

		printf("아이리: ...아이리야\n");

		//#짝궁
		Sleep(Time); //시간 지연으로 한다.
		getchar();
		clearConsole();
		printf("\n선생님: 앞으로 짝궁과 함께 팀 활동을 할거니 그렇게 알아두렴\n\n");
		printf("1.잘 부탁해. 우리 잘 맞출 수 있을 거야.\n2.이거 빨리 끝내고 각자 할 일 하자.\n3.수업 따위 귀찮지? 우리 그냥 대충 해도 될 것 같은데.\n");
		scanf("%d", &d);
		switch (d)
		{
		case 1:
			printf("아이리: 잘 맞출 수 있을지 누가 알아.\n근데… 뭐, 너라면 잘 할 수 있을지도.\n");
			love += 10;
			break;
		case 2:
			printf("아이리: 흥, 빨리 끝내고 싶어하는 건 나도 마찬가지야.\n너무 귀찮게 굴지 마.\n");
			love += 0;
			break;
		case 3:

			printf("아이리: 대충 하다니… 넌 정말 책임감이 없네.\n그러고도 잘할 수 있다고 생각해?\n");
			love -= 10;
			break;
		default:
			break;
		}

		//#점심시간
		Sleep(Time);
		getchar();
		clearConsole();
		printf("\n[점심시간 교실에 혼자 앉아 있는 아이리가 보였다. 나도 모르게 그녀에게 다가갔다.]\n\n");
		printf("1.혼자 있어? 같이 밥 먹을래?\n2.어디 가? 혼자 있을 때는 좀 외로워 보이네.\n3.혼자 있을 때가 편하지? 그럼, 나도 신경 쓰지 않을게\n");
		scanf("%d", &e);
		switch (e)
		{
		case 1:
			printf("아이리: (살짝 놀란 표정) 혼자 먹는 게 더 편한데…\n그래도, 네가 굳이 원한다면야..\n");
			love += 10;
			break;
		case 2:
			printf("아이리: 외롭긴 누가 외롭다는 거야!\n혼자 있어도 괜찮거든?\n");
			love += 5;
			break;
		case 3:

			printf("아이리: 그래, 너는 나한테 신경 안 써도 돼.\n원래 혼자가 더 편해.\n");
			love -= 5;
			break;
		default:
			break;
		}



		//이벤트 #1 마니또
		Sleep(Time);
		getchar();
		clearConsole();
		printf("\n그렇게 학교 생활을 보내던 중 학급에서 마니또를 하게 되었다.\n나의 마니또는 아이리 그녀였다.\n아이리 내가 너의 마니또야\n아이리:흥, 그래서 뭐.\n\n");
		printf("1.네가 필요로 하는 건 다 챙겨줄게. 걱정하지 마.\n2.그냥 형식적으로만 챙길게, 너무 신경 쓰지 마.\n3.솔직히, 너도 별로 마니또가 필요하진 않지?\n");
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

				printf("아이리: (작게 웃으며) 진짜로? 그럼… 조금 기대해볼게.\n너무 부담은 주지 마.\n");
		
			}
			else if (love >= 15)
			{
				FILE* file = fopen("smile.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("아이리: 뭐, 기대는 안 하지만…\n네가 그렇게 말하니 한 번 믿어볼게.\n");
			}
				
			else
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("아이리: 흥, 굳이 네가 챙겨줄 거 없어.\n나 혼자서도 충분하니까.\n");
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

				printf("아이리: (작게 웃음) 그럼, 형식적이라도… 괜찮아.\n너무 무리하지 않아도 돼.\n");
			}
				
			else if (love >= 15)
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("아이리: 그래, 너무 부담 주지 않는 게 좋겠지.\n알아서 해.\n");
			}
			
			else
			{
				FILE* file = fopen("omo.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("아이리: 형식적?\n차라리 아무것도 하지 않는 게 나을 것 같은데.\n");
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
				printf("아이리: 필요 없진 않아…\n그래도 네가 챙겨준다면 그건 좀 특별할지도 몰라.\n");
			}
				
			else if (love >= 15)
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("아이리: 필요 없다니… 뭐, 그렇게 생각할 수도 있겠지만.\n그래도, 네가 할 거면 하든가.\n");
			}
				
			else
			{
				FILE* file = fopen("sad.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("아이리: 당연하지. 난 이런 게임 따위에 신경 안 써.\n그러니 아예 하지 마.\n");
			}
				
			love -= 10;
			break;
		default:
			break;
		}

		//#아이리의 새로운 친구들
		Sleep(Time);
		getchar();
		clearConsole();
		printf("\n[복도를 지나가다가 아이리가 다른 친구들과 대화를 하고 있는 모습이 보인다.]\n[다른 친구들이 모두 떠났을 때 나는 아이리한테 모습을 드러냈다.]\n\n");
		printf("1.의외로 친구들이 많네. 그동안 혼자 있는 줄 알았는데.\n2.너도 친구들 앞에서는 꽤 잘 어울리네. 보기 좋다.\n3.친구들한테는 츤데레 아니네? 나한테만 그런 거지?\n");
		scanf("%d", &f);
		switch (f)
		{
		case 1:
			printf("아이리: 친구들? 뭐, 어쩌다 보니…\n그렇다고 특별히 친한 건 아니야.\n");
			love += 5;
			break;
		case 2:
			printf("아이리: (살짝 당황하며) 뭐? 나랑 어울린다고?\n..별로 신경 쓰지 마.\n");
			love += 10;
			break;
		case 3:

			printf("아이리: 흥! 내가 너한테만 그런 건 아니야!\n착각하지 마.\n");
			love -= 5;
			break;
		default:
			break;
		}

		//#이벤트2 담력시험
		Sleep(Time);
		getchar();
		clearConsole();
		printf("\n수학여행을 가게 되었다.\n친구들과 즐겁게 놀다가 밤에 뒤쪽 산으로 담력시험을 하러 가기로 하였다\n뽑기로 정해진 짝은 아이리였다.\n\n");
		printf("1.무서우면 내 손 잡아.같이 걷자.\n2.이런 거 무서워하는 거 아니지? 괜히 겁먹은 거 아니야?\n3.그래도 혹시 무서울 수도 있으니 내가 앞서 걸을게.\n");
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
				printf("아이리: (살짝 붉어진 얼굴로) 손? …뭐, 잡아도 괜찮아.\n그치만, 너무 꽉 잡으면 안 돼.\n");
			}
				
			else if (love >= 45)
			{
				FILE* file = fopen("smile.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("아이리: 손을 잡다니… 진짜 겁쟁이네.\n그래도 뭐… 잡아도 괜찮아.\n");
			}
				
			else
			{
				FILE* file = fopen("sad.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);

				printf("아이리: 손? 농담이지? 그런 거 필요 없어.\n난 무섭지도 않고\n");
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
				printf("아이리: (작게) 겁… 조금 나긴 해.\n하지만 너랑 같이 있으니까 괜찮아.\n");
			}
				
			else if (love >= 45)
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("아이리: 겁먹을 리 없잖아.\n그치만… 네가 그렇게 말하니 이상하게 긴장되네.\n");
			}
				
			else
			{
				FILE* file = fopen("sad.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("아이리: 무섭다고? 웃기지 마.\n난 겁 같은 거 안 먹어.\n");
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
				printf("아이리: (작게 웃으며) 앞서 가도 괜찮아. 그래도 가끔은 뒤도 돌아봐 줘.\n혼자 있으면 좀… 무섭단 말이야.\n");
			}
				
			else if (love >= 45)
			{
				FILE* file = fopen("base.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("아이리: 앞서 걷는다니… 그래, 마음대로 해.\n하지만 난 네가 필요 없으니까.\n");
			}
				
			else
			{
				FILE* file = fopen("omo.txt", "r");
				char buffer[Image] = { 0, };
				fread(buffer, 1, Image, file);
				printf("%s", buffer);
				fclose(file);
				printf("아이리: 네가 앞서든 뒤에 있든, 난 상관 없어.\n그냥 빨리 끝내자.\n");
			}
				
			love += 10;
			break;
		default:
			break;
		}

		//#주인공 독백
		Sleep(Time);
		getchar();
		clearConsole();
		printf("==============================================\n");
		printf("[그렇게 추억을 쌓으며 시간은 지나갔다.\n");
		printf("%s : 벌써 졸업이라니, 시간이 이렇게 빨리 지나갈 줄 몰랐어.\n처음엔 그저 평범한 학교생활이라고 생각했는데... \n아이리, 널 만난 뒤로 모든 게 달라졌어.\n처음엔 다가가기 어려웠지.너는 언제나 날 밀어내고, 마음을 열지 않는 것처럼 보였으니까.그런데도 왜 그랬을까... \n난 자꾸만 네가 신경 쓰였어.너의 츤데레스러운 모습 뒤에 숨겨진 진짜 마음을 알고 싶었으니까.\n우리가 함께한 시간들, 즐겁기도 했고, 때론 아프기도 했어.너는 늘 차갑고 강해 보였지만, 사실 누구보다도 상처받기 쉬운 사람이란 걸 알게 됐지.\n졸업 후, 우린 어떻게 될까 ? 다시 만나게 될까 ? 아니면 이대로 각자의 길을 가는 걸까 ? 아직 잘 모르겠어.하지만, 분명한 건 하나 있어.네가 내게 남긴 감정은 절대 사라지지 않을 거라는 거.\n아이리, 나… 앞으로도 네가 행복하길 바라고 있어.\n ", name);
		printf("==============================================\n");
		printf("엔딩으로 넘어갑니다. 현재 호감도 : %d\n", love);
		printf("==============================================\n");
		Sleep(Time);
		clearConsole();

		if (love >= 70)
		{
			setColor(YELLOW);
			printf("해피 엔딩\n");
			printf("[아이리와 나는 여러 사건을 겪으면서 가까워지고, 아이리는 자신의 성격을 극복하며 나에게 마음을 열어 주었다.]\n");
			printf("아이리: 너랑 이렇게 지내다 보니… 알게 됐어.\n내가 네 곁에 있으면 더 이상 혼자가 아니란 걸.\n");
			printf("%s : 그동안 고마웠어, 그리고 앞으로도 잘 부탁해\n", name);
			printf("아이리: 정말… 나도 고마워. \n너 덕분에 다시 사람을 믿을 수 있게 됐어.\n");
			printf("게임을 플레이 해주셔서 감사합니다.");
		}
		else if (love >= 31)
		{
			setColor(GRAY);
			printf("노멀 엔딩\n");
			printf("[아이리와 조금 가까워지긴 했지만, 우리는 서로에게 완전히 마음을 열지는 못했다. \n우리는 그렇게 서로 애매한 감정을 남긴 채 학교생활을 마무리하였다.]\n");
			printf("아이리: 우리… 꽤 가까워지긴 했네. 하지만 여전히 뭔가 부족한 느낌이야.\n 그래도, 난 이제 혼자가 아니니까 괜찮아.\n");
			printf("%s : 서로 더 노력했으면 좋았을 텐데.\n", name);
			printf("아이리: (살짝 쓸쓸하게) 그래, 하지만 \n어쩌면 이게 우리에게 주어진 최선일지도 몰라.\n");
			printf("게임을 플레이 해주셔서 감사합니다.");
		}
		else
		{
			setColor(RED);
			printf("배드 엔딩\n");
			printf("[아이리와 나는 서로 상처를 주며 신뢰를 쌓지 못하였다. \n우리는 이렇게 관계의 끝이 왔다.]\n");
			printf("아이리: 이제 와서 생각해보니… 우린 처음부터 맞지 않았던 것 같아. \n너도 그렇지? 내가 너무 기대했나 봐.\n");
			printf("%s : 그래, 우리 여기까진 것 같아.\n", name);
			printf("아이리: 알았어. 그럼, 이제 다신 마주칠 일 없겠지.\n");
			printf("게임을 플레이 해주셔서 감사합니다.");
		}


		return 0;
		
	}
	else if (answer ==2)
	{
		printf("게임을 플레이 해주셔서 감사합니다.");
		
	}
	else
	{
		printf("잘 못 입력하셨습니다 \n다시 시도해주세요");
	}

	
}


void gotoxy(int x, int y) //커서 옮기기 
{ 
	COORD Pos = { x, y };	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); 
}
