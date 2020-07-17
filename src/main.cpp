#include <iostream>
#include <basicPly/BasicPly.h>
#include <image_utility/image_utility.h>

int main(int argv, char* argc[]) {
	std::cout << "Kitty on your lap!" << std::endl;
	
	BasicPly bp;
	bp.readPlyFile_(argc[1]);
	
	//visual position, visual orientation, threshold angle for projection (degree), in/output point cloud, threshold for jumpedge cutting
	meshGenerater(Eigen::Vector3d::Zero(), Eigen::Matrix3d::Identity(),180, bp, 0.3);
	bp.writePlyFileAuto(argc[2]);

	return 0;
}