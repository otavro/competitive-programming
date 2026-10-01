#include <iostream>
#include <iomanip>

using namespace std;

void isStudentApproved(double mean){
    if(mean >= 6){
        cout << "Aluno aprovado." << endl;
    }
    else {
        cout << "Aluno reprovado." << endl;
    }
}

int main() {

    double mean, n1, n2, n3, n4, exam;

    cin >> n1 >> n2 >> n3 >> n4;

    mean = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
    
    cout << fixed << setprecision(1);
    cout << "Media: " << mean << endl;
    
    if(mean >=5 && mean <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> exam;
        cout << "Nota do exame: " << exam << endl;
        
        mean = (mean + exam) / 2;
        isStudentApproved(mean);
        cout << "Media final: " << mean << endl;

    }else{
        isStudentApproved(mean);
    }
    
    

    return 0;
}