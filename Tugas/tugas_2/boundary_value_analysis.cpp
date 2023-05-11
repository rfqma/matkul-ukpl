#include <iostream>
using namespace std;

// fungsi yang akan diuji
int calculate(int x)
{
    if (x > 100)
    {
        return 3 * x;
    }
    else if (x > 0 && x <= 100)
    {
        return 2 * x;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int input[6] = {-101, -100, 0, 100, 101}; // nilai input
    int output[6] = {0, 0, 0, 200, 303};      // nilai output yang diharapkan

    // melakukan testing dengan Boundary Value Analysis
    for (int i = 0; i < 5; i++)
    {
        cout << "Input: " << input[i] << endl;
        cout << "Output: " << calculate(input[i]) << endl;
        cout << "Expected Output: " << output[i] << endl;
        cout << endl;
    }

    return 0;
}

// Kode Program di atas melakukan pengujian terhadap fungsi
// calculate dengan menggunakan Teknik Boundary Value Analysis.

// Input yang digunakan adalah nilai yang berada di tepi tengah
// domain testing, yaitu -101, -100, 0, 100, dan 101.
// Output yang diharapkan juga telah ditentukan sebelumnya.

// Hasil pengujian akan ditampilkan ke layer dalam format input dan
// output yang dihasilkan oleh fungsi, dan output yang diharapkan.
// Selanjutnya, pengguna dapat memeriksa apakah fungsi calculate
// telah menghasilkan output yang sesuai dengan
// yang diharapkan pada setiap kasus pengujian.