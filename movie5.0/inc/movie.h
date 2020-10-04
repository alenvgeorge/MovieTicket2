
#ifndef __MOVIE_H__
#define __MOVIE_H__

struct movie_details
{
    int movie_code;
    char movie_name[60];
    char show_timing[10];
    char release_date[20];
    int ticket_price;
    int seat_no;
};

extern struct movie_details m;

struct movie_details m;
int admin_login(char *admin_username, char *admin_password);
void add_movies(int code, char *name, char *timing, char *date, int price, int seat);
void user_reg();
void user_login(char *username, char *password);
void view_movies();
void book_tickets(char*movie, int seat);
void search(char* m_name);
void view_booked();
void view_bookings();


#endif // __MOVIE_H__

