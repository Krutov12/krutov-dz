#include <iostream>
#include <iomanip>

using namespace std;
//using  namespace  std;

struct mobilephone {
    double weight;
    bool is_broken;
    double price;
};

int phone_kol() {
    int cou;
    cin >> cou;
    return cou;
}

int main() {
    int cou = 0;
    ///-----------------------------------------колво телефонов---------------------------------------
    cou = phone_kol();
    //  cin >> cou;
    mobilephone phones[cou];
    ///---------------------------------------значения телефонов--------------------------------------
    for (int i = 0; i < cou; i++) {
        cin >> phones[i].weight >> phones[i].is_broken >> phones[i].price;
    }
    ///---------------------------------------СОСТАВЛЕНИЕ ТАБЛИЦЫ-------------------------------------
    cout << "<MobilePHones>" << '\n';
    for (int i = 0; i < cou; i++) {
        ///--------------------------------------------<<< i <<<--------------------------------------
        cout << "\t" << "<MobilePhone " << "id=\"" << i << "\" " << "weight=" << "\"";
        ///-------------------------------------------------------------------------------------------
        if (phones[i].weight == ((int) phones[i].weight)) {
            cout << int(phones[i].weight);
        } else {
            double now_weight = phones[i].weight;
            int countweight = 0;
            while (now_weight != ((int) now_weight)) {
                countweight++;
                now_weight = now_weight * 10;
            }
            if (countweight != 0) {
                cout << fixed << showpoint;
                cout << setprecision(countweight);
                ///-----------------------------------<<<WEIGHT<<<------------------------------------
                cout << phones[i].weight;
            } else {
                cout << phones[i].weight;
                ///-----------------------------------------------------------------------------------
            }
        }
        ///---------------------------------------<<<broken or not<<<---------------------------------
        cout << "\" " << "is_broken=" << "\"" << ((phones[i].is_broken) ? "true" : "false") << "\" " << "price="
             << "\"";
        ///------------------------------------------------------------------------------------------
        if (phones[i].price == ((int) phones[i].price)) {
            cout << int(phones[i].price);
        } else {
            double now_phone = phones[i].price;
            int count1 = 0;
            while (now_phone != ((int) now_phone)) {
                count1++;
                now_phone = now_phone * 10;
            }
            if (count1 != 0) {
                cout << setprecision(count1) << fixed;
                ///-----------------------------------------<<<price<<<--------------------------------
                cout << phones[i].price;
            } else {
                cout << phones[i].price;
                ///------------------------------------------------------------------------------------
            }
        }
        cout << "\"/>" << '\n';
    }
    cout << "</MobilePHones>" << '\n';
    return 0;
}

