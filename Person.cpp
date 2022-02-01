//
// Created by geanc on 1 feb. 2022.
//

#include "Person.h"

Person::Person(const string &nombre, const string &apellido, const string &email, const string &gender) : nombre(
        nombre), apellido(apellido), email(email), gender(gender) {}

const string &Person::getNombre() const {
    return nombre;
}

void Person::setNombre(const string &nombre) {
    Person::nombre = nombre;
}

const string &Person::getApellido() const {
    return apellido;
}

void Person::setApellido(const string &apellido) {
    Person::apellido = apellido;
}

const string &Person::getEmail() const {
    return email;
}

void Person::setEmail(const string &email) {
    Person::email = email;
}

const string &Person::getGender() const {
    return gender;
}

void Person::setGender(const string &gender) {
    Person::gender = gender;
}

ostream &operator<<(ostream &os, const Person &person) {
    os <<person.getNombre();
    return os;
}

Person::operator string() {
    return getNombre();
}

