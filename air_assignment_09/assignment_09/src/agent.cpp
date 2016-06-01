/*
 * Daniel Vázquez
 * Aritificial Intelligence for Robotics
 * SS 2016
 * Assignment 9
 *
 * agent.cpp
 * */
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <agent.hpp>

Agent::Agent(vector<Location> scenario1, vector<Location> scenario2, vector<Location> scenario3, vector<Location> scenario4, vector<Location> scenario5):scenario1(scenario1),
scenario2(scenario2),
scenario3(scenario3),
scenario4(scenario4),
scenario5(scenario5) 
{
	
    
}

Agent::~Agent()
{

}

void Agent::run()
{
	//example
    // print_scenario(scenario1); //first element corresponds to the start position of the robot
 
   //TODO
}

void Agent::print_scenario(vector<Location>& scenario) {
    
    std::vector<double> x, y;
    for (int i = 0; i < scenario.size(); i++) {
        std::cout << "Location: " << scenario[i].get_x() << "," << scenario[i].get_y() << " Deadline: " << scenario[i].get_deadline() << std::endl;
    }
    
}




vector<Location> Agent::dbs_bactracking(vector<Location> scenario) {
    //TODO
}

