#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_TICKETS = 100;

// Forward declaration of friend function
class Ticket;
double applyRefundPolicy(const Ticket& t, int daysBeforeFlight);

// -------------------- Ticket Class --------------------
class Ticket {
private:
    string pnr;
    string passengerName;
    string flightNo;
    int seatNo;
    double price;
    bool cancelled;
public:
    int daysBeforeFlight; // to calculate refund policy (for simplicity)

    // Constructors
    Ticket() {
        pnr = "";
        passengerName = "";
        flightNo = "";
        seatNo = -1;
        price = 0.0;
        cancelled = false;
        daysBeforeFlight = 0;
    }

    Ticket(string p, string name, string fno, int seat, double pr, int days)
        : pnr(p), passengerName(name), flightNo(fno), seatNo(seat), price(pr), daysBeforeFlight(days), cancelled(false) {}

    // Accessors
    string getPNR() const { return pnr; }
    string getPassengerName() const { return passengerName; }
    double getPrice() const { return price; }
    int getSeatNo() const { return seatNo; }
    bool isCancelled() const { return cancelled; }

    void cancelTicket() { cancelled = true; }

    void setSeat(int newSeat) { seatNo = newSeat; }

    void displayTicket() const {
        cout << "PNR: " << pnr << ", Name: " << passengerName
             << ", Flight: " << flightNo << ", Seat: " << seatNo
             << ", Price: " << price << ", Cancelled: " << (cancelled ? "Yes" : "No") << endl;
    }

    // Friend function declaration
    friend double applyRefundPolicy(const Ticket& t, int daysBeforeFlight);
};

// -------------------- BookingSystem Class --------------------
class BookingSystem {
private:
    Ticket tickets[MAX_TICKETS];
    int count;
public:
    BookingSystem() { count = 0; }

    bool bookTicket(const Ticket& t) {
        if (count >= MAX_TICKETS) return false;
        tickets[count++] = t;
        return true;
    }

    // Cancel ticket via PNR
    bool cancelTicket(const string& pnr) {
        for (int i = 0; i < count; i++) {
            if (tickets[i].getPNR() == pnr) {
                tickets[i].cancelTicket();
                return true;
            }
        }
        return false;
    }

    // Refund summary
    void refundSummary() {
        double totalRefund = 0;
        cout << fixed << setprecision(2);
        cout << "PNR\tName\tPrice\tRefund\n";
        cout << "--------------------------------------\n";
        for (int i = 0; i < count; i++) {
            if (tickets[i].isCancelled()) {
                double refund = applyRefundPolicy(tickets[i], tickets[i].daysBeforeFlight);
                totalRefund += refund;
                cout << tickets[i].getPNR() << "\t" << tickets[i].getPassengerName()
                     << "\t" << tickets[i].getPrice() << "\t" << refund << endl;
            }
        }
        cout << "--------------------------------------\n";
        cout << "Total Refunds Issued: " << totalRefund << endl;
    }

    // Seat reallocation after cancellation
    bool reallocateSeat(const string& oldPNR, const string& newPNR) {
        int oldIndex = -1, newIndex = -1;
        for (int i = 0; i < count; i++) {
            if (tickets[i].getPNR() == oldPNR) oldIndex = i;
            if (tickets[i].getPNR() == newPNR) newIndex = i;
        }
        if (oldIndex != -1 && newIndex != -1 && tickets[oldIndex].isCancelled()) {
            int seatNum = tickets[oldIndex].getSeatNo();
            tickets[newIndex].setSeat(seatNum);
            return true;
        }
        return false;
    }

    void displayAllTickets() const {
        for (int i = 0; i < count; i++) {
            tickets[i].displayTicket();
        }
    }
};

// -------------------- Friend Function --------------------
double applyRefundPolicy(const Ticket& t, int daysBeforeFlight) {
    if (!t.cancelled) return 0.0;
    if (daysBeforeFlight > 30)
        return t.price;         // full refund
    else if (daysBeforeFlight >= 7)
        return t.price * 0.5;   // 50% refund
    else
        return 0.0;             // no refund
}

// -------------------- Main Function --------------------
int main() {
    BookingSystem system;

    // Sample bookings
    system.bookTicket(Ticket("PNR001", "Alice", "AI101", 12, 5000, 40));
    system.bookTicket(Ticket("PNR002", "Bob", "AI101", 13, 4000, 20));
    system.bookTicket(Ticket("PNR003", "Charlie", "AI101", 14, 3500, 5));

    cout << "All Tickets:\n";
    system.displayAllTickets();
    cout << endl;

    // Cancel some tickets
    system.cancelTicket("PNR001");
    system.cancelTicket("PNR003");

    cout << "\nRefund Summary:\n";
    system.refundSummary();

    // Seat reallocation
    bool reallocated = system.reallocateSeat("PNR003", "PNR002");
    if (reallocated) {
        cout << "\nSeat reallocation successful: PNR003 seat assigned to PNR002\n";
    } else {
        cout << "\nSeat reallocation failed\n";
    }

    cout << "\nAll Tickets after reallocation:\n";
    system.displayAllTickets();

    return 0;
}
