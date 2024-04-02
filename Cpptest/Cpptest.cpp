#include <iostream>
using namespace std;

int total(int price, int quant) {
    return price * quant;
}

int main() {
    string menu[] = { "일반 라면", "김치 라면", "치즈 라면", "떡 라면", "떡 만두 라면" };
    int prices[] = { 3500, 4000, 4200, 4300, 4500 };

    int totalpur = 0;

    while (true) {
        cout << "********** 슈니의 라면가게에 오신 것을 환영합니다 ***********" << endl;
        cout << "1. 일반 라면(3500원)" << endl;
        cout << "2. 김치 라면(4000원)" << endl;
        cout << "3. 치즈 라면(4200원)" << endl;
        cout << "4. 떡 라면(4300원)" << endl;
        cout << "5. 떡 만두 라면(4500원)" << endl;
        cout << endl;
        cout << "구매하실 라면 번호를 입력해주세요(종료는 0): ";

        int a;
        cin >> a;
        cin.ignore(10, '\n');

        if (a == 0) {
            cout << "총 가격은 " << totalpur << "원 입니다." << endl;
            break;
        }

        if (a < 6 && a > 0) {
            cout << menu[a - 1] << "을(를) 구매하겠습니까 ? (Y/N) ";

            char yn;
            cin >> yn;

            if (yn == 'y') {
                cout << "구매하실 라면 개수를 입력해주세요 : ";

                int num;
                cin >> num;

                int totalprice = total(prices[a - 1], num);

                cout << endl << num << "개의 " << menu[a - 1] << "을(를) 구매하셨습니다." << endl;
                cout << "총 가격은 " << totalprice << "원 입니다." << endl;
                totalpur += totalprice;
            }
            else {
                cout << endl;
            }
        }
        else {
            cout << "제대로 된 숫자를 입력해주세요." << endl;
        }
    }

    return 0;
}
