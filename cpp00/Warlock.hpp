# include <iostream>

class Warlock {
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        const std::string &getName() const;
        const std::string &getTitle() const;
        void setTitle(const std::string &newTitle);
        void introduce() const;
    private:
        std::string _name;
        std::string _title;
        //  eep
        Warlock();
        Warlock(Warlock &obj);
        Warlock &operator=(Warlock &obj);
};