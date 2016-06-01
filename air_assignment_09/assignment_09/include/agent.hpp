/*
 * Daniel Vázquez
 * Aritificial Intelligence for Robotics
 * SS 2016
 * Assignment 9
 *
 * agent.hpp
 * */
#ifndef Agent_H_
#define Agent_H_

#include <vector>
#include <fstream>
#include <environment.hpp>

using namespace std;

class Agent {
    private:
        vector<Location> scenario;
        
        vector<Location> dbs_bactracking(vector<Location> scenario);
        vector<Location> scenario1, scenario2, scenario3, scenario4, scenario5; //first element corresponds to the start position of the robot
        
        

    public:
        Agent(vector<Location> scenario1, vector<Location> scenario2, vector<Location> scenario3, vector<Location> scenario4, vector<Location> scenario5 );
        ~Agent();
        void run();
        void print_scenario(vector<Location>&);

};

#endif // Agent_H_
