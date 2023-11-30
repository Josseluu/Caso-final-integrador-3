#include <iostream>
#include <fstream>

void load_script(const char* filename, bool show_script = false) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: No se pudo abrir el archivo " << filename << std::endl;
        return;
    }

    if (show_script) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    }

    file.close();
}

void load_script() {
    std::string filename;
    std::cout << "Ingrese el nombre del archivo: ";
    std::cin >> filename;

    load_script(filename.c_str(), true);
}

int main() {
    // Uso de load_script() sin parámetros para ingresar el nombre del archivo
    load_script();


    load_script("nombre_del_archivo.txt", true);

    return 0;
}