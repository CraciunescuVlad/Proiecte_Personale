from django.db.models.fields import return_None
from django.shortcuts import render, HttpResponse
from .models import TodoItem
# Create your views here.
def home(request):
    return render(request, 'home.html')

def todos(request):
    items = TodoItem.objects.all()
    return render(request, 'todos.html', {"todos": items})

def home(request):
    return render(request, "index.html")

def about(request):
    return render(request, 'about.html')

def contact(request):
    return render(request, './html/form.html')