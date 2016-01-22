//
//  main.cpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#include "SigmoidLayer.hpp"
#include "SoftMaxLayer.hpp"

int main(int argc, const char * argv[]) {
	
	vector<double> weights1 = {1,1,0,1};
	vector<double> weights2 = {1,1,0,2};
	vector<double> weights3 = {1,1};
	double bias = 20;
	double bias1 = 0;
	vector<double> inputs = {10,20,10,10};
	
	Neuron neuron1 = Neuron(weights1, bias);
	Neuron neuron2 = Neuron(weights2, bias);
	Neuron neuron3 = Neuron(weights3, bias1);
	
	vector<Neuron> layer1Neurons = {neuron1, neuron2};
	vector<Neuron> layer2Neurons = {neuron3};
	
	SigmoidLayer layer1 = SigmoidLayer(layer1Neurons);
//	SigmoidLayer layer1 = SigmoidLayer(layer1Neurons);
	vector<double> output = layer1.transferLayer(inputs);
	
	for (int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
	
	return 0;
}
