#include "server/MainClient.h"

/******************************************
 * Function: Initialize MainClient
 * Parameters: 0
 * Return: None
 *****************************************/
MainClient::MainClient(){
    
}

/******************************************
 * Function: Initialize MainClient
 * Parameters: 0
 * Return: None
 *****************************************/
MainClient::MainClient(int fd, sockaddr_in socket_addr){
    // Set basic info
    this->client_fd = fd;
    this->client_port = socket_addr.sin_port;
    this->client_ip = inet_ntoa(socket_addr.sin_addr);
    this->received_data_size = 1024;
    this->received_data = new char[this->received_data_size];
    this->read_length = PACKAGE_HEAD_LENGTH;
    this->received_length = 0;
    this->rd_head = true;
    this->client_state = CLIENT_NO_LOGIN;
}

/******************************************
 * Function: Destructor
 * Parameters: 0
 * Return: None
 *****************************************/
MainClient::~MainClient(){

}

/******************************************
 * Function: Get fd of the client
 * Parameters: 0
 * Return: None
 *****************************************/
int MainClient::GetFd(){
    return client_fd;
}

