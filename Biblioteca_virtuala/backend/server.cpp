#include "../administrator/Carte.h"
#include "../fisiere/GestionareFisiere.h"
#include "httplib.h"
#include "json.hpp"

using namespace httplib;
using json = nlohmann::json;

int main() {
    Server server;

    // GET /carti → returnează lista de cărți în JSON
    server.Get("/carti", [](const Request& req, Response& res) {
        std::vector<Carte> carti = GestionareFisiere::incarcaCarti();
        json jCarti = json::array();

        for (const auto& c : carti) {
            jCarti.push_back({
                {"isbn", c.getISBN()},
                {"titlu", c.getTitlu()},
                {"autor", c.getAutor()},
                {"stoc", c.getStoc()}
            });
        }

        res.set_content(jCarti.dump(2), "application/json");
    });

    std::cout << "Server pornit la http://localhost:8080\n";
    server.listen("localhost", 8080);

    return 0;
}