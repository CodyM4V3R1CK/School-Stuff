package com.company;

public class Animal {
    private int age;
    String name;

    public Animal(int age) {
        this.age = age;
    }

    public Animal(int age, String name) {
        this.age = age;
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
