function schimbaText() {
    document.getElementById("titlu").innerText = "Text modificat!";
}


function validateForm() {
    let name = document.getElementById("name").value;
    let email = document.getElementById("email").value;
    let message = document.getElementById("message").value;

    let correct = 1;
    if (name == "" || email == "" || message == "") {
        alert("Toate câmpurile trebuie completate!");
        correct = 0;
        return false;
    }

    let emailPattern = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;

    if (!emailPattern.test(email)) {
        alert("Introduceți un email valid!");
        correct = 0;
        return false;
    }

    return correct;
}