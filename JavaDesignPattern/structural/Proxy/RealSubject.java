package JavaDesignPattern.structural.Proxy;

public class RealSubject implements Subject {
    @Override
    public void request() {
        System.out.println("RealSubject handling request()");
    }
}
