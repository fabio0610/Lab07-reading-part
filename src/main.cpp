#include <iostream>
#include <../lib/nlohmann/json.hpp>
#include <iostream>
#include <fstream>

using namespace std;
using json = nlohmann::json;
int main() {

    ifstream archivo1;
    string texto;
    try { archivo1.open("ArchivoJson.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    cout << endl;
    while (!archivo1.eof()) {
        getline(archivo1, texto);
        cout << texto << endl;
    }
    archivo1.close();



    return 0;
}
