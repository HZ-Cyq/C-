/*************************************************************************
	> File Name: single.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月31日 星期六 16时02分25秒
 ************************************************************************/
//单例模式
#include<iostream>
using namespace std;
class Server {
public:
    static Server *get_instance() {
        if(Server::single) return Server::single;
        Server::single = new Server(2,3);
    }

private:
    static Server *single;
    Server(int x,int y): x(x), y(y) {}
    ~Server() {}
    Server(Server &s) {}
    Server &operator=(Server &s) {
        return *this;
    }
    int x,y;
};
Server *Server::single = nullptr;
int main() {
    Server::get_instance();
    return 0;
}
