 abstract class atm{
     int amount;
     abstract void Withdraw(int amount);
     abstract void Deposit(int amount);
}
class Transaction extends atm{
    void Withdraw(int amount) {
        this.amount-=amount;
    }
    void Deposit(int amount) {
        this.amount += amount;
    }
    void See(){
        System.out.println(amount);
    }
};
public class problem {
    public static void main(String[] args) {
        Transaction s = new Transaction();
        s.Deposit(900000);
        s.Withdraw(900);
        s.See();
        
    }
}
