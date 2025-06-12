#include <iostream>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

struct Projeto
{
    string titulo;
    string descricacao;
    string link;
};

void digitar(string texto, int delay =30){
    for (char c : texto)
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}

void arteASCII() {
    cout << R"(

 ███████╗██████╗ ███╗   ██╗██╗██╗ ██████╗ ██╗ ██████╗ 
 ██╔════╝██╔══██╗████╗  ██║██║██║██╔════╝ ██║██╔═══██╗
 █████╗  ██████╔╝██╔██╗ ██║██║██║██║  ███╗██║██║   ██║
 ██╔══╝  ██╔═══╝ ██║╚██╗██║██║██║██║   ██║██║██║   ██║
 ███████╗██║     ██║ ╚████║██║██║╚██████╔╝██║╚██████╔╝
 ╚══════╝╚═╝     ╚═╝  ╚═══╝╚═╝╚═╝ ╚═════╝ ╚═╝ ╚═════╝ 
                                                    
    )" << endl;
}

void mostrarSobre(){
    digitar("\n==================== Sobre Mim ====================");
    digitar("Sou Ernicio Chilundo, Programador autodidata de Moçambique.");
    digitar("Foco JavaScript, Python, C++ e soluções criativas com IA\n");
}

void mostrarProjetos(const vector<Projeto>&  projetos){
    digitar("\n==================== Projetos ======================");
    for (const auto& projeto : projetos)
    {
        digitar("• " + projeto.titulo);
        digitar(" " + projeto.descricacao);
        digitar(" Link: "+ projeto.link + "\n");
    }
    
}

void mostrarContato() {
    digitar("\n==================== Contato ====================");
    digitar("🌟 Ernicio Jermias Chilundo");
    digitar("🔗 GitHub: https://github.com/Ernicio-Chilundo-Dev");
    digitar("💼 LinkedIn: https://www.linkedin.com/in/ernicio-jermias-chilundo");
    digitar("📧 Email: ernicio.j.chilundo@email.com");
    digitar("📞 WhatsApp: +258 870568953\n");
}

int main(){
    vector<Projeto> projetos = {
    {"cpp-terminal-portfolio", "Portfolio em C++ com interface de terminal", "https://github.com/Ernicio-Chilundo-Dev/cpp-terminal-portfolio"},
    {"cpp-ai-lib-02-dlib", "Biblioteca C++ de IA usando Dlib", "https://github.com/Ernicio-Chilundo-Dev/cpp-ai-lib-02-dlib"},
    {"cpp-ai-lib-01-eigen", "Biblioteca C++ de IA usando Eigen", "https://github.com/Ernicio-Chilundo-Dev/cpp-ai-lib-01-eigen"},
    {"black-hole-gravity-simulation", "Simulação da gravidade de um buraco negro em HTML", "https://github.com/Ernicio-Chilundo-Dev/black-hole-gravity-simulation"},
    {"learned", "Projetos variados em JavaScript", "https://github.com/Ernicio-Chilundo-Dev/learned"},
    {"QuoteMaster", "Gerenciador de citações em JavaScript", "https://github.com/Ernicio-Chilundo-Dev/QuoteMaster"},
    {"TemConvert", "Projeto sem descrição fornecida", "https://github.com/Ernicio-Chilundo-Dev/TemConvert"}
};

 int escolha;

    do {
        cout << "=== Portfólio Interativo ===\n";
        cout << "1. Sobre Mim\n";
        cout << "2. Projetos\n";
        cout << "3. Contato\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha) {
            case 1: mostrarSobre(); break;
            case 2: mostrarProjetos(projetos); break;
            case 3: mostrarContato(); break;
            case 0: cout << "Até logo!\n"; break;
            default: cout << "Opção inválida. Tente novamente.\n";
        }

        cout << "\n";

    } while (escolha != 0);

    return 0;
}
