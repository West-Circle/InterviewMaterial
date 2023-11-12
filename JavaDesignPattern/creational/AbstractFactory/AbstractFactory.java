package JavaDesignPattern.creational.AbstractFactory;

public interface AbstractFactory {
    // can have multiple factory creating same product
    AbstractProductA createProductA();

    AbstractProductB createProductB();
}
