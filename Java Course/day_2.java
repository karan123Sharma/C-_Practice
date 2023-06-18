// public class day_2 {
//     String Name;
//     int Roll_no;

//     public day_2(String Name,int Roll_no){
//         this.Name = Name;
//         this.Roll_no = Roll_no;
//     }
//     public static void main(String[] args) {
//        day_2 S = new day_2("John", 2);
//        System.out.println(S.Name +"  "+S.Roll_no);
//     }
// }
class Parent {
    void Say(){
        System.out.println("This is Parent Class");
    }
}

class Child extends Parent {
    void Say1(){
        System.out.println("This is Child Class");
    }
}

class day_2 {
    public static void main(String args[]) {
        Child d = new Child();
        d.Say();
        d.Say1();
    }
}