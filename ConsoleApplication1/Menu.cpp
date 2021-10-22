#include"Menu.h"
#include"DocGia.h"

int MenuDocGia(char dsDocGia[100][9][50], int n) {
    bool flag = true;
    do {
        printf("QUAN LY DOC GIA\n");
        printf("1. Danh sach doc gia\n");
        printf("2. Them mot doc gia\n");
        printf("3. Chinh sua thong tin mot doc gia\n");
        printf("4. Xoa thong tin mot doc gia\n");
        printf("5. Tim kiem doc gia theo ho ten\n");
        printf("6. Tim kiem doc gia theo CMND\n");
        printf("7. THOAT\n");
        printf("XIN MOI CHON: \n");
        int chon;
        scanf_s("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("1. Danh sach doc gia\n");
            DanhSachDocGia(dsDocGia, n);
            break;
        case 2:
            printf("2. Them mot doc gia\n");
            ThemDocGia(dsDocGia, n);
            break;
        case 3:
            printf("3. Chinh sua thong tin mot doc gia\n");
            break;
        case 4:
            printf("4. Xoa thong tin mot doc gia\n");
            break;
        case 5:
            printf("5. Tim kiem doc gia theo ho ten\n");
            break;
        case 6:
            printf("6. Tim kiem doc gia theo CMND\n");
            break;
        default:
            flag = false;
            break;
        }
    } while (flag);

    return 0;
}