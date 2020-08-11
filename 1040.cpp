#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float N1, N2, N3, N4, N5, media, media2;
    cin >> N1 >> N2 >> N3 >> N4;
    media= (N1*2+N2*3+N3*4+N4*1)/(2+3+4+1);
    cout << "Media: " << fixed << setprecision(1) << media << endl;
    if (media>=7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else
    {
        if (media<5.0)
        {
            cout << "Aluno reprovado." << endl;
        }
        else
        {
            if (media>=5 and media<7)
            {
                cout << "Aluno em exame." << endl;
                cin >> N5;
                cout << "Nota do exame: " << N5 << endl;
                media2 = (media+N5)/2;
                if (media2>=5)
                {
                    cout << "Aluno aprovado." << endl;
                    cout << "Media final: " << media2 << endl;
                }
                else
                {
                    cout << "Aluno reprovado." << endl;
                    cout << "Media final: " << media2 << endl;
                }
            }
        }
    }
    return 0;
}
