//
//  main.cpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#include "NeuralNet.hpp"

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
	
	Layer* layer1 = new SigmoidLayer(layer1Neurons);
	Layer* layer2 = new SoftMaxLayer(layer2Neurons);
	
	vector<double> output1 = layer1->transferLayer(inputs);
	vector<double> output2 = layer2->transferLayer(output1);
	
	vector<Layer*> layers = {layer1, layer2};
	
	NeuralNet network = NeuralNet(layers);
	
	vector<double> output = network.predict(inputs);
	
	for (int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
	
	return 0;
}
