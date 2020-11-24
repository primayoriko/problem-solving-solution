# a simple parser for python. use get_number() and get_word() to read
def parser():
    while 1:
        data = list(input().split(' '))
        for number in data:
            if len(number) > 0:
                yield(number)   

input_parser = parser()

def get_word():
    global input_parser
    return next(input_parser)

def get_number():
    data = get_word()
    try:
        return int(data)
    except ValueError:
        return float(data)
        
def mean(lst): 
    return sum(lst) / len(lst) 
    
def variance(values, mean):
	return sum([(x-mean)**2 for x in values])
	
def covariance(x, mean_x, y, mean_y):
	covar = 0.0
	for i in range(len(x)):
		covar += (x[i] - mean_x) * (y[i] - mean_y)
	return covar
	
def coefficients(x, y):
	x_mean, y_mean = mean(x), mean(y)
	b1 = covariance(x, x_mean, y, y_mean) / variance(x, x_mean)
	b0 = y_mean - b1 * x_mean
	return [b0, b1]

# numpy and scipy are available for use
import numpy
import scipy

n = int(get_number())

for i in range(n):
    N = int(get_number())
    x, y, label = [], [], []
    cnt = 0 
    while cnt < N:
        x.append(get_number())
        y.append(get_number())
        label.append(get_number())
        cnt += 1
    [b0, b1] = coefficients(x, y)
    
    label1, label2 = [], []
    cnt = 0 
    if(b1 != 0):
        while cnt < N:
            if(int(label[cnt]) == 1):
                label1.append(y[cnt] + x[cnt] / b1)
            else:
                label2.append(y[cnt] + x[cnt] / b1)
            cnt += 1

    else:
        while cnt < N:
            if(int(label[cnt]) == 1):
                label1.append(y[cnt])
            else:
                label2.append(y[cnt])
            cnt += 1

    max1, min1 = max(label1), min(label1)
    max2, min2 = max(label2), min(label2)
    
    if(max2 < min1 or max1 < min2):
        print("YES")
    else:
        print("NO")

    # print(b0)
    # print(b1)
