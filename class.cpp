#include <iostream>

class User
{
    std::string status = "Gold";

public:
    User(std::string first_name, std::string last_name, std::string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
    }
    std::string first_name;
    std::string last_name;
    std::string get_status() { return status; }
};

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name &&
            users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    std::vector<User> users;

    User user1("Caleb", "Curry", "Gold");
    User user2("John", "Doe", "Silver");
    User user3("Mary", "Jane", "Bronze");

    add_user_if_not_exists(users, user1);
    add_user_if_not_exists(users, user2);
    add_user_if_not_exists(users, user3);

    User user4("John", "Doe", "Platinum");

    std::cout << users[add_user_if_not_exists(users, user4)].first_name << std::endl;
    return 0;
}
