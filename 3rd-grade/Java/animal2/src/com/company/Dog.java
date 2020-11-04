package com.company;

public class Dog extends Animal {
    protected int hlasStek;

    public Dog(int age) {
        super(age);
    }

    public Dog(int age, String name) {
        super(age, name);
    }

    public Dog(int age, String name, int hlasStek) {
        super(age * 7, name);
        this.hlasStek = hlasStek;
    }

    public void setAge(int age) {
        super.setAge(age * 7);
    }

}
