#include <stdio.h>

int main() {
    // Deklarasi variabel
    float harga_barang, total_pembayaran, uang_pembeli, kembalian;
    int jumlah_barang;

    // Input harga barang dan jumlah barang yang dibeli
    printf("Masukkan harga barang: $");
    scanf("%f", &harga_barang);

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlah_barang);

    // Menghitung total pembayaran
    total_pembayaran = harga_barang * jumlah_barang;

    // Menampilkan total pembayaran
    printf("Total pembayaran: $%.2f\n", total_pembayaran);

    // Input jumlah uang yang dibayarkan oleh pembeli
    printf("Masukkan jumlah uang pembeli: $");
    scanf("%f", &uang_pembeli);

    // Menghitung kembalian
    kembalian = uang_pembeli - total_pembayaran;

    // Menampilkan kembalian
    if (kembalian >= 0) {
        printf("Kembalian: $%.2f\n", kembalian);
    } else {
        printf("Maaf, uang pembeli tidak mencukupi.\n");
    }

    return 0;
}
