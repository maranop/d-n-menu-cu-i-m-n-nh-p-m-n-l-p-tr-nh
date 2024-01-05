#include <stdio.h>
#include <math.h>

// Ch?c nang s? 1: Ki?m tra s? nguy�n
void KiemTraSoNguyen() {
    int x;
    printf("Nh?p v�o 1 s? nguy�n x: ");
    scanf("%d", &x);
    printf("S? %d c� ph?i l� s? nguy�n? -> ", x);
    if (x == (int)x) {
        printf("C�\n");
    } else {
        printf("Kh�ng\n");
    }
    // Ki?m tra s? nguy�n t? v� s? ch�nh phuong ? d�y
}

// Ch?c nang s? 2: T�m U?c s? chung v� b?i s? chung
void TimUocBoiSo(int x, int y) {
    // T�m u?c s? chung v� b?i s? chung ? d�y
}

// Ch?c nang s? 3: T�nh ti?n cho qu�n Karaoke
void TinhTienKaraoke(int gioBatDau, int gioKetThuc) {
    // T�nh ti?n Karaoke ? d�y
}

// Ch?c nang s? 4: T�nh ti?n di?n
void TinhTienDien(float kwh) {
    // T�nh ti?n di?n ? d�y
}

// Ch?c nang s? 5: Ch?c nang d?i ti?n
void DoiTien(int amount) {
    // �?i ti?n ? d�y
}

// Ch?c nang s? 6: T�nh l�i su?t vay ng�n h�ng
void TinhLaiSuatVay(float soTienVay) {
    // T�nh l�i su?t v� s? ti?n c?n tr? ? d�y
}

// Ch?c nang s? 7: Vay ti?n mua xe
void VayTienMuaXe(float phanTramVayToiDa) {
    // T�nh s? ti?n ph?i tr? l?n d?u v� h�ng th�ng ? d�y
}

// Ch?c nang s? 8: S?p x?p th�ng tin sinh vi�n
void SapXepSinhVien() {
    // Nh?p v� s?p x?p th�ng tin sinh vi�n ? d�y
}

// Ch?c nang s? 9: Game FPOLY-LOTT
void GameLottery(int so1, int so2) {
    // X? l� tr� choi FPOLY-LOTT ? d�y
}

// Ch?c nang s? 10: T�nh to�n ph�n s?
void TinhToanPhanSo() {
    // Nh?p v� t�nh to�n ph�n s? ? d�y
}

int main() {
    int choice;

    do {
        printf("\n\n***** MENU *****\n");
        printf("1. Ki?m tra s? nguy�n\n");
        printf("2. T�m U?c s? chung v� b?i s? chung c?a 2 s?\n");
        printf("3. T�nh ti?n cho qu�n Karaoke\n");
        printf("4. T�nh ti?n di?n\n");
        printf("5. �?i ti?n\n");
        printf("6. T�nh l�i su?t vay ng�n h�ng\n");
        printf("7. Vay ti?n mua xe\n");
        printf("8. S?p x?p th�ng tin sinh vi�n\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. T�nh to�n ph�n s?\n");
        printf("0. Tho�t\n");
        printf("Ch?n ch?c nang (0-10): ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("K?t th�c chuong tr�nh!\n");
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

