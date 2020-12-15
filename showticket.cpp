#include <iostream>
#include <string>
using namespace std;

class ShowTicket{
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


int main () {
    ShowTicket myticket1("AA","101");
    ShowTicket myticket2("AA","102");

    if(!myticket1.is_sold())
        myticket1.sell_seat();

    cout<<myticket1.print_ticket()<<endl;
    cout<<myticket2.print_ticket()<<endl;
    return 0;
}