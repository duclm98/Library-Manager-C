#include"Menu.h"

int main()
{
    bool flag = true;
    char dsDocGia[100][9][50];
    int n = 0;
    do {
        printf("CHUONG TRINH QUAN LY BANG NGON NGU C\n");
        printf("1. Quan ly doc gia\n");
        printf("6. THOAT\n");
        printf("XIN MOI CHON: ");
        int chon;
        scanf_s("%d", &chon);
        switch (chon)
        {
        case 1:
            MenuDocGia(dsDocGia, n);
            break;
        default:
            flag = false;
            break;
        }
    } while (flag);

    return 0;
}