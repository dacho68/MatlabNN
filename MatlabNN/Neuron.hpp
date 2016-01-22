//
//  Neuron.hpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#ifndef Neuron_hpp
#define Neuron_hpp

#include <iostream>
using namespace std;
#include <vector>
#include <assert.h>

class Neuron {
private:
	vector<double> weights;
	double bias;
public:
	Neuron(vector<double> weights, double bias);
	double fireNeuron(vector<double> inputs);
	int numInputs();
};

#endif /* Neuron_hpp */
