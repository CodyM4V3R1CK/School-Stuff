package com.company;

public class Animal {
    protected String family;
    protected String name;
    protected int age;

    void Animal(String family, String name) {
        this.family = family;
        this.name = name;
    }

    void Animal(String name) {
        this.name = name;
    }

    public String getFamily() {
        return family;
    }

    public void setFamily(String family) {
        this.family = family;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}