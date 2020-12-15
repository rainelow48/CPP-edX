#include <iostream>
#include <string>
#include <vector>
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

        bool operator == (ShowTicket other){
            return (seatRow == other.seatRow && seatNum == other.seatNum);
        }
};


// int main(){
//     vector <ShowTicket> tickets;
    
//     ShowTicket A("AA", "101");
//     ShowTicket B("AA", "101");
//     ShowTicket C("AB", "102");
//     ShowTicket D("AB", "102");
//     cout<<(A == B)<<" "<<(A == C)<<" "<<(C == D);
//     cout<<(true)<<endl;

//     cout<<tickets.size();
//     tickets.push_back(A);
//     cout<<tickets.size();
//     tickets.push_back(B);
//     cout<<tickets.size();
//     tickets.push_back(C);
//     cout<<tickets.size();
//     tickets.push_back(D);
//     cout<<tickets.size();
// }

class ShowTickets{
    vector <ShowTicket> soldTickets;

    public:
        bool is_sold(string row, string seat){
            // for (int i = 0; i < 10; i++){
            //     // cout<<"hello\n";
            //     if (ShowTicket(row, seat) == soldTickets[i]){
            //         // cout<<"hi\n";
            //         return true;
            //     }
            // }
            // return false;
            
            for (ShowTicket i: soldTickets){
                // cout<<"checking...\n";
                if (i == ShowTicket(row, seat)){
                    // cout<<"im sold\n";
                    return true;
                }
            }
            return false;
        }

        void sell_seat(string row, string seat){
            // cout<<"selling tix\n";
            soldTickets.push_back(ShowTicket(row, seat));
        }

        string print_ticket(string row, string seat){
            string ticDetails = row + " " + seat + " ";
            if (is_sold(row, seat) == true){
                ticDetails += "sold";
            }
            else{
                ticDetails += "available";
            }
            return ticDetails;
        }
};

int main () {
    ShowTickets myticket;
    cout<<"1\n";
    cout << myticket.print_ticket("AA","101") << endl;
    cout<<"2\n";
    cout << myticket.print_ticket("AA","102") << endl;
    cout<<"3\n";
    if(!myticket.is_sold("AA","101")){
        cout<<"4\n";
        myticket.sell_seat ("AA","101");
    }
        
    cout<<"5\n";
    cout << myticket.print_ticket("AA","101") << endl;
    cout<<"6\n";
    cout << myticket.print_ticket("AA","102") << endl;
    cout<<"7\n";
    return 0;
}