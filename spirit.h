using namespace std;

void narasi(string kalimat) {
    x=0;
    while ( kalimat[x] != '\0')
    {
        cout << kalimat[x];
        Sleep(100);
        x++;
    }
}