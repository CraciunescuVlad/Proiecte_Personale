let questions = [
    {
        question: "Do you feel happy?",
        options: {
            a: "Yes",
            b: "No"
        },
        correctAnswer: "a",
        correctResponse: "Super! 😊",
        incorrectResponse: "I am sorry 😔"
    },
    {
        question: "Do you like coding?",
        options: {
            a: "Yes",
            b: "No"
        },
        correctAnswer: "a",
        correctResponse: "That's great! 💻",
        incorrectResponse: "Give it a try, you might enjoy it! 🔥"
    }
];

let currentQuestionIndex = 0;
let chatContainer = document.getElementById("chat-container");
let chatForm = document.getElementById("chat-form");
let userInput = document.getElementById("user-input");

displayQuestion();

function displayQuestion() {
    let currentQuestion = questions[currentQuestionIndex];
    let optionsHTML = Object.keys(currentQuestion.options).map(
        key => `<button class='option-btn' onclick='handleAnswer("${key}")'>${key}. ${currentQuestion.options[key]}</button>`
    ).join(' ');

    let botResponse = document.createElement("div");
    botResponse.classList.add("message", "bot-message");

    botResponse.innerHTML = `<strong>Bot:</strong> ${currentQuestion.question}<br>${optionsHTML}`;
    chatContainer.appendChild(botResponse);
    animateMessage(botResponse);
}

function scrollChatContainerToBottom() {
    chatContainer.scrollTop = chatContainer.scrollHeight;
}

function handleAnswer(userResponse) {
    let userMessage = document.createElement("div");
    userMessage.classList.add("message", "user-message");
    userMessage.innerHTML = `<strong>You:</strong> ${questions[currentQuestionIndex].options[userResponse]}`;
    chatContainer.appendChild(userMessage);

    let currentQuestion = questions[currentQuestionIndex];
    let botResponse = document.createElement("div");
    botResponse.classList.add("message", "bot-message");

    setTimeout(() => {
        botResponse.innerHTML = `<strong>Bot:</strong> `;
        if (userResponse === currentQuestion.correctAnswer) {
            botResponse.innerHTML += currentQuestion.correctResponse;
        } else {
            botResponse.innerHTML += currentQuestion.incorrectResponse;
        }
        chatContainer.appendChild(botResponse);
        animateMessage(botResponse);

        currentQuestionIndex = (currentQuestionIndex + 1) % questions.length;
        setTimeout(displayQuestion, 1000);
    }, 500);
}

function animateMessage(messageElement) {
    messageElement.style.opacity = 0;
    setTimeout(() => {
        messageElement.style.opacity = 1;
    }, 100);
}

chatForm.addEventListener("submit", function(event) {
    event.preventDefault();
    let userResponse = userInput.value.toLowerCase();
    if (!userResponse || !questions[currentQuestionIndex].options[userResponse]) return;
    handleAnswer(userResponse);
    userInput.value = "";
    scrollChatContainerToBottom();
});