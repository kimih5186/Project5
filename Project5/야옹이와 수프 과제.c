//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>   
//#include <windows.h> 
//
//#define ROOM_WIDTH 6
//#define HME_POS 1
//#define BWL_POS (ROOM_WIDTH - 2)
//
//int main(void) {
//    srand(time(NULL));
//    int x;
//    int z = 1;
//    int q = z;
//    int soupCount = 0;
//    int isFirst = 1;
//
//    //인트로
//    printf("****야옹이와 수프****\n\n");
//    printf("@@@여기에 ascii art 그리기 @@@\n\n");
//    printf("야옹이의 이름을 지어주세요: 쫀떡\n");
//    printf("야옹이의 이름은 쫀떡입니다.\n");
//
//    printf("        /＼_/＼\n");
//    printf(" /＼   / o  o ＼  \n");
//    printf("//＼＼ ＼~(*)~/ \n");
//    printf("   ＼/    ^ /\n");
//    printf("     |  ＼|| ||\n");
//    printf("     ＼  '|| ||\n");
//    printf("       ＼)()-())\n");
//
//    Sleep(5000);
//    system("cls");
//
//    //상태출력
//
//    while (1) {
//
//        printf("==================== 현재상태===================\n");
//        printf("현재까지 만든 수프: %d개\n", soupCount);
//
//        if (isFirst) {
//            printf("집사와의 관계(0~4):");
//            scanf_s("%d", &x);
//
//            while (x < 0 || x > 4) {
//                printf(">>");
//                scanf_s("%d", &x);
//            }
//            isFirst = 0;
//        }
//        else {
//            printf("집사와의 관계(0~4):%d\n", x);
//        }
//
//
//
//
//        if (x == 0) {
//            printf(" 곁에 오는 것조차 싫어합니다.\n");
//        }
//        else if (x == 1) {
//            printf(" 간식자판기취급입니다.\n");
//        }
//        else if (x == 2) {
//            printf(" 그럭저럭 쓸 만한 집사입니다.\n");
//        }
//        else if (x == 3) {
//            printf(" 휼륭한 집사로 인정 받고 있습니다.\n");
//        }
//        else {
//            printf(" 집사 껌딱지입니다.\n");
//        }
//        printf("==================================================\n\n");
//
//
//        Sleep(3000);
//        system("cls");
//
//
//
//        // 상호작용
//
//        printf("어떤상호작용을하시겠습니까?   0. 아무것도하지않음 1. 긁어주기\n>>");
//
//        int y;
//        scanf_s("%d", &y);
//
//        while (y != 0 && y != 1) {
//            printf(">>");
//            scanf_s("%d", &y);
//        }
//
//        for (int i = 0; i < 1; i++) {
//            if (y == 0) {
//                printf("아무것도 하지않습니다.\n");
//                printf("4/6의 확률로 친밀도가 떨어집니다.\n");
//                printf("주사위를 굴립니다. 또르륵...\n");
//
//                int r = rand() % 6 + 1;
//                printf("%d이(가) 나왔습니다!\n", r);
//
//                if (r <= 4) {
//                    printf("친밀도가 떨어집니다\n");
//                    if (x > 0) {
//                        x--;
//                    }
//                }
//                else {
//                    printf("다행히 친밀도가 떨어지지 않았습니다\n");
//
//                }
//                printf("현재 친밀도%d\n", x);
//            }
//
//        }
//
//
//        if (y == 1) {
//            printf("쫀떡이의 턱을 긁어주었습니다.\n");
//            printf("2/6의 확률로 친밀도가 높아집니다.\n");
//            printf("주사위를 굴립니다. 또르륵...\n");
//            for (int i = 0; i < 1; i++) {
//                int r = rand() % 6 + 1;
//                printf("%d이(가) 나왔습니다!\n", r);
//
//                if (r >= 5) {
//                    if (x < 4) {
//                        printf("친밀도가 높아집니다.\n");
//                        x++;
//                    }
//                }
//                else {
//                    printf("친밀도는 그대로입니다.\n");
//                }
//            }
//            printf("현재 친밀도%d\n", x);
//
//        }
//        Sleep(3000);
//        system("cls");
//
//
//
//        //방 그리기
//        printf("######\n");
//        printf("#H  B#\n");
//        printf("#");
//
//        for (int i = 1; i < ROOM_WIDTH - 1; i++) {
//            if (i == z)
//                printf("C");
//            else if (i == q && z != q)
//                printf(".");
//            else
//                printf(" ");
//        }
//        printf("#\n######\n\n");
//
//        Sleep(3000);
//        system("cls");
//
//
//        //이동,행동
//
//        printf("쫀떡 이동: 집사와 친밀할수록 냄비 쪽으로 갈 확률히 높아집니다.\n");
//        printf("주사위 눈이 %d이상이면 냄비 쪽으로 이동합니다.\n", 6 - x);
//        printf("주사위를 굴립니다. 또르륵...\n");
//
//
//        int a = rand() % 6 + 1;
//        printf("%d이(가) 나왔습니다!\n", a);
//
//
//        if (a >= (6 - x) && z < BWL_POS) {
//            q = z;
//            z++;
//            printf("냄비 쪽으로 움직입니다.\n\n");
//        }
//        else if (a < (6 - x) && z > HME_POS) {
//            q = z;
//            z--;
//            printf("집 쪽으로 움직입니다.\n\n");
//        }
//        else {
//            q = z;
//        }
//        if (z == HME_POS) {
//            printf("쫀떡은(는) 자신의 집에서 편안함을 느낍니다.\n\n");
//        }
//
//        if (z == BWL_POS) {
//            int index = rand() % 3;
//            printf("쫀떡이 냄비에 도착했습니다! ");
//            if (index == 0) {
//                printf("감자수프를 만들었습니다!\n");
//            }
//            else if (index == 1) {
//                printf("양송이수프를 만들었습니다!\n");
//            }
//            else {
//                printf("브로콜리수프를 만들었습니다!\n");
//            }
//            soupCount++;
//            printf("현재까지 만든 수프 개수: %d개\n\n", soupCount);
//        }
//
//
//        printf("######\n");
//        printf("#H  B#\n");
//        printf("#");
//
//        for (int i = 1; i < ROOM_WIDTH - 1; i++) {
//            if (i == z)
//                printf("C");
//            else if (i == q && z != q)
//                printf(".");
//            else
//                printf(" ");
//        }
//        printf("#\n######\n\n");
//
//
//
//
//
//        Sleep(3000);
//        system("cls");
//    }
//
//
//
//
//
//
//
//
//    return 0;
//
//}