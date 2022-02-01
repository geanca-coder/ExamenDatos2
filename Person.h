//
// Created by geanc on 1 feb. 2022.
//

#ifndef EXAMENDATOS2_PERSON_H
#define EXAMENDATOS2_PERSON_H

#include <iostream>
using namespace std;
class Person {
private:
    string nombre, apellido, email, gender;
public:
    explicit  Person(const string &nombre="", const string &apellido="", const string &email="", const string &gender=" ");

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getApellido() const;

    void setApellido(const string &apellido);

    const string &getEmail() const;

    void setEmail(const string &email);

    const string &getGender() const;

    void setGender(const string &gender);

    friend ostream &operator<<(ostream &os, const Person &person);

};


#endif //EXAMENDATOS2_PERSON_H
