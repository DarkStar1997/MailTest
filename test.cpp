#include <iostream>
#include <mailio/smtp.hpp>
#include <mailio/message.hpp>

int main()
{
    mailio::message msg;
    msg.from(mailio::mail_address("Testing", "xxxxxxxx@gmail.com"));
    msg.add_recipient(mailio::mail_address("Testing", "yyyyyyyyyyyy@gmail.com"));
    msg.subject("Simple Sub");
    msg.content("Hello WORLD");

    mailio::smtps conn("smtp.gmail.com", 587);
    conn.authenticate("xxxxxxxx@gmail.com", "PASSWORD", mailio::smtps::auth_method_t::START_TLS);
    conn.submit(msg);
}
