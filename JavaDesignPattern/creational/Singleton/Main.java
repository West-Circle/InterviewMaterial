package JavaDesignPattern.creational.Singleton;

public class Main {
    public static void main(String[] args) {
        Singleton singleton = Singleton.getInstance();
        singleton.anyMethod();
    }
}
