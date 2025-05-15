from django.urls import path
from .import views

urllpatterns = [
    path("", views.index, name="home")
    path('about/', views.about, name='about'),
    path('contact/', views.contact, name='contact'),
]

# from django.contrib import admin
# from django.urls import path, include
# urlpatterns = [
# path('admin/', admin.site.urls),
# path("", include("myapp.urls")),
# ]