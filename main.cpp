#include "docker.h"
#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "start docker..." << std::endl;
    bluecat::docker_info doc_info;
    doc_info.hostname = "蓝猫的docker";
    doc_info.root_dir="./bluecat";
    bluecat::bluecat_docker mydocker(doc_info);
    mydocker.start();                  // 启动容器
    std::cout << "stop docker..." << std::endl;
    return 0;
}