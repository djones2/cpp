/*
Write a short program to simulate a ball being dropped off of a tower. To
start, the user should be asked for the height of the tower in meters. Assume
normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball
is not moving to start). Have the program output the height of the ball above
the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go
underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. The
function can calculate how far the ball has fallen after x seconds using the
following formula: distance fallen = gravity_constant * x_seconds2 / 2

Sample output:

Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.
 */

#include <string>
#include <iostream>

constexpr double gravity{9.8};

// Retrieve tower height from user
double get_tower_height()
{
	std::cout << "Enter the height of the tower in meters: ";
	double tower_height{};
	std::cin >> tower_height;
	return tower_height;
}

/*
Calculate the current height of the ball given the height of the tower and
the seconds that have passed
*/
double current_ball_height(double tower_height, int seconds)
{
	return tower_height - ((gravity * (seconds*seconds)) / 2);
}

/*
Track the ball's descent every second, up to five seconds, given an initial
height
*/
void ball_tracker(double tower_height)
{
	for (int seconds{0}; seconds < 6; ++seconds)
	{
		double current_height{ current_ball_height(tower_height, seconds) };
		if (current_height > 0)
		{
			std::cout << "At " << seconds << " seconds, the ball is at height: " << current_height << " meters\n";
		}
		else
		{
			std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
			break;
		}
	}
}

int main()
{
	// Ask user for height of tower (in meters)
	double tower_height{get_tower_height()};
	// Output ball height every second (until 5 seconds)
	ball_tracker(tower_height);

	return 0;
}