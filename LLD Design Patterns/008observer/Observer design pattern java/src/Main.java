public class Main {
    public static void main(String[] args) {
        Observable observable=new ObservableImpl();
        observable.addObserver(new ObserverImpl(12,"mohit",observable));
        Observer obj=new ObserverImpl(11,"rohit",observable);
        observable.addObserver(obj);
        observable.addObserver(new ObserverImpl(10,"aman",observable));
        observable.changeState(232);
        observable.removeObserver(obj);
        System.out.println("after removing one object -----------------------------");
        observable.changeState(111);
    }
}

/*
Observer id : 12 name : mohit
the new value is : 232
Observer id : 11 name : rohit
the new value is : 232
Observer id : 10 name : aman
the new value is : 232
after removing one object -----------------------------
Observer id : 12 name : mohit
the new value is : 111
Observer id : 10 name : aman
the new value is : 111

[Done] exited with code=0 in 9.702 seconds


*/