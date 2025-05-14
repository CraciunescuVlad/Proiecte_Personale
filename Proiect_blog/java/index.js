// Selectăm butonul și secțiunea articolelor
const toggleButton = document.getElementById("toggleArticles");
const articlesSection = document.getElementById("articlesSection");

// Eveniment pentru a afișa/ascunde articolele cu animație
toggleButton.addEventListener("click", function() {
    if (articlesSection.classList.contains("show")) {
        articlesSection.style.opacity = "0"; // Dispare treptat
        setTimeout(() => {
            articlesSection.classList.remove("show");
            articlesSection.style.display = "none";
        }, 500); // Se ascunde complet după 0.5s
    } else {
        articlesSection.style.display = "block"; // Devine vizibil
        setTimeout(() => {
            articlesSection.classList.add("show");
            articlesSection.style.opacity = "1";
        }, 10); // Adaugă clasa cu delay pentru tranziție smooth
    }
});