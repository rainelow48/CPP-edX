#define showticket_h
#define sportticket_h
#include <iostream>
using namespace std;

class ShowTicket{
    protected:
    string seatRow;
    string seatNum;
    bool seatSold = false;

    public:
        ShowTicket(string row, string seat){
            seatRow = row;
            seatNum = seat;
        }

        bool is_sold(){
            return seatSold;
        }

        void sell_seat(){
            seatSold = true;
        }

        string print_ticket(){
            string ticDetails;

            ticDetails = seatRow + " " + seatNum + " ";
            if (seatSold == true){
                ticDetails += "sold";
            }
            else{
                ticDetails += "available";
            }
            return ticDetails;
        }
};

class SportTicket : public ShowTicket{
    protected:
    bool beerSold = false;

    public:
    SportTicket(string row, string seat) : ShowTicket(row, seat){}

    bool beer_sold(){
        return beerSold;
    }

    void sell_beer(){
        beerSold = true;
    }

    string print_ticket(){
        string ticDetails = ShowTicket :: print_ticket();
        if (beerSold == true){
            ticDetails += " beer";
        }
        else{
            ticDetails += " nobeer";
        }
        return ticDetails;
    }
};

class TicketSales : SportTicket{

    public:
    TicketSales(): SportTicket("", ""){}
    string print_ticket(ShowTicket *myticket){
        return myticket -> print_ticket();
    }
    string print_ticket(SportTicket *myticket){
        return myticket -> print_ticket();
    }

};

// int main () {

//     TicketSales ts;
//     ShowTicket myticket1("AA","101");
//     SportTicket myticket2("AA","102");
//     SportTicket myticket3("AA", "103");

//     cout << ts.print_ticket(&myticket1)<<endl;
//     cout << ts.print_ticket(&myticket2)<<endl;
//     cout << ts.print_ticket(&myticket3)<<endl;

//     myticket1.sell_seat();
//     myticket2.sell_seat();
//     myticket2.sell_beer();

//     cout << ts.print_ticket(&myticket1)<<endl;
//     cout << ts.print_ticket(&myticket2)<<endl;
//     return 0;
// }