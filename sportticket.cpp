#define showticket_h
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


int main () {

    SportTicket myticket1("AA","101");
    SportTicket myticket2("AA","102");

    myticket1.sell_seat();
    myticket2.sell_seat();
    myticket2.sell_beer();
    cout << myticket1.print_ticket() << endl;
    cout << myticket2.print_ticket() << endl;

    return 0;

}