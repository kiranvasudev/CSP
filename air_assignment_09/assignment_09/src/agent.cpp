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
#include <stack>
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
     //print_scenario(scenario3[0]); //first element corresponds to the start position of the robot
	cout << scenario3[0].get_x() << endl;
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

	//empty stack of moves
	stack<Location> moves_made;

	//start location
	vector<Location> start_location;

	//add the first Location into the stack
	moves_made.push(scenario.front());

	int TOTAL_LOCATIONS = scenario.size();

	//solve_scenario(scenario,start_location);

}

vector<Location> generate_deadlines_from(vector<Location> present, vector<Location> remaining_scenario){
	vector<Location> result;
	//Location next;
	double deadline = 0;
	double min_deadline;
	int index_min = 0;


}



void solve_scenario(vector<Location> scenario, vector<Location> start){

	//stores the location of where the present package is at
	//vector<Location> present = start.back();

	//stores the destinations of the packages yet to be delivered
	vector<Location> neighbors;

	//neighbors = generate_deadlines_from(present, scenario);
}

