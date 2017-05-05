import os
import numpy as np
import matplotlib.pyplot as plt
import seaborn
import sys

keras_dir = '../../example/tiny-yolo/keras/output/'
cqt_dir = '../../example/tiny-yolo/c_fix/output/'

fix16mode = True

def layer0_comp():
    keras = np.load(keras_dir+'l00_2.npy')
    cqt = np.load(cqt_dir+'l00_2.npy')

    c_f = cqt.flatten()
    k_f = keras.flatten()

    if fix16mode:
        c_f = c_f.astype(np.float32) / 256.0

    x = np.arange(len(k_f))

    plt.plot(x, c_f, color='r')
    plt.plot(x, k_f, color='b')

    plt.show()

def layer1_comp():
    keras = np.load(keras_dir+'l01_0.npy')
    cqt = np.load(cqt_dir+'l01_0.npy')

    c_f = cqt.flatten()
    k_f = keras.flatten()

    if fix16mode:
        c_f = c_f.astype(np.float32) / 256.0

    x = np.arange(len(k_f))

    plt.plot(x, c_f, color='r')
    plt.plot(x, k_f, color='b')

    plt.show()

def layer2_comp():
    keras = np.load(keras_dir+'l02_0.npy')
    cqt = np.load(cqt_dir+'l02_0.npy')

    c_f = cqt.flatten()
    k_f = keras.flatten()

    if fix16mode:
        c_f = c_f.astype(np.float32) / 256.0

    x = np.arange(len(k_f))

    plt.plot(x, c_f, color='r')
    plt.plot(x, k_f, color='b')

    plt.show()


def layer3_comp():
    keras = np.load(keras_dir+'l03_15.npy')
    cqt = np.load(cqt_dir+'l03_15.npy')

    c_f = cqt.flatten()
    k_f = keras.flatten()

    x = np.arange(len(k_f))

    plt.plot(x, c_f, color='r')
    plt.plot(x, k_f, color='b')

    plt.show()


def layer23_comp():
    keras = np.load(keras_dir+'l23_511.npy')
    cqt = np.load(cqt_dir+'l23_511.npy')

    c_f = cqt.flatten()
    k_f = keras.flatten()

    x = np.arange(len(k_f))

    plt.plot(x, c_f, color='r')
    plt.plot(x, k_f, color='b')

    plt.show()

def layer24_comp():
    keras = np.load(keras_dir+'l24_1.npy')
    cqt = np.load(cqt_dir+'l24_1.npy')

    c_f = cqt.flatten()
    k_f = keras.flatten()

    x = np.arange(len(k_f))

    plt.plot(x, c_f, color='r')
    plt.plot(x, k_f, color='b')

    plt.show()


def layer30_comp():
    keras = np.load(keras_dir+'l30_1023.npy')
    cqt = np.load(cqt_dir+'l30_1023.npy')

    c_f = cqt.flatten()
    k_f = keras.flatten()

    x = np.arange(len(k_f))

    plt.plot(x, c_f, color='r')
    plt.plot(x, k_f, color='b')

    plt.show()

def layer31_comp():
    keras = np.load(keras_dir+'l31_124.npy')
    cqt = np.load(cqt_dir+'l31_124.npy')

    c_f = cqt.flatten()
    k_f = keras.flatten()

    x = np.arange(len(k_f))

    plt.plot(x, c_f, color='r')
    plt.plot(x, k_f, color='b')

    plt.show()


layer2_comp()

print('finish')