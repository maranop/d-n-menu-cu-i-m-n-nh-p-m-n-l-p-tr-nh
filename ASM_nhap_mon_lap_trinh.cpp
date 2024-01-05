#include <stdio.h>
#include <math.h>

// Ch?c nang s? 1: Ki?m tra s? nguyên
void KiemTraSoNguyen() {
    int x;
    printf("Nh?p vào 1 s? nguyên x: ");
    scanf("%d", &x);
    printf("S? %d có ph?i là s? nguyên? -> ", x);
    if (x == (int)x) {
        printf("Có\n");
    } else {
        printf("Không\n");
    }
    // Ki?m tra s? nguyên t? và s? chính phuong ? dây
}

// Ch?c nang s? 2: Tìm U?c s? chung và b?i s? chung
void TimUocBoiSo(int x, int y) {
    // Tìm u?c s? chung và b?i s? chung ? dây
}

// Ch?c nang s? 3: Tính ti?n cho quán Karaoke
void TinhTienKaraoke(int gioBatDau, int gioKetThuc) {
    // Tính ti?n Karaoke ? dây
}

// Ch?c nang s? 4: Tính ti?n di?n
void TinhTienDien(float kwh) {
    // Tính ti?n di?n ? dây
}

// Ch?c nang s? 5: Ch?c nang d?i ti?n
void DoiTien(int amount) {
    // Ð?i ti?n ? dây
}

// Ch?c nang s? 6: Tính lãi su?t vay ngân hàng
void TinhLaiSuatVay(float soTienVay) {
    // Tính lãi su?t và s? ti?n c?n tr? ? dây
}

// Ch?c nang s? 7: Vay ti?n mua xe
void VayTienMuaXe(float phanTramVayToiDa) {
    // Tính s? ti?n ph?i tr? l?n d?u và hàng tháng ? dây
}

// Ch?c nang s? 8: S?p x?p thông tin sinh viên
void SapXepSinhVien() {
    // Nh?p và s?p x?p thông tin sinh viên ? dây
}

// Ch?c nang s? 9: Game FPOLY-LOTT
void GameLottery(int so1, int so2) {
    // X? lý trò choi FPOLY-LOTT ? dây
}

// Ch?c nang s? 10: Tính toán phân s?
void TinhToanPhanSo() {
    // Nh?p và tính toán phân s? ? dây
}

int main() {
    int choice;

    do {
        printf("\n\n***** MENU *****\n");
        printf("1. Ki?m tra s? nguyên\n");
        printf("2. Tìm U?c s? chung và b?i s? chung c?a 2 s?\n");
        printf("3. Tính ti?n cho quán Karaoke\n");
        printf("4. Tính ti?n di?n\n");
        printf("5. Ð?i ti?n\n");
        printf("6. Tính lãi su?t vay ngân hàng\n");
        printf("7. Vay ti?n mua xe\n");
        printf("8. S?p x?p thông tin sinh viên\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tính toán phân s?\n");
        printf("0. Thoát\n");
        printf("Ch?n ch?c nang (0-10): ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("K?t thúc chuong trình!\n");
                break;
            case 1:
                KiemTraSoNguyen();
                break;
            case 2:
                TimUocBoiSo(x, y);
                break;
            case 3:
                TinhTienKaraoke(gioBatDau, gioKetThuc);
                break;
            case 4:
                TinhTienDien(kwh);
                break;
            case 5:
                DoiTien(amount);
                break;
            case 6:
                TinhLaiSuatV  

