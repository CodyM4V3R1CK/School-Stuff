package com.company;

public class Dog extends Animal{

    public Dog(String name, String family) {

    }

    @Override
    public void setAge(int age) {
        this.age = age * 7;
    }
}