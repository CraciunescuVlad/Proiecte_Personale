fetch("http://localhost:8080/carti")
    .then(res => res.json())
    .then(carti => {
        const tbody = document.querySelector("#tabelCarti tbody");
        tbody.innerHTML = "";

        carti.forEach(carte => {
            const row = document.createElement("tr");
            row.innerHTML = `
                <td>${carte.isbn}</td>
                <td>${carte.titlu}</td>
                <td>${carte.autor}</td>
                <td>${carte.stoc}</td>
            `;
            tbody.appendChild(row);
        });
    })
    .catch(err => {
        console.error("Eroare la preluarea cărților:", err);
        alert("Nu s-a putut conecta la serverul C++ (verifică dacă rulează)");
    });
