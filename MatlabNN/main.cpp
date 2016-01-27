//
//  main.cpp
//  MatlabNN
//
//  Created by Terna Kpamber on 1/22/16.
//  Copyright © 2016 Terna Kpamber. All rights reserved.
//

#include "NeuralNet.hpp"


//Map Minimum and Maximum Input Processing Function
vector<double> mapMinMax(vector<double> x, vector<double> gain, vector<double> offset, double yMin){
	assert(x.size() == gain.size() && gain.size() == offset.size());
	vector<double> output;
	
	for (int i = 0; i < x.size(); i++) {
		output.push_back( (x[i] - offset[i])*gain[i] + yMin );
	}
	
	return output;
}



int main(int argc, const char * argv[]) {
	/*
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
	
	*/
	
	//This is a 2-input, 2-layer-4-neuron hidden-layer network.
	//The activation function of the input layer is a sigmoid function.
	
	vector<double> offset = {-0.392732717567874,-0.389840038768807};
	vector<double> gain = {1.11602140113636,1.12719358184917};
	double ymin = -1;
	
	//	Layer 1
	vector<double> b1 = {-0.072296878029053213144,0.0090947594929538799757,-4.1023823797455829521};
	vector<double> weights_l1n1 = {0.012537023541396465423, 7.4889721000336519907};
	vector<double> weights_l1n2 = {6.7825622517551478197, 0.062976625339908304246};
	vector<double> weights_l1n3 = {-1.0679095023046656365, -0.86667819915869270808};
	
	Neuron l1n1 = Neuron(weights_l1n1, b1[0]);
	Neuron l1n2 = Neuron(weights_l1n2, b1[1]);
	Neuron l1n3 = Neuron(weights_l1n3, b1[2]);
	
	vector<Neuron> layer1Neurons = {l1n1, l1n2, l1n3};
	SigmoidLayer* layer1 = new SigmoidLayer(layer1Neurons);
	
	
	//	Layer 2
	vector<double> b2 = {0.48611347377589503305,0.37309833745226061996,-0.32242356751389139591,-0.11399634554000867559};
	vector<double> weights_l2n1 = {-6.4615152126816779443, -6.7384288819818776162, -0.22631232138583262659};
	vector<double> weights_l2n2 = {7.7045165229539840368, -8.510259631919975476, 1.1893554841326654525};
	vector<double> weights_l2n3 = {-7.2330135631603287294, 7.4034366159326703283, -0.15023235896889863827};
	vector<double> weights_l2n4 = {6.829570786273644778, 6.7153948433868695389, -0.59439205247243032115};
	
	Neuron l2n1 = Neuron(weights_l2n1, b2[0]);
	Neuron l2n2 = Neuron(weights_l2n2, b2[1]);
	Neuron l2n3 = Neuron(weights_l2n3, b2[2]);
	Neuron l2n4 = Neuron(weights_l2n4, b2[2]);
	
	vector<Neuron> layer2Neurons = {l2n1, l2n2, l2n3, l2n4};
	SoftMaxLayer* layer2 = new SoftMaxLayer(layer2Neurons);
	
	vector<Layer *> layers = {layer1, layer2};
	
	NeuralNet nn = NeuralNet(layers);
	
	vector<double> inputs = {0, 0};
	inputs = mapMinMax(inputs, gain, offset, ymin);
	vector<double> output = nn.predict(inputs);
	for (int i = 0; i < output.size(); i++) {
		cout << (int)output[i] << endl;
	}
	
	
}
