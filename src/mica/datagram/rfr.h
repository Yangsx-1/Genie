#include<cassert>
#include<stdlib.h>

void randomForestRegression(const double * input,uint64_t input_length,double* output) {
    assert(input_length == 5); 
    double result[10] = {0.}; 
    double total = 0.;
    if (input[4] <= 16.97700023651123) {
        if (input[4] <= 11.953999996185303) {
            if (input[4] <= 9.8125) {
                if (input[4] <= 9.265999794006348) {
                    result[0] = 2.0;
                } else {
                    if (input[3] <= 112.0) {
                        if (input[3] <= 56.0) {
                            result[0] = 2.0;
                        } else {
                            if (input[2] <= 52.0) {
                                if (input[2] <= 36.0) {
                                    result[0] = 2.0;
                                } else {
                                    if (input[4] <= 9.483500003814697) {
                                        result[0] = 2.4;
                                    } else {
                                        result[0] = 2.0;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.7950000166893005) {
                                    result[0] = 3.0;
                                } else {
                                    result[0] = 2.0;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.7950000166893005) {
                            result[0] = 3.0;
                        } else {
                            result[0] = 2.0;
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 11.413500308990479) {
                            if (input[0] <= 0.10000000149011612) {
                                if (input[2] <= 36.0) {
                                    result[0] = 2.0;
                                } else {
                                    result[0] = 2.6666666666666665;
                                }
                            } else {
                                result[0] = 2.0;
                            }
                        } else {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 11.878999710083008) {
                                    result[0] = 2.0;
                                } else {
                                    result[0] = 2.1666666666666665;
                                }
                            } else {
                                if (input[1] <= 0.6500000059604645) {
                                    result[0] = 3.0;
                                } else {
                                    result[0] = 2.7142857142857144;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 10.349999904632568) {
                            result[0] = 2.0;
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                result[0] = 3.0;
                            } else {
                                result[0] = 2.8181818181818183;
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[2] <= 12.0) {
                            if (input[3] <= 112.0) {
                                result[0] = 2.0;
                            } else {
                                result[0] = 3.0;
                            }
                        } else {
                            if (input[4] <= 10.101500034332275) {
                                if (input[3] <= 88.0) {
                                    if (input[2] <= 44.0) {
                                        result[0] = 2.1818181818181817;
                                    } else {
                                        result[0] = 3.0;
                                    }
                                } else {
                                    result[0] = 3.0;
                                }
                            } else {
                                if (input[3] <= 112.0) {
                                    result[0] = 3.0;
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[0] = 4.0;
                                    } else {
                                        result[0] = 3.0;
                                    }
                                }
                            }
                        }
                    } else {
                        result[0] = 2.0;
                    }
                }
            }
        } else {
            if (input[3] <= 56.0) {
                if (input[4] <= 13.24049997329712) {
                    if (input[0] <= 0.8950000107288361) {
                        result[0] = 3.0;
                    } else {
                        if (input[2] <= 44.0) {
                            result[0] = 2.0;
                        } else {
                            result[0] = 2.25;
                        }
                    }
                } else {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 16.46399974822998) {
                            if (input[2] <= 44.0) {
                                if (input[3] <= 40.0) {
                                    result[0] = 3.0;
                                } else {
                                    if (input[4] <= 15.853000164031982) {
                                        if (input[2] <= 28.0) {
                                            result[0] = 3.0;
                                        } else {
                                            result[0] = 3.125;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[0] = 4.0;
                                        } else {
                                            result[0] = 3.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 15.086999893188477) {
                                    if (input[4] <= 14.733500003814697) {
                                        result[0] = 3.0;
                                    } else {
                                        if (input[3] <= 32.0) {
                                            result[0] = 3.0;
                                        } else {
                                            result[0] = 3.7142857142857144;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[0] = 4.0;
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[0] = 3.0;
                                        } else {
                                            result[0] = 3.625;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 28.0) {
                                result[0] = 3.0;
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[0] = 4.0;
                                    } else {
                                        if (input[4] <= 16.688499450683594) {
                                            result[0] = 4.8;
                                        } else {
                                            result[0] = 4.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 16.863499641418457) {
                                        result[0] = 3.0;
                                    } else {
                                        result[0] = 3.25;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 12.0) {
                            result[0] = 3.0;
                        } else {
                            if (input[4] <= 16.04599952697754) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[0] = 4.0;
                                } else {
                                    if (input[4] <= 15.5) {
                                        if (input[4] <= 14.707000255584717) {
                                            result[0] = 3.5;
                                        } else {
                                            result[0] = 3.0;
                                        }
                                    } else {
                                        result[0] = 3.875;
                                    }
                                }
                            } else {
                                if (input[3] <= 32.0) {
                                    result[0] = 4.0;
                                } else {
                                    result[0] = 4.833333333333333;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 15.08650016784668) {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 14.684999942779541) {
                                result[0] = 3.0;
                            } else {
                                if (input[3] <= 72.0) {
                                    result[0] = 3.0;
                                } else {
                                    if (input[4] <= 15.048500061035156) {
                                        result[0] = 4.0;
                                    } else {
                                        result[0] = 3.75;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        result[0] = 3.0;
                                    } else {
                                        result[0] = 4.0;
                                    }
                                } else {
                                    result[0] = 4.0;
                                }
                            } else {
                                if (input[2] <= 20.0) {
                                    result[0] = 3.0;
                                } else {
                                    result[0] = 3.2;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 44.0) {
                                    if (input[2] <= 36.0) {
                                        if (input[4] <= 14.700500011444092) {
                                            result[0] = 3.6;
                                        } else {
                                            result[0] = 4.0;
                                        }
                                    } else {
                                        result[0] = 3.0;
                                    }
                                } else {
                                    result[0] = 4.0;
                                }
                            } else {
                                if (input[4] <= 14.582499980926514) {
                                    if (input[4] <= 14.339499950408936) {
                                        result[0] = 4.0;
                                    } else {
                                        if (input[4] <= 14.407999992370605) {
                                            result[0] = 4.25;
                                        } else {
                                            result[0] = 4.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[0] = 5.0;
                                    } else {
                                        result[0] = 4.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 12.531499862670898) {
                                result[0] = 4.875;
                            } else {
                                if (input[4] <= 14.491499900817871) {
                                    if (input[2] <= 60.0) {
                                        if (input[3] <= 112.0) {
                                            result[0] = 3.0;
                                        } else {
                                            result[0] = 3.210526315789474;
                                        }
                                    } else {
                                        if (input[4] <= 13.787999629974365) {
                                            result[0] = 3.2;
                                        } else {
                                            result[0] = 4.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 14.631999969482422) {
                                        result[0] = 4.25;
                                    } else {
                                        result[0] = 3.909090909090909;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[0] <= 0.8950000107288361) {
                                result[0] = 4.0;
                            } else {
                                if (input[4] <= 16.256999969482422) {
                                    result[0] = 3.0;
                                } else {
                                    result[0] = 4.076923076923077;
                                }
                            }
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                result[0] = 5.0;
                            } else {
                                if (input[2] <= 20.0) {
                                    if (input[2] <= 12.0) {
                                        result[0] = 3.5714285714285716;
                                    } else {
                                        result[0] = 4.0;
                                    }
                                } else {
                                    result[0] = 5.0;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[4] <= 15.198500156402588) {
                                if (input[2] <= 48.0) {
                                    result[0] = 4.0;
                                } else {
                                    result[0] = 5.0;
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    if (input[4] <= 15.893500328063965) {
                                        result[0] = 4.428571428571429;
                                    } else {
                                        result[0] = 5.0;
                                    }
                                } else {
                                    result[0] = 5.0;
                                }
                            }
                        } else {
                            if (input[4] <= 16.65250015258789) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 72.0) {
                                        result[0] = 3.6;
                                    } else {
                                        result[0] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 15.580999851226807) {
                                        result[0] = 4.0;
                                    } else {
                                        if (input[4] <= 16.092500686645508) {
                                            result[0] = 5.285714285714286;
                                        } else {
                                            result[0] = 4.6923076923076925;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    result[0] = 4.8;
                                } else {
                                    result[0] = 6.125;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 21.42050075531006) {
            if (input[3] <= 56.0) {
                if (input[4] <= 19.74899959564209) {
                    if (input[2] <= 60.0) {
                        if (input[2] <= 44.0) {
                            if (input[4] <= 18.7185001373291) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 17.40049934387207) {
                                        result[0] = 3.857142857142857;
                                    } else {
                                        result[0] = 4.0;
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[3] <= 24.0) {
                                            result[0] = 3.0;
                                        } else {
                                            result[0] = 3.3783783783783785;
                                        }
                                    } else {
                                        result[0] = 4.071428571428571;
                                    }
                                }
                            } else {
                                if (input[3] <= 40.0) {
                                    if (input[3] <= 24.0) {
                                        if (input[2] <= 20.0) {
                                            result[0] = 3.4615384615384617;
                                        } else {
                                            result[0] = 4.016393442622951;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[0] = 4.0;
                                        } else {
                                            result[0] = 5.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[0] = 4.0;
                                        } else {
                                            result[0] = 4.2;
                                        }
                                    } else {
                                        if (input[4] <= 19.35550022125244) {
                                            result[0] = 5.0;
                                        } else {
                                            result[0] = 5.857142857142857;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[0] = 4.0;
                                } else {
                                    if (input[4] <= 19.095499992370605) {
                                        if (input[2] <= 52.0) {
                                            result[0] = 3.6;
                                        } else {
                                            result[0] = 4.5;
                                        }
                                    } else {
                                        result[0] = 5.2;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.75) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[3] <= 40.0) {
                                            result[0] = 5.0;
                                        } else {
                                            result[0] = 4.625;
                                        }
                                    } else {
                                        result[0] = 5.857142857142857;
                                    }
                                } else {
                                    if (input[2] <= 52.0) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[0] = 5.0;
                                        } else {
                                            result[0] = 4.4;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[0] = 4.2;
                                        } else {
                                            result[0] = 4.0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 18.513999938964844) {
                            if (input[3] <= 12.0) {
                                result[0] = 4.0;
                            } else {
                                if (input[3] <= 40.0) {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[0] = 5.0;
                                    } else {
                                        result[0] = 4.5;
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[0] = 5.0;
                                    } else {
                                        result[0] = 5.75;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.7950000166893005) {
                                if (input[3] <= 40.0) {
                                    result[0] = 5.0;
                                } else {
                                    result[0] = 6.0;
                                }
                            } else {
                                result[0] = 6.8;
                            }
                        }
                    }
                } else {
                    if (input[2] <= 36.0) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 40.0) {
                                if (input[2] <= 28.0) {
                                    result[0] = 4.0;
                                } else {
                                    if (input[3] <= 24.0) {
                                        result[0] = 4.0;
                                    } else {
                                        result[0] = 5.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    result[0] = 4.0;
                                } else {
                                    if (input[4] <= 20.069499969482422) {
                                        result[0] = 4.8;
                                    } else {
                                        result[0] = 5.0;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[3] <= 12.0) {
                                    if (input[4] <= 20.859999656677246) {
                                        result[0] = 5.6923076923076925;
                                    } else {
                                        result[0] = 4.545454545454546;
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        result[0] = 4.0;
                                    } else {
                                        result[0] = 4.666666666666667;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.6500000059604645) {
                                    result[0] = 6.363636363636363;
                                } else {
                                    if (input[4] <= 20.042499542236328) {
                                        result[0] = 6.25;
                                    } else {
                                        if (input[4] <= 20.386499404907227) {
                                            result[0] = 4.0;
                                        } else {
                                            result[0] = 4.75;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 24.0) {
                                if (input[2] <= 44.0) {
                                    result[0] = 4.0;
                                } else {
                                    result[0] = 5.0;
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 20.949999809265137) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[0] = 5.444444444444445;
                                        } else {
                                            result[0] = 5.032258064516129;
                                        }
                                    } else {
                                        result[0] = 5.8;
                                    }
                                } else {
                                    result[0] = 6.0;
                                }
                            }
                        } else {
                            if (input[1] <= 0.9249999821186066) {
                                if (input[4] <= 19.78250026702881) {
                                    result[0] = 5.375;
                                } else {
                                    if (input[4] <= 20.684499740600586) {
                                        if (input[2] <= 44.0) {
                                            result[0] = 7.571428571428571;
                                        } else {
                                            result[0] = 6.65;
                                        }
                                    } else {
                                        if (input[3] <= 24.0) {
                                            result[0] = 7.0;
                                        } else {
                                            result[0] = 5.647058823529412;
                                        }
                                    }
                                }
                            } else {
                                result[0] = 4.5;
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 20.029500007629395) {
                    if (input[2] <= 36.0) {
                        if (input[4] <= 18.80299949645996) {
                            if (input[3] <= 112.0) {
                                if (input[2] <= 12.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 18.58650016784668) {
                                            result[0] = 4.0;
                                        } else {
                                            result[0] = 4.142857142857143;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[0] = 3.888888888888889;
                                        } else {
                                            result[0] = 5.153846153846154;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        if (input[3] <= 88.0) {
                                            result[0] = 4.5606060606060606;
                                        } else {
                                            result[0] = 4.976190476190476;
                                        }
                                    } else {
                                        if (input[3] <= 72.0) {
                                            result[0] = 4.880952380952381;
                                        } else {
                                            result[0] = 5.104166666666667;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 18.164999961853027) {
                                    if (input[2] <= 12.0) {
                                        if (input[4] <= 17.42199993133545) {
                                            result[0] = 5.0;
                                        } else {
                                            result[0] = 5.2;
                                        }
                                    } else {
                                        result[0] = 5.0;
                                    }
                                } else {
                                    if (input[4] <= 18.440499305725098) {
                                        result[0] = 5.5;
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[0] = 6.0;
                                        } else {
                                            result[0] = 5.857142857142857;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 12.0) {
                                    if (input[4] <= 19.18649959564209) {
                                        result[0] = 4.0;
                                    } else {
                                        result[0] = 4.5;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[0] = 5.0;
                                    } else {
                                        result[0] = 6.166666666666667;
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[0] = 5.0;
                                        } else {
                                            result[0] = 5.5;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[0] = 6.0;
                                        } else {
                                            result[0] = 5.428571428571429;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[4] <= 18.98799991607666) {
                                            result[0] = 5.888888888888889;
                                        } else {
                                            result[0] = 6.0;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[0] = 5.166666666666667;
                                        } else {
                                            result[0] = 5.7727272727272725;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 18.396499633789062) {
                            if (input[4] <= 17.477499961853027) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 17.37150001525879) {
                                        result[0] = 5.0;
                                    } else {
                                        result[0] = 5.2;
                                    }
                                } else {
                                    if (input[4] <= 17.321499824523926) {
                                        if (input[4] <= 17.160999298095703) {
                                            result[0] = 6.75;
                                        } else {
                                            result[0] = 5.8;
                                        }
                                    } else {
                                        result[0] = 4.6923076923076925;
                                    }
                                }
                            } else {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 52.0) {
                                        if (input[4] <= 17.98799991607666) {
                                            result[0] = 5.833333333333333;
                                        } else {
                                            result[0] = 4.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[0] = 6.0;
                                        } else {
                                            result[0] = 5.2;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 17.523500442504883) {
                                        result[0] = 5.125;
                                    } else {
                                        if (input[4] <= 17.796500205993652) {
                                            result[0] = 6.583333333333333;
                                        } else {
                                            result[0] = 5.777777777777778;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 88.0) {
                                if (input[4] <= 18.689000129699707) {
                                    if (input[3] <= 72.0) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[0] = 6.0;
                                        } else {
                                            result[0] = 4.5;
                                        }
                                    } else {
                                        if (input[4] <= 18.484999656677246) {
                                            result[0] = 6.666666666666667;
                                        } else {
                                            result[0] = 5.8125;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 19.780500411987305) {
                                        if (input[2] <= 44.0) {
                                            result[0] = 5.8;
                                        } else {
                                            result[0] = 6.074074074074074;
                                        }
                                    } else {
                                        if (input[4] <= 19.899499893188477) {
                                            result[0] = 5.625;
                                        } else {
                                            result[0] = 5.777777777777778;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[1] <= 0.550000011920929) {
                                        result[0] = 6.111111111111111;
                                    } else {
                                        result[0] = 6.0;
                                    }
                                } else {
                                    if (input[4] <= 18.754499435424805) {
                                        if (input[4] <= 18.63700008392334) {
                                            result[0] = 7.222222222222222;
                                        } else {
                                            result[0] = 8.0;
                                        }
                                    } else {
                                        if (input[4] <= 19.029500007629395) {
                                            result[0] = 6.0;
                                        } else {
                                            result[0] = 6.846153846153846;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 44.0) {
                        if (input[3] <= 112.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 12.0) {
                                    result[0] = 5.0;
                                } else {
                                    if (input[3] <= 72.0) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[0] = 5.823529411764706;
                                        } else {
                                            result[0] = 5.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[0] = 5.714285714285714;
                                        } else {
                                            result[0] = 5.983606557377049;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.550000011920929) {
                                    result[0] = 5.615384615384615;
                                } else {
                                    if (input[4] <= 20.69950008392334) {
                                        if (input[4] <= 20.46150016784668) {
                                            result[0] = 6.416666666666667;
                                        } else {
                                            result[0] = 5.0;
                                        }
                                    } else {
                                        if (input[4] <= 20.924500465393066) {
                                            result[0] = 7.785714285714286;
                                        } else {
                                            result[0] = 6.333333333333333;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 20.539499282836914) {
                                result[0] = 5.928571428571429;
                            } else {
                                if (input[1] <= 0.9249999821186066) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[0] <= 0.5000000074505806) {
                                            result[0] = 7.0;
                                        } else {
                                            result[0] = 6.0;
                                        }
                                    } else {
                                        result[0] = 7.555555555555555;
                                    }
                                } else {
                                    result[0] = 6.25;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 20.504499435424805) {
                            if (input[0] <= 0.7000000178813934) {
                                if (input[0] <= 0.30000000447034836) {
                                    result[0] = 7.0;
                                } else {
                                    result[0] = 6.6;
                                }
                            } else {
                                if (input[2] <= 52.0) {
                                    result[0] = 6.7272727272727275;
                                } else {
                                    if (input[3] <= 72.0) {
                                        result[0] = 5.375;
                                    } else {
                                        result[0] = 6.0;
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.550000011920929) {
                                if (input[3] <= 112.0) {
                                    result[0] = 7.0;
                                } else {
                                    if (input[2] <= 60.0) {
                                        result[0] = 7.4;
                                    } else {
                                        result[0] = 7.8;
                                    }
                                }
                            } else {
                                if (input[4] <= 20.639999389648438) {
                                    result[0] = 7.428571428571429;
                                } else {
                                    if (input[4] <= 20.741000175476074) {
                                        result[0] = 6.75;
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[0] = 7.0;
                                        } else {
                                            result[0] = 7.2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 29.498000144958496) {
                if (input[3] <= 56.0) {
                    if (input[4] <= 25.28749942779541) {
                        if (input[2] <= 60.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 21.83300018310547) {
                                            result[0] = 4.75;
                                        } else {
                                            result[0] = 5.028985507246377;
                                        }
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[0] = 5.083333333333333;
                                        } else {
                                            result[0] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 24.0) {
                                        if (input[4] <= 24.039499282836914) {
                                            result[0] = 5.0;
                                        } else {
                                            result[0] = 5.884615384615385;
                                        }
                                    } else {
                                        if (input[4] <= 23.79599952697754) {
                                            result[0] = 5.774647887323944;
                                        } else {
                                            result[0] = 6.612903225806452;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 23.889999389648438) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[0] = 5.7;
                                        } else {
                                            result[0] = 4.647058823529412;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[0] = 5.7894736842105265;
                                        } else {
                                            result[0] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[1] <= 0.550000011920929) {
                                            result[0] = 5.588235294117647;
                                        } else {
                                            result[0] = 6.333333333333333;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[0] = 6.6;
                                        } else {
                                            result[0] = 8.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 23.30299949645996) {
                                    if (input[3] <= 12.0) {
                                        result[0] = 5.0;
                                    } else {
                                        if (input[4] <= 21.657499313354492) {
                                            result[0] = 5.818181818181818;
                                        } else {
                                            result[0] = 6.037037037037037;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[3] <= 24.0) {
                                            result[0] = 6.4;
                                        } else {
                                            result[0] = 7.0;
                                        }
                                    } else {
                                        if (input[4] <= 24.49049949645996) {
                                            result[0] = 7.5;
                                        } else {
                                            result[0] = 7.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 24.09000015258789) {
                                    if (input[4] <= 22.444499969482422) {
                                        result[0] = 7.5;
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[0] = 7.25;
                                        } else {
                                            result[0] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.5000000149011612) {
                                        result[0] = 8.0;
                                    } else {
                                        result[0] = 7.571428571428571;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 26.329999923706055) {
                                    if (input[3] <= 40.0) {
                                        result[0] = 5.0;
                                    } else {
                                        result[0] = 6.0;
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 26.684500694274902) {
                                            result[0] = 5.714285714285714;
                                        } else {
                                            result[0] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 27.941999435424805) {
                                            result[0] = 6.027027027027027;
                                        } else {
                                            result[0] = 6.714285714285714;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 24.0) {
                                    if (input[2] <= 20.0) {
                                        if (input[3] <= 12.0) {
                                            result[0] = 5.0;
                                        } else {
                                            result[0] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 26.88700008392334) {
                                            result[0] = 7.5;
                                        } else {
                                            result[0] = 6.8;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        if (input[4] <= 27.4689998626709) {
                                            result[0] = 8.0;
                                        } else {
                                            result[0] = 7.363636363636363;
                                        }
                                    } else {
                                        result[0] = 6.5;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[2] <= 52.0) {
                                    if (input[4] <= 28.62399959564209) {
                                        if (input[4] <= 25.975500106811523) {
                                            result[0] = 6.571428571428571;
                                        } else {
                                            result[0] = 5.967479674796748;
                                        }
                                    } else {
                                        if (input[2] <= 40.0) {
                                            result[0] = 6.153846153846154;
                                        } else {
                                            result[0] = 7.142857142857143;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.241000175476074) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[0] = 6.295081967213115;
                                        } else {
                                            result[0] = 7.133333333333334;
                                        }
                                    } else {
                                        if (input[3] <= 12.0) {
                                            result[0] = 7.131147540983607;
                                        } else {
                                            result[0] = 7.770833333333333;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 26.350000381469727) {
                                    if (input[2] <= 60.0) {
                                        if (input[1] <= 0.75) {
                                            result[0] = 6.857142857142857;
                                        } else {
                                            result[0] = 6.125;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000074505806) {
                                            result[0] = 8.0;
                                        } else {
                                            result[0] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 44.0) {
                                            result[0] = 7.326923076923077;
                                        } else {
                                            result[0] = 7.707142857142857;
                                        }
                                    } else {
                                        if (input[4] <= 27.722000122070312) {
                                            result[0] = 6.545454545454546;
                                        } else {
                                            result[0] = 7.0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 22.67549991607666) {
                        if (input[2] <= 28.0) {
                            if (input[3] <= 112.0) {
                                if (input[0] <= 0.10000000149011612) {
                                    if (input[4] <= 22.175000190734863) {
                                        if (input[2] <= 12.0) {
                                            result[0] = 5.555555555555555;
                                        } else {
                                            result[0] = 6.0;
                                        }
                                    } else {
                                        if (input[3] <= 80.0) {
                                            result[0] = 6.0;
                                        } else {
                                            result[0] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 12.0) {
                                            result[0] = 5.045454545454546;
                                        } else {
                                            result[0] = 5.738095238095238;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[0] = 6.545454545454546;
                                        } else {
                                            result[0] = 5.4;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 22.109000205993652) {
                                    if (input[4] <= 21.8799991607666) {
                                        result[0] = 7.0;
                                    } else {
                                        result[0] = 7.5;
                                    }
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[0] = 7.0;
                                    } else {
                                        result[0] = 6.5;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 112.0) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 72.0) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[0] = 5.55;
                                        } else {
                                            result[0] = 6.8;
                                        }
                                    } else {
                                        if (input[4] <= 21.630000114440918) {
                                            result[0] = 6.6;
                                        } else {
                                            result[0] = 7.019607843137255;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.10000000149011612) {
                                        if (input[4] <= 22.10200023651123) {
                                            result[0] = 7.0;
                                        } else {
                                            result[0] = 8.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[0] = 7.009009009009009;
                                        } else {
                                            result[0] = 6.65;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.5000000149011612) {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[0] = 8.0;
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[0] = 7.125;
                                        } else {
                                            result[0] = 7.909090909090909;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[0] = 7.571428571428571;
                                        } else {
                                            result[0] = 7.16;
                                        }
                                    } else {
                                        result[0] = 6.75;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 88.0) {
                                if (input[4] <= 24.057499885559082) {
                                    if (input[2] <= 28.0) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[0] = 5.933333333333334;
                                        } else {
                                            result[0] = 6.7;
                                        }
                                    } else {
                                        if (input[3] <= 72.0) {
                                            result[0] = 6.4;
                                        } else {
                                            result[0] = 6.864864864864865;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 26.683499336242676) {
                                        if (input[2] <= 28.0) {
                                            result[0] = 6.8125;
                                        } else {
                                            result[0] = 7.238532110091743;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[0] = 7.574468085106383;
                                        } else {
                                            result[0] = 6.903225806451613;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[4] <= 27.593499183654785) {
                                        if (input[3] <= 112.0) {
                                            result[0] = 6.4423076923076925;
                                        } else {
                                            result[0] = 7.536585365853658;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[0] = 8.0;
                                        } else {
                                            result[0] = 7.4375;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 23.3725004196167) {
                                            result[0] = 7.293103448275862;
                                        } else {
                                            result[0] = 7.8125;
                                        }
                                    } else {
                                        if (input[4] <= 23.266499519348145) {
                                            result[0] = 6.25;
                                        } else {
                                            result[0] = 7.041666666666667;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[0] <= 0.7000000178813934) {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[0] = 8.0;
                                    } else {
                                        if (input[3] <= 72.0) {
                                            result[0] = 7.647058823529412;
                                        } else {
                                            result[0] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.91950035095215) {
                                        if (input[3] <= 112.0) {
                                            result[0] = 7.125;
                                        } else {
                                            result[0] = 7.615384615384615;
                                        }
                                    } else {
                                        result[0] = 8.0;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[1] <= 0.550000011920929) {
                                        result[0] = 7.285714285714286;
                                    } else {
                                        result[0] = 7.0;
                                    }
                                } else {
                                    if (input[4] <= 23.747000694274902) {
                                        result[0] = 6.222222222222222;
                                    } else {
                                        result[0] = 7.0;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 0.8950000107288361) {
                    if (input[4] <= 33.28849983215332) {
                        if (input[2] <= 36.0) {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 30.62150001525879) {
                                    if (input[4] <= 30.007999420166016) {
                                        result[0] = 6.0;
                                    } else {
                                        result[0] = 6.2;
                                    }
                                } else {
                                    if (input[4] <= 32.87649917602539) {
                                        if (input[2] <= 28.0) {
                                            result[0] = 7.0;
                                        } else {
                                            result[0] = 7.1395348837209305;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[0] = 7.0;
                                        } else {
                                            result[0] = 7.761904761904762;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 32.42249870300293) {
                                    if (input[3] <= 40.0) {
                                        if (input[2] <= 28.0) {
                                            result[0] = 7.170731707317073;
                                        } else {
                                            result[0] = 7.647058823529412;
                                        }
                                    } else {
                                        if (input[4] <= 31.590499877929688) {
                                            result[0] = 7.6231884057971016;
                                        } else {
                                            result[0] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[0] = 8.0;
                                        } else {
                                            result[0] = 7.9;
                                        }
                                    } else {
                                        result[0] = 7.75;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 31.708499908447266) {
                                if (input[4] <= 29.96150016784668) {
                                    if (input[2] <= 44.0) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[0] = 7.8;
                                        } else {
                                            result[0] = 7.25;
                                        }
                                    } else {
                                        if (input[4] <= 29.72849941253662) {
                                            result[0] = 7.785714285714286;
                                        } else {
                                            result[0] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 24.0) {
                                        if (input[4] <= 31.32800006866455) {
                                            result[0] = 7.409090909090909;
                                        } else {
                                            result[0] = 7.689655172413793;
                                        }
                                    } else {
                                        if (input[4] <= 30.472000122070312) {
                                            result[0] = 7.6;
                                        } else {
                                            result[0] = 7.928571428571429;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 31.951499938964844) {
                                    if (input[4] <= 31.767499923706055) {
                                        result[0] = 8.0;
                                    } else {
                                        result[0] = 7.571428571428571;
                                    }
                                } else {
                                    result[0] = 8.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 34.10000038146973) {
                            if (input[1] <= 0.8499999940395355) {
                                if (input[4] <= 33.94149971008301) {
                                    result[0] = 8.0;
                                } else {
                                    result[0] = 7.714285714285714;
                                }
                            } else {
                                if (input[0] <= 0.30000000447034836) {
                                    result[0] = 8.0;
                                } else {
                                    if (input[4] <= 33.87100028991699) {
                                        result[0] = 7.0;
                                    } else {
                                        result[0] = 7.857142857142857;
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.9249999821186066) {
                                result[0] = 8.0;
                            } else {
                                if (input[4] <= 34.4424991607666) {
                                    result[0] = 7.875;
                                } else {
                                    result[0] = 8.0;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 12.0) {
                        if (input[3] <= 12.0) {
                            result[0] = 7.416666666666667;
                        } else {
                            if (input[1] <= 0.9249999821186066) {
                                if (input[1] <= 0.75) {
                                    result[0] = 7.0;
                                } else {
                                    result[0] = 6.833333333333333;
                                }
                            } else {
                                result[0] = 6.4;
                            }
                        }
                    } else {
                        if (input[3] <= 12.0) {
                            if (input[2] <= 28.0) {
                                result[0] = 6.0;
                            } else {
                                if (input[4] <= 31.640999794006348) {
                                    result[0] = 6.222222222222222;
                                } else {
                                    if (input[2] <= 36.0) {
                                        result[0] = 6.125;
                                    } else {
                                        result[0] = 7.0;
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.8499999940395355) {
                                if (input[4] <= 31.797999382019043) {
                                    result[0] = 7.0;
                                } else {
                                    result[0] = 7.166666666666667;
                                }
                            } else {
                                if (input[3] <= 24.0) {
                                    if (input[4] <= 31.379499435424805) {
                                        result[0] = 6.625;
                                    } else {
                                        result[0] = 7.166666666666667;
                                    }
                                } else {
                                    result[0] = 6.166666666666667;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (input[4] <= 17.44349956512451) {
        if (input[4] <= 12.041500091552734) {
            if (input[4] <= 9.702000141143799) {
                if (input[4] <= 9.434999942779541) {
                    if (input[4] <= 9.266499996185303) {
                        result[1] = 2.0;
                    } else {
                        if (input[3] <= 112.0) {
                            if (input[2] <= 52.0) {
                                result[1] = 2.0;
                            } else {
                                if (input[3] <= 40.0) {
                                    result[1] = 2.0;
                                } else {
                                    result[1] = 2.2;
                                }
                            }
                        } else {
                            result[1] = 2.5555555555555554;
                        }
                    }
                } else {
                    if (input[3] <= 112.0) {
                        if (input[4] <= 9.45900011062622) {
                            result[1] = 2.2222222222222223;
                        } else {
                            result[1] = 2.0;
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[0] <= 0.4000000134110451) {
                                result[1] = 3.0;
                            } else {
                                result[1] = 2.2857142857142856;
                            }
                        } else {
                            result[1] = 3.0;
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 11.40399980545044) {
                            if (input[4] <= 11.055500030517578) {
                                result[1] = 2.0;
                            } else {
                                if (input[3] <= 40.0) {
                                    result[1] = 2.0;
                                } else {
                                    result[1] = 2.7142857142857144;
                                }
                            }
                        } else {
                            if (input[2] <= 36.0) {
                                result[1] = 2.0;
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[1] = 3.0;
                                } else {
                                    result[1] = 2.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 10.263999938964844) {
                            result[1] = 2.0;
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                result[1] = 3.0;
                            } else {
                                result[1] = 2.8333333333333335;
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[2] <= 12.0) {
                            if (input[3] <= 112.0) {
                                if (input[4] <= 10.36549997329712) {
                                    result[1] = 2.0;
                                } else {
                                    result[1] = 2.3333333333333335;
                                }
                            } else {
                                result[1] = 3.0;
                            }
                        } else {
                            if (input[4] <= 11.863500118255615) {
                                if (input[4] <= 10.101500034332275) {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[3] <= 72.0) {
                                            result[1] = 2.9166666666666665;
                                        } else {
                                            result[1] = 3.0;
                                        }
                                    } else {
                                        result[1] = 2.3333333333333335;
                                    }
                                } else {
                                    result[1] = 3.0;
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    result[1] = 3.0;
                                } else {
                                    result[1] = 4.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 10.67549991607666) {
                            result[1] = 2.0;
                        } else {
                            result[1] = 2.5714285714285716;
                        }
                    }
                }
            }
        } else {
            if (input[3] <= 56.0) {
                if (input[4] <= 16.463000297546387) {
                    if (input[2] <= 60.0) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 44.0) {
                                if (input[3] <= 40.0) {
                                    result[1] = 3.0;
                                } else {
                                    if (input[4] <= 15.843500137329102) {
                                        if (input[4] <= 15.36050033569336) {
                                            result[1] = 3.0;
                                        } else {
                                            result[1] = 3.0555555555555554;
                                        }
                                    } else {
                                        if (input[2] <= 36.0) {
                                            result[1] = 3.6666666666666665;
                                        } else {
                                            result[1] = 4.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 15.179999828338623) {
                                    if (input[3] <= 40.0) {
                                        result[1] = 3.0;
                                    } else {
                                        if (input[4] <= 14.564000129699707) {
                                            result[1] = 3.0;
                                        } else {
                                            result[1] = 3.8333333333333335;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 15.391499996185303) {
                                        result[1] = 3.75;
                                    } else {
                                        result[1] = 4.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 13.440500259399414) {
                                result[1] = 2.0;
                            } else {
                                result[1] = 3.0;
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[4] <= 15.881499767303467) {
                                result[1] = 3.0;
                            } else {
                                result[1] = 4.0;
                            }
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                if (input[4] <= 15.363999843597412) {
                                    result[1] = 4.0;
                                } else {
                                    result[1] = 4.333333333333333;
                                }
                            } else {
                                if (input[4] <= 14.84000015258789) {
                                    if (input[4] <= 13.811999797821045) {
                                        result[1] = 3.2;
                                    } else {
                                        result[1] = 3.0;
                                    }
                                } else {
                                    result[1] = 4.083333333333333;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[4] <= 17.21799945831299) {
                            result[1] = 3.0;
                        } else {
                            result[1] = 3.3333333333333335;
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 60.0) {
                                if (input[4] <= 16.688499450683594) {
                                    if (input[4] <= 16.636000633239746) {
                                        result[1] = 4.0;
                                    } else {
                                        result[1] = 4.666666666666667;
                                    }
                                } else {
                                    if (input[1] <= 0.550000011920929) {
                                        result[1] = 4.285714285714286;
                                    } else {
                                        result[1] = 4.0;
                                    }
                                }
                            } else {
                                if (input[3] <= 24.0) {
                                    result[1] = 4.0;
                                } else {
                                    result[1] = 5.0;
                                }
                            }
                        } else {
                            if (input[2] <= 60.0) {
                                if (input[4] <= 16.88350009918213) {
                                    result[1] = 3.0;
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[4] <= 17.086499214172363) {
                                            result[1] = 3.888888888888889;
                                        } else {
                                            result[1] = 3.235294117647059;
                                        }
                                    } else {
                                        result[1] = 4.0;
                                    }
                                }
                            } else {
                                result[1] = 4.6;
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 15.194499969482422) {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 14.293999671936035) {
                                if (input[4] <= 12.337500095367432) {
                                    result[1] = 2.857142857142857;
                                } else {
                                    result[1] = 3.0;
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    result[1] = 3.0;
                                } else {
                                    if (input[4] <= 15.048500061035156) {
                                        result[1] = 4.0;
                                    } else {
                                        result[1] = 3.6666666666666665;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        result[1] = 3.0;
                                    } else {
                                        result[1] = 4.0;
                                    }
                                } else {
                                    result[1] = 4.0;
                                }
                            } else {
                                if (input[4] <= 14.519000053405762) {
                                    result[1] = 3.0;
                                } else {
                                    result[1] = 3.2857142857142856;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 44.0) {
                                    if (input[4] <= 14.659499645233154) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[1] = 3.0;
                                        } else {
                                            result[1] = 3.2222222222222223;
                                        }
                                    } else {
                                        result[1] = 4.0;
                                    }
                                } else {
                                    result[1] = 4.0;
                                }
                            } else {
                                if (input[4] <= 14.754499912261963) {
                                    if (input[4] <= 14.275499820709229) {
                                        result[1] = 4.0;
                                    } else {
                                        if (input[4] <= 14.35949993133545) {
                                            result[1] = 5.0;
                                        } else {
                                            result[1] = 4.0344827586206895;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[1] = 5.0;
                                    } else {
                                        result[1] = 4.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 14.218499660491943) {
                                if (input[3] <= 112.0) {
                                    if (input[2] <= 52.0) {
                                        result[1] = 3.0;
                                    } else {
                                        if (input[4] <= 13.913000106811523) {
                                            result[1] = 3.0689655172413794;
                                        } else {
                                            result[1] = 3.4285714285714284;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 13.84749984741211) {
                                        if (input[4] <= 12.90999984741211) {
                                            result[1] = 3.6666666666666665;
                                        } else {
                                            result[1] = 3.0555555555555554;
                                        }
                                    } else {
                                        result[1] = 4.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 52.0) {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[4] <= 14.61899995803833) {
                                            result[1] = 3.8;
                                        } else {
                                            result[1] = 4.0;
                                        }
                                    } else {
                                        result[1] = 3.25;
                                    }
                                } else {
                                    result[1] = 4.625;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 20.0) {
                        if (input[3] <= 112.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 88.0) {
                                    result[1] = 4.0;
                                } else {
                                    if (input[4] <= 16.905500411987305) {
                                        result[1] = 4.222222222222222;
                                    } else {
                                        result[1] = 5.0;
                                    }
                                }
                            } else {
                                if (input[3] <= 88.0) {
                                    if (input[1] <= 0.75) {
                                        result[1] = 3.142857142857143;
                                    } else {
                                        if (input[4] <= 16.335999488830566) {
                                            result[1] = 3.375;
                                        } else {
                                            result[1] = 3.75;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 16.686999320983887) {
                                        result[1] = 3.6666666666666665;
                                    } else {
                                        result[1] = 4.0;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                result[1] = 5.0;
                            } else {
                                result[1] = 4.0;
                            }
                        }
                    } else {
                        if (input[4] <= 16.941499710083008) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 44.0) {
                                    if (input[4] <= 16.748000144958496) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[1] = 4.0;
                                        } else {
                                            result[1] = 3.2;
                                        }
                                    } else {
                                        result[1] = 4.333333333333333;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[1] = 5.0;
                                    } else {
                                        result[1] = 4.125;
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 15.935999870300293) {
                                        result[1] = 4.333333333333333;
                                    } else {
                                        if (input[0] <= 0.7950000166893005) {
                                            result[1] = 4.8;
                                        } else {
                                            result[1] = 6.5;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[1] = 5.0;
                                    } else {
                                        if (input[4] <= 16.1225004196167) {
                                            result[1] = 4.0588235294117645;
                                        } else {
                                            result[1] = 4.862068965517241;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 112.0) {
                                    result[1] = 5.0;
                                } else {
                                    if (input[1] <= 0.75) {
                                        result[1] = 5.166666666666667;
                                    } else {
                                        result[1] = 5.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 17.19200038909912) {
                                    result[1] = 7.2;
                                } else {
                                    result[1] = 5.363636363636363;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 22.003999710083008) {
            if (input[3] <= 56.0) {
                if (input[2] <= 44.0) {
                    if (input[3] <= 24.0) {
                        if (input[4] <= 19.44499969482422) {
                            if (input[0] <= 0.8950000107288361) {
                                result[1] = 4.0;
                            } else {
                                if (input[4] <= 19.136500358581543) {
                                    if (input[2] <= 36.0) {
                                        result[1] = 3.0;
                                    } else {
                                        result[1] = 3.2;
                                    }
                                } else {
                                    result[1] = 3.5;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                result[1] = 4.0;
                            } else {
                                if (input[4] <= 20.01449966430664) {
                                    if (input[1] <= 0.75) {
                                        result[1] = 4.428571428571429;
                                    } else {
                                        result[1] = 4.111111111111111;
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        if (input[4] <= 21.28950023651123) {
                                            result[1] = 4.521739130434782;
                                        } else {
                                            result[1] = 5.454545454545454;
                                        }
                                    } else {
                                        result[1] = 5.777777777777778;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[4] <= 20.32699966430664) {
                                if (input[2] <= 28.0) {
                                    if (input[1] <= 0.550000011920929) {
                                        if (input[4] <= 19.426499366760254) {
                                            result[1] = 4.0;
                                        } else {
                                            result[1] = 4.333333333333333;
                                        }
                                    } else {
                                        result[1] = 4.0;
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        result[1] = 4.0;
                                    } else {
                                        if (input[4] <= 19.268999099731445) {
                                            result[1] = 4.833333333333333;
                                        } else {
                                            result[1] = 5.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    result[1] = 4.0;
                                } else {
                                    if (input[4] <= 20.4060001373291) {
                                        result[1] = 4.6;
                                    } else {
                                        result[1] = 5.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 18.664499282836914) {
                                if (input[2] <= 28.0) {
                                    result[1] = 3.142857142857143;
                                } else {
                                    result[1] = 3.75;
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[4] <= 20.553500175476074) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[1] = 8.0;
                                        } else {
                                            result[1] = 5.9375;
                                        }
                                    } else {
                                        if (input[4] <= 21.191499710083008) {
                                            result[1] = 4.875;
                                        } else {
                                            result[1] = 6.7;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 19.815500259399414) {
                                        result[1] = 5.3;
                                    } else {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[1] = 4.2727272727272725;
                                        } else {
                                            result[1] = 4.8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 19.592000007629395) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 24.0) {
                                if (input[2] <= 60.0) {
                                    result[1] = 4.0;
                                } else {
                                    if (input[3] <= 12.0) {
                                        result[1] = 4.0;
                                    } else {
                                        result[1] = 5.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[2] <= 52.0) {
                                        if (input[4] <= 18.243000030517578) {
                                            result[1] = 4.666666666666667;
                                        } else {
                                            result[1] = 5.0;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[1] = 5.0;
                                        } else {
                                            result[1] = 4.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.786999702453613) {
                                        if (input[1] <= 0.550000011920929) {
                                            result[1] = 5.2;
                                        } else {
                                            result[1] = 5.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.875) {
                                            result[1] = 6.0;
                                        } else {
                                            result[1] = 5.5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 52.0) {
                                if (input[4] <= 18.95699977874756) {
                                    if (input[3] <= 24.0) {
                                        result[1] = 3.8333333333333335;
                                    } else {
                                        result[1] = 4.5;
                                    }
                                } else {
                                    result[1] = 5.222222222222222;
                                }
                            } else {
                                if (input[3] <= 12.0) {
                                    result[1] = 6.142857142857143;
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[4] <= 17.773499488830566) {
                                            result[1] = 6.428571428571429;
                                        } else {
                                            result[1] = 5.133333333333334;
                                        }
                                    } else {
                                        result[1] = 3.857142857142857;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 24.0) {
                                if (input[0] <= 0.30000000447034836) {
                                    if (input[4] <= 21.407999992370605) {
                                        result[1] = 5.0;
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[1] = 5.428571428571429;
                                        } else {
                                            result[1] = 5.166666666666667;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 20.15149974822998) {
                                        result[1] = 4.75;
                                    } else {
                                        result[1] = 5.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[2] <= 52.0) {
                                        if (input[3] <= 40.0) {
                                            result[1] = 5.0;
                                        } else {
                                            result[1] = 6.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[1] = 5.555555555555555;
                                        } else {
                                            result[1] = 5.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 21.54199981689453) {
                                        result[1] = 6.0;
                                    } else {
                                        result[1] = 6.333333333333333;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 21.67099952697754) {
                                if (input[4] <= 21.504499435424805) {
                                    if (input[3] <= 24.0) {
                                        if (input[4] <= 20.916000366210938) {
                                            result[1] = 5.166666666666667;
                                        } else {
                                            result[1] = 6.5;
                                        }
                                    } else {
                                        if (input[4] <= 20.35099983215332) {
                                            result[1] = 6.15;
                                        } else {
                                            result[1] = 6.588235294117647;
                                        }
                                    }
                                } else {
                                    result[1] = 5.0;
                                }
                            } else {
                                result[1] = 6.888888888888889;
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 18.824999809265137) {
                    if (input[2] <= 44.0) {
                        if (input[2] <= 12.0) {
                            if (input[4] <= 17.714500427246094) {
                                result[1] = 5.2;
                            } else {
                                if (input[1] <= 0.6500000059604645) {
                                    if (input[3] <= 72.0) {
                                        result[1] = 4.0;
                                    } else {
                                        result[1] = 4.222222222222222;
                                    }
                                } else {
                                    result[1] = 4.0;
                                }
                            }
                        } else {
                            if (input[3] <= 88.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 18.472000122070312) {
                                        if (input[2] <= 36.0) {
                                            result[1] = 4.607843137254902;
                                        } else {
                                            result[1] = 4.2105263157894735;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[1] = 5.285714285714286;
                                        } else {
                                            result[1] = 4.904761904761905;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.75) {
                                        if (input[2] <= 36.0) {
                                            result[1] = 6.2;
                                        } else {
                                            result[1] = 8.0;
                                        }
                                    } else {
                                        if (input[4] <= 17.60599994659424) {
                                            result[1] = 6.428571428571429;
                                        } else {
                                            result[1] = 4.3125;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 17.60800075531006) {
                                    result[1] = 5.0;
                                } else {
                                    if (input[1] <= 0.75) {
                                        if (input[4] <= 18.01900005340576) {
                                            result[1] = 6.2105263157894735;
                                        } else {
                                            result[1] = 5.75;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[1] = 6.0;
                                        } else {
                                            result[1] = 4.888888888888889;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.8499999940395355) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 17.74350070953369) {
                                    result[1] = 5.571428571428571;
                                } else {
                                    result[1] = 6.0;
                                }
                            } else {
                                if (input[2] <= 52.0) {
                                    result[1] = 7.333333333333333;
                                } else {
                                    if (input[4] <= 18.068500518798828) {
                                        if (input[2] <= 60.0) {
                                            result[1] = 5.333333333333333;
                                        } else {
                                            result[1] = 6.4;
                                        }
                                    } else {
                                        result[1] = 6.7;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                result[1] = 6.0;
                            } else {
                                if (input[3] <= 88.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[1] = 5.0;
                                    } else {
                                        result[1] = 4.625;
                                    }
                                } else {
                                    result[1] = 5.75;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 44.0) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 72.0) {
                                if (input[4] <= 20.072999954223633) {
                                    if (input[2] <= 12.0) {
                                        result[1] = 4.0;
                                    } else {
                                        result[1] = 5.0;
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[1] = 5.875;
                                        } else {
                                            result[1] = 5.28;
                                        }
                                    } else {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[1] = 5.142857142857143;
                                        } else {
                                            result[1] = 5.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[3] <= 112.0) {
                                        if (input[2] <= 12.0) {
                                            result[1] = 5.105263157894737;
                                        } else {
                                            result[1] = 5.77906976744186;
                                        }
                                    } else {
                                        if (input[4] <= 20.935500144958496) {
                                            result[1] = 6.0;
                                        } else {
                                            result[1] = 6.846153846153846;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 21.060500144958496) {
                                        if (input[4] <= 20.887499809265137) {
                                            result[1] = 6.0;
                                        } else {
                                            result[1] = 6.166666666666667;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[1] = 7.0;
                                        } else {
                                            result[1] = 6.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.8499999940395355) {
                                if (input[3] <= 112.0) {
                                    if (input[1] <= 0.6500000059604645) {
                                        if (input[2] <= 12.0) {
                                            result[1] = 6.857142857142857;
                                        } else {
                                            result[1] = 5.608695652173913;
                                        }
                                    } else {
                                        if (input[4] <= 20.970499992370605) {
                                            result[1] = 6.967741935483871;
                                        } else {
                                            result[1] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 19.463000297546387) {
                                        result[1] = 8.0;
                                    } else {
                                        if (input[4] <= 19.994999885559082) {
                                            result[1] = 6.833333333333333;
                                        } else {
                                            result[1] = 7.75;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 20.909000396728516) {
                                    if (input[4] <= 19.695499420166016) {
                                        result[1] = 5.916666666666667;
                                    } else {
                                        if (input[2] <= 12.0) {
                                            result[1] = 4.833333333333333;
                                        } else {
                                            result[1] = 5.0;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 104.0) {
                                        result[1] = 7.4;
                                    } else {
                                        result[1] = 6.285714285714286;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 20.41699981689453) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 60.0) {
                                    result[1] = 6.0;
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[1] = 6.875;
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[1] = 6.4;
                                        } else {
                                            result[1] = 6.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[3] <= 88.0) {
                                        if (input[4] <= 19.614999771118164) {
                                            result[1] = 5.571428571428571;
                                        } else {
                                            result[1] = 6.266666666666667;
                                        }
                                    } else {
                                        result[1] = 7.0;
                                    }
                                } else {
                                    if (input[4] <= 19.1274995803833) {
                                        result[1] = 6.714285714285714;
                                    } else {
                                        if (input[4] <= 19.994500160217285) {
                                            result[1] = 8.0;
                                        } else {
                                            result[1] = 7.5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 112.0) {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[1] = 7.0;
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[1] = 7.8;
                                        } else {
                                            result[1] = 6.75;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.5000000074505806) {
                                        result[1] = 7.0;
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[1] = 6.0;
                                        } else {
                                            result[1] = 6.916666666666667;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 21.008000373840332) {
                                        if (input[4] <= 20.560500144958496) {
                                            result[1] = 6.8;
                                        } else {
                                            result[1] = 7.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[1] = 7.111111111111111;
                                        } else {
                                            result[1] = 7.333333333333333;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.75) {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[1] = 8.0;
                                        } else {
                                            result[1] = 7.833333333333333;
                                        }
                                    } else {
                                        result[1] = 7.375;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 29.16100025177002) {
                if (input[3] <= 56.0) {
                    if (input[4] <= 25.28749942779541) {
                        if (input[2] <= 60.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 25.14349937438965) {
                                            result[1] = 5.014134275618375;
                                        } else {
                                            result[1] = 5.230769230769231;
                                        }
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[1] = 5.045454545454546;
                                        } else {
                                            result[1] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.80399990081787) {
                                        if (input[3] <= 24.0) {
                                            result[1] = 5.0;
                                        } else {
                                            result[1] = 5.846153846153846;
                                        }
                                    } else {
                                        if (input[3] <= 24.0) {
                                            result[1] = 5.909090909090909;
                                        } else {
                                            result[1] = 6.371428571428571;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[3] <= 24.0) {
                                        if (input[2] <= 12.0) {
                                            result[1] = 6.916666666666667;
                                        } else {
                                            result[1] = 5.959183673469388;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[1] = 5.2272727272727275;
                                        } else {
                                            result[1] = 5.862068965517241;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        result[1] = 5.4;
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[1] = 6.333333333333333;
                                        } else {
                                            result[1] = 7.5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 22.58650016784668) {
                                        result[1] = 5.222222222222222;
                                    } else {
                                        result[1] = 6.0;
                                    }
                                } else {
                                    if (input[4] <= 23.413000106811523) {
                                        result[1] = 6.5;
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[1] = 7.571428571428571;
                                        } else {
                                            result[1] = 6.5;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 24.07699966430664) {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[1] = 7.333333333333333;
                                        } else {
                                            result[1] = 7.0;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[1] = 6.2;
                                        } else {
                                            result[1] = 6.857142857142857;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 24.75550079345703) {
                                            result[1] = 7.0;
                                        } else {
                                            result[1] = 7.2;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[1] = 8.0;
                                        } else {
                                            result[1] = 7.555555555555555;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 40.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 25.800000190734863) {
                                        if (input[3] <= 24.0) {
                                            result[1] = 5.0;
                                        } else {
                                            result[1] = 5.866666666666666;
                                        }
                                    } else {
                                        if (input[4] <= 26.712000846862793) {
                                            result[1] = 5.837837837837838;
                                        } else {
                                            result[1] = 6.040322580645161;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.45699977874756) {
                                        if (input[4] <= 26.380000114440918) {
                                            result[1] = 7.071428571428571;
                                        } else {
                                            result[1] = 6.095238095238095;
                                        }
                                    } else {
                                        if (input[1] <= 0.875) {
                                            result[1] = 7.777777777777778;
                                        } else {
                                            result[1] = 6.833333333333333;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 28.05699920654297) {
                                            result[1] = 6.035714285714286;
                                        } else {
                                            result[1] = 6.909090909090909;
                                        }
                                    } else {
                                        result[1] = 7.333333333333333;
                                    }
                                } else {
                                    if (input[4] <= 27.989500045776367) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[1] = 7.196078431372549;
                                        } else {
                                            result[1] = 6.428571428571429;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[1] = 8.0;
                                        } else {
                                            result[1] = 7.625;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 12.0) {
                                if (input[4] <= 28.040499687194824) {
                                    if (input[2] <= 52.0) {
                                        if (input[4] <= 26.70650005340576) {
                                            result[1] = 5.545454545454546;
                                        } else {
                                            result[1] = 6.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[1] = 6.03125;
                                        } else {
                                            result[1] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.550000011920929) {
                                        result[1] = 7.5;
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[1] = 6.75;
                                        } else {
                                            result[1] = 7.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 26.554999351501465) {
                                    if (input[2] <= 60.0) {
                                        if (input[2] <= 52.0) {
                                            result[1] = 7.0;
                                        } else {
                                            result[1] = 6.487804878048781;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[1] = 7.594594594594595;
                                        } else {
                                            result[1] = 6.666666666666667;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[3] <= 24.0) {
                                            result[1] = 7.3;
                                        } else {
                                            result[1] = 7.68;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[1] = 7.0;
                                        } else {
                                            result[1] = 6.3076923076923075;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 23.38450050354004) {
                        if (input[3] <= 88.0) {
                            if (input[2] <= 28.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 22.326499938964844) {
                                        if (input[0] <= 0.4000000134110451) {
                                            result[1] = 5.125;
                                        } else {
                                            result[1] = 5.4;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[1] = 5.898305084745763;
                                        } else {
                                            result[1] = 5.4;
                                        }
                                    }
                                } else {
                                    result[1] = 7.0;
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 72.0) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[1] = 5.333333333333333;
                                        } else {
                                            result[1] = 5.625;
                                        }
                                    } else {
                                        if (input[4] <= 22.97700023651123) {
                                            result[1] = 7.0;
                                        } else {
                                            result[1] = 6.857142857142857;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.10000000149011612) {
                                        result[1] = 8.0;
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[1] = 7.049180327868853;
                                        } else {
                                            result[1] = 6.2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[0] <= 0.30000000447034836) {
                                    if (input[2] <= 36.0) {
                                        if (input[3] <= 112.0) {
                                            result[1] = 7.0;
                                        } else {
                                            result[1] = 7.916666666666667;
                                        }
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[1] = 7.909090909090909;
                                        } else {
                                            result[1] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 36.0) {
                                        if (input[2] <= 12.0) {
                                            result[1] = 6.0;
                                        } else {
                                            result[1] = 7.0;
                                        }
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[1] = 7.40625;
                                        } else {
                                            result[1] = 7.741935483870968;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[2] <= 28.0) {
                                        result[1] = 6.888888888888889;
                                    } else {
                                        result[1] = 6.0;
                                    }
                                } else {
                                    if (input[4] <= 22.51849937438965) {
                                        result[1] = 6.285714285714286;
                                    } else {
                                        result[1] = 7.0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 28.0) {
                                if (input[4] <= 27.682000160217285) {
                                    if (input[3] <= 112.0) {
                                        if (input[2] <= 12.0) {
                                            result[1] = 6.5;
                                        } else {
                                            result[1] = 7.247826086956522;
                                        }
                                    } else {
                                        if (input[4] <= 23.6560001373291) {
                                            result[1] = 7.0588235294117645;
                                        } else {
                                            result[1] = 7.880597014925373;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[1] = 8.0;
                                    } else {
                                        if (input[4] <= 28.255499839782715) {
                                            result[1] = 7.45;
                                        } else {
                                            result[1] = 8.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 44.0) {
                                        if (input[4] <= 25.929499626159668) {
                                            result[1] = 6.628571428571429;
                                        } else {
                                            result[1] = 7.682539682539683;
                                        }
                                    } else {
                                        if (input[4] <= 23.79349994659424) {
                                            result[1] = 7.666666666666667;
                                        } else {
                                            result[1] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[4] <= 23.45050048828125) {
                                            result[1] = 7.894736842105263;
                                        } else {
                                            result[1] = 8.0;
                                        }
                                    } else {
                                        if (input[4] <= 24.32200050354004) {
                                            result[1] = 7.428571428571429;
                                        } else {
                                            result[1] = 7.975;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 23.65250015258789) {
                                result[1] = 7.714285714285714;
                            } else {
                                if (input[1] <= 0.75) {
                                    if (input[4] <= 24.364999771118164) {
                                        result[1] = 6.666666666666667;
                                    } else {
                                        if (input[3] <= 72.0) {
                                            result[1] = 6.9411764705882355;
                                        } else {
                                            result[1] = 7.2368421052631575;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 88.0) {
                                        if (input[2] <= 28.0) {
                                            result[1] = 6.1875;
                                        } else {
                                            result[1] = 6.6923076923076925;
                                        }
                                    } else {
                                        if (input[4] <= 24.01449966430664) {
                                            result[1] = 7.714285714285714;
                                        } else {
                                            result[1] = 6.68;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 33.5994987487793) {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[2] <= 36.0) {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 30.775500297546387) {
                                    result[1] = 6.0;
                                } else {
                                    if (input[4] <= 33.12700080871582) {
                                        if (input[4] <= 32.41749954223633) {
                                            result[1] = 7.0;
                                        } else {
                                            result[1] = 7.148148148148148;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[1] = 7.125;
                                        } else {
                                            result[1] = 7.916666666666667;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 29.612500190734863) {
                                    if (input[3] <= 40.0) {
                                        result[1] = 6.666666666666667;
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[1] = 7.0;
                                        } else {
                                            result[1] = 7.3;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 32.4275016784668) {
                                        if (input[3] <= 40.0) {
                                            result[1] = 7.253164556962025;
                                        } else {
                                            result[1] = 7.6490066225165565;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[1] = 8.0;
                                        } else {
                                            result[1] = 7.6;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 31.630000114440918) {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 30.862000465393066) {
                                        if (input[4] <= 29.689499855041504) {
                                            result[1] = 7.261904761904762;
                                        } else {
                                            result[1] = 7.607407407407408;
                                        }
                                    } else {
                                        if (input[4] <= 31.381500244140625) {
                                            result[1] = 7.037037037037037;
                                        } else {
                                            result[1] = 7.533333333333333;
                                        }
                                    }
                                } else {
                                    result[1] = 8.0;
                                }
                            } else {
                                if (input[4] <= 31.951499938964844) {
                                    if (input[4] <= 31.755000114440918) {
                                        if (input[4] <= 31.697999954223633) {
                                            result[1] = 8.0;
                                        } else {
                                            result[1] = 7.888888888888889;
                                        }
                                    } else {
                                        result[1] = 7.5;
                                    }
                                } else {
                                    result[1] = 8.0;
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.75) {
                            if (input[4] <= 31.245999336242676) {
                                if (input[4] <= 29.94950008392334) {
                                    if (input[4] <= 29.423500061035156) {
                                        result[1] = 7.444444444444445;
                                    } else {
                                        result[1] = 6.909090909090909;
                                    }
                                } else {
                                    result[1] = 7.8;
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 32.16549873352051) {
                                        result[1] = 7.6;
                                    } else {
                                        result[1] = 7.0;
                                    }
                                } else {
                                    result[1] = 6.166666666666667;
                                }
                            }
                        } else {
                            if (input[4] <= 30.154500007629395) {
                                if (input[3] <= 12.0) {
                                    result[1] = 5.857142857142857;
                                } else {
                                    if (input[2] <= 32.0) {
                                        result[1] = 6.166666666666667;
                                    } else {
                                        result[1] = 6.833333333333333;
                                    }
                                }
                            } else {
                                if (input[4] <= 30.920499801635742) {
                                    if (input[3] <= 24.0) {
                                        result[1] = 8.0;
                                    } else {
                                        result[1] = 6.875;
                                    }
                                } else {
                                    if (input[4] <= 31.335000038146973) {
                                        result[1] = 6.0;
                                    } else {
                                        if (input[2] <= 36.0) {
                                            result[1] = 6.555555555555555;
                                        } else {
                                            result[1] = 7.0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.7000000178813934) {
                        if (input[4] <= 33.66950035095215) {
                            if (input[3] <= 12.0) {
                                result[1] = 7.333333333333333;
                            } else {
                                result[1] = 8.0;
                            }
                        } else {
                            if (input[4] <= 33.87100028991699) {
                                if (input[4] <= 33.85500144958496) {
                                    result[1] = 8.0;
                                } else {
                                    result[1] = 7.833333333333333;
                                }
                            } else {
                                result[1] = 8.0;
                            }
                        }
                    } else {
                        if (input[4] <= 34.047000885009766) {
                            if (input[1] <= 0.75) {
                                result[1] = 8.0;
                            } else {
                                result[1] = 7.0;
                            }
                        } else {
                            if (input[4] <= 34.42900085449219) {
                                result[1] = 7.714285714285714;
                            } else {
                                if (input[4] <= 34.89350128173828) {
                                    result[1] = 7.9;
                                } else {
                                    result[1] = 8.0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (input[4] <= 18.238999366760254) {
        if (input[4] <= 12.338500022888184) {
            if (input[4] <= 9.814500331878662) {
                if (input[4] <= 9.265999794006348) {
                    result[2] = 2.0;
                } else {
                    if (input[3] <= 112.0) {
                        if (input[2] <= 60.0) {
                            if (input[3] <= 72.0) {
                                result[2] = 2.0;
                            } else {
                                if (input[2] <= 36.0) {
                                    result[2] = 2.0;
                                } else {
                                    if (input[4] <= 9.433000087738037) {
                                        result[2] = 2.1666666666666665;
                                    } else {
                                        result[2] = 2.142857142857143;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 9.694499969482422) {
                                result[2] = 2.0;
                            } else {
                                result[2] = 2.8333333333333335;
                            }
                        }
                    } else {
                        if (input[0] <= 0.7950000166893005) {
                            result[2] = 3.0;
                        } else {
                            result[2] = 2.0;
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 11.839999675750732) {
                            if (input[4] <= 11.41100025177002) {
                                if (input[4] <= 11.17549991607666) {
                                    result[2] = 2.0;
                                } else {
                                    if (input[4] <= 11.198999881744385) {
                                        result[2] = 2.25;
                                    } else {
                                        result[2] = 2.0;
                                    }
                                }
                            } else {
                                if (input[3] <= 40.0) {
                                    result[2] = 2.0;
                                } else {
                                    if (input[2] <= 44.0) {
                                        result[2] = 2.4;
                                    } else {
                                        result[2] = 3.0;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 11.97599983215332) {
                                    result[2] = 2.8333333333333335;
                                } else {
                                    result[2] = 3.0;
                                }
                            } else {
                                result[2] = 2.0;
                            }
                        }
                    } else {
                        if (input[3] <= 12.0) {
                            result[2] = 2.0;
                        } else {
                            if (input[3] <= 24.0) {
                                result[2] = 2.857142857142857;
                            } else {
                                result[2] = 3.0;
                            }
                        }
                    }
                } else {
                    if (input[4] <= 11.909499645233154) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[4] <= 9.94350004196167) {
                                if (input[3] <= 72.0) {
                                    result[2] = 2.25;
                                } else {
                                    if (input[2] <= 20.0) {
                                        result[2] = 2.75;
                                    } else {
                                        result[2] = 3.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[4] <= 10.355000019073486) {
                                            result[2] = 2.857142857142857;
                                        } else {
                                            result[2] = 3.0;
                                        }
                                    } else {
                                        result[2] = 2.6666666666666665;
                                    }
                                } else {
                                    if (input[4] <= 10.102499961853027) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[2] = 3.0;
                                        } else {
                                            result[2] = 2.6666666666666665;
                                        }
                                    } else {
                                        result[2] = 3.0;
                                    }
                                }
                            }
                        } else {
                            result[2] = 2.0;
                        }
                    } else {
                        if (input[3] <= 112.0) {
                            if (input[2] <= 12.0) {
                                result[2] = 2.857142857142857;
                            } else {
                                if (input[4] <= 12.198500156402588) {
                                    result[2] = 3.0;
                                } else {
                                    result[2] = 3.142857142857143;
                                }
                            }
                        } else {
                            if (input[4] <= 12.064500331878662) {
                                result[2] = 4.8;
                            } else {
                                if (input[0] <= 0.30000000447034836) {
                                    result[2] = 4.0;
                                } else {
                                    result[2] = 3.5;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 16.371000289916992) {
                if (input[3] <= 72.0) {
                    if (input[2] <= 44.0) {
                        if (input[3] <= 56.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 15.980000019073486) {
                                    if (input[1] <= 0.550000011920929) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[2] = 3.230769230769231;
                                        } else {
                                            result[2] = 3.0;
                                        }
                                    } else {
                                        result[2] = 3.0;
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        result[2] = 3.0;
                                    } else {
                                        if (input[4] <= 16.12950038909912) {
                                            result[2] = 3.8;
                                        } else {
                                            result[2] = 4.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 14.032000064849854) {
                                    result[2] = 2.0;
                                } else {
                                    result[2] = 3.0;
                                }
                            }
                        } else {
                            if (input[4] <= 14.900000095367432) {
                                if (input[4] <= 14.668999671936035) {
                                    if (input[4] <= 14.05400037765503) {
                                        result[2] = 3.0;
                                    } else {
                                        if (input[4] <= 14.411500453948975) {
                                            result[2] = 3.2142857142857144;
                                        } else {
                                            result[2] = 3.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 14.848499774932861) {
                                        result[2] = 3.6666666666666665;
                                    } else {
                                        result[2] = 3.0;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 15.110000133514404) {
                                        if (input[1] <= 0.7000000178813934) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 3.5;
                                        }
                                    } else {
                                        result[2] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 16.102499961853027) {
                                        result[2] = 3.0;
                                    } else {
                                        result[2] = 3.8;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 15.822999954223633) {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 14.72700023651123) {
                                    if (input[4] <= 14.405499935150146) {
                                        result[2] = 3.0;
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[2] = 3.0;
                                        } else {
                                            result[2] = 3.1666666666666665;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 24.0) {
                                        result[2] = 3.0;
                                    } else {
                                        if (input[4] <= 15.506999969482422) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 3.6666666666666665;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 56.0) {
                                        if (input[4] <= 13.814000129699707) {
                                            result[2] = 3.1176470588235294;
                                        } else {
                                            result[2] = 3.8222222222222224;
                                        }
                                    } else {
                                        if (input[4] <= 14.621000289916992) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 4.166666666666667;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 14.506500244140625) {
                                        if (input[1] <= 0.75) {
                                            result[2] = 3.0;
                                        } else {
                                            result[2] = 3.2;
                                        }
                                    } else {
                                        if (input[4] <= 15.355000019073486) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 3.1666666666666665;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 56.0) {
                                if (input[0] <= 0.7950000166893005) {
                                    if (input[4] <= 16.25349998474121) {
                                        result[2] = 4.0;
                                    } else {
                                        result[2] = 4.4;
                                    }
                                } else {
                                    if (input[4] <= 16.11050033569336) {
                                        result[2] = 3.5;
                                    } else {
                                        result[2] = 3.3333333333333335;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.550000011920929) {
                                    result[2] = 5.0;
                                } else {
                                    result[2] = 5.428571428571429;
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 15.151000022888184) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 28.0) {
                                if (input[3] <= 88.0) {
                                    if (input[4] <= 14.638999938964844) {
                                        result[2] = 3.0;
                                    } else {
                                        result[2] = 4.0;
                                    }
                                } else {
                                    if (input[2] <= 12.0) {
                                        if (input[3] <= 112.0) {
                                            result[2] = 3.0;
                                        } else {
                                            result[2] = 4.0;
                                        }
                                    } else {
                                        result[2] = 4.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 14.275499820709229) {
                                    result[2] = 4.0;
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        if (input[4] <= 14.876999855041504) {
                                            result[2] = 6.5;
                                        } else {
                                            result[2] = 5.0;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 4.2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 14.102499961853027) {
                                if (input[1] <= 0.550000011920929) {
                                    if (input[4] <= 13.592999935150146) {
                                        result[2] = 3.0;
                                    } else {
                                        result[2] = 3.8;
                                    }
                                } else {
                                    if (input[2] <= 60.0) {
                                        if (input[3] <= 88.0) {
                                            result[2] = 3.111111111111111;
                                        } else {
                                            result[2] = 3.0;
                                        }
                                    } else {
                                        if (input[4] <= 13.484500408172607) {
                                            result[2] = 3.0;
                                        } else {
                                            result[2] = 3.4;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    if (input[3] <= 88.0) {
                                        result[2] = 3.0;
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[2] = 3.3333333333333335;
                                        } else {
                                            result[2] = 3.1666666666666665;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 14.522500038146973) {
                                        result[2] = 5.125;
                                    } else {
                                        result[2] = 4.0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            if (input[3] <= 112.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[2] = 4.0;
                                } else {
                                    if (input[4] <= 16.165499687194824) {
                                        result[2] = 3.111111111111111;
                                    } else {
                                        result[2] = 3.857142857142857;
                                    }
                                }
                            } else {
                                if (input[4] <= 15.938999652862549) {
                                    result[2] = 4.5;
                                } else {
                                    result[2] = 5.75;
                                }
                            }
                        } else {
                            if (input[2] <= 44.0) {
                                if (input[0] <= 0.7000000178813934) {
                                    result[2] = 5.0;
                                } else {
                                    if (input[4] <= 15.871999740600586) {
                                        result[2] = 4.0;
                                    } else {
                                        result[2] = 4.25;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.550000011920929) {
                                    if (input[4] <= 15.964000225067139) {
                                        if (input[3] <= 88.0) {
                                            result[2] = 4.8;
                                        } else {
                                            result[2] = 5.0;
                                        }
                                    } else {
                                        result[2] = 5.818181818181818;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[2] = 5.0;
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[2] = 4.714285714285714;
                                        } else {
                                            result[2] = 4.4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[2] <= 28.0) {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 17.079500198364258) {
                                    result[2] = 3.0;
                                } else {
                                    if (input[2] <= 16.0) {
                                        result[2] = 3.3333333333333335;
                                    } else {
                                        result[2] = 3.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 17.307000160217285) {
                                    result[2] = 3.0;
                                } else {
                                    result[2] = 4.0;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 24.0) {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[2] = 4.0;
                                    } else {
                                        result[2] = 3.857142857142857;
                                    }
                                } else {
                                    if (input[4] <= 17.26200008392334) {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 4.333333333333333;
                                        }
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 4.647058823529412;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 17.358500480651855) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 16.95300006866455) {
                                            result[2] = 3.2;
                                        } else {
                                            result[2] = 3.0;
                                        }
                                    } else {
                                        result[2] = 3.857142857142857;
                                    }
                                } else {
                                    if (input[4] <= 17.797500610351562) {
                                        if (input[4] <= 17.635000228881836) {
                                            result[2] = 6.0;
                                        } else {
                                            result[2] = 4.833333333333333;
                                        }
                                    } else {
                                        if (input[4] <= 18.045499801635742) {
                                            result[2] = 3.0;
                                        } else {
                                            result[2] = 3.6;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[0] <= 0.8950000107288361) {
                                result[2] = 4.0;
                            } else {
                                result[2] = 4.642857142857143;
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                result[2] = 5.0;
                            } else {
                                result[2] = 6.428571428571429;
                            }
                        }
                    }
                } else {
                    if (input[2] <= 44.0) {
                        if (input[3] <= 88.0) {
                            if (input[2] <= 28.0) {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 12.0) {
                                        result[2] = 3.4285714285714284;
                                    } else {
                                        result[2] = 4.0;
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[4] <= 17.218000411987305) {
                                            result[2] = 4.125;
                                        } else {
                                            result[2] = 4.615384615384615;
                                        }
                                    } else {
                                        result[2] = 4.0;
                                    }
                                }
                            } else {
                                if (input[3] <= 72.0) {
                                    if (input[4] <= 16.897500038146973) {
                                        result[2] = 3.2;
                                    } else {
                                        if (input[4] <= 17.977499961853027) {
                                            result[2] = 4.68;
                                        } else {
                                            result[2] = 4.142857142857143;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 17.43100070953369) {
                                        if (input[1] <= 0.875) {
                                            result[2] = 5.0;
                                        } else {
                                            result[2] = 4.8;
                                        }
                                    } else {
                                        result[2] = 5.2;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 112.0) {
                                    if (input[4] <= 17.173500061035156) {
                                        result[2] = 3.5;
                                    } else {
                                        result[2] = 4.0;
                                    }
                                } else {
                                    result[2] = 5.0;
                                }
                            } else {
                                if (input[2] <= 20.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[2] = 5.0;
                                    } else {
                                        result[2] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 17.588500022888184) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 5.0;
                                        } else {
                                            result[2] = 5.4;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[2] = 5.545454545454546;
                                        } else {
                                            result[2] = 5.043478260869565;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 17.0049991607666) {
                            if (input[0] <= 0.8950000107288361) {
                                result[2] = 5.0;
                            } else {
                                if (input[1] <= 0.75) {
                                    result[2] = 6.166666666666667;
                                } else {
                                    result[2] = 5.0;
                                }
                            }
                        } else {
                            if (input[1] <= 0.8499999940395355) {
                                if (input[4] <= 17.093499183654785) {
                                    result[2] = 6.6923076923076925;
                                } else {
                                    if (input[1] <= 0.75) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[2] = 5.826923076923077;
                                        } else {
                                            result[2] = 4.833333333333333;
                                        }
                                    } else {
                                        if (input[4] <= 17.524499893188477) {
                                            result[2] = 6.777777777777778;
                                        } else {
                                            result[2] = 5.666666666666667;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 17.69950008392334) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[2] = 5.0;
                                    } else {
                                        result[2] = 5.333333333333333;
                                    }
                                } else {
                                    if (input[3] <= 88.0) {
                                        result[2] = 5.4;
                                    } else {
                                        result[2] = 6.0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 21.54550075531006) {
            if (input[3] <= 56.0) {
                if (input[2] <= 44.0) {
                    if (input[3] <= 40.0) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[4] <= 21.193500518798828) {
                                if (input[3] <= 24.0) {
                                    result[2] = 4.0;
                                } else {
                                    if (input[4] <= 20.335000038146973) {
                                        result[2] = 4.0;
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 4.833333333333333;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    result[2] = 4.0;
                                } else {
                                    result[2] = 5.0;
                                }
                            }
                        } else {
                            if (input[4] <= 20.261499404907227) {
                                if (input[3] <= 24.0) {
                                    if (input[4] <= 19.612499237060547) {
                                        if (input[3] <= 12.0) {
                                            result[2] = 3.642857142857143;
                                        } else {
                                            result[2] = 3.1818181818181817;
                                        }
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[2] = 4.1;
                                        } else {
                                            result[2] = 5.285714285714286;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.780999183654785) {
                                        result[2] = 3.75;
                                    } else {
                                        if (input[4] <= 19.510499954223633) {
                                            result[2] = 6.833333333333333;
                                        } else {
                                            result[2] = 4.230769230769231;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[1] <= 0.75) {
                                        if (input[4] <= 21.091500282287598) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 5.0;
                                        }
                                    } else {
                                        result[2] = 5.7;
                                    }
                                } else {
                                    if (input[4] <= 20.751500129699707) {
                                        result[2] = 7.142857142857143;
                                    } else {
                                        result[2] = 5.571428571428571;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 36.0) {
                            if (input[4] <= 18.646499633789062) {
                                if (input[0] <= 0.5000000074505806) {
                                    result[2] = 4.0;
                                } else {
                                    result[2] = 3.2857142857142856;
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 28.0) {
                                        if (input[4] <= 20.29099941253662) {
                                            result[2] = 4.0;
                                        } else {
                                            result[2] = 4.894736842105263;
                                        }
                                    } else {
                                        result[2] = 5.0;
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        if (input[4] <= 20.026500701904297) {
                                            result[2] = 6.5;
                                        } else {
                                            result[2] = 5.0;
                                        }
                                    } else {
                                        result[2] = 4.2;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 20.12950038909912) {
                                result[2] = 5.0;
                            } else {
                                result[2] = 6.666666666666667;
                            }
                        }
                    }
                } else {
                    if (input[4] <= 19.055500030517578) {
                        if (input[3] <= 24.0) {
                            if (input[2] <= 52.0) {
                                if (input[4] <= 18.619500160217285) {
                                    result[2] = 3.8;
                                } else {
                                    result[2] = 4.0;
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[2] = 4.444444444444445;
                                    } else {
                                        result[2] = 4.0;
                                    }
                                } else {
                                    result[2] = 5.111111111111111;
                                }
                            }
                        } else {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 18.84749984741211) {
                                    result[2] = 5.0;
                                } else {
                                    result[2] = 4.666666666666667;
                                }
                            } else {
                                if (input[2] <= 52.0) {
                                    if (input[4] <= 18.541500091552734) {
                                        result[2] = 4.833333333333333;
                                    } else {
                                        result[2] = 5.0;
                                    }
                                } else {
                                    if (input[4] <= 18.500999450683594) {
                                        result[2] = 4.4;
                                    } else {
                                        result[2] = 4.0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 19.609999656677246) {
                                    if (input[2] <= 60.0) {
                                        result[2] = 4.0;
                                    } else {
                                        result[2] = 5.0;
                                    }
                                } else {
                                    if (input[4] <= 20.17349910736084) {
                                        result[2] = 4.75;
                                    } else {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[2] = 5.111111111111111;
                                        } else {
                                            result[2] = 5.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 20.566499710083008) {
                                        if (input[3] <= 40.0) {
                                            result[2] = 5.0;
                                        } else {
                                            result[2] = 5.25;
                                        }
                                    } else {
                                        result[2] = 5.625;
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[2] = 6.0;
                                    } else {
                                        result[2] = 5.714285714285714;
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.550000011920929) {
                                result[2] = 6.833333333333333;
                            } else {
                                if (input[3] <= 40.0) {
                                    if (input[4] <= 20.48550033569336) {
                                        if (input[4] <= 19.715499877929688) {
                                            result[2] = 5.222222222222222;
                                        } else {
                                            result[2] = 4.666666666666667;
                                        }
                                    } else {
                                        if (input[4] <= 20.981499671936035) {
                                            result[2] = 6.571428571428571;
                                        } else {
                                            result[2] = 5.785714285714286;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 52.0) {
                                        result[2] = 7.0;
                                    } else {
                                        result[2] = 5.9;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= 28.0) {
                    if (input[4] <= 18.76200008392334) {
                        if (input[3] <= 112.0) {
                            if (input[2] <= 12.0) {
                                if (input[4] <= 18.667500495910645) {
                                    result[2] = 4.0;
                                } else {
                                    result[2] = 4.2;
                                }
                            } else {
                                if (input[4] <= 18.61750030517578) {
                                    if (input[2] <= 20.0) {
                                        result[2] = 5.0;
                                    } else {
                                        result[2] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 18.67199993133545) {
                                        result[2] = 5.857142857142857;
                                    } else {
                                        result[2] = 4.444444444444445;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 18.488499641418457) {
                                result[2] = 5.285714285714286;
                            } else {
                                result[2] = 5.666666666666667;
                            }
                        }
                    } else {
                        if (input[3] <= 72.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 12.0) {
                                    if (input[4] <= 19.38099956512451) {
                                        result[2] = 4.0;
                                    } else {
                                        result[2] = 4.375;
                                    }
                                } else {
                                    result[2] = 5.0;
                                }
                            } else {
                                if (input[1] <= 0.6500000059604645) {
                                    result[2] = 5.0;
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[2] = 6.333333333333333;
                                    } else {
                                        result[2] = 5.571428571428571;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[1] <= 0.75) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[3] <= 112.0) {
                                            result[2] = 5.0;
                                        } else {
                                            result[2] = 6.0;
                                        }
                                    } else {
                                        if (input[3] <= 112.0) {
                                            result[2] = 7.090909090909091;
                                        } else {
                                            result[2] = 6.666666666666667;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 112.0) {
                                        result[2] = 5.0;
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[2] = 6.375;
                                        } else {
                                            result[2] = 5.111111111111111;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 18.970499992370605) {
                                    result[2] = 6.7;
                                } else {
                                    if (input[3] <= 88.0) {
                                        if (input[4] <= 20.75100040435791) {
                                            result[2] = 5.3125;
                                        } else {
                                            result[2] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 20.9064998626709) {
                                            result[2] = 6.056818181818182;
                                        } else {
                                            result[2] = 6.5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 19.998000144958496) {
                        if (input[3] <= 112.0) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 44.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 36.0) {
                                            result[2] = 5.0;
                                        } else {
                                            result[2] = 4.166666666666667;
                                        }
                                    } else {
                                        result[2] = 6.0;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[2] = 6.0;
                                    } else {
                                        result[2] = 5.466666666666667;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.9249999821186066) {
                                    if (input[4] <= 18.497000694274902) {
                                        if (input[2] <= 52.0) {
                                            result[2] = 6.6;
                                        } else {
                                            result[2] = 6.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 6.0;
                                        } else {
                                            result[2] = 5.65625;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[2] = 6.0;
                                    } else {
                                        result[2] = 7.666666666666667;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 60.0) {
                                    result[2] = 6.0;
                                } else {
                                    result[2] = 6.142857142857143;
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[4] <= 19.09500026702881) {
                                        result[2] = 6.5;
                                    } else {
                                        result[2] = 6.6;
                                    }
                                } else {
                                    if (input[4] <= 18.85650062561035) {
                                        result[2] = 8.0;
                                    } else {
                                        result[2] = 7.4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 112.0) {
                                if (input[4] <= 20.304500579833984) {
                                    if (input[3] <= 72.0) {
                                        result[2] = 7.555555555555555;
                                    } else {
                                        result[2] = 5.857142857142857;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 21.31149959564209) {
                                            result[2] = 5.9;
                                        } else {
                                            result[2] = 6.75;
                                        }
                                    } else {
                                        result[2] = 5.3;
                                    }
                                }
                            } else {
                                if (input[4] <= 20.65750026702881) {
                                    result[2] = 6.1;
                                } else {
                                    if (input[4] <= 20.963500022888184) {
                                        result[2] = 7.285714285714286;
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[2] = 7.0;
                                        } else {
                                            result[2] = 6.5;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                if (input[3] <= 112.0) {
                                    if (input[4] <= 20.313499450683594) {
                                        result[2] = 6.75;
                                    } else {
                                        result[2] = 7.0;
                                    }
                                } else {
                                    if (input[4] <= 20.83750057220459) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[2] = 7.0;
                                        } else {
                                            result[2] = 7.090909090909091;
                                        }
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[2] = 7.133333333333334;
                                        } else {
                                            result[2] = 8.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 88.0) {
                                        result[2] = 6.0;
                                    } else {
                                        result[2] = 6.166666666666667;
                                    }
                                } else {
                                    if (input[3] <= 88.0) {
                                        result[2] = 7.3;
                                    } else {
                                        if (input[4] <= 20.861000061035156) {
                                            result[2] = 6.428571428571429;
                                        } else {
                                            result[2] = 7.0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 29.689499855041504) {
                if (input[3] <= 56.0) {
                    if (input[4] <= 25.20650005340576) {
                        if (input[2] <= 60.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 25.07450008392334) {
                                            result[2] = 5.011152416356877;
                                        } else {
                                            result[2] = 5.333333333333333;
                                        }
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[2] = 5.1066666666666665;
                                        } else {
                                            result[2] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.8174991607666) {
                                        if (input[3] <= 24.0) {
                                            result[2] = 5.0;
                                        } else {
                                            result[2] = 5.830508474576271;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[2] = 5.944444444444445;
                                        } else {
                                            result[2] = 6.761904761904762;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 21.73050022125244) {
                                    result[2] = 7.0;
                                } else {
                                    if (input[4] <= 22.7814998626709) {
                                        if (input[3] <= 12.0) {
                                            result[2] = 6.333333333333333;
                                        } else {
                                            result[2] = 5.3478260869565215;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[2] = 5.903614457831325;
                                        } else {
                                            result[2] = 6.538461538461538;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 22.368000030517578) {
                                if (input[3] <= 12.0) {
                                    result[2] = 5.0;
                                } else {
                                    if (input[4] <= 21.657499313354492) {
                                        result[2] = 5.5;
                                    } else {
                                        result[2] = 6.0;
                                    }
                                }
                            } else {
                                if (input[3] <= 24.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[2] = 6.0;
                                    } else {
                                        result[2] = 7.333333333333333;
                                    }
                                } else {
                                    if (input[4] <= 24.23099994659424) {
                                        if (input[4] <= 22.540499687194824) {
                                            result[2] = 6.75;
                                        } else {
                                            result[2] = 7.078947368421052;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[2] = 7.090909090909091;
                                        } else {
                                            result[2] = 8.0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 25.893500328063965) {
                                    if (input[3] <= 24.0) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 5.0;
                                        } else {
                                            result[2] = 5.833333333333333;
                                        }
                                    } else {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[2] = 6.0;
                                        } else {
                                            result[2] = 5.142857142857143;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 12.0) {
                                        if (input[4] <= 27.48099994659424) {
                                            result[2] = 5.545454545454546;
                                        } else {
                                            result[2] = 6.041322314049586;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 6.125541125541125;
                                        } else {
                                            result[2] = 7.193548387096774;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 28.749499320983887) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 6.144927536231884;
                                        } else {
                                            result[2] = 7.083333333333333;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[2] = 7.0;
                                        } else {
                                            result[2] = 6.75;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.172999382019043) {
                                        if (input[4] <= 25.73200035095215) {
                                            result[2] = 7.222222222222222;
                                        } else {
                                            result[2] = 6.909090909090909;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 7.7560975609756095;
                                        } else {
                                            result[2] = 6.75;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 12.0) {
                                if (input[4] <= 28.042999267578125) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 27.866000175476074) {
                                            result[2] = 6.0;
                                        } else {
                                            result[2] = 6.666666666666667;
                                        }
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[2] = 8.0;
                                        } else {
                                            result[2] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 29.199999809265137) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[2] = 7.0;
                                        } else {
                                            result[2] = 6.5625;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 8.0;
                                        } else {
                                            result[2] = 7.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 27.03250026702881) {
                                    if (input[2] <= 60.0) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[2] = 7.290322580645161;
                                        } else {
                                            result[2] = 6.613333333333333;
                                        }
                                    } else {
                                        if (input[3] <= 24.0) {
                                            result[2] = 7.0;
                                        } else {
                                            result[2] = 7.681818181818182;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[2] = 7.714285714285714;
                                        } else {
                                            result[2] = 7.258064516129032;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[2] = 7.0;
                                        } else {
                                            result[2] = 6.444444444444445;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 22.67549991607666) {
                        if (input[2] <= 28.0) {
                            if (input[3] <= 112.0) {
                                if (input[4] <= 22.369500160217285) {
                                    if (input[2] <= 12.0) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[2] = 5.714285714285714;
                                        } else {
                                            result[2] = 5.068965517241379;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[2] = 6.4;
                                        } else {
                                            result[2] = 5.310344827586207;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 88.0) {
                                        if (input[1] <= 0.75) {
                                            result[2] = 6.0;
                                        } else {
                                            result[2] = 5.555555555555555;
                                        }
                                    } else {
                                        result[2] = 7.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    result[2] = 7.625;
                                } else {
                                    if (input[2] <= 20.0) {
                                        result[2] = 6.8;
                                    } else {
                                        result[2] = 7.0;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 112.0) {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 44.0) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 5.45;
                                        } else {
                                            result[2] = 7.2;
                                        }
                                    } else {
                                        if (input[4] <= 22.074000358581543) {
                                            result[2] = 7.157894736842105;
                                        } else {
                                            result[2] = 6.8076923076923075;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 60.0) {
                                            result[2] = 7.0;
                                        } else {
                                            result[2] = 7.166666666666667;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[2] = 6.8;
                                        } else {
                                            result[2] = 6.4;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.30000000447034836) {
                                    result[2] = 8.0;
                                } else {
                                    if (input[2] <= 52.0) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[2] = 7.352941176470588;
                                        } else {
                                            result[2] = 7.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[2] = 8.0;
                                        } else {
                                            result[2] = 7.315789473684211;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            if (input[4] <= 27.37399959564209) {
                                if (input[3] <= 88.0) {
                                    if (input[4] <= 24.223999977111816) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 5.904109589041096;
                                        } else {
                                            result[2] = 6.833333333333333;
                                        }
                                    } else {
                                        if (input[2] <= 12.0) {
                                            result[2] = 6.51063829787234;
                                        } else {
                                            result[2] = 6.9576271186440675;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 12.0) {
                                        if (input[3] <= 112.0) {
                                            result[2] = 6.372093023255814;
                                        } else {
                                            result[2] = 7.416666666666667;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 7.647058823529412;
                                        } else {
                                            result[2] = 6.95;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 29.214499473571777) {
                                    if (input[4] <= 27.65850067138672) {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[2] = 7.739130434782608;
                                        } else {
                                            result[2] = 7.0588235294117645;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[2] = 7.86734693877551;
                                        } else {
                                            result[2] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 29.41950035095215) {
                                        result[2] = 7.0;
                                    } else {
                                        result[2] = 7.333333333333333;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 72.0) {
                                        if (input[4] <= 25.828999519348145) {
                                            result[2] = 6.634146341463414;
                                        } else {
                                            result[2] = 7.5;
                                        }
                                    } else {
                                        if (input[4] <= 23.58099937438965) {
                                            result[2] = 7.3088235294117645;
                                        } else {
                                            result[2] = 7.882978723404255;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[4] <= 23.109000205993652) {
                                            result[2] = 7.809523809523809;
                                        } else {
                                            result[2] = 8.0;
                                        }
                                    } else {
                                        if (input[4] <= 23.91950035095215) {
                                            result[2] = 7.2835820895522385;
                                        } else {
                                            result[2] = 8.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.75) {
                                    if (input[1] <= 0.550000011920929) {
                                        if (input[2] <= 36.0) {
                                            result[2] = 7.666666666666667;
                                        } else {
                                            result[2] = 7.222222222222222;
                                        }
                                    } else {
                                        if (input[4] <= 24.0314998626709) {
                                            result[2] = 6.9;
                                        } else {
                                            result[2] = 7.157894736842105;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 24.44349956512451) {
                                        if (input[3] <= 88.0) {
                                            result[2] = 6.066666666666666;
                                        } else {
                                            result[2] = 6.571428571428571;
                                        }
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[2] = 6.4;
                                        } else {
                                            result[2] = 7.0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 0.8950000107288361) {
                    if (input[4] <= 33.38100051879883) {
                        if (input[2] <= 36.0) {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 30.62150001525879) {
                                    result[2] = 6.2;
                                } else {
                                    if (input[4] <= 33.053001403808594) {
                                        if (input[2] <= 28.0) {
                                            result[2] = 7.0;
                                        } else {
                                            result[2] = 7.159090909090909;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[2] = 7.823529411764706;
                                        } else {
                                            result[2] = 7.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 32.4275016784668) {
                                    if (input[3] <= 56.0) {
                                        if (input[2] <= 12.0) {
                                            result[2] = 7.064516129032258;
                                        } else {
                                            result[2] = 7.493055555555555;
                                        }
                                    } else {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[2] = 7.966666666666667;
                                        } else {
                                            result[2] = 7.571428571428571;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 12.0) {
                                        if (input[3] <= 40.0) {
                                            result[2] = 7.555555555555555;
                                        } else {
                                            result[2] = 8.0;
                                        }
                                    } else {
                                        result[2] = 8.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 31.78950023651123) {
                                if (input[4] <= 30.834500312805176) {
                                    if (input[2] <= 60.0) {
                                        if (input[4] <= 30.496000289916992) {
                                            result[2] = 7.589041095890411;
                                        } else {
                                            result[2] = 7.838709677419355;
                                        }
                                    } else {
                                        result[2] = 8.0;
                                    }
                                } else {
                                    if (input[4] <= 31.383000373840332) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[2] = 7.5;
                                        } else {
                                            result[2] = 7.083333333333333;
                                        }
                                    } else {
                                        if (input[3] <= 12.0) {
                                            result[2] = 7.357142857142857;
                                        } else {
                                            result[2] = 7.9375;
                                        }
                                    }
                                }
                            } else {
                                result[2] = 8.0;
                            }
                        }
                    } else {
                        if (input[1] <= 0.8499999940395355) {
                            if (input[4] <= 33.423500061035156) {
                                result[2] = 7.818181818181818;
                            } else {
                                result[2] = 8.0;
                            }
                        } else {
                            if (input[4] <= 34.42900085449219) {
                                if (input[3] <= 12.0) {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[2] = 8.0;
                                    } else {
                                        result[2] = 7.0;
                                    }
                                } else {
                                    if (input[4] <= 33.63450050354004) {
                                        result[2] = 7.8;
                                    } else {
                                        result[2] = 8.0;
                                    }
                                }
                            } else {
                                result[2] = 8.0;
                            }
                        }
                    }
                } else {
                    if (input[3] <= 12.0) {
                        if (input[2] <= 20.0) {
                            if (input[4] <= 31.593000411987305) {
                                result[2] = 7.714285714285714;
                            } else {
                                result[2] = 6.333333333333333;
                            }
                        } else {
                            if (input[4] <= 32.70750045776367) {
                                if (input[1] <= 0.6500000059604645) {
                                    result[2] = 6.0;
                                } else {
                                    if (input[4] <= 31.78350067138672) {
                                        result[2] = 6.153846153846154;
                                    } else {
                                        result[2] = 6.375;
                                    }
                                }
                            } else {
                                result[2] = 7.0;
                            }
                        }
                    } else {
                        if (input[4] <= 31.431499481201172) {
                            if (input[4] <= 30.54800033569336) {
                                if (input[4] <= 30.21799945831299) {
                                    result[2] = 6.833333333333333;
                                } else {
                                    result[2] = 7.666666666666667;
                                }
                            } else {
                                if (input[1] <= 0.9249999821186066) {
                                    result[2] = 6.857142857142857;
                                } else {
                                    result[2] = 6.428571428571429;
                                }
                            }
                        } else {
                            if (input[4] <= 32.1564998626709) {
                                if (input[3] <= 24.0) {
                                    result[2] = 7.428571428571429;
                                } else {
                                    result[2] = 7.333333333333333;
                                }
                            } else {
                                if (input[1] <= 0.9249999821186066) {
                                    result[2] = 7.0;
                                } else {
                                    result[2] = 6.8;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (input[4] <= 17.679500579833984) {
        if (input[4] <= 12.299499988555908) {
            if (input[4] <= 9.818999767303467) {
                if (input[4] <= 9.371500015258789) {
                    if (input[4] <= 9.343500137329102) {
                        result[3] = 2.0;
                    } else {
                        if (input[2] <= 36.0) {
                            result[3] = 2.0;
                        } else {
                            result[3] = 2.2;
                        }
                    }
                } else {
                    if (input[3] <= 112.0) {
                        if (input[3] <= 56.0) {
                            result[3] = 2.0;
                        } else {
                            if (input[2] <= 52.0) {
                                if (input[4] <= 9.46150016784668) {
                                    result[3] = 2.230769230769231;
                                } else {
                                    result[3] = 2.0;
                                }
                            } else {
                                result[3] = 2.75;
                            }
                        }
                    } else {
                        if (input[0] <= 0.7950000166893005) {
                            result[3] = 3.0;
                        } else {
                            result[3] = 2.0;
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[2] <= 44.0) {
                            if (input[4] <= 12.085999965667725) {
                                result[3] = 2.0;
                            } else {
                                if (input[4] <= 12.125) {
                                    result[3] = 2.4285714285714284;
                                } else {
                                    result[3] = 2.0;
                                }
                            }
                        } else {
                            if (input[4] <= 11.031499862670898) {
                                result[3] = 2.0;
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[3] = 3.0;
                                } else {
                                    result[3] = 2.0;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 24.0) {
                                result[3] = 2.8;
                            } else {
                                result[3] = 3.0;
                            }
                        } else {
                            result[3] = 2.0;
                        }
                    }
                } else {
                    if (input[4] <= 11.863500118255615) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 112.0) {
                                    result[3] = 2.0;
                                } else {
                                    result[3] = 3.0;
                                }
                            } else {
                                if (input[4] <= 9.912000179290771) {
                                    if (input[3] <= 88.0) {
                                        result[3] = 2.6;
                                    } else {
                                        result[3] = 3.0;
                                    }
                                } else {
                                    if (input[3] <= 112.0) {
                                        if (input[4] <= 10.104000091552734) {
                                            result[3] = 2.9523809523809526;
                                        } else {
                                            result[3] = 3.0;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[3] = 3.0;
                                        } else {
                                            result[3] = 3.5555555555555554;
                                        }
                                    }
                                }
                            }
                        } else {
                            result[3] = 2.0;
                        }
                    } else {
                        if (input[3] <= 112.0) {
                            result[3] = 3.0;
                        } else {
                            if (input[4] <= 12.058500289916992) {
                                result[3] = 4.6;
                            } else {
                                if (input[4] <= 12.173499584197998) {
                                    result[3] = 4.0;
                                } else {
                                    result[3] = 3.4285714285714284;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[3] <= 56.0) {
                if (input[4] <= 16.1535005569458) {
                    if (input[2] <= 60.0) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 44.0) {
                                if (input[4] <= 15.980000019073486) {
                                    if (input[3] <= 40.0) {
                                        result[3] = 3.0;
                                    } else {
                                        if (input[4] <= 15.36050033569336) {
                                            result[3] = 3.0;
                                        } else {
                                            result[3] = 3.15;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        result[3] = 3.0;
                                    } else {
                                        result[3] = 3.8333333333333335;
                                    }
                                }
                            } else {
                                if (input[4] <= 15.086999893188477) {
                                    if (input[4] <= 14.619500160217285) {
                                        result[3] = 3.0;
                                    } else {
                                        if (input[3] <= 32.0) {
                                            result[3] = 3.0;
                                        } else {
                                            result[3] = 3.4444444444444446;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[3] = 4.0;
                                        } else {
                                            result[3] = 3.8333333333333335;
                                        }
                                    } else {
                                        result[3] = 3.3333333333333335;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 13.348999977111816) {
                                result[3] = 2.0;
                            } else {
                                result[3] = 3.0;
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[4] <= 15.828499794006348) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[3] = 3.0;
                                } else {
                                    result[3] = 3.2857142857142856;
                                }
                            } else {
                                result[3] = 3.8;
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                result[3] = 4.0;
                            } else {
                                if (input[4] <= 14.800000190734863) {
                                    result[3] = 3.090909090909091;
                                } else {
                                    result[3] = 3.6666666666666665;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[4] <= 17.343000411987305) {
                            result[3] = 3.0;
                        } else {
                            if (input[4] <= 17.45900058746338) {
                                result[3] = 3.8;
                            } else {
                                result[3] = 3.2222222222222223;
                            }
                        }
                    } else {
                        if (input[2] <= 60.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[1] <= 0.9249999821186066) {
                                    if (input[4] <= 17.5939998626709) {
                                        if (input[3] <= 12.0) {
                                            result[3] = 3.909090909090909;
                                        } else {
                                            result[3] = 4.012987012987013;
                                        }
                                    } else {
                                        result[3] = 4.25;
                                    }
                                } else {
                                    if (input[4] <= 16.68899917602539) {
                                        result[3] = 6.0;
                                    } else {
                                        result[3] = 4.0;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[3] <= 24.0) {
                                        result[3] = 3.0;
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[3] = 3.4;
                                        } else {
                                            result[3] = 3.8333333333333335;
                                        }
                                    }
                                } else {
                                    result[3] = 3.0;
                                }
                            }
                        } else {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 17.319499969482422) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[3] = 4.0;
                                    } else {
                                        result[3] = 3.8;
                                    }
                                } else {
                                    result[3] = 4.333333333333333;
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[3] = 5.0;
                                } else {
                                    result[3] = 6.0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 15.113999843597412) {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[2] <= 28.0) {
                            if (input[3] <= 88.0) {
                                if (input[4] <= 14.680500030517578) {
                                    if (input[4] <= 14.311999797821045) {
                                        result[3] = 3.0;
                                    } else {
                                        if (input[4] <= 14.476500034332275) {
                                            result[3] = 3.25;
                                        } else {
                                            result[3] = 3.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 12.0) {
                                        result[3] = 3.0;
                                    } else {
                                        result[3] = 4.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        result[3] = 3.0;
                                    } else {
                                        result[3] = 4.0;
                                    }
                                } else {
                                    result[3] = 4.0;
                                }
                            }
                        } else {
                            if (input[4] <= 14.77299976348877) {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 44.0) {
                                        if (input[2] <= 36.0) {
                                            result[3] = 4.0;
                                        } else {
                                            result[3] = 3.0;
                                        }
                                    } else {
                                        result[3] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 14.275499820709229) {
                                        result[3] = 4.0;
                                    } else {
                                        if (input[4] <= 14.367000102996826) {
                                            result[3] = 5.25;
                                        } else {
                                            result[3] = 4.043478260869565;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 56.0) {
                                    result[3] = 4.0;
                                } else {
                                    result[3] = 5.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 14.218499660491943) {
                            if (input[4] <= 13.916500091552734) {
                                if (input[2] <= 52.0) {
                                    result[3] = 3.0;
                                } else {
                                    if (input[4] <= 13.334499835968018) {
                                        result[3] = 3.0;
                                    } else {
                                        if (input[4] <= 13.74399995803833) {
                                            result[3] = 3.4444444444444446;
                                        } else {
                                            result[3] = 3.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 88.0) {
                                    if (input[4] <= 14.123499870300293) {
                                        result[3] = 3.0;
                                    } else {
                                        result[3] = 3.2;
                                    }
                                } else {
                                    if (input[4] <= 14.04699993133545) {
                                        result[3] = 3.888888888888889;
                                    } else {
                                        result[3] = 3.2857142857142856;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 52.0) {
                                if (input[4] <= 14.967000007629395) {
                                    if (input[2] <= 28.0) {
                                        if (input[4] <= 14.626500129699707) {
                                            result[3] = 3.0;
                                        } else {
                                            result[3] = 3.4444444444444446;
                                        }
                                    } else {
                                        result[3] = 3.8181818181818183;
                                    }
                                } else {
                                    result[3] = 3.0;
                                }
                            } else {
                                if (input[4] <= 14.769999980926514) {
                                    result[3] = 5.0;
                                } else {
                                    result[3] = 4.0;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 16.12049961090088) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[3] = 4.0;
                                } else {
                                    if (input[4] <= 15.637499809265137) {
                                        result[3] = 3.2857142857142856;
                                    } else {
                                        result[3] = 3.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 17.41349983215332) {
                                    if (input[4] <= 17.064000129699707) {
                                        if (input[4] <= 16.871000289916992) {
                                            result[3] = 4.016129032258065;
                                        } else {
                                            result[3] = 4.375;
                                        }
                                    } else {
                                        if (input[4] <= 17.211999893188477) {
                                            result[3] = 3.6;
                                        } else {
                                            result[3] = 3.5;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 17.613500595092773) {
                                        result[3] = 4.6;
                                    } else {
                                        result[3] = 4.2;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 112.0) {
                                    if (input[4] <= 16.76200008392334) {
                                        result[3] = 3.4;
                                    } else {
                                        result[3] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 16.9064998626709) {
                                        result[3] = 4.75;
                                    } else {
                                        result[3] = 5.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 15.706500053405762) {
                                    result[3] = 4.0;
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[3] = 5.0;
                                    } else {
                                        result[3] = 5.7;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 16.98799991607666) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 15.196000099182129) {
                                    result[3] = 4.7272727272727275;
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[3] = 5.0;
                                    } else {
                                        if (input[4] <= 16.028500080108643) {
                                            result[3] = 4.6;
                                        } else {
                                            result[3] = 5.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[3] <= 72.0) {
                                        if (input[4] <= 16.634499549865723) {
                                            result[3] = 3.5454545454545454;
                                        } else {
                                            result[3] = 3.75;
                                        }
                                    } else {
                                        if (input[4] <= 16.027000427246094) {
                                            result[3] = 4.0;
                                        } else {
                                            result[3] = 4.444444444444445;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 16.4685001373291) {
                                        if (input[4] <= 16.057000160217285) {
                                            result[3] = 4.8;
                                        } else {
                                            result[3] = 4.8;
                                        }
                                    } else {
                                        result[3] = 6.333333333333333;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[0] <= 0.10000000149011612) {
                                    result[3] = 4.428571428571429;
                                } else {
                                    if (input[3] <= 112.0) {
                                        result[3] = 5.0;
                                    } else {
                                        if (input[4] <= 17.3125) {
                                            result[3] = 5.0;
                                        } else {
                                            result[3] = 5.333333333333333;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    result[3] = 4.5;
                                } else {
                                    if (input[2] <= 52.0) {
                                        if (input[4] <= 17.44600009918213) {
                                            result[3] = 6.777777777777778;
                                        } else {
                                            result[3] = 8.0;
                                        }
                                    } else {
                                        if (input[4] <= 17.160999298095703) {
                                            result[3] = 6.111111111111111;
                                        } else {
                                            result[3] = 5.0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 21.53250026702881) {
            if (input[3] <= 56.0) {
                if (input[2] <= 44.0) {
                    if (input[3] <= 40.0) {
                        if (input[4] <= 18.708499908447266) {
                            if (input[0] <= 0.7950000166893005) {
                                result[3] = 4.0;
                            } else {
                                if (input[3] <= 24.0) {
                                    if (input[2] <= 36.0) {
                                        result[3] = 3.0;
                                    } else {
                                        result[3] = 3.2;
                                    }
                                } else {
                                    result[3] = 3.8;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 20.987000465393066) {
                                    if (input[4] <= 20.809499740600586) {
                                        result[3] = 4.0;
                                    } else {
                                        if (input[3] <= 24.0) {
                                            result[3] = 4.0;
                                        } else {
                                            result[3] = 4.25;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        result[3] = 4.0;
                                    } else {
                                        result[3] = 5.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    if (input[4] <= 19.62299919128418) {
                                        if (input[3] <= 24.0) {
                                            result[3] = 3.227272727272727;
                                        } else {
                                            result[3] = 5.1;
                                        }
                                    } else {
                                        if (input[3] <= 12.0) {
                                            result[3] = 5.222222222222222;
                                        } else {
                                            result[3] = 4.314285714285714;
                                        }
                                    }
                                } else {
                                    result[3] = 6.111111111111111;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 28.0) {
                                if (input[4] <= 20.59249973297119) {
                                    if (input[1] <= 0.550000011920929) {
                                        result[3] = 4.166666666666667;
                                    } else {
                                        result[3] = 4.0;
                                    }
                                } else {
                                    result[3] = 5.0;
                                }
                            } else {
                                result[3] = 5.0;
                            }
                        } else {
                            if (input[4] <= 18.630499839782715) {
                                result[3] = 3.625;
                            } else {
                                if (input[1] <= 0.75) {
                                    if (input[2] <= 36.0) {
                                        if (input[4] <= 19.82450008392334) {
                                            result[3] = 4.857142857142857;
                                        } else {
                                            result[3] = 6.4;
                                        }
                                    } else {
                                        result[3] = 7.0;
                                    }
                                } else {
                                    result[3] = 5.083333333333333;
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 19.66249942779541) {
                        if (input[3] <= 24.0) {
                            if (input[2] <= 60.0) {
                                if (input[1] <= 0.9249999821186066) {
                                    result[3] = 4.0;
                                } else {
                                    if (input[0] <= 0.5000000149011612) {
                                        result[3] = 4.0;
                                    } else {
                                        result[3] = 3.8333333333333335;
                                    }
                                }
                            } else {
                                if (input[4] <= 18.652999877929688) {
                                    if (input[1] <= 0.75) {
                                        result[3] = 4.466666666666667;
                                    } else {
                                        result[3] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 19.19499969482422) {
                                        result[3] = 6.0;
                                    } else {
                                        result[3] = 4.714285714285714;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 17.80699920654297) {
                                result[3] = 6.25;
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 18.701000213623047) {
                                        if (input[2] <= 52.0) {
                                            result[3] = 4.68;
                                        } else {
                                            result[3] = 4.043478260869565;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[3] = 5.090909090909091;
                                        } else {
                                            result[3] = 4.857142857142857;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        result[3] = 5.0;
                                    } else {
                                        if (input[0] <= 0.5000000074505806) {
                                            result[3] = 6.0;
                                        } else {
                                            result[3] = 5.4;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[4] <= 20.16599941253662) {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[1] <= 0.75) {
                                        result[3] = 5.444444444444445;
                                    } else {
                                        result[3] = 4.857142857142857;
                                    }
                                } else {
                                    result[3] = 4.111111111111111;
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[3] = 5.0;
                                } else {
                                    result[3] = 6.0;
                                }
                            }
                        } else {
                            if (input[1] <= 0.75) {
                                if (input[2] <= 60.0) {
                                    if (input[1] <= 0.6500000059604645) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[3] = 5.387096774193548;
                                        } else {
                                            result[3] = 6.2;
                                        }
                                    } else {
                                        if (input[4] <= 20.27050018310547) {
                                            result[3] = 4.875;
                                        } else {
                                            result[3] = 5.375;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[3] = 6.0;
                                    } else {
                                        result[3] = 5.5;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 60.0) {
                                        result[3] = 5.555555555555555;
                                    } else {
                                        result[3] = 6.0;
                                    }
                                } else {
                                    result[3] = 7.4;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= 28.0) {
                    if (input[4] <= 18.95800018310547) {
                        if (input[3] <= 112.0) {
                            if (input[2] <= 12.0) {
                                if (input[4] <= 18.039999961853027) {
                                    result[3] = 3.7142857142857144;
                                } else {
                                    if (input[4] <= 18.149999618530273) {
                                        result[3] = 4.166666666666667;
                                    } else {
                                        result[3] = 4.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 18.61900043487549) {
                                    if (input[3] <= 88.0) {
                                        if (input[2] <= 20.0) {
                                            result[3] = 4.8;
                                        } else {
                                            result[3] = 4.0;
                                        }
                                    } else {
                                        if (input[4] <= 18.01900005340576) {
                                            result[3] = 5.2727272727272725;
                                        } else {
                                            result[3] = 4.9;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[3] = 5.0;
                                        } else {
                                            result[3] = 4.5;
                                        }
                                    } else {
                                        result[3] = 5.8;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                result[3] = 6.0;
                            } else {
                                result[3] = 5.0;
                            }
                        }
                    } else {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 19.611000061035156) {
                                if (input[4] <= 19.104999542236328) {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[3] = 5.0;
                                    } else {
                                        result[3] = 4.25;
                                    }
                                } else {
                                    if (input[1] <= 0.7999999821186066) {
                                        result[3] = 5.0;
                                    } else {
                                        result[3] = 4.833333333333333;
                                    }
                                }
                            } else {
                                if (input[4] <= 19.699999809265137) {
                                    result[3] = 6.666666666666667;
                                } else {
                                    if (input[4] <= 20.451000213623047) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[3] = 5.444444444444445;
                                        } else {
                                            result[3] = 5.0;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[3] = 5.962962962962963;
                                        } else {
                                            result[3] = 5.388888888888889;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 112.0) {
                                    if (input[1] <= 0.6500000059604645) {
                                        result[3] = 5.5;
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[3] = 5.0;
                                        } else {
                                            result[3] = 4.8;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 20.090500831604004) {
                                        result[3] = 5.777777777777778;
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[3] = 6.714285714285714;
                                        } else {
                                            result[3] = 6.142857142857143;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 21.333499908447266) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[3] = 6.2;
                                        } else {
                                            result[3] = 5.980769230769231;
                                        }
                                    } else {
                                        result[3] = 6.6;
                                    }
                                } else {
                                    if (input[4] <= 19.420499801635742) {
                                        result[3] = 7.333333333333333;
                                    } else {
                                        if (input[4] <= 19.90549945831299) {
                                            result[3] = 5.7;
                                        } else {
                                            result[3] = 6.8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 18.795499801635742) {
                        if (input[3] <= 72.0) {
                            if (input[2] <= 44.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 36.0) {
                                        result[3] = 5.0;
                                    } else {
                                        result[3] = 4.0;
                                    }
                                } else {
                                    result[3] = 6.0;
                                }
                            } else {
                                if (input[0] <= 0.6000000089406967) {
                                    result[3] = 6.0;
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[3] = 5.142857142857143;
                                    } else {
                                        result[3] = 4.888888888888889;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[0] <= 0.7000000178813934) {
                                    result[3] = 6.0;
                                } else {
                                    if (input[4] <= 17.986499786376953) {
                                        result[3] = 5.0;
                                    } else {
                                        result[3] = 5.6;
                                    }
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    result[3] = 4.857142857142857;
                                } else {
                                    if (input[2] <= 44.0) {
                                        result[3] = 7.363636363636363;
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[3] = 6.0;
                                        } else {
                                            result[3] = 7.142857142857143;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 112.0) {
                                if (input[1] <= 0.75) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[3] <= 72.0) {
                                            result[3] = 5.666666666666667;
                                        } else {
                                            result[3] = 6.048780487804878;
                                        }
                                    } else {
                                        if (input[4] <= 19.932000160217285) {
                                            result[3] = 5.0;
                                        } else {
                                            result[3] = 5.8;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[3] <= 72.0) {
                                            result[3] = 5.857142857142857;
                                        } else {
                                            result[3] = 6.0;
                                        }
                                    } else {
                                        if (input[2] <= 36.0) {
                                            result[3] = 7.3;
                                        } else {
                                            result[3] = 6.090909090909091;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 20.63099956512451) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[3] = 6.0;
                                    } else {
                                        result[3] = 6.6;
                                    }
                                } else {
                                    if (input[4] <= 20.963500022888184) {
                                        result[3] = 7.5;
                                    } else {
                                        if (input[2] <= 36.0) {
                                            result[3] = 7.0;
                                        } else {
                                            result[3] = 6.75;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 20.284499168395996) {
                                    if (input[4] <= 20.140999794006348) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[3] = 6.090909090909091;
                                        } else {
                                            result[3] = 6.0;
                                        }
                                    } else {
                                        result[3] = 6.285714285714286;
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[1] <= 0.550000011920929) {
                                            result[3] = 7.133333333333334;
                                        } else {
                                            result[3] = 7.0;
                                        }
                                    } else {
                                        if (input[4] <= 20.682499885559082) {
                                            result[3] = 6.0;
                                        } else {
                                            result[3] = 7.2;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 20.223999977111816) {
                                    if (input[1] <= 0.6500000059604645) {
                                        result[3] = 7.0;
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[3] = 7.666666666666667;
                                        } else {
                                            result[3] = 7.863636363636363;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 20.566999435424805) {
                                        result[3] = 5.888888888888889;
                                    } else {
                                        if (input[4] <= 20.72350025177002) {
                                            result[3] = 7.4;
                                        } else {
                                            result[3] = 6.571428571428571;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 25.821999549865723) {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 25.31350040435791) {
                            if (input[2] <= 44.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 22.0600004196167) {
                                            result[3] = 4.8;
                                        } else {
                                            result[3] = 5.013651877133106;
                                        }
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[3] = 5.035087719298246;
                                        } else {
                                            result[3] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.164000511169434) {
                                        if (input[4] <= 21.833999633789062) {
                                            result[3] = 4.5;
                                        } else {
                                            result[3] = 5.32;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[3] = 5.962962962962963;
                                        } else {
                                            result[3] = 7.181818181818182;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 22.863500595092773) {
                                    if (input[3] <= 24.0) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[3] = 5.0;
                                        } else {
                                            result[3] = 5.25;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[3] = 5.925;
                                        } else {
                                            result[3] = 5.214285714285714;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 24.0) {
                                        if (input[2] <= 52.0) {
                                            result[3] = 5.5;
                                        } else {
                                            result[3] = 5.9411764705882355;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[3] = 6.653846153846154;
                                        } else {
                                            result[3] = 6.090909090909091;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.9249999821186066) {
                                if (input[3] <= 24.0) {
                                    if (input[3] <= 12.0) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[3] = 5.8;
                                        } else {
                                            result[3] = 6.875;
                                        }
                                    } else {
                                        if (input[4] <= 25.583999633789062) {
                                            result[3] = 5.142857142857143;
                                        } else {
                                            result[3] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[2] <= 36.0) {
                                            result[3] = 6.2105263157894735;
                                        } else {
                                            result[3] = 7.033333333333333;
                                        }
                                    } else {
                                        result[3] = 7.4;
                                    }
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    if (input[3] <= 24.0) {
                                        result[3] = 5.0;
                                    } else {
                                        result[3] = 5.5;
                                    }
                                } else {
                                    result[3] = 6.2;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[4] <= 22.395000457763672) {
                                if (input[3] <= 12.0) {
                                    result[3] = 5.0;
                                } else {
                                    result[3] = 6.0;
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[3] <= 12.0) {
                                            result[3] = 6.0;
                                        } else {
                                            result[3] = 6.416666666666667;
                                        }
                                    } else {
                                        result[3] = 7.076923076923077;
                                    }
                                } else {
                                    if (input[3] <= 12.0) {
                                        result[3] = 5.333333333333333;
                                    } else {
                                        if (input[4] <= 23.17650032043457) {
                                            result[3] = 5.9;
                                        } else {
                                            result[3] = 6.6;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 22.469499588012695) {
                                if (input[3] <= 40.0) {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[3] = 6.0;
                                    } else {
                                        result[3] = 5.833333333333333;
                                    }
                                } else {
                                    result[3] = 7.25;
                                }
                            } else {
                                if (input[4] <= 25.17449951171875) {
                                    if (input[3] <= 40.0) {
                                        result[3] = 7.0;
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[3] = 7.666666666666667;
                                        } else {
                                            result[3] = 6.9;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.7999999821186066) {
                                        result[3] = 8.0;
                                    } else {
                                        result[3] = 7.8;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 44.0) {
                        if (input[3] <= 72.0) {
                            if (input[4] <= 23.368999481201172) {
                                if (input[2] <= 36.0) {
                                    if (input[2] <= 12.0) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[3] = 5.0;
                                        } else {
                                            result[3] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 21.726499557495117) {
                                            result[3] = 5.555555555555555;
                                        } else {
                                            result[3] = 6.153846153846154;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.7999999821186066) {
                                        result[3] = 5.0;
                                    } else {
                                        result[3] = 5.222222222222222;
                                    }
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    if (input[2] <= 28.0) {
                                        if (input[2] <= 12.0) {
                                            result[3] = 7.25;
                                        } else {
                                            result[3] = 6.2272727272727275;
                                        }
                                    } else {
                                        if (input[4] <= 24.54800033569336) {
                                            result[3] = 7.090909090909091;
                                        } else {
                                            result[3] = 6.75;
                                        }
                                    }
                                } else {
                                    result[3] = 6.0;
                                }
                            }
                        } else {
                            if (input[4] <= 22.475500106811523) {
                                if (input[2] <= 28.0) {
                                    if (input[3] <= 112.0) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[3] = 6.571428571428571;
                                        } else {
                                            result[3] = 5.386363636363637;
                                        }
                                    } else {
                                        if (input[2] <= 12.0) {
                                            result[3] = 7.3;
                                        } else {
                                            result[3] = 6.923076923076923;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.550000011920929) {
                                        if (input[4] <= 22.154000282287598) {
                                            result[3] = 7.0;
                                        } else {
                                            result[3] = 7.666666666666667;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[3] = 7.037037037037037;
                                        } else {
                                            result[3] = 6.857142857142857;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 112.0) {
                                        if (input[2] <= 12.0) {
                                            result[3] = 6.033333333333333;
                                        } else {
                                            result[3] = 7.276752767527675;
                                        }
                                    } else {
                                        if (input[4] <= 23.491999626159668) {
                                            result[3] = 7.5;
                                        } else {
                                            result[3] = 7.857142857142857;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.550000011920929) {
                                        if (input[4] <= 24.023000717163086) {
                                            result[3] = 7.0;
                                        } else {
                                            result[3] = 7.833333333333333;
                                        }
                                    } else {
                                        if (input[4] <= 23.186999320983887) {
                                            result[3] = 7.0;
                                        } else {
                                            result[3] = 6.508196721311475;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[4] <= 22.708499908447266) {
                                if (input[3] <= 112.0) {
                                    if (input[0] <= 0.10000000149011612) {
                                        if (input[4] <= 22.10200023651123) {
                                            result[3] = 7.0;
                                        } else {
                                            result[3] = 8.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.550000011920929) {
                                            result[3] = 7.166666666666667;
                                        } else {
                                            result[3] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[3] = 8.0;
                                    } else {
                                        if (input[4] <= 21.869500160217285) {
                                            result[3] = 7.5;
                                        } else {
                                            result[3] = 7.5;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    if (input[4] <= 23.104000091552734) {
                                        if (input[3] <= 72.0) {
                                            result[3] = 7.5;
                                        } else {
                                            result[3] = 8.0;
                                        }
                                    } else {
                                        result[3] = 8.0;
                                    }
                                } else {
                                    if (input[4] <= 23.617499351501465) {
                                        if (input[3] <= 112.0) {
                                            result[3] = 7.055555555555555;
                                        } else {
                                            result[3] = 7.714285714285714;
                                        }
                                    } else {
                                        if (input[4] <= 24.134000778198242) {
                                            result[3] = 7.75;
                                        } else {
                                            result[3] = 8.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 23.359500885009766) {
                                if (input[4] <= 21.92899990081787) {
                                    result[3] = 7.5;
                                } else {
                                    if (input[3] <= 112.0) {
                                        if (input[1] <= 0.550000011920929) {
                                            result[3] = 6.666666666666667;
                                        } else {
                                            result[3] = 5.846153846153846;
                                        }
                                    } else {
                                        if (input[4] <= 22.512499809265137) {
                                            result[3] = 6.571428571428571;
                                        } else {
                                            result[3] = 7.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.6500000059604645) {
                                    result[3] = 7.461538461538462;
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[3] = 7.0;
                                    } else {
                                        result[3] = 6.833333333333333;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 29.742499351501465) {
                    if (input[3] <= 24.0) {
                        if (input[2] <= 52.0) {
                            if (input[4] <= 26.11299991607666) {
                                result[3] = 7.6;
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[4] <= 26.25649929046631) {
                                        result[3] = 5.0;
                                    } else {
                                        if (input[4] <= 26.520499229431152) {
                                            result[3] = 7.2;
                                        } else {
                                            result[3] = 5.96;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.868499755859375) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[3] = 6.0;
                                        } else {
                                            result[3] = 5.0;
                                        }
                                    } else {
                                        if (input[4] <= 28.992000579833984) {
                                            result[3] = 6.928571428571429;
                                        } else {
                                            result[3] = 7.555555555555555;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 28.967000007629395) {
                                if (input[4] <= 27.241000175476074) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 60.0) {
                                            result[3] = 6.0;
                                        } else {
                                            result[3] = 7.0;
                                        }
                                    } else {
                                        result[3] = 7.5;
                                    }
                                } else {
                                    if (input[3] <= 12.0) {
                                        if (input[4] <= 28.042999267578125) {
                                            result[3] = 6.5;
                                        } else {
                                            result[3] = 7.024390243902439;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[3] = 8.0;
                                        } else {
                                            result[3] = 7.25;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 29.260499954223633) {
                                    if (input[4] <= 29.070000648498535) {
                                        result[3] = 8.0;
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[3] = 7.75;
                                        } else {
                                            result[3] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 60.0) {
                                        result[3] = 6.916666666666667;
                                    } else {
                                        result[3] = 8.0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 56.0) {
                                if (input[2] <= 28.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 28.800999641418457) {
                                            result[3] = 6.065040650406504;
                                        } else {
                                            result[3] = 6.875;
                                        }
                                    } else {
                                        if (input[4] <= 28.6225004196167) {
                                            result[3] = 7.5;
                                        } else {
                                            result[3] = 6.7272727272727275;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.395999908447266) {
                                        if (input[3] <= 40.0) {
                                            result[3] = 6.0;
                                        } else {
                                            result[3] = 7.090909090909091;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[3] = 7.536585365853658;
                                        } else {
                                            result[3] = 6.8125;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 27.71649932861328) {
                                    if (input[2] <= 12.0) {
                                        if (input[3] <= 72.0) {
                                            result[3] = 6.0;
                                        } else {
                                            result[3] = 7.06;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[3] = 7.43956043956044;
                                        } else {
                                            result[3] = 6.804878048780488;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 28.897500038146973) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[3] = 7.877551020408164;
                                        } else {
                                            result[3] = 7.25;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[3] = 7.0;
                                        } else {
                                            result[3] = 7.625;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 27.125) {
                                        if (input[3] <= 40.0) {
                                            result[3] = 7.0285714285714285;
                                        } else {
                                            result[3] = 7.729166666666667;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[3] = 7.822222222222222;
                                        } else {
                                            result[3] = 7.521739130434782;
                                        }
                                    }
                                } else {
                                    result[3] = 8.0;
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    result[3] = 6.888888888888889;
                                } else {
                                    if (input[4] <= 27.001500129699707) {
                                        result[3] = 6.7272727272727275;
                                    } else {
                                        result[3] = 6.333333333333333;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[4] <= 33.43549919128418) {
                            if (input[2] <= 36.0) {
                                if (input[3] <= 24.0) {
                                    if (input[4] <= 30.371000289916992) {
                                        result[3] = 6.0;
                                    } else {
                                        if (input[4] <= 32.77199935913086) {
                                            result[3] = 7.038461538461538;
                                        } else {
                                            result[3] = 7.406779661016949;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 32.45650100708008) {
                                        if (input[3] <= 40.0) {
                                            result[3] = 7.2405063291139244;
                                        } else {
                                            result[3] = 7.648648648648648;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[3] = 7.96969696969697;
                                        } else {
                                            result[3] = 7.428571428571429;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 31.630000114440918) {
                                    if (input[4] <= 30.02500057220459) {
                                        if (input[4] <= 29.94950008392334) {
                                            result[3] = 8.0;
                                        } else {
                                            result[3] = 7.857142857142857;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[3] = 7.358695652173913;
                                        } else {
                                            result[3] = 7.696969696969697;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[4] <= 31.709500312805176) {
                                            result[3] = 7.8;
                                        } else {
                                            result[3] = 8.0;
                                        }
                                    } else {
                                        result[3] = 7.5;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 33.78450012207031) {
                                if (input[0] <= 0.5000000149011612) {
                                    result[3] = 8.0;
                                } else {
                                    if (input[3] <= 12.0) {
                                        result[3] = 7.285714285714286;
                                    } else {
                                        result[3] = 8.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[4] <= 34.284000396728516) {
                                        if (input[3] <= 24.0) {
                                            result[3] = 7.4;
                                        } else {
                                            result[3] = 8.0;
                                        }
                                    } else {
                                        result[3] = 8.0;
                                    }
                                } else {
                                    result[3] = 8.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 30.920000076293945) {
                            if (input[4] <= 30.28250026702881) {
                                if (input[1] <= 0.75) {
                                    result[3] = 7.125;
                                } else {
                                    result[3] = 6.4;
                                }
                            } else {
                                result[3] = 7.375;
                            }
                        } else {
                            if (input[4] <= 31.965999603271484) {
                                if (input[2] <= 12.0) {
                                    result[3] = 7.0;
                                } else {
                                    if (input[2] <= 28.0) {
                                        result[3] = 6.416666666666667;
                                    } else {
                                        result[3] = 6.181818181818182;
                                    }
                                }
                            } else {
                                if (input[3] <= 12.0) {
                                    if (input[1] <= 0.875) {
                                        result[3] = 6.75;
                                    } else {
                                        result[3] = 6.333333333333333;
                                    }
                                } else {
                                    result[3] = 7.0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (input[4] <= 16.920499801635742) {
        if (input[4] <= 12.297499656677246) {
            if (input[4] <= 9.801499843597412) {
                if (input[3] <= 112.0) {
                    if (input[4] <= 9.371999740600586) {
                        result[4] = 2.0;
                    } else {
                        if (input[4] <= 9.455000400543213) {
                            if (input[3] <= 56.0) {
                                result[4] = 2.0;
                            } else {
                                if (input[2] <= 36.0) {
                                    result[4] = 2.0;
                                } else {
                                    result[4] = 2.6;
                                }
                            }
                        } else {
                            if (input[2] <= 60.0) {
                                result[4] = 2.0;
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[4] = 2.25;
                                } else {
                                    result[4] = 2.0;
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 9.422499656677246) {
                        if (input[4] <= 9.186999797821045) {
                            result[4] = 2.0;
                        } else {
                            result[4] = 2.3;
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            result[4] = 2.5;
                        } else {
                            result[4] = 3.0;
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[3] <= 40.0) {
                            if (input[0] <= 0.10000000149011612) {
                                if (input[4] <= 11.136499881744385) {
                                    result[4] = 2.0;
                                } else {
                                    result[4] = 2.6;
                                }
                            } else {
                                result[4] = 2.0;
                            }
                        } else {
                            if (input[4] <= 11.17549991607666) {
                                result[4] = 2.0;
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[4] = 3.0;
                                } else {
                                    result[4] = 2.0;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[0] <= 0.7000000178813934) {
                                result[4] = 2.75;
                            } else {
                                result[4] = 2.0;
                            }
                        } else {
                            result[4] = 3.0;
                        }
                    }
                } else {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[2] <= 12.0) {
                            if (input[3] <= 112.0) {
                                if (input[4] <= 10.402499675750732) {
                                    result[4] = 2.0;
                                } else {
                                    result[4] = 2.5714285714285716;
                                }
                            } else {
                                result[4] = 3.0;
                            }
                        } else {
                            if (input[4] <= 11.863500118255615) {
                                if (input[1] <= 0.550000011920929) {
                                    if (input[3] <= 112.0) {
                                        result[4] = 3.0;
                                    } else {
                                        if (input[4] <= 10.383999824523926) {
                                            result[4] = 3.0;
                                        } else {
                                            result[4] = 4.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 10.066500186920166) {
                                        if (input[4] <= 10.002500057220459) {
                                            result[4] = 3.0;
                                        } else {
                                            result[4] = 2.857142857142857;
                                        }
                                    } else {
                                        result[4] = 3.0;
                                    }
                                }
                            } else {
                                if (input[3] <= 104.0) {
                                    result[4] = 3.0;
                                } else {
                                    result[4] = 4.0;
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 36.0) {
                            result[4] = 2.0;
                        } else {
                            result[4] = 3.0;
                        }
                    }
                }
            }
        } else {
            if (input[3] <= 56.0) {
                if (input[2] <= 60.0) {
                    if (input[4] <= 15.892499923706055) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 44.0) {
                                if (input[3] <= 40.0) {
                                    result[4] = 3.0;
                                } else {
                                    if (input[4] <= 15.36050033569336) {
                                        result[4] = 3.0;
                                    } else {
                                        if (input[2] <= 16.0) {
                                            result[4] = 3.0;
                                        } else {
                                            result[4] = 3.4285714285714284;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 15.385499954223633) {
                                    if (input[4] <= 15.086999893188477) {
                                        if (input[4] <= 14.619500160217285) {
                                            result[4] = 3.0;
                                        } else {
                                            result[4] = 3.0952380952380953;
                                        }
                                    } else {
                                        result[4] = 3.4;
                                    }
                                } else {
                                    result[4] = 4.0;
                                }
                            }
                        } else {
                            if (input[4] <= 13.430500030517578) {
                                result[4] = 2.0;
                            } else {
                                result[4] = 3.0;
                            }
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            result[4] = 3.0;
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                if (input[3] <= 24.0) {
                                    result[4] = 3.25;
                                } else {
                                    if (input[4] <= 16.667999267578125) {
                                        result[4] = 4.0;
                                    } else {
                                        result[4] = 4.615384615384615;
                                    }
                                }
                            } else {
                                if (input[3] <= 24.0) {
                                    result[4] = 3.0;
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[4] = 4.0;
                                    } else {
                                        if (input[4] <= 16.807499885559082) {
                                            result[4] = 3.0;
                                        } else {
                                            result[4] = 3.25;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 15.837999820709229) {
                        if (input[3] <= 24.0) {
                            result[4] = 3.0;
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 13.938000202178955) {
                                    result[4] = 3.75;
                                } else {
                                    result[4] = 4.0;
                                }
                            } else {
                                if (input[4] <= 14.438499927520752) {
                                    result[4] = 3.25;
                                } else {
                                    result[4] = 3.5;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 40.0) {
                            result[4] = 4.0;
                        } else {
                            result[4] = 5.0;
                        }
                    }
                }
            } else {
                if (input[4] <= 15.017499923706055) {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 14.260499954223633) {
                                result[4] = 3.0;
                            } else {
                                if (input[2] <= 12.0) {
                                    result[4] = 3.0;
                                } else {
                                    result[4] = 3.5;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        result[4] = 3.0;
                                    } else {
                                        result[4] = 4.0;
                                    }
                                } else {
                                    result[4] = 4.0;
                                }
                            } else {
                                if (input[2] <= 20.0) {
                                    result[4] = 3.0;
                                } else {
                                    result[4] = 3.4444444444444446;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 44.0) {
                                    if (input[2] <= 36.0) {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[4] = 4.0;
                                        } else {
                                            result[4] = 3.8333333333333335;
                                        }
                                    } else {
                                        result[4] = 3.0;
                                    }
                                } else {
                                    result[4] = 4.0;
                                }
                            } else {
                                if (input[4] <= 14.275499820709229) {
                                    result[4] = 4.0;
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[4] = 6.0;
                                    } else {
                                        result[4] = 4.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 14.203999996185303) {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 13.374499797821045) {
                                        if (input[4] <= 13.16349983215332) {
                                            result[4] = 3.0;
                                        } else {
                                            result[4] = 3.4;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[4] = 3.142857142857143;
                                        } else {
                                            result[4] = 3.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 13.575000286102295) {
                                        result[4] = 3.0;
                                    } else {
                                        result[4] = 3.7142857142857144;
                                    }
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    result[4] = 3.125;
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[4] <= 14.660999774932861) {
                                            result[4] = 4.125;
                                        } else {
                                            result[4] = 4.0;
                                        }
                                    } else {
                                        result[4] = 3.8;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 112.0) {
                            if (input[4] <= 16.522500038146973) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 12.0) {
                                        if (input[4] <= 16.07200050354004) {
                                            result[4] = 3.4;
                                        } else {
                                            result[4] = 4.0;
                                        }
                                    } else {
                                        result[4] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 16.102499961853027) {
                                        if (input[2] <= 20.0) {
                                            result[4] = 3.3;
                                        } else {
                                            result[4] = 3.0;
                                        }
                                    } else {
                                        if (input[4] <= 16.368000030517578) {
                                            result[4] = 3.9;
                                        } else {
                                            result[4] = 3.3;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 20.0) {
                                    if (input[4] <= 16.744500160217285) {
                                        result[4] = 3.6666666666666665;
                                    } else {
                                        result[4] = 4.0;
                                    }
                                } else {
                                    if (input[1] <= 0.75) {
                                        result[4] = 5.2;
                                    } else {
                                        result[4] = 4.75;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.7950000166893005) {
                                result[4] = 5.0;
                            } else {
                                result[4] = 4.0;
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 36.0) {
                                    result[4] = 4.0;
                                } else {
                                    result[4] = 3.0;
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[4] = 5.0;
                                } else {
                                    if (input[4] <= 16.020999908447266) {
                                        result[4] = 4.0;
                                    } else {
                                        result[4] = 4.166666666666667;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 15.486999988555908) {
                                if (input[0] <= 0.7950000166893005) {
                                    result[4] = 5.0;
                                } else {
                                    result[4] = 4.0;
                                }
                            } else {
                                if (input[4] <= 16.09000015258789) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[4] = 5.0;
                                    } else {
                                        result[4] = 6.714285714285714;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[4] = 5.0;
                                    } else {
                                        if (input[4] <= 16.484999656677246) {
                                            result[4] = 4.461538461538462;
                                        } else {
                                            result[4] = 5.083333333333333;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 21.523499488830566) {
            if (input[3] <= 56.0) {
                if (input[2] <= 44.0) {
                    if (input[4] <= 18.664499282836914) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[4] <= 16.98449993133545) {
                                result[4] = 3.5;
                            } else {
                                result[4] = 4.0;
                            }
                        } else {
                            if (input[1] <= 0.9249999821186066) {
                                if (input[4] <= 18.357999801635742) {
                                    if (input[4] <= 18.07349967956543) {
                                        if (input[3] <= 40.0) {
                                            result[4] = 3.0;
                                        } else {
                                            result[4] = 3.1818181818181817;
                                        }
                                    } else {
                                        if (input[4] <= 18.152999877929688) {
                                            result[4] = 3.6;
                                        } else {
                                            result[4] = 3.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        result[4] = 3.1666666666666665;
                                    } else {
                                        result[4] = 3.888888888888889;
                                    }
                                }
                            } else {
                                if (input[4] <= 17.727999687194824) {
                                    result[4] = 5.0;
                                } else {
                                    result[4] = 3.2;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 20.992000579833984) {
                                    result[4] = 4.0;
                                } else {
                                    if (input[2] <= 28.0) {
                                        result[4] = 4.0;
                                    } else {
                                        result[4] = 4.9;
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 20.333999633789062) {
                                        result[4] = 4.0;
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[4] = 5.0;
                                        } else {
                                            result[4] = 4.75;
                                        }
                                    }
                                } else {
                                    result[4] = 5.0;
                                }
                            }
                        } else {
                            if (input[2] <= 36.0) {
                                if (input[2] <= 20.0) {
                                    if (input[4] <= 21.17799949645996) {
                                        if (input[4] <= 19.46049976348877) {
                                            result[4] = 3.4;
                                        } else {
                                            result[4] = 4.230769230769231;
                                        }
                                    } else {
                                        result[4] = 5.833333333333333;
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[1] <= 0.550000011920929) {
                                            result[4] = 4.5;
                                        } else {
                                            result[4] = 5.377777777777778;
                                        }
                                    } else {
                                        result[4] = 4.076923076923077;
                                    }
                                }
                            } else {
                                if (input[4] <= 20.820000648498535) {
                                    result[4] = 7.3;
                                } else {
                                    result[4] = 6.4;
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 19.203499794006348) {
                        if (input[3] <= 24.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 19.01650047302246) {
                                    result[4] = 4.0;
                                } else {
                                    result[4] = 4.375;
                                }
                            } else {
                                if (input[4] <= 17.538000106811523) {
                                    result[4] = 3.1666666666666665;
                                } else {
                                    if (input[1] <= 0.75) {
                                        result[4] = 4.636363636363637;
                                    } else {
                                        if (input[4] <= 18.459500312805176) {
                                            result[4] = 5.2;
                                        } else {
                                            result[4] = 6.166666666666667;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 60.0) {
                                if (input[2] <= 52.0) {
                                    if (input[4] <= 17.85599994659424) {
                                        result[4] = 5.6;
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[4] = 4.9655172413793105;
                                        } else {
                                            result[4] = 4.3;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.636500358581543) {
                                        if (input[4] <= 17.006999969482422) {
                                            result[4] = 3.75;
                                        } else {
                                            result[4] = 4.0;
                                        }
                                    } else {
                                        result[4] = 4.571428571428571;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.75) {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[4] = 5.090909090909091;
                                    } else {
                                        result[4] = 7.555555555555555;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 18.74350070953369) {
                                            result[4] = 5.0;
                                        } else {
                                            result[4] = 5.142857142857143;
                                        }
                                    } else {
                                        result[4] = 4.25;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 19.5939998626709) {
                                    if (input[4] <= 19.473000526428223) {
                                        result[4] = 4.6;
                                    } else {
                                        result[4] = 4.111111111111111;
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[4] = 5.090909090909091;
                                        } else {
                                            result[4] = 5.0;
                                        }
                                    } else {
                                        result[4] = 4.666666666666667;
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 20.949999809265137) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[4] = 5.166666666666667;
                                        } else {
                                            result[4] = 5.0;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[4] = 6.0;
                                        } else {
                                            result[4] = 5.333333333333333;
                                        }
                                    }
                                } else {
                                    result[4] = 6.0;
                                }
                            }
                        } else {
                            if (input[1] <= 0.8499999940395355) {
                                if (input[4] <= 21.35449981689453) {
                                    if (input[4] <= 19.817999839782715) {
                                        if (input[4] <= 19.76200008392334) {
                                            result[4] = 6.416666666666667;
                                        } else {
                                            result[4] = 5.2;
                                        }
                                    } else {
                                        if (input[3] <= 24.0) {
                                            result[4] = 6.75;
                                        } else {
                                            result[4] = 7.333333333333333;
                                        }
                                    }
                                } else {
                                    result[4] = 5.571428571428571;
                                }
                            } else {
                                result[4] = 4.5;
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 18.97849941253662) {
                    if (input[2] <= 44.0) {
                        if (input[2] <= 12.0) {
                            if (input[3] <= 112.0) {
                                if (input[4] <= 17.335999488830566) {
                                    if (input[4] <= 17.13350009918213) {
                                        result[4] = 3.5;
                                    } else {
                                        result[4] = 3.75;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[4] = 4.1;
                                        } else {
                                            result[4] = 4.0;
                                        }
                                    } else {
                                        result[4] = 5.285714285714286;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.30000000447034836) {
                                    result[4] = 5.166666666666667;
                                } else {
                                    result[4] = 5.0;
                                }
                            }
                        } else {
                            if (input[4] <= 18.491000175476074) {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 36.0) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[4] = 5.0;
                                        } else {
                                            result[4] = 4.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[4] = 4.0;
                                        } else {
                                            result[4] = 6.25;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 18.343499183654785) {
                                            result[4] = 4.961748633879782;
                                        } else {
                                            result[4] = 5.75;
                                        }
                                    } else {
                                        if (input[3] <= 112.0) {
                                            result[4] = 6.555555555555555;
                                        } else {
                                            result[4] = 4.947368421052632;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 88.0) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[4] = 5.714285714285714;
                                        } else {
                                            result[4] = 4.870967741935484;
                                        }
                                    } else {
                                        result[4] = 6.0;
                                    }
                                } else {
                                    if (input[3] <= 72.0) {
                                        result[4] = 7.0;
                                    } else {
                                        if (input[4] <= 18.642000198364258) {
                                            result[4] = 5.142857142857143;
                                        } else {
                                            result[4] = 6.333333333333333;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 17.640999794006348) {
                            if (input[1] <= 0.6500000059604645) {
                                if (input[4] <= 17.320499420166016) {
                                    if (input[3] <= 80.0) {
                                        result[4] = 6.5;
                                    } else {
                                        result[4] = 6.6;
                                    }
                                } else {
                                    if (input[4] <= 17.41699981689453) {
                                        result[4] = 4.6;
                                    } else {
                                        result[4] = 5.7;
                                    }
                                }
                            } else {
                                if (input[4] <= 17.451000213623047) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[4] = 5.0;
                                    } else {
                                        result[4] = 6.0;
                                    }
                                } else {
                                    if (input[2] <= 60.0) {
                                        result[4] = 4.375;
                                    } else {
                                        result[4] = 5.5;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 72.0) {
                                if (input[0] <= 0.7000000178813934) {
                                    result[4] = 6.0;
                                } else {
                                    if (input[1] <= 0.75) {
                                        result[4] = 4.8;
                                    } else {
                                        result[4] = 5.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 18.884000778198242) {
                                    if (input[4] <= 18.1535005569458) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[4] = 6.0;
                                        } else {
                                            result[4] = 5.6;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[4] = 6.0;
                                        } else {
                                            result[4] = 6.473684210526316;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.93100070953369) {
                                        result[4] = 5.666666666666667;
                                    } else {
                                        result[4] = 5.857142857142857;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 44.0) {
                        if (input[2] <= 28.0) {
                            if (input[3] <= 88.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 20.080500602722168) {
                                        if (input[2] <= 12.0) {
                                            result[4] = 4.5625;
                                        } else {
                                            result[4] = 5.0;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[4] = 5.733333333333333;
                                        } else {
                                            result[4] = 5.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 12.0) {
                                        if (input[4] <= 20.838500022888184) {
                                            result[4] = 6.2;
                                        } else {
                                            result[4] = 6.75;
                                        }
                                    } else {
                                        if (input[4] <= 20.242499351501465) {
                                            result[4] = 5.857142857142857;
                                        } else {
                                            result[4] = 5.3;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[4] = 5.0;
                                        } else {
                                            result[4] = 4.833333333333333;
                                        }
                                    } else {
                                        if (input[4] <= 19.96500015258789) {
                                            result[4] = 5.714285714285714;
                                        } else {
                                            result[4] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 20.9064998626709) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[4] = 6.0;
                                        } else {
                                            result[4] = 5.470588235294118;
                                        }
                                    } else {
                                        if (input[0] <= 0.6000000089406967) {
                                            result[4] = 6.857142857142857;
                                        } else {
                                            result[4] = 6.266666666666667;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 112.0) {
                                if (input[4] <= 20.851000785827637) {
                                    if (input[4] <= 20.746000289916992) {
                                        if (input[4] <= 19.966500282287598) {
                                            result[4] = 5.814814814814815;
                                        } else {
                                            result[4] = 6.095238095238095;
                                        }
                                    } else {
                                        result[4] = 5.333333333333333;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 21.202000617980957) {
                                            result[4] = 6.0;
                                        } else {
                                            result[4] = 6.6;
                                        }
                                    } else {
                                        result[4] = 6.75;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.9249999821186066) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[4] = 7.0;
                                        } else {
                                            result[4] = 6.0;
                                        }
                                    } else {
                                        result[4] = 7.4;
                                    }
                                } else {
                                    result[4] = 6.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 20.140999794006348) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 20.052499771118164) {
                                    result[4] = 6.0;
                                } else {
                                    result[4] = 6.285714285714286;
                                }
                            } else {
                                if (input[3] <= 112.0) {
                                    if (input[4] <= 19.548500061035156) {
                                        result[4] = 5.636363636363637;
                                    } else {
                                        result[4] = 7.125;
                                    }
                                } else {
                                    result[4] = 7.75;
                                }
                            }
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                if (input[3] <= 112.0) {
                                    result[4] = 7.0;
                                } else {
                                    if (input[1] <= 0.550000011920929) {
                                        result[4] = 7.333333333333333;
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[4] = 7.125;
                                        } else {
                                            result[4] = 7.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[1] <= 0.75) {
                                        result[4] = 6.666666666666667;
                                    } else {
                                        result[4] = 6.0;
                                    }
                                } else {
                                    if (input[4] <= 21.314000129699707) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[4] = 6.4;
                                        } else {
                                            result[4] = 7.45;
                                        }
                                    } else {
                                        result[4] = 6.111111111111111;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 29.705500602722168) {
                if (input[3] <= 56.0) {
                    if (input[4] <= 25.30900001525879) {
                        if (input[2] <= 60.0) {
                            if (input[2] <= 28.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 21.91100025177002) {
                                        result[4] = 4.666666666666667;
                                    } else {
                                        if (input[4] <= 25.200499534606934) {
                                            result[4] = 5.016393442622951;
                                        } else {
                                            result[4] = 5.2727272727272725;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.760000228881836) {
                                        if (input[4] <= 21.871999740600586) {
                                            result[4] = 6.285714285714286;
                                        } else {
                                            result[4] = 4.891891891891892;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[4] = 5.75;
                                        } else {
                                            result[4] = 7.142857142857143;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 24.0) {
                                        if (input[4] <= 24.261500358581543) {
                                            result[4] = 5.017857142857143;
                                        } else {
                                            result[4] = 5.75;
                                        }
                                    } else {
                                        if (input[4] <= 23.505499839782715) {
                                            result[4] = 5.5963302752293576;
                                        } else {
                                            result[4] = 6.140350877192983;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.75) {
                                        if (input[2] <= 36.0) {
                                            result[4] = 7.0;
                                        } else {
                                            result[4] = 5.575757575757576;
                                        }
                                    } else {
                                        if (input[4] <= 23.425999641418457) {
                                            result[4] = 6.391304347826087;
                                        } else {
                                            result[4] = 7.142857142857143;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[3] <= 12.0) {
                                    if (input[4] <= 22.935500144958496) {
                                        result[4] = 5.0;
                                    } else {
                                        if (input[4] <= 23.94200038909912) {
                                            result[4] = 6.2;
                                        } else {
                                            result[4] = 5.571428571428571;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 23.545499801635742) {
                                            result[4] = 6.0;
                                        } else {
                                            result[4] = 6.25;
                                        }
                                    } else {
                                        result[4] = 7.25;
                                    }
                                }
                            } else {
                                if (input[4] <= 22.469499588012695) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 21.745999336242676) {
                                            result[4] = 5.75;
                                        } else {
                                            result[4] = 6.0;
                                        }
                                    } else {
                                        result[4] = 7.0;
                                    }
                                } else {
                                    if (input[4] <= 24.07699966430664) {
                                        if (input[4] <= 22.654500007629395) {
                                            result[4] = 7.285714285714286;
                                        } else {
                                            result[4] = 7.0;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[4] = 7.133333333333334;
                                        } else {
                                            result[4] = 7.9411764705882355;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 40.0) {
                                if (input[3] <= 24.0) {
                                    if (input[4] <= 25.95199966430664) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[4] = 5.0;
                                        } else {
                                            result[4] = 5.833333333333333;
                                        }
                                    } else {
                                        if (input[4] <= 27.60349941253662) {
                                            result[4] = 5.797752808988764;
                                        } else {
                                            result[4] = 6.107954545454546;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 28.995500564575195) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[4] = 6.106194690265487;
                                        } else {
                                            result[4] = 6.909090909090909;
                                        }
                                    } else {
                                        if (input[2] <= 36.0) {
                                            result[4] = 6.769230769230769;
                                        } else {
                                            result[4] = 7.0625;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 27.951499938964844) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[4] = 6.018867924528302;
                                        } else {
                                            result[4] = 7.222222222222222;
                                        }
                                    } else {
                                        if (input[2] <= 12.0) {
                                            result[4] = 6.166666666666667;
                                        } else {
                                            result[4] = 7.0606060606060606;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.19099998474121) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[4] = 7.0;
                                        } else {
                                            result[4] = 6.75;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[4] = 7.7555555555555555;
                                        } else {
                                            result[4] = 6.818181818181818;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 28.0) {
                                    if (input[2] <= 60.0) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[4] = 6.043478260869565;
                                        } else {
                                            result[4] = 6.55;
                                        }
                                    } else {
                                        if (input[3] <= 12.0) {
                                            result[4] = 6.0;
                                        } else {
                                            result[4] = 7.1891891891891895;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 28.95800018310547) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[4] = 7.636363636363637;
                                        } else {
                                            result[4] = 7.0256410256410255;
                                        }
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[4] = 7.4375;
                                        } else {
                                            result[4] = 8.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 26.207999229431152) {
                                        if (input[2] <= 60.0) {
                                            result[4] = 7.040816326530612;
                                        } else {
                                            result[4] = 7.842105263157895;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[4] = 7.7875;
                                        } else {
                                            result[4] = 7.485294117647059;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[4] = 7.0;
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[4] = 6.5;
                                        } else {
                                            result[4] = 6.875;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 22.67549991607666) {
                        if (input[2] <= 28.0) {
                            if (input[3] <= 112.0) {
                                if (input[2] <= 12.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 22.414000511169434) {
                                            result[4] = 5.0;
                                        } else {
                                            result[4] = 5.4;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[4] = 6.222222222222222;
                                        } else {
                                            result[4] = 5.833333333333333;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 88.0) {
                                        if (input[3] <= 72.0) {
                                            result[4] = 6.173913043478261;
                                        } else {
                                            result[4] = 5.478260869565218;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[4] = 7.0;
                                        } else {
                                            result[4] = 6.2;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.5000000149011612) {
                                    result[4] = 7.0;
                                } else {
                                    result[4] = 7.875;
                                }
                            }
                        } else {
                            if (input[3] <= 112.0) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 72.0) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[4] = 5.388888888888889;
                                        } else {
                                            result[4] = 6.5;
                                        }
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[4] = 7.2;
                                        } else {
                                            result[4] = 6.888888888888889;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.10000000149011612) {
                                        if (input[4] <= 21.98799991607666) {
                                            result[4] = 7.0;
                                        } else {
                                            result[4] = 8.0;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[4] = 7.096774193548387;
                                        } else {
                                            result[4] = 6.986666666666666;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.30000000447034836) {
                                    result[4] = 8.0;
                                } else {
                                    if (input[2] <= 60.0) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[4] = 7.314285714285714;
                                        } else {
                                            result[4] = 7.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[4] = 8.0;
                                        } else {
                                            result[4] = 7.571428571428571;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 28.0) {
                                if (input[4] <= 24.08750057220459) {
                                    if (input[3] <= 112.0) {
                                        if (input[3] <= 88.0) {
                                            result[4] = 5.931034482758621;
                                        } else {
                                            result[4] = 6.6976744186046515;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[4] = 7.964285714285714;
                                        } else {
                                            result[4] = 7.130434782608695;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 112.0) {
                                        if (input[4] <= 27.28849983215332) {
                                            result[4] = 7.071969696969697;
                                        } else {
                                            result[4] = 7.627586206896551;
                                        }
                                    } else {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[4] = 8.0;
                                        } else {
                                            result[4] = 7.7;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 72.0) {
                                        if (input[4] <= 25.828999519348145) {
                                            result[4] = 6.5;
                                        } else {
                                            result[4] = 7.666666666666667;
                                        }
                                    } else {
                                        if (input[4] <= 23.48050022125244) {
                                            result[4] = 7.28125;
                                        } else {
                                            result[4] = 7.82051282051282;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[4] <= 22.78849983215332) {
                                            result[4] = 7.647058823529412;
                                        } else {
                                            result[4] = 7.9868421052631575;
                                        }
                                    } else {
                                        if (input[4] <= 23.91950035095215) {
                                            result[4] = 7.288461538461538;
                                        } else {
                                            result[4] = 8.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.75) {
                                if (input[3] <= 112.0) {
                                    if (input[1] <= 0.6500000059604645) {
                                        if (input[2] <= 44.0) {
                                            result[4] = 7.371428571428571;
                                        } else {
                                            result[4] = 7.157894736842105;
                                        }
                                    } else {
                                        if (input[4] <= 27.805500030517578) {
                                            result[4] = 6.928571428571429;
                                        } else {
                                            result[4] = 7.4;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.235000610351562) {
                                        result[4] = 7.111111111111111;
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[4] = 6.777777777777778;
                                        } else {
                                            result[4] = 6.428571428571429;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 88.0) {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[4] <= 25.237500190734863) {
                                            result[4] = 6.764705882352941;
                                        } else {
                                            result[4] = 6.5;
                                        }
                                    } else {
                                        if (input[4] <= 24.204500198364258) {
                                            result[4] = 6.0;
                                        } else {
                                            result[4] = 6.5625;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[2] <= 20.0) {
                                            result[4] = 6.846153846153846;
                                        } else {
                                            result[4] = 6.375;
                                        }
                                    } else {
                                        if (input[4] <= 23.79550075531006) {
                                            result[4] = 7.833333333333333;
                                        } else {
                                            result[4] = 6.833333333333333;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 0.8950000107288361) {
                    if (input[4] <= 33.24600028991699) {
                        if (input[3] <= 24.0) {
                            if (input[2] <= 36.0) {
                                if (input[4] <= 30.550000190734863) {
                                    result[4] = 6.0;
                                } else {
                                    if (input[4] <= 33.02199935913086) {
                                        result[4] = 7.0;
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[4] = 7.833333333333333;
                                        } else {
                                            result[4] = 7.111111111111111;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 31.383000373840332) {
                                    if (input[2] <= 44.0) {
                                        if (input[4] <= 31.076000213623047) {
                                            result[4] = 7.0;
                                        } else {
                                            result[4] = 7.142857142857143;
                                        }
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[4] = 7.481481481481482;
                                        } else {
                                            result[4] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[1] <= 0.75) {
                                            result[4] = 8.0;
                                        } else {
                                            result[4] = 7.818181818181818;
                                        }
                                    } else {
                                        if (input[4] <= 31.78950023651123) {
                                            result[4] = 7.214285714285714;
                                        } else {
                                            result[4] = 7.826086956521739;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 40.0) {
                                if (input[2] <= 20.0) {
                                    if (input[4] <= 32.835500717163086) {
                                        if (input[4] <= 32.45650100708008) {
                                            result[4] = 7.0;
                                        } else {
                                            result[4] = 7.3076923076923075;
                                        }
                                    } else {
                                        result[4] = 8.0;
                                    }
                                } else {
                                    if (input[4] <= 31.62950038909912) {
                                        if (input[2] <= 28.0) {
                                            result[4] = 7.0;
                                        } else {
                                            result[4] = 7.714285714285714;
                                        }
                                    } else {
                                        if (input[4] <= 32.06999969482422) {
                                            result[4] = 7.75;
                                        } else {
                                            result[4] = 8.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 31.816499710083008) {
                                    if (input[0] <= 0.30000000447034836) {
                                        if (input[3] <= 56.0) {
                                            result[4] = 7.676470588235294;
                                        } else {
                                            result[4] = 7.928571428571429;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[4] = 7.785714285714286;
                                        } else {
                                            result[4] = 7.480769230769231;
                                        }
                                    }
                                } else {
                                    result[4] = 8.0;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.7000000178813934) {
                            if (input[1] <= 0.9249999821186066) {
                                if (input[1] <= 0.8499999940395355) {
                                    result[4] = 8.0;
                                } else {
                                    if (input[4] <= 33.89149856567383) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[4] = 8.0;
                                        } else {
                                            result[4] = 7.4;
                                        }
                                    } else {
                                        result[4] = 8.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 34.334001541137695) {
                                    if (input[2] <= 20.0) {
                                        result[4] = 7.25;
                                    } else {
                                        result[4] = 8.0;
                                    }
                                } else {
                                    result[4] = 8.0;
                                }
                            }
                        } else {
                            if (input[4] <= 34.42900085449219) {
                                if (input[1] <= 0.75) {
                                    result[4] = 7.833333333333333;
                                } else {
                                    result[4] = 7.0;
                                }
                            } else {
                                result[4] = 8.0;
                            }
                        }
                    }
                } else {
                    if (input[1] <= 0.6500000059604645) {
                        if (input[2] <= 20.0) {
                            result[4] = 7.428571428571429;
                        } else {
                            result[4] = 6.888888888888889;
                        }
                    } else {
                        if (input[2] <= 12.0) {
                            if (input[3] <= 12.0) {
                                result[4] = 7.428571428571429;
                            } else {
                                if (input[1] <= 0.9249999821186066) {
                                    result[4] = 6.833333333333333;
                                } else {
                                    result[4] = 6.571428571428571;
                                }
                            }
                        } else {
                            if (input[4] <= 29.960000038146973) {
                                result[4] = 7.166666666666667;
                            } else {
                                if (input[3] <= 12.0) {
                                    if (input[4] <= 31.749500274658203) {
                                        result[4] = 6.0;
                                    } else {
                                        if (input[1] <= 0.875) {
                                            result[4] = 6.583333333333333;
                                        } else {
                                            result[4] = 6.25;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 31.335000038146973) {
                                        if (input[4] <= 30.90149974822998) {
                                            result[4] = 6.571428571428571;
                                        } else {
                                            result[4] = 6.111111111111111;
                                        }
                                    } else {
                                        if (input[4] <= 32.21299934387207) {
                                            result[4] = 7.2727272727272725;
                                        } else {
                                            result[4] = 6.833333333333333;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (input[4] <= 18.470499992370605) {
        if (input[4] <= 12.303999900817871) {
            if (input[4] <= 9.697500228881836) {
                if (input[4] <= 9.334499835968018) {
                    result[5] = 2.0;
                } else {
                    if (input[3] <= 112.0) {
                        if (input[4] <= 9.375499725341797) {
                            if (input[4] <= 9.356500148773193) {
                                result[5] = 2.0;
                            } else {
                                result[5] = 2.5555555555555554;
                            }
                        } else {
                            if (input[1] <= 0.9249999821186066) {
                                result[5] = 2.0;
                            } else {
                                if (input[2] <= 52.0) {
                                    result[5] = 2.0;
                                } else {
                                    result[5] = 2.3333333333333335;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.7950000166893005) {
                            result[5] = 3.0;
                        } else {
                            result[5] = 2.0;
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 11.535500049591064) {
                            if (input[4] <= 11.229499816894531) {
                                result[5] = 2.0;
                            } else {
                                if (input[2] <= 44.0) {
                                    result[5] = 2.0;
                                } else {
                                    result[5] = 2.6153846153846154;
                                }
                            }
                        } else {
                            if (input[2] <= 36.0) {
                                if (input[4] <= 12.17549991607666) {
                                    result[5] = 2.0;
                                } else {
                                    result[5] = 2.2857142857142856;
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[5] = 3.0;
                                } else {
                                    result[5] = 2.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 10.349999904632568) {
                            result[5] = 2.0;
                        } else {
                            if (input[3] <= 24.0) {
                                result[5] = 2.625;
                            } else {
                                result[5] = 3.0;
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[4] <= 12.083500385284424) {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 112.0) {
                                    result[5] = 2.0;
                                } else {
                                    result[5] = 3.0;
                                }
                            } else {
                                if (input[4] <= 11.778499603271484) {
                                    if (input[4] <= 10.101500034332275) {
                                        if (input[3] <= 72.0) {
                                            result[5] = 2.6363636363636362;
                                        } else {
                                            result[5] = 2.9782608695652173;
                                        }
                                    } else {
                                        result[5] = 3.0;
                                    }
                                } else {
                                    if (input[2] <= 36.0) {
                                        result[5] = 3.0;
                                    } else {
                                        result[5] = 3.6666666666666665;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 32.0) {
                                result[5] = 3.0;
                            } else {
                                result[5] = 4.0;
                            }
                        }
                    } else {
                        if (input[4] <= 11.224499702453613) {
                            result[5] = 2.0;
                        } else {
                            result[5] = 3.4;
                        }
                    }
                }
            }
        } else {
            if (input[3] <= 56.0) {
                if (input[4] <= 16.6899995803833) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 16.213500022888184) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 40.0) {
                                        result[5] = 3.0;
                                    } else {
                                        if (input[4] <= 15.843500137329102) {
                                            result[5] = 3.010204081632653;
                                        } else {
                                            result[5] = 3.6;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 15.086999893188477) {
                                        if (input[1] <= 0.550000011920929) {
                                            result[5] = 3.1785714285714284;
                                        } else {
                                            result[5] = 3.007575757575758;
                                        }
                                    } else {
                                        if (input[4] <= 15.385499954223633) {
                                            result[5] = 3.6;
                                        } else {
                                            result[5] = 4.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 13.359000205993652) {
                                    result[5] = 2.0;
                                } else {
                                    result[5] = 3.0;
                                }
                            }
                        } else {
                            if (input[2] <= 28.0) {
                                result[5] = 3.0;
                            } else {
                                if (input[3] <= 24.0) {
                                    result[5] = 3.125;
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[5] = 4.0;
                                    } else {
                                        result[5] = 3.7142857142857144;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 15.856500148773193) {
                            if (input[3] <= 24.0) {
                                result[5] = 3.0;
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[4] <= 14.48900032043457) {
                                        result[5] = 3.4;
                                    } else {
                                        result[5] = 3.2222222222222223;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 32.0) {
                                result[5] = 4.0;
                            } else {
                                if (input[0] <= 0.7950000166893005) {
                                    result[5] = 5.0;
                                } else {
                                    result[5] = 4.3;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 44.0) {
                        if (input[0] <= 0.7000000178813934) {
                            if (input[4] <= 16.746000289916992) {
                                result[5] = 3.75;
                            } else {
                                result[5] = 4.0;
                            }
                        } else {
                            if (input[3] <= 12.0) {
                                result[5] = 3.0;
                            } else {
                                if (input[1] <= 0.6500000059604645) {
                                    if (input[4] <= 17.687000274658203) {
                                        if (input[4] <= 17.16450023651123) {
                                            result[5] = 3.6666666666666665;
                                        } else {
                                            result[5] = 3.0;
                                        }
                                    } else {
                                        result[5] = 3.933333333333333;
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        if (input[4] <= 18.023999214172363) {
                                            result[5] = 3.0454545454545454;
                                        } else {
                                            result[5] = 3.25;
                                        }
                                    } else {
                                        if (input[4] <= 17.364999771118164) {
                                            result[5] = 3.125;
                                        } else {
                                            result[5] = 4.166666666666667;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[4] <= 17.5649995803833) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[4] <= 17.24250030517578) {
                                        result[5] = 3.6666666666666665;
                                    } else {
                                        result[5] = 3.0;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[5] = 4.0;
                                } else {
                                    result[5] = 5.25;
                                }
                            }
                        } else {
                            if (input[2] <= 60.0) {
                                if (input[4] <= 17.704500198364258) {
                                    if (input[4] <= 16.935999870300293) {
                                        result[5] = 3.3333333333333335;
                                    } else {
                                        if (input[4] <= 17.52549934387207) {
                                            result[5] = 4.0;
                                        } else {
                                            result[5] = 4.142857142857143;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.160999298095703) {
                                        if (input[4] <= 17.970499992370605) {
                                            result[5] = 5.5;
                                        } else {
                                            result[5] = 5.0;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[5] = 4.8;
                                        } else {
                                            result[5] = 4.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.75) {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[5] = 5.0;
                                    } else {
                                        result[5] = 6.4;
                                    }
                                } else {
                                    if (input[0] <= 0.7950000166893005) {
                                        result[5] = 5.0;
                                    } else {
                                        result[5] = 4.111111111111111;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 15.196000099182129) {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 14.894500255584717) {
                                if (input[4] <= 14.293999671936035) {
                                    result[5] = 3.0;
                                } else {
                                    if (input[3] <= 72.0) {
                                        result[5] = 3.0;
                                    } else {
                                        result[5] = 3.2857142857142856;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.4000000134110451) {
                                    result[5] = 4.0;
                                } else {
                                    result[5] = 3.3636363636363638;
                                }
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 112.0) {
                                    result[5] = 3.0;
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[5] = 4.0;
                                    } else {
                                        result[5] = 3.0;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[4] <= 14.622000217437744) {
                                        result[5] = 3.0;
                                    } else {
                                        result[5] = 3.6666666666666665;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 44.0) {
                                    if (input[2] <= 36.0) {
                                        result[5] = 4.0;
                                    } else {
                                        result[5] = 3.0;
                                    }
                                } else {
                                    result[5] = 4.0;
                                }
                            } else {
                                if (input[4] <= 14.720499992370605) {
                                    if (input[4] <= 14.273999691009521) {
                                        result[5] = 4.0;
                                    } else {
                                        if (input[4] <= 14.35949993133545) {
                                            result[5] = 5.0;
                                        } else {
                                            result[5] = 4.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[5] = 5.0;
                                    } else {
                                        result[5] = 4.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 14.203999996185303) {
                                if (input[4] <= 13.598999977111816) {
                                    result[5] = 3.0;
                                } else {
                                    if (input[3] <= 112.0) {
                                        if (input[2] <= 60.0) {
                                            result[5] = 3.0;
                                        } else {
                                            result[5] = 3.25;
                                        }
                                    } else {
                                        if (input[1] <= 0.7000000178813934) {
                                            result[5] = 4.0;
                                        } else {
                                            result[5] = 3.5;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[3] <= 88.0) {
                                        result[5] = 3.0;
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[5] = 3.8333333333333335;
                                        } else {
                                            result[5] = 4.076923076923077;
                                        }
                                    }
                                } else {
                                    result[5] = 5.2;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 16.773500442504883) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[4] <= 16.12049961090088) {
                                        result[5] = 3.0;
                                    } else {
                                        result[5] = 3.6666666666666665;
                                    }
                                }
                            } else {
                                if (input[3] <= 72.0) {
                                    if (input[4] <= 17.0625) {
                                        result[5] = 4.833333333333333;
                                    } else {
                                        if (input[4] <= 17.906999588012695) {
                                            result[5] = 3.5294117647058822;
                                        } else {
                                            result[5] = 4.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 20.0) {
                                            result[5] = 4.818181818181818;
                                        } else {
                                            result[5] = 4.0;
                                        }
                                    } else {
                                        if (input[4] <= 17.51550006866455) {
                                            result[5] = 5.125;
                                        } else {
                                            result[5] = 6.428571428571429;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 16.3125) {
                                if (input[0] <= 0.5000000074505806) {
                                    result[5] = 5.0;
                                } else {
                                    if (input[2] <= 20.0) {
                                        result[5] = 4.0;
                                    } else {
                                        result[5] = 4.5;
                                    }
                                }
                            } else {
                                if (input[2] <= 20.0) {
                                    if (input[3] <= 112.0) {
                                        if (input[2] <= 12.0) {
                                            result[5] = 4.0;
                                        } else {
                                            result[5] = 4.958333333333333;
                                        }
                                    } else {
                                        if (input[4] <= 17.649500846862793) {
                                            result[5] = 5.0;
                                        } else {
                                            result[5] = 5.444444444444445;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[1] <= 0.550000011920929) {
                                            result[5] = 5.2;
                                        } else {
                                            result[5] = 5.0;
                                        }
                                    } else {
                                        result[5] = 6.0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 17.44099998474121) {
                            if (input[4] <= 15.823500156402588) {
                                if (input[0] <= 0.7000000178813934) {
                                    result[5] = 5.0;
                                } else {
                                    if (input[3] <= 72.0) {
                                        result[5] = 3.75;
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[5] = 4.0;
                                        } else {
                                            result[5] = 4.25;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[5] = 5.0;
                                    } else {
                                        if (input[4] <= 16.765999794006348) {
                                            result[5] = 3.8333333333333335;
                                        } else {
                                            result[5] = 4.8;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[5] = 5.0;
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[5] = 5.742857142857143;
                                        } else {
                                            result[5] = 4.777777777777778;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 44.0) {
                                if (input[3] <= 72.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 36.0) {
                                            result[5] = 5.0;
                                        } else {
                                            result[5] = 4.0;
                                        }
                                    } else {
                                        if (input[4] <= 17.974499702453613) {
                                            result[5] = 5.166666666666667;
                                        } else {
                                            result[5] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[5] = 6.0;
                                        } else {
                                            result[5] = 5.6;
                                        }
                                    } else {
                                        if (input[4] <= 17.624000549316406) {
                                            result[5] = 5.666666666666667;
                                        } else {
                                            result[5] = 4.933333333333334;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[5] = 6.0;
                                } else {
                                    if (input[4] <= 17.6850004196167) {
                                        if (input[4] <= 17.489999771118164) {
                                            result[5] = 4.818181818181818;
                                        } else {
                                            result[5] = 6.470588235294118;
                                        }
                                    } else {
                                        if (input[4] <= 17.887999534606934) {
                                            result[5] = 5.0;
                                        } else {
                                            result[5] = 5.384615384615385;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 21.535499572753906) {
            if (input[3] <= 56.0) {
                if (input[2] <= 36.0) {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[3] <= 40.0) {
                            if (input[4] <= 21.166500091552734) {
                                if (input[2] <= 28.0) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[4] <= 20.33199977874756) {
                                        result[5] = 4.0;
                                    } else {
                                        result[5] = 4.181818181818182;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[5] = 4.857142857142857;
                                } else {
                                    result[5] = 4.0;
                                }
                            }
                        } else {
                            if (input[2] <= 28.0) {
                                if (input[4] <= 20.333999633789062) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[4] <= 20.97249984741211) {
                                        result[5] = 4.875;
                                    } else {
                                        result[5] = 5.0;
                                    }
                                }
                            } else {
                                result[5] = 5.0;
                            }
                        }
                    } else {
                        if (input[4] <= 19.622499465942383) {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 19.261500358581543) {
                                    result[5] = 3.0;
                                } else {
                                    result[5] = 3.3846153846153846;
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    result[5] = 3.0;
                                } else {
                                    if (input[4] <= 19.255499839782715) {
                                        result[5] = 5.8;
                                    } else {
                                        result[5] = 4.333333333333333;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 19.77649974822998) {
                                result[5] = 6.333333333333333;
                            } else {
                                if (input[2] <= 12.0) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[3] <= 12.0) {
                                        if (input[1] <= 0.7999999821186066) {
                                            result[5] = 4.875;
                                        } else {
                                            result[5] = 6.363636363636363;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[5] = 5.083333333333333;
                                        } else {
                                            result[5] = 4.571428571428571;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[4] <= 20.160499572753906) {
                            if (input[3] <= 24.0) {
                                if (input[2] <= 60.0) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[5] = 5.0;
                                    } else {
                                        result[5] = 4.777777777777778;
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 19.49250030517578) {
                                        if (input[2] <= 44.0) {
                                            result[5] = 4.25;
                                        } else {
                                            result[5] = 4.757575757575758;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[5] = 5.037037037037037;
                                        } else {
                                            result[5] = 4.857142857142857;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        result[5] = 5.0;
                                    } else {
                                        result[5] = 6.0;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[0] <= 0.7000000178813934) {
                                    if (input[0] <= 0.10000000149011612) {
                                        if (input[2] <= 60.0) {
                                            result[5] = 5.0;
                                        } else {
                                            result[5] = 5.25;
                                        }
                                    } else {
                                        result[5] = 5.0;
                                    }
                                } else {
                                    result[5] = 4.666666666666667;
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[2] <= 52.0) {
                                        if (input[4] <= 20.800999641418457) {
                                            result[5] = 5.333333333333333;
                                        } else {
                                            result[5] = 5.833333333333333;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[5] = 5.2;
                                        } else {
                                            result[5] = 5.0;
                                        }
                                    }
                                } else {
                                    result[5] = 6.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 19.625999450683594) {
                            if (input[2] <= 60.0) {
                                if (input[1] <= 0.6500000059604645) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[4] <= 19.111499786376953) {
                                        result[5] = 5.285714285714286;
                                    } else {
                                        result[5] = 4.909090909090909;
                                    }
                                }
                            } else {
                                result[5] = 6.181818181818182;
                            }
                        } else {
                            if (input[1] <= 0.9249999821186066) {
                                if (input[1] <= 0.6500000059604645) {
                                    if (input[4] <= 19.84500026702881) {
                                        result[5] = 6.7272727272727275;
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[5] = 6.142857142857143;
                                        } else {
                                            result[5] = 5.181818181818182;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 19.88249969482422) {
                                        result[5] = 5.0;
                                    } else {
                                        if (input[4] <= 20.96950054168701) {
                                            result[5] = 7.6;
                                        } else {
                                            result[5] = 6.125;
                                        }
                                    }
                                }
                            } else {
                                result[5] = 4.875;
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= 28.0) {
                    if (input[4] <= 19.51349925994873) {
                        if (input[3] <= 112.0) {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 72.0) {
                                    result[5] = 4.0;
                                } else {
                                    if (input[4] <= 18.83549976348877) {
                                        result[5] = 4.142857142857143;
                                    } else {
                                        result[5] = 5.0;
                                    }
                                }
                            } else {
                                if (input[3] <= 88.0) {
                                    if (input[4] <= 18.63450050354004) {
                                        result[5] = 4.6;
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[5] = 5.0;
                                        } else {
                                            result[5] = 5.375;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.5000000074505806) {
                                        result[5] = 6.0;
                                    } else {
                                        result[5] = 5.5;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.5000000149011612) {
                                result[5] = 6.0;
                            } else {
                                if (input[1] <= 0.75) {
                                    result[5] = 5.4;
                                } else {
                                    result[5] = 5.833333333333333;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 72.0) {
                            if (input[0] <= 0.8950000107288361) {
                                result[5] = 5.0;
                            } else {
                                if (input[4] <= 20.527000427246094) {
                                    result[5] = 5.666666666666667;
                                } else {
                                    result[5] = 5.0;
                                }
                            }
                        } else {
                            if (input[3] <= 112.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 12.0) {
                                        if (input[3] <= 88.0) {
                                            result[5] = 5.25;
                                        } else {
                                            result[5] = 5.0;
                                        }
                                    } else {
                                        if (input[4] <= 21.11050033569336) {
                                            result[5] = 6.0;
                                        } else {
                                            result[5] = 5.5;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        if (input[3] <= 88.0) {
                                            result[5] = 6.9;
                                        } else {
                                            result[5] = 6.428571428571429;
                                        }
                                    } else {
                                        if (input[4] <= 20.16800022125244) {
                                            result[5] = 5.875;
                                        } else {
                                            result[5] = 5.666666666666667;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 20.512499809265137) {
                                    if (input[1] <= 0.75) {
                                        if (input[0] <= 0.6000000089406967) {
                                            result[5] = 6.0;
                                        } else {
                                            result[5] = 6.375;
                                        }
                                    } else {
                                        result[5] = 5.571428571428571;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[0] <= 0.5000000074505806) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 6.0;
                                        }
                                    } else {
                                        result[5] = 7.5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 20.41699981689453) {
                        if (input[3] <= 112.0) {
                            if (input[4] <= 18.799999237060547) {
                                if (input[2] <= 36.0) {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[5] = 5.625;
                                    } else {
                                        if (input[3] <= 72.0) {
                                            result[5] = 5.0;
                                        } else {
                                            result[5] = 4.571428571428571;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.498499870300293) {
                                        result[5] = 5.571428571428571;
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[5] = 6.103448275862069;
                                        } else {
                                            result[5] = 5.8;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 20.21799945831299) {
                                        if (input[3] <= 72.0) {
                                            result[5] = 5.78;
                                        } else {
                                            result[5] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 20.295000076293945) {
                                            result[5] = 7.375;
                                        } else {
                                            result[5] = 5.933333333333334;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[5] = 6.666666666666667;
                                        } else {
                                            result[5] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 20.07200050354004) {
                                            result[5] = 7.2;
                                        } else {
                                            result[5] = 6.333333333333333;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 60.0) {
                                    result[5] = 6.0;
                                } else {
                                    result[5] = 6.7;
                                }
                            } else {
                                if (input[4] <= 19.42650032043457) {
                                    if (input[2] <= 44.0) {
                                        result[5] = 6.857142857142857;
                                    } else {
                                        if (input[4] <= 19.07349967956543) {
                                            result[5] = 7.777777777777778;
                                        } else {
                                            result[5] = 7.5;
                                        }
                                    }
                                } else {
                                    result[5] = 5.875;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.7000000178813934) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 48.0) {
                                    result[5] = 5.888888888888889;
                                } else {
                                    result[5] = 7.0;
                                }
                            } else {
                                if (input[3] <= 112.0) {
                                    if (input[4] <= 20.621999740600586) {
                                        result[5] = 6.5;
                                    } else {
                                        result[5] = 7.0;
                                    }
                                } else {
                                    if (input[2] <= 52.0) {
                                        result[5] = 7.0;
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[5] = 7.7;
                                        } else {
                                            result[5] = 7.1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 60.0) {
                                if (input[4] <= 21.14299964904785) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[5] = 6.0;
                                    } else {
                                        if (input[4] <= 20.710000038146973) {
                                            result[5] = 7.230769230769231;
                                        } else {
                                            result[5] = 6.2727272727272725;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[5] = 6.0;
                                    } else {
                                        result[5] = 5.5;
                                    }
                                }
                            } else {
                                if (input[3] <= 88.0) {
                                    result[5] = 7.5;
                                } else {
                                    if (input[1] <= 0.75) {
                                        result[5] = 6.888888888888889;
                                    } else {
                                        result[5] = 6.333333333333333;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 26.09450054168701) {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 25.31350040435791) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 24.464499473571777) {
                                            result[5] = 5.0;
                                        } else {
                                            result[5] = 5.021739130434782;
                                        }
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[5] = 5.183673469387755;
                                        } else {
                                            result[5] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.82349967956543) {
                                        if (input[3] <= 24.0) {
                                            result[5] = 5.0;
                                        } else {
                                            result[5] = 5.708860759493671;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[5] = 5.948717948717949;
                                        } else {
                                            result[5] = 6.5;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 21.73050022125244) {
                                    result[5] = 7.181818181818182;
                                } else {
                                    if (input[4] <= 22.78200054168701) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[5] = 4.642857142857143;
                                        } else {
                                            result[5] = 5.382352941176471;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[5] = 5.655172413793103;
                                        } else {
                                            result[5] = 6.325;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 28.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 40.0) {
                                        result[5] = 5.0;
                                    } else {
                                        result[5] = 6.0;
                                    }
                                } else {
                                    result[5] = 6.846153846153846;
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 24.0) {
                                        if (input[4] <= 25.391000747680664) {
                                            result[5] = 5.857142857142857;
                                        } else {
                                            result[5] = 6.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[5] = 6.871794871794871;
                                        } else {
                                            result[5] = 6.241379310344827;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 44.0) {
                                        result[5] = 6.166666666666667;
                                    } else {
                                        result[5] = 7.583333333333333;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[4] <= 23.17650032043457) {
                                if (input[3] <= 12.0) {
                                    result[5] = 5.0;
                                } else {
                                    if (input[4] <= 22.930500030517578) {
                                        result[5] = 6.0;
                                    } else {
                                        result[5] = 5.666666666666667;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.550000011920929) {
                                    result[5] = 7.166666666666667;
                                } else {
                                    if (input[3] <= 12.0) {
                                        if (input[1] <= 0.75) {
                                            result[5] = 6.153846153846154;
                                        } else {
                                            result[5] = 5.764705882352941;
                                        }
                                    } else {
                                        if (input[4] <= 24.695499420166016) {
                                            result[5] = 6.25;
                                        } else {
                                            result[5] = 6.818181818181818;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 24.09000015258789) {
                                if (input[3] <= 40.0) {
                                    if (input[4] <= 22.85849952697754) {
                                        result[5] = 6.0;
                                    } else {
                                        result[5] = 7.0;
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[5] = 7.0;
                                    } else {
                                        result[5] = 7.384615384615385;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 25.239500045776367) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 8.0;
                                        }
                                    } else {
                                        result[5] = 8.0;
                                    }
                                } else {
                                    if (input[4] <= 25.577499389648438) {
                                        result[5] = 7.333333333333333;
                                    } else {
                                        result[5] = 7.0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 12.0) {
                        if (input[3] <= 112.0) {
                            if (input[4] <= 23.305500030517578) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 72.0) {
                                        result[5] = 5.0;
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[5] = 6.0;
                                        } else {
                                            result[5] = 5.157894736842105;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.6500000059604645) {
                                        result[5] = 6.285714285714286;
                                    } else {
                                        result[5] = 6.0;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 25.678500175476074) {
                                        result[5] = 6.0;
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[5] = 6.666666666666667;
                                        } else {
                                            result[5] = 6.0;
                                        }
                                    }
                                } else {
                                    result[5] = 7.0;
                                }
                            }
                        } else {
                            if (input[4] <= 24.767499923706055) {
                                if (input[1] <= 0.6500000059604645) {
                                    if (input[4] <= 23.317999839782715) {
                                        result[5] = 7.0;
                                    } else {
                                        result[5] = 7.857142857142857;
                                    }
                                } else {
                                    if (input[4] <= 22.25950050354004) {
                                        result[5] = 7.625;
                                    } else {
                                        result[5] = 6.5;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[5] = 8.0;
                                } else {
                                    result[5] = 7.6;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 22.67549991607666) {
                            if (input[3] <= 88.0) {
                                if (input[2] <= 44.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[3] <= 72.0) {
                                            result[5] = 5.605263157894737;
                                        } else {
                                            result[5] = 6.419354838709677;
                                        }
                                    } else {
                                        result[5] = 7.25;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 22.50749969482422) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 7.1;
                                        }
                                    } else {
                                        result[5] = 6.428571428571429;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 36.0) {
                                        if (input[4] <= 21.643500328063965) {
                                            result[5] = 6.5;
                                        } else {
                                            result[5] = 7.0;
                                        }
                                    } else {
                                        if (input[3] <= 112.0) {
                                            result[5] = 7.108108108108108;
                                        } else {
                                            result[5] = 7.686567164179104;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 22.339499473571777) {
                                        result[5] = 6.357142857142857;
                                    } else {
                                        result[5] = 7.0;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 72.0) {
                                        if (input[4] <= 23.61750030517578) {
                                            result[5] = 6.0;
                                        } else {
                                            result[5] = 6.88135593220339;
                                        }
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[5] = 7.189473684210526;
                                        } else {
                                            result[5] = 7.676579925650557;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.3435001373291) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[5] = 7.851351351351352;
                                        } else {
                                            result[5] = 7.309523809523809;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[5] = 8.0;
                                        } else {
                                            result[5] = 7.884615384615385;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 23.06999969482422) {
                                    if (input[4] <= 22.9089994430542) {
                                        result[5] = 6.714285714285714;
                                    } else {
                                        result[5] = 6.0;
                                    }
                                } else {
                                    if (input[1] <= 0.550000011920929) {
                                        if (input[3] <= 88.0) {
                                            result[5] = 7.555555555555555;
                                        } else {
                                            result[5] = 7.25;
                                        }
                                    } else {
                                        if (input[4] <= 24.667999267578125) {
                                            result[5] = 7.020833333333333;
                                        } else {
                                            result[5] = 6.571428571428571;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 29.8125) {
                    if (input[3] <= 24.0) {
                        if (input[2] <= 52.0) {
                            if (input[3] <= 12.0) {
                                if (input[4] <= 27.60599994659424) {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[5] = 6.0;
                                    } else {
                                        if (input[4] <= 26.36850070953369) {
                                            result[5] = 6.285714285714286;
                                        } else {
                                            result[5] = 5.2;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[5] = 6.0;
                                    } else {
                                        result[5] = 6.7272727272727275;
                                    }
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[5] = 6.0;
                                    } else {
                                        if (input[4] <= 26.76099967956543) {
                                            result[5] = 7.2727272727272725;
                                        } else {
                                            result[5] = 6.571428571428571;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.909500122070312) {
                                        result[5] = 6.6;
                                    } else {
                                        if (input[4] <= 29.21049976348877) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 7.2;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 28.86900043487549) {
                                if (input[2] <= 60.0) {
                                    if (input[3] <= 12.0) {
                                        if (input[4] <= 28.563499450683594) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 6.428571428571429;
                                        }
                                    } else {
                                        if (input[4] <= 27.104000091552734) {
                                            result[5] = 6.0;
                                        } else {
                                            result[5] = 6.142857142857143;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 12.0) {
                                        if (input[4] <= 28.256000518798828) {
                                            result[5] = 6.5;
                                        } else {
                                            result[5] = 7.0;
                                        }
                                    } else {
                                        if (input[4] <= 27.348999977111816) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 8.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 29.1564998626709) {
                                        if (input[4] <= 28.998499870300293) {
                                            result[5] = 7.8;
                                        } else {
                                            result[5] = 8.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 7.529411764705882;
                                        }
                                    }
                                } else {
                                    result[5] = 8.0;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 56.0) {
                            if (input[2] <= 28.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 29.479999542236328) {
                                        if (input[3] <= 40.0) {
                                            result[5] = 6.0;
                                        } else {
                                            result[5] = 6.3;
                                        }
                                    } else {
                                        result[5] = 7.363636363636363;
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 27.446999549865723) {
                                            result[5] = 7.818181818181818;
                                        } else {
                                            result[5] = 7.333333333333333;
                                        }
                                    } else {
                                        result[5] = 6.666666666666667;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 26.215999603271484) {
                                        result[5] = 6.333333333333333;
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[5] = 7.303030303030303;
                                        } else {
                                            result[5] = 7.622222222222222;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.926499366760254) {
                                        if (input[4] <= 26.811500549316406) {
                                            result[5] = 6.625;
                                        } else {
                                            result[5] = 6.117647058823529;
                                        }
                                    } else {
                                        result[5] = 7.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 27.71649932861328) {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 72.0) {
                                        result[5] = 6.0;
                                    } else {
                                        if (input[4] <= 27.492000579833984) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 7.6;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 27.107999801635742) {
                                            result[5] = 7.697916666666667;
                                        } else {
                                            result[5] = 7.235294117647059;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[5] = 7.166666666666667;
                                        } else {
                                            result[5] = 6.809523809523809;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 29.244999885559082) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 28.0) {
                                            result[5] = 7.916666666666667;
                                        } else {
                                            result[5] = 7.4;
                                        }
                                    } else {
                                        if (input[4] <= 28.131999969482422) {
                                            result[5] = 7.454545454545454;
                                        } else {
                                            result[5] = 6.888888888888889;
                                        }
                                    }
                                } else {
                                    result[5] = 7.0;
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 33.38599967956543) {
                        if (input[3] <= 24.0) {
                            if (input[2] <= 36.0) {
                                if (input[4] <= 30.36500072479248) {
                                    result[5] = 6.0;
                                } else {
                                    if (input[4] <= 30.984000205993652) {
                                        if (input[4] <= 30.635499954223633) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 7.75;
                                        }
                                    } else {
                                        if (input[4] <= 33.02199935913086) {
                                            result[5] = 7.005263157894737;
                                        } else {
                                            result[5] = 7.26530612244898;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 31.95300006866455) {
                                        if (input[4] <= 30.5625) {
                                            result[5] = 7.681818181818182;
                                        } else {
                                            result[5] = 7.364705882352941;
                                        }
                                    } else {
                                        result[5] = 8.0;
                                    }
                                } else {
                                    if (input[4] <= 31.66349983215332) {
                                        if (input[3] <= 12.0) {
                                            result[5] = 6.0;
                                        } else {
                                            result[5] = 6.6;
                                        }
                                    } else {
                                        result[5] = 7.0;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 32.4275016784668) {
                                    if (input[3] <= 40.0) {
                                        if (input[2] <= 20.0) {
                                            result[5] = 7.0;
                                        } else {
                                            result[5] = 7.6;
                                        }
                                    } else {
                                        if (input[4] <= 31.47000026702881) {
                                            result[5] = 7.6422018348623855;
                                        } else {
                                            result[5] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[5] = 8.0;
                                        } else {
                                            result[5] = 7.888888888888889;
                                        }
                                    } else {
                                        result[5] = 7.714285714285714;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[4] <= 32.09199905395508) {
                                        result[5] = 7.0;
                                    } else {
                                        result[5] = 7.571428571428571;
                                    }
                                } else {
                                    if (input[4] <= 30.83049964904785) {
                                        result[5] = 6.25;
                                    } else {
                                        result[5] = 6.5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[1] <= 0.8499999940395355) {
                                result[5] = 8.0;
                            } else {
                                if (input[4] <= 33.67300033569336) {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[5] = 8.0;
                                    } else {
                                        result[5] = 7.0;
                                    }
                                } else {
                                    if (input[4] <= 34.42900085449219) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[5] = 7.925925925925926;
                                        } else {
                                            result[5] = 7.5;
                                        }
                                    } else {
                                        result[5] = 8.0;
                                    }
                                }
                            }
                        } else {
                            result[5] = 6.75;
                        }
                    }
                }
            }
        }
    }

    if (input[4] <= 16.96799945831299) {
        if (input[4] <= 12.125500202178955) {
            if (input[4] <= 9.747499942779541) {
                if (input[4] <= 9.28600025177002) {
                    result[6] = 2.0;
                } else {
                    if (input[3] <= 112.0) {
                        if (input[2] <= 60.0) {
                            if (input[3] <= 72.0) {
                                result[6] = 2.0;
                            } else {
                                if (input[2] <= 36.0) {
                                    result[6] = 2.0;
                                } else {
                                    result[6] = 2.3;
                                }
                            }
                        } else {
                            if (input[0] <= 0.30000000447034836) {
                                result[6] = 2.5714285714285716;
                            } else {
                                result[6] = 2.0;
                            }
                        }
                    } else {
                        if (input[0] <= 0.7950000166893005) {
                            result[6] = 3.0;
                        } else {
                            result[6] = 2.0;
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[3] <= 40.0) {
                            if (input[4] <= 12.002500057220459) {
                                if (input[2] <= 44.0) {
                                    result[6] = 2.0;
                                } else {
                                    if (input[3] <= 24.0) {
                                        result[6] = 2.0;
                                    } else {
                                        result[6] = 2.2857142857142856;
                                    }
                                }
                            } else {
                                if (input[4] <= 12.037000179290771) {
                                    result[6] = 2.375;
                                } else {
                                    result[6] = 2.0;
                                }
                            }
                        } else {
                            if (input[4] <= 11.053499698638916) {
                                result[6] = 2.0;
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[6] = 3.0;
                                } else {
                                    result[6] = 2.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 10.417999744415283) {
                            result[6] = 2.5;
                        } else {
                            if (input[4] <= 11.799000263214111) {
                                result[6] = 3.0;
                            } else {
                                result[6] = 2.8333333333333335;
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[3] <= 112.0) {
                            if (input[2] <= 12.0) {
                                result[6] = 2.0;
                            } else {
                                if (input[4] <= 10.10349988937378) {
                                    if (input[2] <= 44.0) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[6] = 2.8;
                                        } else {
                                            result[6] = 2.0;
                                        }
                                    } else {
                                        result[6] = 3.0;
                                    }
                                } else {
                                    result[6] = 3.0;
                                }
                            }
                        } else {
                            if (input[2] <= 52.0) {
                                if (input[4] <= 11.389500141143799) {
                                    result[6] = 3.0;
                                } else {
                                    result[6] = 3.75;
                                }
                            } else {
                                if (input[4] <= 10.339999675750732) {
                                    result[6] = 3.0;
                                } else {
                                    result[6] = 5.6;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 10.783999919891357) {
                            result[6] = 2.0;
                        } else {
                            result[6] = 3.142857142857143;
                        }
                    }
                }
            }
        } else {
            if (input[3] <= 56.0) {
                if (input[2] <= 60.0) {
                    if (input[4] <= 16.148499488830566) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 44.0) {
                                if (input[4] <= 15.898000240325928) {
                                    if (input[4] <= 15.362500190734863) {
                                        result[6] = 3.0;
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[6] = 3.0;
                                        } else {
                                            result[6] = 3.1176470588235294;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        result[6] = 3.0;
                                    } else {
                                        result[6] = 3.75;
                                    }
                                }
                            } else {
                                if (input[4] <= 15.086999893188477) {
                                    if (input[4] <= 14.617000102996826) {
                                        result[6] = 3.0;
                                    } else {
                                        if (input[3] <= 32.0) {
                                            result[6] = 3.0;
                                        } else {
                                            result[6] = 3.7777777777777777;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[6] = 4.0;
                                    } else {
                                        result[6] = 3.6666666666666665;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 13.50950002670288) {
                                result[6] = 2.0;
                            } else {
                                result[6] = 3.0;
                            }
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            result[6] = 3.0;
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                if (input[4] <= 16.675999641418457) {
                                    result[6] = 4.0;
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[6] = 4.0;
                                    } else {
                                        result[6] = 5.0;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.75) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[6] = 4.0;
                                    } else {
                                        result[6] = 3.2666666666666666;
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        result[6] = 3.0;
                                    } else {
                                        result[6] = 3.2;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 15.844500064849854) {
                        if (input[3] <= 24.0) {
                            if (input[0] <= 0.8950000107288361) {
                                result[6] = 3.0;
                            } else {
                                result[6] = 3.125;
                            }
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                result[6] = 4.0;
                            } else {
                                if (input[4] <= 14.809000015258789) {
                                    if (input[3] <= 40.0) {
                                        result[6] = 3.0;
                                    } else {
                                        result[6] = 3.4285714285714284;
                                    }
                                } else {
                                    result[6] = 4.0;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 32.0) {
                            if (input[0] <= 0.7000000178813934) {
                                result[6] = 4.0;
                            } else {
                                result[6] = 3.75;
                            }
                        } else {
                            if (input[4] <= 16.564000129699707) {
                                result[6] = 4.875;
                            } else {
                                result[6] = 5.5;
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 15.07800006866455) {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 14.894000053405762) {
                                if (input[4] <= 12.333499908447266) {
                                    result[6] = 2.75;
                                } else {
                                    if (input[4] <= 14.311999797821045) {
                                        result[6] = 3.0;
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[6] = 3.0;
                                        } else {
                                            result[6] = 3.2;
                                        }
                                    }
                                }
                            } else {
                                result[6] = 3.5833333333333335;
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        result[6] = 3.0;
                                    } else {
                                        result[6] = 4.0;
                                    }
                                } else {
                                    result[6] = 4.0;
                                }
                            } else {
                                result[6] = 3.0;
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 44.0) {
                                    if (input[2] <= 36.0) {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[6] = 4.0;
                                        } else {
                                            result[6] = 3.5;
                                        }
                                    } else {
                                        result[6] = 3.0;
                                    }
                                } else {
                                    result[6] = 4.0;
                                }
                            } else {
                                if (input[4] <= 14.567999839782715) {
                                    if (input[4] <= 14.341500282287598) {
                                        result[6] = 4.0;
                                    } else {
                                        if (input[4] <= 14.436000347137451) {
                                            result[6] = 4.125;
                                        } else {
                                            result[6] = 4.0;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.5000000074505806) {
                                        result[6] = 5.0;
                                    } else {
                                        result[6] = 4.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 14.211499691009521) {
                                if (input[4] <= 13.836999893188477) {
                                    if (input[3] <= 88.0) {
                                        if (input[4] <= 13.574000358581543) {
                                            result[6] = 3.2;
                                        } else {
                                            result[6] = 3.0;
                                        }
                                    } else {
                                        result[6] = 3.0;
                                    }
                                } else {
                                    if (input[1] <= 0.6500000059604645) {
                                        result[6] = 3.8333333333333335;
                                    } else {
                                        if (input[4] <= 14.050000190734863) {
                                            result[6] = 3.2857142857142856;
                                        } else {
                                            result[6] = 3.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    result[6] = 3.2857142857142856;
                                } else {
                                    if (input[2] <= 60.0) {
                                        result[6] = 4.0;
                                    } else {
                                        result[6] = 4.5;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 36.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 16.788000106811523) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 16.585000038146973) {
                                        result[6] = 4.0;
                                    } else {
                                        result[6] = 4.333333333333333;
                                    }
                                } else {
                                    if (input[4] <= 16.12049961090088) {
                                        if (input[2] <= 20.0) {
                                            result[6] = 3.25;
                                        } else {
                                            result[6] = 3.1666666666666665;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[6] = 4.0;
                                        } else {
                                            result[6] = 3.5555555555555554;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 16.83049964904785) {
                                    result[6] = 4.8;
                                } else {
                                    result[6] = 4.555555555555555;
                                }
                            }
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                result[6] = 5.0;
                            } else {
                                if (input[4] <= 16.791000366210938) {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[6] = 4.0;
                                    } else {
                                        result[6] = 4.333333333333333;
                                    }
                                } else {
                                    result[6] = 5.2;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            result[6] = 5.0;
                        } else {
                            if (input[3] <= 88.0) {
                                if (input[2] <= 44.0) {
                                    if (input[4] <= 16.340999603271484) {
                                        result[6] = 3.75;
                                    } else {
                                        result[6] = 3.4;
                                    }
                                } else {
                                    if (input[2] <= 60.0) {
                                        result[6] = 4.153846153846154;
                                    } else {
                                        result[6] = 4.5;
                                    }
                                }
                            } else {
                                if (input[4] <= 15.89750051498413) {
                                    result[6] = 4.125;
                                } else {
                                    if (input[2] <= 60.0) {
                                        if (input[4] <= 16.369500160217285) {
                                            result[6] = 4.833333333333333;
                                        } else {
                                            result[6] = 5.166666666666667;
                                        }
                                    } else {
                                        result[6] = 5.7;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 21.53600025177002) {
            if (input[3] <= 56.0) {
                if (input[2] <= 44.0) {
                    if (input[4] <= 19.150500297546387) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[4] <= 17.26750087738037) {
                                result[6] = 3.8;
                            } else {
                                result[6] = 4.0;
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[4] <= 17.840499877929688) {
                                    result[6] = 3.25;
                                } else {
                                    result[6] = 3.0;
                                }
                            } else {
                                if (input[4] <= 18.854999542236328) {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[4] <= 18.357999801635742) {
                                            result[6] = 3.129032258064516;
                                        } else {
                                            result[6] = 3.526315789473684;
                                        }
                                    } else {
                                        if (input[4] <= 18.13949966430664) {
                                            result[6] = 4.0;
                                        } else {
                                            result[6] = 3.142857142857143;
                                        }
                                    }
                                } else {
                                    result[6] = 4.375;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 21.16349983215332) {
                                    if (input[2] <= 28.0) {
                                        result[6] = 4.0;
                                    } else {
                                        if (input[4] <= 20.54550075531006) {
                                            result[6] = 4.013513513513513;
                                        } else {
                                            result[6] = 4.666666666666667;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        result[6] = 4.0;
                                    } else {
                                        result[6] = 4.833333333333333;
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 20.316499710083008) {
                                        result[6] = 4.0;
                                    } else {
                                        if (input[4] <= 21.029500007629395) {
                                            result[6] = 4.714285714285714;
                                        } else {
                                            result[6] = 5.0;
                                        }
                                    }
                                } else {
                                    result[6] = 5.0;
                                }
                            }
                        } else {
                            if (input[2] <= 36.0) {
                                if (input[4] <= 19.420000076293945) {
                                    result[6] = 6.222222222222222;
                                } else {
                                    if (input[4] <= 20.65700054168701) {
                                        if (input[4] <= 19.74149990081787) {
                                            result[6] = 3.769230769230769;
                                        } else {
                                            result[6] = 4.651162790697675;
                                        }
                                    } else {
                                        if (input[4] <= 20.847999572753906) {
                                            result[6] = 6.636363636363637;
                                        } else {
                                            result[6] = 5.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 19.838500022888184) {
                                    result[6] = 4.75;
                                } else {
                                    if (input[4] <= 20.350499153137207) {
                                        result[6] = 7.714285714285714;
                                    } else {
                                        result[6] = 6.1;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 19.6589994430542) {
                        if (input[3] <= 24.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 60.0) {
                                    result[6] = 4.0;
                                } else {
                                    if (input[3] <= 12.0) {
                                        result[6] = 4.0;
                                    } else {
                                        result[6] = 4.857142857142857;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[4] <= 18.782999992370605) {
                                        result[6] = 6.1;
                                    } else {
                                        result[6] = 4.375;
                                    }
                                } else {
                                    if (input[4] <= 18.39900016784668) {
                                        result[6] = 3.2;
                                    } else {
                                        result[6] = 5.111111111111111;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 18.85349941253662) {
                                if (input[2] <= 60.0) {
                                    if (input[2] <= 52.0) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 4.090909090909091;
                                        }
                                    } else {
                                        if (input[4] <= 18.486499786376953) {
                                            result[6] = 4.0;
                                        } else {
                                            result[6] = 4.523809523809524;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.75) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[6] = 5.125;
                                        } else {
                                            result[6] = 6.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 4.428571428571429;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 40.0) {
                                    result[6] = 5.0;
                                } else {
                                    if (input[4] <= 19.20300006866455) {
                                        result[6] = 5.4;
                                    } else {
                                        result[6] = 6.4;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 21.407999992370605) {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[6] = 5.0;
                                    } else {
                                        result[6] = 4.8;
                                    }
                                } else {
                                    result[6] = 5.2;
                                }
                            } else {
                                if (input[1] <= 0.75) {
                                    result[6] = 5.916666666666667;
                                } else {
                                    result[6] = 5.0;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 60.0) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 20.717000007629395) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 5.25;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[6] = 5.8;
                                        } else {
                                            result[6] = 6.0;
                                        }
                                    }
                                } else {
                                    result[6] = 6.0;
                                }
                            } else {
                                if (input[4] <= 20.981499671936035) {
                                    if (input[3] <= 40.0) {
                                        result[6] = 7.5;
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[6] = 6.0;
                                        } else {
                                            result[6] = 7.0;
                                        }
                                    }
                                } else {
                                    result[6] = 6.0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 18.488500595092773) {
                    if (input[2] <= 44.0) {
                        if (input[3] <= 72.0) {
                            if (input[2] <= 28.0) {
                                if (input[1] <= 0.6500000059604645) {
                                    result[6] = 3.625;
                                } else {
                                    result[6] = 4.0;
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    if (input[0] <= 0.4000000134110451) {
                                        result[6] = 5.0;
                                    } else {
                                        result[6] = 4.444444444444445;
                                    }
                                } else {
                                    if (input[4] <= 17.993000030517578) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[6] = 5.4;
                                        } else {
                                            result[6] = 4.0;
                                        }
                                    } else {
                                        result[6] = 4.0;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 112.0) {
                                    if (input[2] <= 12.0) {
                                        result[6] = 4.0;
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[6] = 4.721311475409836;
                                        } else {
                                            result[6] = 5.032786885245901;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.03049945831299) {
                                        if (input[4] <= 17.59749984741211) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 5.384615384615385;
                                        }
                                    } else {
                                        result[6] = 6.0;
                                    }
                                }
                            } else {
                                if (input[3] <= 88.0) {
                                    if (input[2] <= 20.0) {
                                        result[6] = 5.857142857142857;
                                    } else {
                                        result[6] = 6.571428571428571;
                                    }
                                } else {
                                    if (input[3] <= 112.0) {
                                        if (input[4] <= 17.91950035095215) {
                                            result[6] = 5.75;
                                        } else {
                                            result[6] = 5.4;
                                        }
                                    } else {
                                        result[6] = 4.888888888888889;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 88.0) {
                            if (input[1] <= 0.75) {
                                if (input[0] <= 0.7000000178813934) {
                                    result[6] = 6.0;
                                } else {
                                    if (input[4] <= 17.55150032043457) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 6.428571428571429;
                                        }
                                    } else {
                                        result[6] = 4.9;
                                    }
                                }
                            } else {
                                if (input[4] <= 18.02400016784668) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 17.747499465942383) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 5.25;
                                        }
                                    } else {
                                        result[6] = 5.428571428571429;
                                    }
                                } else {
                                    result[6] = 6.0;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 17.764500617980957) {
                                    result[6] = 5.428571428571429;
                                } else {
                                    result[6] = 6.0;
                                }
                            } else {
                                if (input[2] <= 52.0) {
                                    result[6] = 6.866666666666666;
                                } else {
                                    result[6] = 6.1;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 20.398500442504883) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 12.0) {
                                        if (input[3] <= 72.0) {
                                            result[6] = 4.0;
                                        } else {
                                            result[6] = 5.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 4.8;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        if (input[4] <= 19.513500213623047) {
                                            result[6] = 4.6;
                                        } else {
                                            result[6] = 5.333333333333333;
                                        }
                                    } else {
                                        result[6] = 6.142857142857143;
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 72.0) {
                                        result[6] = 7.0;
                                    } else {
                                        result[6] = 5.857142857142857;
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        if (input[4] <= 20.8464994430542) {
                                            result[6] = 5.4;
                                        } else {
                                            result[6] = 6.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 5.75;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 112.0) {
                                    if (input[4] <= 20.664999961853027) {
                                        result[6] = 4.285714285714286;
                                    } else {
                                        result[6] = 5.0;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 20.677499771118164) {
                                            result[6] = 6.0;
                                        } else {
                                            result[6] = 6.25;
                                        }
                                    } else {
                                        result[6] = 5.333333333333333;
                                    }
                                }
                            } else {
                                if (input[4] <= 20.710000038146973) {
                                    if (input[4] <= 19.380499839782715) {
                                        if (input[4] <= 18.95800018310547) {
                                            result[6] = 5.7272727272727275;
                                        } else {
                                            result[6] = 6.571428571428571;
                                        }
                                    } else {
                                        if (input[4] <= 20.049500465393066) {
                                            result[6] = 6.0256410256410255;
                                        } else {
                                            result[6] = 5.8125;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[4] <= 20.998499870300293) {
                                            result[6] = 7.333333333333333;
                                        } else {
                                            result[6] = 6.4;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[6] = 6.666666666666667;
                                        } else {
                                            result[6] = 5.571428571428571;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 20.625) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 20.166500091552734) {
                                    if (input[3] <= 72.0) {
                                        if (input[2] <= 44.0) {
                                            result[6] = 5.2;
                                        } else {
                                            result[6] = 6.0;
                                        }
                                    } else {
                                        if (input[3] <= 112.0) {
                                            result[6] = 6.0;
                                        } else {
                                            result[6] = 6.148148148148148;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        if (input[3] <= 88.0) {
                                            result[6] = 6.666666666666667;
                                        } else {
                                            result[6] = 7.0;
                                        }
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[6] = 5.96875;
                                        } else {
                                            result[6] = 6.333333333333333;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 112.0) {
                                    if (input[4] <= 19.042500495910645) {
                                        if (input[4] <= 18.673500061035156) {
                                            result[6] = 6.333333333333333;
                                        } else {
                                            result[6] = 7.2;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[6] = 6.5;
                                        } else {
                                            result[6] = 5.733333333333333;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 20.17899990081787) {
                                        if (input[2] <= 60.0) {
                                            result[6] = 7.5;
                                        } else {
                                            result[6] = 6.6;
                                        }
                                    } else {
                                        result[6] = 6.0;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 88.0) {
                                if (input[2] <= 52.0) {
                                    if (input[4] <= 20.99899959564209) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[6] = 5.75;
                                        } else {
                                            result[6] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 21.16100025177002) {
                                            result[6] = 7.333333333333333;
                                        } else {
                                            result[6] = 6.181818181818182;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 60.0) {
                                        result[6] = 6.777777777777778;
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[6] = 7.0;
                                        } else {
                                            result[6] = 7.25;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 21.051000595092773) {
                                    if (input[1] <= 0.550000011920929) {
                                        if (input[4] <= 20.94600009918213) {
                                            result[6] = 7.0;
                                        } else {
                                            result[6] = 7.8125;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[6] = 6.918918918918919;
                                        } else {
                                            result[6] = 7.705882352941177;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[2] <= 60.0) {
                                            result[6] = 7.0;
                                        } else {
                                            result[6] = 7.285714285714286;
                                        }
                                    } else {
                                        result[6] = 6.375;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 29.78749942779541) {
                if (input[3] <= 56.0) {
                    if (input[4] <= 25.311500549316406) {
                        if (input[2] <= 60.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 24.410500526428223) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 5.085106382978723;
                                        }
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[6] = 5.090909090909091;
                                        } else {
                                            result[6] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.923999786376953) {
                                        if (input[3] <= 24.0) {
                                            result[6] = 5.0;
                                        } else {
                                            result[6] = 5.766666666666667;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[6] = 5.964912280701754;
                                        } else {
                                            result[6] = 6.761904761904762;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 24.19950008392334) {
                                    if (input[4] <= 22.7475004196167) {
                                        if (input[4] <= 21.96049976348877) {
                                            result[6] = 6.4375;
                                        } else {
                                            result[6] = 5.260869565217392;
                                        }
                                    } else {
                                        if (input[4] <= 22.831000328063965) {
                                            result[6] = 7.5;
                                        } else {
                                            result[6] = 6.338028169014085;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 12.0) {
                                        result[6] = 5.2727272727272725;
                                    } else {
                                        if (input[4] <= 24.558000564575195) {
                                            result[6] = 5.166666666666667;
                                        } else {
                                            result[6] = 5.848484848484849;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[3] <= 12.0) {
                                    if (input[4] <= 23.94200038909912) {
                                        result[6] = 5.0;
                                    } else {
                                        result[6] = 5.444444444444445;
                                    }
                                } else {
                                    if (input[4] <= 23.288000106811523) {
                                        if (input[4] <= 22.5310001373291) {
                                            result[6] = 6.2;
                                        } else {
                                            result[6] = 5.9375;
                                        }
                                    } else {
                                        result[6] = 6.6;
                                    }
                                }
                            } else {
                                if (input[3] <= 40.0) {
                                    if (input[4] <= 22.88599967956543) {
                                        if (input[4] <= 21.762499809265137) {
                                            result[6] = 5.875;
                                        } else {
                                            result[6] = 6.0;
                                        }
                                    } else {
                                        result[6] = 7.0;
                                    }
                                } else {
                                    if (input[4] <= 24.33799934387207) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[6] = 7.115384615384615;
                                        } else {
                                            result[6] = 7.5;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[6] = 7.75;
                                        } else {
                                            result[6] = 8.0;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 25.893500328063965) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[6] = 5.0;
                                    } else {
                                        result[6] = 5.5;
                                    }
                                } else {
                                    if (input[4] <= 26.33199977874756) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[6] = 5.6;
                                        } else {
                                            result[6] = 6.6;
                                        }
                                    } else {
                                        if (input[4] <= 26.9714994430542) {
                                            result[6] = 5.714285714285714;
                                        } else {
                                            result[6] = 6.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 28.5310001373291) {
                                            result[6] = 6.0636363636363635;
                                        } else {
                                            result[6] = 6.684210526315789;
                                        }
                                    } else {
                                        if (input[4] <= 26.942999839782715) {
                                            result[6] = 7.615384615384615;
                                        } else {
                                            result[6] = 6.666666666666667;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.20549964904785) {
                                        if (input[3] <= 40.0) {
                                            result[6] = 6.033333333333333;
                                        } else {
                                            result[6] = 7.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[6] = 7.439024390243903;
                                        } else {
                                            result[6] = 6.454545454545454;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 12.0) {
                                if (input[4] <= 28.042999267578125) {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[2] <= 52.0) {
                                            result[6] = 5.791666666666667;
                                        } else {
                                            result[6] = 6.193548387096774;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[6] = 6.0;
                                        } else {
                                            result[6] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 29.26799964904785) {
                                        if (input[1] <= 0.550000011920929) {
                                            result[6] = 7.222222222222222;
                                        } else {
                                            result[6] = 6.938775510204081;
                                        }
                                    } else {
                                        if (input[4] <= 29.538000106811523) {
                                            result[6] = 8.0;
                                        } else {
                                            result[6] = 7.5;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 27.102500915527344) {
                                    if (input[2] <= 60.0) {
                                        if (input[3] <= 24.0) {
                                            result[6] = 6.333333333333333;
                                        } else {
                                            result[6] = 7.05;
                                        }
                                    } else {
                                        if (input[3] <= 24.0) {
                                            result[6] = 7.0;
                                        } else {
                                            result[6] = 7.6875;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 60.0) {
                                            result[6] = 7.571428571428571;
                                        } else {
                                            result[6] = 7.9375;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[6] = 7.0;
                                        } else {
                                            result[6] = 6.5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 23.34500026702881) {
                        if (input[2] <= 28.0) {
                            if (input[3] <= 112.0) {
                                if (input[4] <= 22.284500122070312) {
                                    if (input[4] <= 21.772500038146973) {
                                        if (input[4] <= 21.748000144958496) {
                                            result[6] = 6.142857142857143;
                                        } else {
                                            result[6] = 5.666666666666667;
                                        }
                                    } else {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[6] = 5.5;
                                        } else {
                                            result[6] = 5.107142857142857;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 88.0) {
                                        if (input[2] <= 12.0) {
                                            result[6] = 5.555555555555555;
                                        } else {
                                            result[6] = 6.046511627906977;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[6] = 6.636363636363637;
                                        } else {
                                            result[6] = 7.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.10000000149011612) {
                                    if (input[4] <= 22.454999923706055) {
                                        result[6] = 7.0;
                                    } else {
                                        result[6] = 8.0;
                                    }
                                } else {
                                    if (input[4] <= 22.115500450134277) {
                                        result[6] = 7.571428571428571;
                                    } else {
                                        if (input[4] <= 22.93400001525879) {
                                            result[6] = 7.0;
                                        } else {
                                            result[6] = 6.7;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 112.0) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 72.0) {
                                        if (input[2] <= 36.0) {
                                            result[6] = 5.933333333333334;
                                        } else {
                                            result[6] = 5.3125;
                                        }
                                    } else {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[6] = 7.044776119402985;
                                        } else {
                                            result[6] = 6.571428571428571;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 22.672999382019043) {
                                            result[6] = 7.030612244897959;
                                        } else {
                                            result[6] = 7.531645569620253;
                                        }
                                    } else {
                                        if (input[1] <= 0.7999999821186066) {
                                            result[6] = 6.777777777777778;
                                        } else {
                                            result[6] = 6.133333333333334;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[6] = 8.0;
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[6] = 7.386363636363637;
                                        } else {
                                            result[6] = 7.903225806451613;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 22.704999923706055) {
                                        result[6] = 6.3;
                                    } else {
                                        result[6] = 7.0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 44.0) {
                                if (input[3] <= 72.0) {
                                    if (input[4] <= 25.949499130249023) {
                                        if (input[2] <= 36.0) {
                                            result[6] = 6.630769230769231;
                                        } else {
                                            result[6] = 6.0;
                                        }
                                    } else {
                                        if (input[2] <= 12.0) {
                                            result[6] = 6.5813953488372094;
                                        } else {
                                            result[6] = 7.532051282051282;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        if (input[4] <= 27.69200038909912) {
                                            result[6] = 7.3017751479289945;
                                        } else {
                                            result[6] = 7.898305084745763;
                                        }
                                    } else {
                                        if (input[4] <= 24.194499969482422) {
                                            result[6] = 7.607142857142857;
                                        } else {
                                            result[6] = 7.950617283950617;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[6] = 8.0;
                                } else {
                                    if (input[4] <= 23.901500701904297) {
                                        if (input[3] <= 72.0) {
                                            result[6] = 7.0;
                                        } else {
                                            result[6] = 7.875;
                                        }
                                    } else {
                                        result[6] = 8.0;
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.75) {
                                if (input[3] <= 112.0) {
                                    if (input[4] <= 23.935999870300293) {
                                        result[6] = 7.625;
                                    } else {
                                        if (input[3] <= 72.0) {
                                            result[6] = 7.055555555555555;
                                        } else {
                                            result[6] = 7.238095238095238;
                                        }
                                    }
                                } else {
                                    result[6] = 6.636363636363637;
                                }
                            } else {
                                if (input[3] <= 88.0) {
                                    if (input[4] <= 24.157999992370605) {
                                        result[6] = 6.133333333333334;
                                    } else {
                                        if (input[2] <= 36.0) {
                                            result[6] = 6.375;
                                        } else {
                                            result[6] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 24.078499794006348) {
                                        result[6] = 7.3;
                                    } else {
                                        if (input[4] <= 24.866999626159668) {
                                            result[6] = 6.461538461538462;
                                        } else {
                                            result[6] = 6.625;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 33.38300132751465) {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[3] <= 24.0) {
                            if (input[2] <= 36.0) {
                                if (input[4] <= 30.62150001525879) {
                                    if (input[4] <= 30.185500144958496) {
                                        result[6] = 6.0;
                                    } else {
                                        result[6] = 6.166666666666667;
                                    }
                                } else {
                                    if (input[4] <= 33.058000564575195) {
                                        if (input[4] <= 32.41749954223633) {
                                            result[6] = 7.0;
                                        } else {
                                            result[6] = 7.1923076923076925;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[6] = 7.105263157894737;
                                        } else {
                                            result[6] = 8.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 31.386500358581543) {
                                    if (input[2] <= 60.0) {
                                        if (input[2] <= 44.0) {
                                            result[6] = 7.166666666666667;
                                        } else {
                                            result[6] = 7.45945945945946;
                                        }
                                    } else {
                                        result[6] = 8.0;
                                    }
                                } else {
                                    if (input[4] <= 31.951499938964844) {
                                        if (input[1] <= 0.75) {
                                            result[6] = 8.0;
                                        } else {
                                            result[6] = 7.65;
                                        }
                                    } else {
                                        result[6] = 8.0;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 56.0) {
                                if (input[4] <= 32.4275016784668) {
                                    if (input[2] <= 12.0) {
                                        if (input[4] <= 32.18950080871582) {
                                            result[6] = 7.0;
                                        } else {
                                            result[6] = 7.333333333333333;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[6] = 7.733333333333333;
                                        } else {
                                            result[6] = 7.521739130434782;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[6] = 8.0;
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[6] = 7.5;
                                        } else {
                                            result[6] = 8.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 30.06849956512451) {
                                    result[6] = 7.4;
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[6] = 8.0;
                                    } else {
                                        result[6] = 7.818181818181818;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 20.0) {
                            if (input[3] <= 12.0) {
                                result[6] = 7.75;
                            } else {
                                if (input[4] <= 31.431499481201172) {
                                    result[6] = 6.444444444444445;
                                } else {
                                    result[6] = 7.111111111111111;
                                }
                            }
                        } else {
                            if (input[4] <= 31.12049961090088) {
                                if (input[4] <= 30.00950050354004) {
                                    result[6] = 7.0;
                                } else {
                                    result[6] = 7.0;
                                }
                            } else {
                                if (input[4] <= 31.654000282287598) {
                                    result[6] = 6.111111111111111;
                                } else {
                                    if (input[2] <= 36.0) {
                                        if (input[3] <= 12.0) {
                                            result[6] = 6.166666666666667;
                                        } else {
                                            result[6] = 6.75;
                                        }
                                    } else {
                                        result[6] = 7.0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.7000000178813934) {
                        if (input[1] <= 0.9249999821186066) {
                            result[6] = 8.0;
                        } else {
                            if (input[4] <= 33.70800018310547) {
                                result[6] = 7.666666666666667;
                            } else {
                                if (input[2] <= 12.0) {
                                    result[6] = 7.9;
                                } else {
                                    result[6] = 8.0;
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 33.87700080871582) {
                            if (input[1] <= 0.75) {
                                result[6] = 7.8;
                            } else {
                                result[6] = 6.857142857142857;
                            }
                        } else {
                            if (input[4] <= 34.278499603271484) {
                                if (input[4] <= 33.984500885009766) {
                                    result[6] = 8.0;
                                } else {
                                    result[6] = 7.333333333333333;
                                }
                            } else {
                                result[6] = 8.0;
                            }
                        }
                    }
                }
            }
        }
    }

    if (input[4] <= 16.989500045776367) {
        if (input[4] <= 12.041500091552734) {
            if (input[4] <= 9.766499996185303) {
                if (input[4] <= 9.453500270843506) {
                    if (input[4] <= 9.266499996185303) {
                        result[7] = 2.0;
                    } else {
                        if (input[3] <= 112.0) {
                            result[7] = 2.0;
                        } else {
                            result[7] = 2.75;
                        }
                    }
                } else {
                    if (input[3] <= 112.0) {
                        if (input[3] <= 88.0) {
                            result[7] = 2.0;
                        } else {
                            if (input[0] <= 0.30000000447034836) {
                                result[7] = 2.8;
                            } else {
                                result[7] = 2.0;
                            }
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            result[7] = 2.2;
                        } else {
                            result[7] = 3.0;
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 11.41100025177002) {
                            if (input[3] <= 40.0) {
                                result[7] = 2.0;
                            } else {
                                if (input[4] <= 11.17549991607666) {
                                    result[7] = 2.0;
                                } else {
                                    result[7] = 2.5;
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                result[7] = 2.0;
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[7] = 3.0;
                                } else {
                                    result[7] = 2.0;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[4] <= 10.377500057220459) {
                                result[7] = 2.0;
                            } else {
                                result[7] = 2.3333333333333335;
                            }
                        } else {
                            if (input[4] <= 10.531999588012695) {
                                result[7] = 2.75;
                            } else {
                                result[7] = 3.0;
                            }
                        }
                    }
                } else {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[2] <= 12.0) {
                            if (input[3] <= 112.0) {
                                if (input[4] <= 10.36549997329712) {
                                    result[7] = 2.0;
                                } else {
                                    result[7] = 2.2857142857142856;
                                }
                            } else {
                                result[7] = 3.0;
                            }
                        } else {
                            if (input[4] <= 11.863500118255615) {
                                if (input[1] <= 0.550000011920929) {
                                    if (input[0] <= 0.30000000447034836) {
                                        if (input[3] <= 88.0) {
                                            result[7] = 3.0;
                                        } else {
                                            result[7] = 4.714285714285714;
                                        }
                                    } else {
                                        result[7] = 3.0;
                                    }
                                } else {
                                    if (input[4] <= 9.860000133514404) {
                                        if (input[3] <= 72.0) {
                                            result[7] = 2.3333333333333335;
                                        } else {
                                            result[7] = 3.0;
                                        }
                                    } else {
                                        if (input[4] <= 10.102499961853027) {
                                            result[7] = 2.9558823529411766;
                                        } else {
                                            result[7] = 3.0;
                                        }
                                    }
                                }
                            } else {
                                result[7] = 3.6363636363636362;
                            }
                        }
                    } else {
                        result[7] = 2.0;
                    }
                }
            }
        } else {
            if (input[3] <= 56.0) {
                if (input[2] <= 60.0) {
                    if (input[4] <= 16.085000038146973) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 44.0) {
                                if (input[4] <= 15.973999977111816) {
                                    result[7] = 3.0;
                                } else {
                                    if (input[2] <= 28.0) {
                                        result[7] = 3.0;
                                    } else {
                                        result[7] = 3.4285714285714284;
                                    }
                                }
                            } else {
                                if (input[4] <= 15.074999809265137) {
                                    if (input[4] <= 14.607500076293945) {
                                        result[7] = 3.0;
                                    } else {
                                        if (input[3] <= 32.0) {
                                            result[7] = 3.0;
                                        } else {
                                            result[7] = 3.6666666666666665;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[7] = 4.0;
                                    } else {
                                        result[7] = 3.8333333333333335;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 13.499499797821045) {
                                result[7] = 2.0;
                            } else {
                                result[7] = 3.0;
                            }
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            result[7] = 3.0;
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 24.0) {
                                    result[7] = 3.4444444444444446;
                                } else {
                                    result[7] = 4.0;
                                }
                            } else {
                                if (input[4] <= 16.88350009918213) {
                                    result[7] = 3.0;
                                } else {
                                    result[7] = 3.75;
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 16.00349998474121) {
                        if (input[3] <= 24.0) {
                            if (input[4] <= 14.35099983215332) {
                                result[7] = 3.0;
                            } else {
                                result[7] = 3.3;
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 13.938000202178955) {
                                    result[7] = 3.7142857142857144;
                                } else {
                                    result[7] = 4.0;
                                }
                            } else {
                                if (input[4] <= 14.707000255584717) {
                                    result[7] = 3.111111111111111;
                                } else {
                                    result[7] = 3.8;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 40.0) {
                            result[7] = 4.0;
                        } else {
                            if (input[4] <= 16.641000747680664) {
                                result[7] = 4.9;
                            } else {
                                result[7] = 5.857142857142857;
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 15.113999843597412) {
                    if (input[3] <= 72.0) {
                        if (input[2] <= 44.0) {
                            if (input[4] <= 14.892999649047852) {
                                if (input[0] <= 0.10000000149011612) {
                                    if (input[4] <= 14.05400037765503) {
                                        result[7] = 3.0;
                                    } else {
                                        result[7] = 3.5714285714285716;
                                    }
                                } else {
                                    if (input[4] <= 12.319499969482422) {
                                        result[7] = 2.875;
                                    } else {
                                        if (input[1] <= 0.550000011920929) {
                                            result[7] = 3.076923076923077;
                                        } else {
                                            result[7] = 3.0;
                                        }
                                    }
                                }
                            } else {
                                result[7] = 3.5;
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                result[7] = 4.0;
                            } else {
                                if (input[4] <= 14.148499965667725) {
                                    result[7] = 3.0;
                                } else {
                                    result[7] = 3.4;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 28.0) {
                                if (input[3] <= 88.0) {
                                    if (input[4] <= 14.657999992370605) {
                                        if (input[4] <= 14.311999797821045) {
                                            result[7] = 3.0;
                                        } else {
                                            result[7] = 3.4;
                                        }
                                    } else {
                                        result[7] = 4.0;
                                    }
                                } else {
                                    if (input[2] <= 12.0) {
                                        if (input[3] <= 112.0) {
                                            result[7] = 3.0;
                                        } else {
                                            result[7] = 4.0;
                                        }
                                    } else {
                                        result[7] = 4.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 14.275499820709229) {
                                    result[7] = 4.0;
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[7] = 5.375;
                                    } else {
                                        if (input[4] <= 14.931000232696533) {
                                            result[7] = 4.0;
                                        } else {
                                            result[7] = 4.25;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 36.0) {
                                if (input[1] <= 0.75) {
                                    result[7] = 3.0;
                                } else {
                                    if (input[3] <= 112.0) {
                                        result[7] = 3.0;
                                    } else {
                                        result[7] = 3.3333333333333335;
                                    }
                                }
                            } else {
                                if (input[4] <= 14.218499660491943) {
                                    if (input[3] <= 112.0) {
                                        if (input[4] <= 13.91349983215332) {
                                            result[7] = 3.0;
                                        } else {
                                            result[7] = 3.272727272727273;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[7] = 3.9375;
                                        } else {
                                            result[7] = 3.2857142857142856;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 14.605000019073486) {
                                        result[7] = 4.888888888888889;
                                    } else {
                                        result[7] = 4.0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 16.126500129699707) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[7] = 4.0;
                                } else {
                                    if (input[4] <= 15.73449993133545) {
                                        result[7] = 3.2;
                                    } else {
                                        result[7] = 3.0;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[7] = 4.0;
                                } else {
                                    result[7] = 5.6;
                                }
                            }
                        } else {
                            if (input[4] <= 15.931000232696533) {
                                result[7] = 4.0;
                            } else {
                                if (input[2] <= 20.0) {
                                    if (input[0] <= 0.7950000166893005) {
                                        result[7] = 5.0;
                                    } else {
                                        if (input[4] <= 16.33300018310547) {
                                            result[7] = 4.0;
                                        } else {
                                            result[7] = 3.6666666666666665;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 16.721500396728516) {
                                        if (input[3] <= 112.0) {
                                            result[7] = 4.25;
                                        } else {
                                            result[7] = 5.4;
                                        }
                                    } else {
                                        result[7] = 6.2;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[4] <= 15.19700002670288) {
                                result[7] = 4.75;
                            } else {
                                if (input[2] <= 36.0) {
                                    if (input[4] <= 15.863500118255615) {
                                        result[7] = 4.714285714285714;
                                    } else {
                                        result[7] = 5.0;
                                    }
                                } else {
                                    result[7] = 5.0;
                                }
                            }
                        } else {
                            if (input[2] <= 44.0) {
                                if (input[2] <= 36.0) {
                                    result[7] = 4.0;
                                } else {
                                    result[7] = 3.625;
                                }
                            } else {
                                if (input[4] <= 15.933000087738037) {
                                    if (input[4] <= 15.580999851226807) {
                                        result[7] = 4.0;
                                    } else {
                                        result[7] = 4.333333333333333;
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[7] = 5.444444444444445;
                                    } else {
                                        result[7] = 4.4;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 21.017499923706055) {
            if (input[3] <= 56.0) {
                if (input[2] <= 44.0) {
                    if (input[4] <= 19.123499870300293) {
                        if (input[0] <= 0.8950000107288361) {
                            result[7] = 4.0;
                        } else {
                            if (input[3] <= 40.0) {
                                if (input[1] <= 0.9249999821186066) {
                                    if (input[3] <= 24.0) {
                                        if (input[4] <= 18.357999801635742) {
                                            result[7] = 3.0;
                                        } else {
                                            result[7] = 3.1176470588235294;
                                        }
                                    } else {
                                        if (input[4] <= 18.18400001525879) {
                                            result[7] = 3.176470588235294;
                                        } else {
                                            result[7] = 3.6666666666666665;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.373000144958496) {
                                        result[7] = 4.666666666666667;
                                    } else {
                                        result[7] = 3.375;
                                    }
                                }
                            } else {
                                if (input[4] <= 18.420000076293945) {
                                    if (input[4] <= 17.335500717163086) {
                                        result[7] = 3.2;
                                    } else {
                                        result[7] = 3.6363636363636362;
                                    }
                                } else {
                                    result[7] = 4.833333333333333;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 40.0) {
                                if (input[2] <= 28.0) {
                                    result[7] = 4.0;
                                } else {
                                    if (input[4] <= 20.569000244140625) {
                                        if (input[4] <= 20.33199977874756) {
                                            result[7] = 4.0;
                                        } else {
                                            result[7] = 4.222222222222222;
                                        }
                                    } else {
                                        result[7] = 4.875;
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 20.333999633789062) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[7] = 4.125;
                                        } else {
                                            result[7] = 4.0;
                                        }
                                    } else {
                                        result[7] = 4.714285714285714;
                                    }
                                } else {
                                    result[7] = 5.0;
                                }
                            }
                        } else {
                            if (input[2] <= 36.0) {
                                if (input[1] <= 0.9249999821186066) {
                                    if (input[4] <= 19.482500076293945) {
                                        result[7] = 6.571428571428571;
                                    } else {
                                        if (input[2] <= 12.0) {
                                            result[7] = 3.9166666666666665;
                                        } else {
                                            result[7] = 5.102564102564102;
                                        }
                                    }
                                } else {
                                    result[7] = 3.8181818181818183;
                                }
                            } else {
                                if (input[4] <= 19.841500282287598) {
                                    result[7] = 4.875;
                                } else {
                                    if (input[1] <= 0.75) {
                                        result[7] = 7.285714285714286;
                                    } else {
                                        result[7] = 5.75;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 19.055500030517578) {
                        if (input[3] <= 24.0) {
                            if (input[2] <= 60.0) {
                                if (input[4] <= 18.365500450134277) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[7] = 4.0;
                                    } else {
                                        result[7] = 3.3333333333333335;
                                    }
                                } else {
                                    if (input[4] <= 18.619500160217285) {
                                        result[7] = 4.8;
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[7] = 4.0;
                                        } else {
                                            result[7] = 4.285714285714286;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[0] <= 0.10000000149011612) {
                                        result[7] = 4.444444444444445;
                                    } else {
                                        result[7] = 4.0;
                                    }
                                } else {
                                    result[7] = 5.25;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 60.0) {
                                    if (input[2] <= 52.0) {
                                        if (input[4] <= 17.67099952697754) {
                                            result[7] = 4.3;
                                        } else {
                                            result[7] = 5.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[7] = 4.285714285714286;
                                        } else {
                                            result[7] = 4.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.727499961853027) {
                                        result[7] = 5.0;
                                    } else {
                                        result[7] = 5.166666666666667;
                                    }
                                }
                            } else {
                                if (input[3] <= 40.0) {
                                    if (input[4] <= 18.0) {
                                        result[7] = 5.444444444444445;
                                    } else {
                                        result[7] = 4.428571428571429;
                                    }
                                } else {
                                    result[7] = 6.8;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 40.0) {
                                if (input[4] <= 19.602999687194824) {
                                    if (input[3] <= 24.0) {
                                        if (input[2] <= 60.0) {
                                            result[7] = 4.0;
                                        } else {
                                            result[7] = 5.0;
                                        }
                                    } else {
                                        result[7] = 5.0;
                                    }
                                } else {
                                    if (input[0] <= 0.10000000149011612) {
                                        result[7] = 5.4;
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[7] = 4.857142857142857;
                                        } else {
                                            result[7] = 5.0227272727272725;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 20.1560001373291) {
                                        result[7] = 5.5;
                                    } else {
                                        result[7] = 5.375;
                                    }
                                } else {
                                    result[7] = 6.0;
                                }
                            }
                        } else {
                            if (input[1] <= 0.8499999940395355) {
                                if (input[4] <= 19.78250026702881) {
                                    if (input[1] <= 0.550000011920929) {
                                        result[7] = 7.25;
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[7] = 4.714285714285714;
                                        } else {
                                            result[7] = 5.5;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 52.0) {
                                        result[7] = 7.75;
                                    } else {
                                        if (input[3] <= 24.0) {
                                            result[7] = 5.5;
                                        } else {
                                            result[7] = 7.0;
                                        }
                                    }
                                }
                            } else {
                                result[7] = 4.714285714285714;
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 18.77400016784668) {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 112.0) {
                            if (input[2] <= 12.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 18.660499572753906) {
                                        result[7] = 4.0;
                                    } else {
                                        result[7] = 4.166666666666667;
                                    }
                                } else {
                                    if (input[3] <= 72.0) {
                                        result[7] = 3.7142857142857144;
                                    } else {
                                        result[7] = 5.75;
                                    }
                                }
                            } else {
                                if (input[3] <= 88.0) {
                                    if (input[4] <= 18.232500076293945) {
                                        if (input[2] <= 20.0) {
                                            result[7] = 4.473684210526316;
                                        } else {
                                            result[7] = 4.032258064516129;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[7] = 4.565217391304348;
                                        } else {
                                            result[7] = 6.666666666666667;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 17.97949981689453) {
                                        result[7] = 5.0;
                                    } else {
                                        result[7] = 5.666666666666667;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 18.178499221801758) {
                                if (input[4] <= 17.722500801086426) {
                                    if (input[2] <= 12.0) {
                                        result[7] = 5.142857142857143;
                                    } else {
                                        result[7] = 5.0;
                                    }
                                } else {
                                    result[7] = 4.777777777777778;
                                }
                            } else {
                                if (input[4] <= 18.500999450683594) {
                                    result[7] = 6.0;
                                } else {
                                    result[7] = 5.777777777777778;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 72.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[2] <= 36.0) {
                                        result[7] = 5.0;
                                    } else {
                                        result[7] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 18.07100009918213) {
                                        result[7] = 5.0;
                                    } else {
                                        result[7] = 6.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 18.077500343322754) {
                                    if (input[2] <= 48.0) {
                                        result[7] = 7.6;
                                    } else {
                                        result[7] = 6.333333333333333;
                                    }
                                } else {
                                    result[7] = 4.666666666666667;
                                }
                            }
                        } else {
                            if (input[4] <= 17.48799991607666) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 112.0) {
                                        result[7] = 5.0;
                                    } else {
                                        result[7] = 5.166666666666667;
                                    }
                                } else {
                                    if (input[4] <= 17.246000289916992) {
                                        result[7] = 7.25;
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 4.833333333333333;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 18.15700054168701) {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[4] <= 17.66450023651123) {
                                            result[7] = 5.666666666666667;
                                        } else {
                                            result[7] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 17.619500160217285) {
                                            result[7] = 6.333333333333333;
                                        } else {
                                            result[7] = 5.190476190476191;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 36.0) {
                                        if (input[0] <= 0.7950000166893005) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 5.25;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 6.6875;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 20.75100040435791) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 20.06599998474121) {
                                        if (input[2] <= 12.0) {
                                            result[7] = 4.666666666666667;
                                        } else {
                                            result[7] = 5.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[7] = 5.75;
                                        } else {
                                            result[7] = 5.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 19.731999397277832) {
                                        result[7] = 6.8;
                                    } else {
                                        if (input[4] <= 20.1899995803833) {
                                            result[7] = 4.9;
                                        } else {
                                            result[7] = 5.833333333333333;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 20.895000457763672) {
                                    result[7] = 6.8;
                                } else {
                                    result[7] = 5.75;
                                }
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 112.0) {
                                    if (input[0] <= 0.5950000062584877) {
                                        result[7] = 5.0;
                                    } else {
                                        result[7] = 5.2;
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[7] = 6.0;
                                    } else {
                                        result[7] = 5.5;
                                    }
                                }
                            } else {
                                if (input[4] <= 19.079999923706055) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[7] = 5.8;
                                    } else {
                                        result[7] = 6.666666666666667;
                                    }
                                } else {
                                    if (input[4] <= 20.61500072479248) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 5.722222222222222;
                                        }
                                    } else {
                                        if (input[4] <= 20.794499397277832) {
                                            result[7] = 7.0;
                                        } else {
                                            result[7] = 5.888888888888889;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 112.0) {
                            if (input[4] <= 19.979000091552734) {
                                if (input[1] <= 0.9249999821186066) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 5.904761904761905;
                                        }
                                    } else {
                                        if (input[3] <= 72.0) {
                                            result[7] = 6.3;
                                        } else {
                                            result[7] = 5.52;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[7] = 6.0;
                                    } else {
                                        result[7] = 7.25;
                                    }
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 6.533333333333333;
                                        }
                                    } else {
                                        result[7] = 5.636363636363637;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[7] = 6.931034482758621;
                                        } else {
                                            result[7] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 20.23099994659424) {
                                            result[7] = 8.0;
                                        } else {
                                            result[7] = 6.9;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 20.648499488830566) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[0] <= 0.30000000447034836) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[7] = 7.0;
                                        } else {
                                            result[7] = 7.25;
                                        }
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 6.5;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 20.173500061035156) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[7] = 8.0;
                                        } else {
                                            result[7] = 7.0;
                                        }
                                    } else {
                                        result[7] = 6.333333333333333;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[4] <= 20.94600009918213) {
                                        result[7] = 7.461538461538462;
                                    } else {
                                        result[7] = 7.75;
                                    }
                                } else {
                                    result[7] = 6.909090909090909;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 26.00599956512451) {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 25.291500091552734) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 21.859000205993652) {
                                        if (input[3] <= 40.0) {
                                            result[7] = 4.0;
                                        } else {
                                            result[7] = 5.0;
                                        }
                                    } else {
                                        if (input[4] <= 25.195499420166016) {
                                            result[7] = 5.018099547511312;
                                        } else {
                                            result[7] = 5.384615384615385;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 24.0) {
                                        if (input[4] <= 24.261500358581543) {
                                            result[7] = 4.992700729927007;
                                        } else {
                                            result[7] = 5.638297872340425;
                                        }
                                    } else {
                                        if (input[4] <= 23.505499839782715) {
                                            result[7] = 5.52755905511811;
                                        } else {
                                            result[7] = 6.15625;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 23.164000511169434) {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[4] <= 21.191499710083008) {
                                            result[7] = 4.75;
                                        } else {
                                            result[7] = 5.7444444444444445;
                                        }
                                    } else {
                                        result[7] = 4.375;
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[4] <= 25.15700054168701) {
                                            result[7] = 6.03125;
                                        } else {
                                            result[7] = 5.125;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[7] = 7.357142857142857;
                                        } else {
                                            result[7] = 6.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 28.0) {
                                if (input[3] <= 40.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[7] = 5.0;
                                    } else {
                                        result[7] = 5.875;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[7] = 6.0;
                                    } else {
                                        result[7] = 8.0;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 40.0) {
                                        if (input[3] <= 24.0) {
                                            result[7] = 5.862068965517241;
                                        } else {
                                            result[7] = 6.416666666666667;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[7] = 7.291666666666667;
                                        } else {
                                            result[7] = 6.625;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 12.0) {
                                        result[7] = 8.0;
                                    } else {
                                        result[7] = 7.333333333333333;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 40.0) {
                            if (input[4] <= 23.288000106811523) {
                                if (input[3] <= 12.0) {
                                    result[7] = 5.0;
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[7] = 6.0;
                                    } else {
                                        result[7] = 5.818181818181818;
                                    }
                                }
                            } else {
                                if (input[3] <= 12.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[7] = 6.0;
                                    } else {
                                        result[7] = 7.5;
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 25.70199966430664) {
                                            result[7] = 7.0;
                                        } else {
                                            result[7] = 7.545454545454546;
                                        }
                                    } else {
                                        result[7] = 7.714285714285714;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 24.115500450134277) {
                                if (input[0] <= 0.7000000178813934) {
                                    result[7] = 7.0;
                                } else {
                                    result[7] = 7.625;
                                }
                            } else {
                                if (input[4] <= 25.432499885559082) {
                                    result[7] = 8.0;
                                } else {
                                    result[7] = 7.375;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 23.505499839782715) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 12.0) {
                                        if (input[3] <= 72.0) {
                                            result[7] = 5.0;
                                        } else {
                                            result[7] = 6.0;
                                        }
                                    } else {
                                        if (input[3] <= 72.0) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 5.5588235294117645;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 22.283499717712402) {
                                        if (input[4] <= 21.55600070953369) {
                                            result[7] = 6.166666666666667;
                                        } else {
                                            result[7] = 5.285714285714286;
                                        }
                                    } else {
                                        result[7] = 6.769230769230769;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.550000011920929) {
                                    if (input[3] <= 72.0) {
                                        result[7] = 7.0;
                                    } else {
                                        result[7] = 7.666666666666667;
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        if (input[1] <= 0.75) {
                                            result[7] = 6.956521739130435;
                                        } else {
                                            result[7] = 6.357142857142857;
                                        }
                                    } else {
                                        if (input[3] <= 72.0) {
                                            result[7] = 6.5;
                                        } else {
                                            result[7] = 6.052631578947368;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 21.89400005340576) {
                                if (input[3] <= 112.0) {
                                    if (input[2] <= 12.0) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[7] = 5.5;
                                        } else {
                                            result[7] = 5.0;
                                        }
                                    } else {
                                        result[7] = 6.0;
                                    }
                                } else {
                                    if (input[4] <= 21.33300018310547) {
                                        result[7] = 6.125;
                                    } else {
                                        result[7] = 7.153846153846154;
                                    }
                                }
                            } else {
                                if (input[4] <= 23.554999351501465) {
                                    if (input[4] <= 23.47249984741211) {
                                        if (input[4] <= 23.057000160217285) {
                                            result[7] = 6.882352941176471;
                                        } else {
                                            result[7] = 7.285714285714286;
                                        }
                                    } else {
                                        result[7] = 6.4;
                                    }
                                } else {
                                    if (input[3] <= 112.0) {
                                        if (input[2] <= 12.0) {
                                            result[7] = 6.2631578947368425;
                                        } else {
                                            result[7] = 7.541666666666667;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[7] = 7.887096774193548;
                                        } else {
                                            result[7] = 7.2727272727272725;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 22.619500160217285) {
                            if (input[3] <= 72.0) {
                                if (input[2] <= 44.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 36.0) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 5.0;
                                        }
                                    } else {
                                        result[7] = 6.555555555555555;
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[7] = 7.0;
                                    } else {
                                        result[7] = 6.428571428571429;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 60.0) {
                                        if (input[3] <= 112.0) {
                                            result[7] = 6.963963963963964;
                                        } else {
                                            result[7] = 7.293333333333333;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[7] = 7.777777777777778;
                                        } else {
                                            result[7] = 7.3;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 21.387500762939453) {
                                        if (input[2] <= 52.0) {
                                            result[7] = 5.6;
                                        } else {
                                            result[7] = 6.25;
                                        }
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[7] = 7.875;
                                        } else {
                                            result[7] = 6.705882352941177;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 44.0) {
                                        if (input[2] <= 36.0) {
                                            result[7] = 7.105263157894737;
                                        } else {
                                            result[7] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 23.86649990081787) {
                                            result[7] = 7.310344827586207;
                                        } else {
                                            result[7] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.48050022125244) {
                                        if (input[3] <= 112.0) {
                                            result[7] = 7.390804597701149;
                                        } else {
                                            result[7] = 7.8431372549019605;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[7] = 7.993103448275862;
                                        } else {
                                            result[7] = 7.7272727272727275;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[4] <= 24.210500717163086) {
                                        if (input[2] <= 44.0) {
                                            result[7] = 6.8;
                                        } else {
                                            result[7] = 7.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.550000011920929) {
                                            result[7] = 7.7;
                                        } else {
                                            result[7] = 7.071428571428571;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.754000663757324) {
                                        if (input[4] <= 23.061500549316406) {
                                            result[7] = 6.5;
                                        } else {
                                            result[7] = 6.0;
                                        }
                                    } else {
                                        result[7] = 6.7;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 29.689499855041504) {
                    if (input[3] <= 24.0) {
                        if (input[2] <= 52.0) {
                            if (input[3] <= 12.0) {
                                if (input[4] <= 26.338000297546387) {
                                    result[7] = 6.8;
                                } else {
                                    if (input[4] <= 26.968000411987305) {
                                        if (input[0] <= 0.7950000166893005) {
                                            result[7] = 6.0;
                                        } else {
                                            result[7] = 5.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[7] = 6.08421052631579;
                                        } else {
                                            result[7] = 5.838709677419355;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 26.59450054168701) {
                                            result[7] = 5.833333333333333;
                                        } else {
                                            result[7] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 26.65250015258789) {
                                            result[7] = 6.571428571428571;
                                        } else {
                                            result[7] = 7.5;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 29.194499969482422) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[7] = 7.0;
                                        } else {
                                            result[7] = 6.333333333333333;
                                        }
                                    } else {
                                        result[7] = 7.666666666666667;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 27.241000175476074) {
                                if (input[2] <= 60.0) {
                                    if (input[1] <= 0.75) {
                                        result[7] = 6.2;
                                    } else {
                                        result[7] = 6.0;
                                    }
                                } else {
                                    result[7] = 6.777777777777778;
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[4] <= 28.91900062561035) {
                                            result[7] = 7.0;
                                        } else {
                                            result[7] = 7.555555555555555;
                                        }
                                    } else {
                                        if (input[1] <= 0.7999999821186066) {
                                            result[7] = 6.944444444444445;
                                        } else {
                                            result[7] = 6.142857142857143;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 28.423500061035156) {
                                        if (input[3] <= 12.0) {
                                            result[7] = 7.0;
                                        } else {
                                            result[7] = 7.894736842105263;
                                        }
                                    } else {
                                        result[7] = 8.0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 12.0) {
                            if (input[3] <= 72.0) {
                                if (input[4] <= 29.152999877929688) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[7] = 6.0;
                                    } else {
                                        result[7] = 6.8;
                                    }
                                } else {
                                    result[7] = 7.0;
                                }
                            } else {
                                if (input[4] <= 27.520999908447266) {
                                    if (input[1] <= 0.75) {
                                        if (input[3] <= 88.0) {
                                            result[7] = 7.142857142857143;
                                        } else {
                                            result[7] = 7.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[7] = 6.625;
                                        } else {
                                            result[7] = 6.857142857142857;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[4] <= 27.69099998474121) {
                                            result[7] = 7.833333333333333;
                                        } else {
                                            result[7] = 8.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[7] = 8.0;
                                        } else {
                                            result[7] = 7.090909090909091;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 56.0) {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 29.019500732421875) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[7] = 6.204819277108434;
                                        } else {
                                            result[7] = 7.454545454545454;
                                        }
                                    } else {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[7] = 7.5;
                                        } else {
                                            result[7] = 6.9;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 44.0) {
                                            result[7] = 7.276422764227642;
                                        } else {
                                            result[7] = 7.660714285714286;
                                        }
                                    } else {
                                        if (input[4] <= 28.182000160217285) {
                                            result[7] = 6.384615384615385;
                                        } else {
                                            result[7] = 6.909090909090909;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 27.83300018310547) {
                                        if (input[4] <= 27.10349941253662) {
                                            result[7] = 7.714285714285714;
                                        } else {
                                            result[7] = 7.202898550724638;
                                        }
                                    } else {
                                        if (input[4] <= 27.875499725341797) {
                                            result[7] = 7.8;
                                        } else {
                                            result[7] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.75) {
                                        if (input[3] <= 72.0) {
                                            result[7] = 7.052631578947368;
                                        } else {
                                            result[7] = 7.555555555555555;
                                        }
                                    } else {
                                        if (input[2] <= 36.0) {
                                            result[7] = 6.769230769230769;
                                        } else {
                                            result[7] = 7.0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 33.385000228881836) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 40.0) {
                                if (input[2] <= 36.0) {
                                    if (input[4] <= 32.77250099182129) {
                                        if (input[3] <= 24.0) {
                                            result[7] = 6.951219512195122;
                                        } else {
                                            result[7] = 7.291666666666667;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[7] = 7.25;
                                        } else {
                                            result[7] = 7.857142857142857;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 31.951499938964844) {
                                        if (input[4] <= 30.02500057220459) {
                                            result[7] = 7.7894736842105265;
                                        } else {
                                            result[7] = 7.455128205128205;
                                        }
                                    } else {
                                        result[7] = 8.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 31.337499618530273) {
                                    if (input[4] <= 31.04349994659424) {
                                        if (input[2] <= 20.0) {
                                            result[7] = 7.844827586206897;
                                        } else {
                                            result[7] = 7.4;
                                        }
                                    } else {
                                        if (input[4] <= 31.182499885559082) {
                                            result[7] = 7.25;
                                        } else {
                                            result[7] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.6500000059604645) {
                                        result[7] = 7.714285714285714;
                                    } else {
                                        result[7] = 8.0;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 40.0) {
                                if (input[2] <= 20.0) {
                                    if (input[3] <= 12.0) {
                                        result[7] = 7.777777777777778;
                                    } else {
                                        if (input[3] <= 24.0) {
                                            result[7] = 7.111111111111111;
                                        } else {
                                            result[7] = 6.8;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[3] <= 12.0) {
                                            result[7] = 6.785714285714286;
                                        } else {
                                            result[7] = 7.090909090909091;
                                        }
                                    } else {
                                        result[7] = 6.090909090909091;
                                    }
                                }
                            } else {
                                result[7] = 6.285714285714286;
                            }
                        }
                    } else {
                        if (input[0] <= 0.7000000178813934) {
                            if (input[4] <= 33.66950035095215) {
                                if (input[4] <= 33.62700080871582) {
                                    result[7] = 8.0;
                                } else {
                                    result[7] = 7.5;
                                }
                            } else {
                                if (input[1] <= 0.9249999821186066) {
                                    result[7] = 8.0;
                                } else {
                                    if (input[2] <= 12.0) {
                                        result[7] = 7.8;
                                    } else {
                                        result[7] = 8.0;
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.75) {
                                result[7] = 8.0;
                            } else {
                                if (input[4] <= 34.42900085449219) {
                                    if (input[4] <= 33.9060001373291) {
                                        result[7] = 6.6;
                                    } else {
                                        result[7] = 7.333333333333333;
                                    }
                                } else {
                                    if (input[4] <= 34.9005012512207) {
                                        result[7] = 7.75;
                                    } else {
                                        result[7] = 8.0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (input[4] <= 18.278499603271484) {
        if (input[4] <= 12.785999774932861) {
            if (input[4] <= 9.814000129699707) {
                if (input[4] <= 9.400500297546387) {
                    if (input[4] <= 9.266499996185303) {
                        result[8] = 2.0;
                    } else {
                        if (input[3] <= 112.0) {
                            result[8] = 2.0;
                        } else {
                            result[8] = 2.6666666666666665;
                        }
                    }
                } else {
                    if (input[3] <= 112.0) {
                        if (input[3] <= 72.0) {
                            if (input[4] <= 9.438999652862549) {
                                result[8] = 2.2;
                            } else {
                                if (input[4] <= 9.77750015258789) {
                                    result[8] = 2.0;
                                } else {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[8] = 2.25;
                                    } else {
                                        result[8] = 2.0;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 52.0) {
                                if (input[2] <= 36.0) {
                                    result[8] = 2.0;
                                } else {
                                    result[8] = 2.375;
                                }
                            } else {
                                result[8] = 3.0;
                            }
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            result[8] = 2.4285714285714284;
                        } else {
                            if (input[4] <= 9.51800012588501) {
                                result[8] = 2.8;
                            } else {
                                result[8] = 3.0;
                            }
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 44.0) {
                        if (input[4] <= 12.085999965667725) {
                            if (input[4] <= 11.763000011444092) {
                                result[8] = 2.0;
                            } else {
                                if (input[4] <= 11.811000347137451) {
                                    result[8] = 2.4285714285714284;
                                } else {
                                    result[8] = 2.0;
                                }
                            }
                        } else {
                            if (input[0] <= 0.7950000166893005) {
                                result[8] = 3.0;
                            } else {
                                result[8] = 2.0;
                            }
                        }
                    } else {
                        if (input[4] <= 10.628499984741211) {
                            if (input[0] <= 0.30000000447034836) {
                                result[8] = 2.272727272727273;
                            } else {
                                result[8] = 2.0;
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 10.868500232696533) {
                                    result[8] = 2.8461538461538463;
                                } else {
                                    result[8] = 3.0;
                                }
                            } else {
                                result[8] = 2.0;
                            }
                        }
                    }
                } else {
                    if (input[4] <= 11.861999988555908) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[1] <= 0.550000011920929) {
                                if (input[2] <= 52.0) {
                                    result[8] = 3.0;
                                } else {
                                    if (input[3] <= 112.0) {
                                        result[8] = 3.0;
                                    } else {
                                        result[8] = 5.0;
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        result[8] = 2.0;
                                    } else {
                                        result[8] = 3.0;
                                    }
                                } else {
                                    if (input[4] <= 9.921000003814697) {
                                        if (input[3] <= 72.0) {
                                            result[8] = 2.2857142857142856;
                                        } else {
                                            result[8] = 3.0;
                                        }
                                    } else {
                                        if (input[4] <= 10.066999912261963) {
                                            result[8] = 2.96875;
                                        } else {
                                            result[8] = 3.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            result[8] = 2.0;
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[2] <= 28.0) {
                                result[8] = 3.0;
                            } else {
                                if (input[0] <= 0.30000001192092896) {
                                    result[8] = 3.5555555555555554;
                                } else {
                                    result[8] = 3.0;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                result[8] = 4.0;
                            } else {
                                result[8] = 3.3333333333333335;
                            }
                        }
                    }
                }
            }
        } else {
            if (input[3] <= 56.0) {
                if (input[4] <= 16.67199993133545) {
                    if (input[2] <= 60.0) {
                        if (input[3] <= 24.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 16.592000007629395) {
                                    result[8] = 3.0;
                                } else {
                                    result[8] = 3.0833333333333335;
                                }
                            } else {
                                if (input[2] <= 40.0) {
                                    result[8] = 2.0;
                                } else {
                                    result[8] = 3.0;
                                }
                            }
                        } else {
                            if (input[4] <= 15.973999977111816) {
                                if (input[2] <= 44.0) {
                                    result[8] = 3.0;
                                } else {
                                    if (input[4] <= 14.69950008392334) {
                                        result[8] = 3.0;
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[8] = 3.9655172413793105;
                                        } else {
                                            result[8] = 3.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    result[8] = 3.0;
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[8] = 4.0;
                                    } else {
                                        result[8] = 3.6666666666666665;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 12.0) {
                            result[8] = 3.0;
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 16.24799919128418) {
                                    if (input[4] <= 13.714999675750732) {
                                        result[8] = 3.7142857142857144;
                                    } else {
                                        result[8] = 4.0;
                                    }
                                } else {
                                    result[8] = 4.5;
                                }
                            } else {
                                if (input[4] <= 15.5) {
                                    if (input[1] <= 0.75) {
                                        result[8] = 3.0;
                                    } else {
                                        result[8] = 3.5;
                                    }
                                } else {
                                    result[8] = 3.8333333333333335;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 60.0) {
                        if (input[0] <= 0.7000000178813934) {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 17.02999973297119) {
                                    result[8] = 3.4;
                                } else {
                                    result[8] = 4.0;
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[4] <= 17.100000381469727) {
                                        result[8] = 4.666666666666667;
                                    } else {
                                        result[8] = 4.0;
                                    }
                                } else {
                                    if (input[2] <= 52.0) {
                                        result[8] = 5.0;
                                    } else {
                                        result[8] = 4.0;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 28.0) {
                                if (input[1] <= 0.75) {
                                    result[8] = 3.0;
                                } else {
                                    result[8] = 3.3333333333333335;
                                }
                            } else {
                                if (input[4] <= 17.350000381469727) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[8] = 4.0;
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[8] = 3.0;
                                        } else {
                                            result[8] = 3.5555555555555554;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 17.789999961853027) {
                                        if (input[1] <= 0.75) {
                                            result[8] = 4.0;
                                        } else {
                                            result[8] = 5.666666666666667;
                                        }
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[8] = 3.0;
                                        } else {
                                            result[8] = 3.8333333333333335;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[0] <= 0.8950000107288361) {
                                result[8] = 4.0;
                            } else {
                                result[8] = 4.428571428571429;
                            }
                        } else {
                            if (input[1] <= 0.75) {
                                if (input[0] <= 0.7000000178813934) {
                                    result[8] = 5.0;
                                } else {
                                    result[8] = 6.2;
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[8] = 5.0;
                                } else {
                                    result[8] = 4.625;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 15.196000099182129) {
                    if (input[0] <= 0.8950000107288361) {
                        if (input[2] <= 12.0) {
                            if (input[3] <= 112.0) {
                                result[8] = 3.0;
                            } else {
                                result[8] = 4.0;
                            }
                        } else {
                            if (input[3] <= 88.0) {
                                if (input[2] <= 28.0) {
                                    if (input[4] <= 14.593499660491943) {
                                        if (input[4] <= 14.157999992370605) {
                                            result[8] = 3.0;
                                        } else {
                                            result[8] = 3.1666666666666665;
                                        }
                                    } else {
                                        result[8] = 4.0;
                                    }
                                } else {
                                    if (input[3] <= 72.0) {
                                        if (input[2] <= 44.0) {
                                            result[8] = 3.577777777777778;
                                        } else {
                                            result[8] = 4.0;
                                        }
                                    } else {
                                        if (input[4] <= 14.275499820709229) {
                                            result[8] = 4.0;
                                        } else {
                                            result[8] = 4.444444444444445;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 14.833499908447266) {
                                    if (input[2] <= 60.0) {
                                        result[8] = 4.0;
                                    } else {
                                        if (input[4] <= 13.827000141143799) {
                                            result[8] = 4.0;
                                        } else {
                                            result[8] = 4.6;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 60.0) {
                                        result[8] = 4.166666666666667;
                                    } else {
                                        result[8] = 5.0;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 14.587500095367432) {
                            if (input[1] <= 0.550000011920929) {
                                if (input[4] <= 13.952499866485596) {
                                    result[8] = 3.1;
                                } else {
                                    result[8] = 3.75;
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[1] <= 0.6500000059604645) {
                                        if (input[3] <= 112.0) {
                                            result[8] = 3.0;
                                        } else {
                                            result[8] = 3.25;
                                        }
                                    } else {
                                        result[8] = 3.0;
                                    }
                                } else {
                                    if (input[4] <= 13.845999717712402) {
                                        result[8] = 3.0;
                                    } else {
                                        result[8] = 3.5;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 36.0) {
                                result[8] = 3.1666666666666665;
                            } else {
                                result[8] = 4.0;
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[4] <= 16.79450035095215) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[8] = 4.0;
                                } else {
                                    if (input[4] <= 15.971499919891357) {
                                        if (input[4] <= 15.637499809265137) {
                                            result[8] = 3.25;
                                        } else {
                                            result[8] = 3.0;
                                        }
                                    } else {
                                        if (input[4] <= 16.434999465942383) {
                                            result[8] = 3.8;
                                        } else {
                                            result[8] = 3.5714285714285716;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 16.829500198364258) {
                                    result[8] = 5.5;
                                } else {
                                    if (input[3] <= 72.0) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[8] = 3.7857142857142856;
                                        } else {
                                            result[8] = 4.090909090909091;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[8] = 4.884615384615385;
                                        } else {
                                            result[8] = 4.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 18.016499519348145) {
                                    if (input[3] <= 112.0) {
                                        if (input[2] <= 12.0) {
                                            result[8] = 4.0;
                                        } else {
                                            result[8] = 4.911111111111111;
                                        }
                                    } else {
                                        if (input[4] <= 17.649500846862793) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 5.125;
                                        }
                                    }
                                } else {
                                    result[8] = 4.2;
                                }
                            } else {
                                result[8] = 4.0;
                            }
                        }
                    } else {
                        if (input[4] <= 16.95300006866455) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[0] <= 0.7000000178813934) {
                                    result[8] = 5.0;
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[8] = 5.0;
                                    } else {
                                        result[8] = 4.75;
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[2] <= 44.0) {
                                        if (input[3] <= 72.0) {
                                            result[8] = 3.5833333333333335;
                                        } else {
                                            result[8] = 4.05;
                                        }
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[8] = 4.083333333333333;
                                        } else {
                                            result[8] = 5.0;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.6500000059604645) {
                                        result[8] = 6.0;
                                    } else {
                                        result[8] = 5.0;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 72.0) {
                                        if (input[2] <= 36.0) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 4.0;
                                        }
                                    } else {
                                        if (input[4] <= 17.944000244140625) {
                                            result[8] = 5.016393442622951;
                                        } else {
                                            result[8] = 5.571428571428571;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 17.420499801635742) {
                                        result[8] = 5.0;
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[8] = 6.0;
                                        } else {
                                            result[8] = 5.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 17.320499420166016) {
                                    if (input[1] <= 0.550000011920929) {
                                        result[8] = 5.142857142857143;
                                    } else {
                                        result[8] = 7.142857142857143;
                                    }
                                } else {
                                    if (input[4] <= 17.996000289916992) {
                                        if (input[4] <= 17.963000297546387) {
                                            result[8] = 5.386363636363637;
                                        } else {
                                            result[8] = 6.555555555555555;
                                        }
                                    } else {
                                        if (input[4] <= 18.167500495910645) {
                                            result[8] = 4.714285714285714;
                                        } else {
                                            result[8] = 5.111111111111111;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 22.173500061035156) {
            if (input[3] <= 56.0) {
                if (input[2] <= 36.0) {
                    if (input[4] <= 21.12150001525879) {
                        if (input[4] <= 19.035500526428223) {
                            if (input[3] <= 24.0) {
                                if (input[2] <= 28.0) {
                                    result[8] = 3.0;
                                } else {
                                    result[8] = 3.5;
                                }
                            } else {
                                if (input[2] <= 20.0) {
                                    if (input[4] <= 18.493000030517578) {
                                        result[8] = 4.0;
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[8] = 4.0;
                                        } else {
                                            result[8] = 3.2;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.609999656677246) {
                                        result[8] = 4.0;
                                    } else {
                                        result[8] = 4.545454545454546;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 40.0) {
                                    if (input[2] <= 28.0) {
                                        result[8] = 4.0;
                                    } else {
                                        if (input[4] <= 20.33199977874756) {
                                            result[8] = 4.0;
                                        } else {
                                            result[8] = 4.222222222222222;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        if (input[4] <= 20.59749984741211) {
                                            result[8] = 4.061224489795919;
                                        } else {
                                            result[8] = 5.0;
                                        }
                                    } else {
                                        result[8] = 5.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 20.65700054168701) {
                                    if (input[3] <= 24.0) {
                                        if (input[4] <= 19.61299991607666) {
                                            result[8] = 3.5;
                                        } else {
                                            result[8] = 4.818181818181818;
                                        }
                                    } else {
                                        if (input[4] <= 19.977499961853027) {
                                            result[8] = 6.0588235294117645;
                                        } else {
                                            result[8] = 4.166666666666667;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 20.828499794006348) {
                                        result[8] = 6.875;
                                    } else {
                                        result[8] = 4.5;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 24.0) {
                                result[8] = 4.0;
                            } else {
                                if (input[0] <= 0.10000000149011612) {
                                    result[8] = 5.111111111111111;
                                } else {
                                    result[8] = 5.0;
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 21.373499870300293) {
                                    result[8] = 4.384615384615385;
                                } else {
                                    result[8] = 5.9;
                                }
                            } else {
                                if (input[4] <= 21.855499267578125) {
                                    if (input[4] <= 21.459500312805176) {
                                        result[8] = 6.833333333333333;
                                    } else {
                                        result[8] = 7.0;
                                    }
                                } else {
                                    result[8] = 5.777777777777778;
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 19.6589994430542) {
                        if (input[2] <= 60.0) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 24.0) {
                                    result[8] = 4.0;
                                } else {
                                    if (input[2] <= 44.0) {
                                        if (input[4] <= 19.20549964904785) {
                                            result[8] = 4.0;
                                        } else {
                                            result[8] = 4.333333333333333;
                                        }
                                    } else {
                                        if (input[3] <= 40.0) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 4.476190476190476;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 19.214500427246094) {
                                    if (input[1] <= 0.75) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[8] = 4.0;
                                        } else {
                                            result[8] = 4.090909090909091;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 5.5;
                                        }
                                    }
                                } else {
                                    result[8] = 6.0;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 40.0) {
                                    if (input[3] <= 12.0) {
                                        result[8] = 4.0;
                                    } else {
                                        result[8] = 5.0;
                                    }
                                } else {
                                    result[8] = 6.0;
                                }
                            } else {
                                result[8] = 6.333333333333333;
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 24.0) {
                                if (input[2] <= 44.0) {
                                    if (input[0] <= 0.5000000149011612) {
                                        result[8] = 4.2;
                                    } else {
                                        result[8] = 4.0;
                                    }
                                } else {
                                    if (input[0] <= 0.10000000149011612) {
                                        if (input[2] <= 60.0) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 5.636363636363637;
                                        }
                                    } else {
                                        if (input[4] <= 20.17349910736084) {
                                            result[8] = 4.875;
                                        } else {
                                            result[8] = 5.013513513513513;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 21.315000534057617) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[8] = 5.235294117647059;
                                        } else {
                                            result[8] = 4.9523809523809526;
                                        }
                                    } else {
                                        if (input[4] <= 21.97949981689453) {
                                            result[8] = 5.529411764705882;
                                        } else {
                                            result[8] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 21.637999534606934) {
                                        result[8] = 6.0;
                                    } else {
                                        result[8] = 6.555555555555555;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 44.0) {
                                if (input[4] <= 21.12150001525879) {
                                    if (input[1] <= 0.75) {
                                        if (input[4] <= 20.254000663757324) {
                                            result[8] = 7.222222222222222;
                                        } else {
                                            result[8] = 8.0;
                                        }
                                    } else {
                                        result[8] = 6.0;
                                    }
                                } else {
                                    result[8] = 5.833333333333333;
                                }
                            } else {
                                if (input[1] <= 0.75) {
                                    if (input[4] <= 21.48449993133545) {
                                        if (input[2] <= 60.0) {
                                            result[8] = 6.516129032258065;
                                        } else {
                                            result[8] = 5.5;
                                        }
                                    } else {
                                        result[8] = 5.2727272727272725;
                                    }
                                } else {
                                    if (input[4] <= 20.916000366210938) {
                                        result[8] = 4.625;
                                    } else {
                                        if (input[4] <= 21.380499839782715) {
                                            result[8] = 6.5;
                                        } else {
                                            result[8] = 5.777777777777778;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= 28.0) {
                    if (input[3] <= 112.0) {
                        if (input[4] <= 19.199999809265137) {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 72.0) {
                                    result[8] = 4.0;
                                } else {
                                    if (input[1] <= 0.7000000178813934) {
                                        result[8] = 4.666666666666667;
                                    } else {
                                        result[8] = 4.2;
                                    }
                                }
                            } else {
                                if (input[4] <= 18.395499229431152) {
                                    result[8] = 5.6;
                                } else {
                                    if (input[4] <= 19.02549934387207) {
                                        if (input[2] <= 20.0) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 4.523809523809524;
                                        }
                                    } else {
                                        result[8] = 5.6;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 12.0) {
                                    if (input[4] <= 19.675000190734863) {
                                        result[8] = 4.666666666666667;
                                    } else {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 5.2;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 72.0) {
                                        if (input[4] <= 21.104999542236328) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 6.0;
                                        }
                                    } else {
                                        if (input[4] <= 21.86150074005127) {
                                            result[8] = 5.924050632911392;
                                        } else {
                                            result[8] = 5.222222222222222;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 19.62399959564209) {
                                    result[8] = 6.714285714285714;
                                } else {
                                    if (input[4] <= 19.89550018310547) {
                                        result[8] = 4.75;
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[8] = 6.413793103448276;
                                        } else {
                                            result[8] = 5.625;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 19.565499305725098) {
                            if (input[0] <= 0.7950000166893005) {
                                result[8] = 6.0;
                            } else {
                                result[8] = 5.133333333333334;
                            }
                        } else {
                            if (input[4] <= 21.437999725341797) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 20.916500091552734) {
                                        result[8] = 6.0;
                                    } else {
                                        result[8] = 6.375;
                                    }
                                } else {
                                    if (input[4] <= 20.765999794006348) {
                                        if (input[2] <= 12.0) {
                                            result[8] = 6.4;
                                        } else {
                                            result[8] = 7.444444444444445;
                                        }
                                    } else {
                                        result[8] = 5.5;
                                    }
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[4] <= 22.01099967956543) {
                                        result[8] = 7.25;
                                    } else {
                                        result[8] = 7.142857142857143;
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        result[8] = 6.8;
                                    } else {
                                        result[8] = 7.0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 20.388999938964844) {
                        if (input[4] <= 18.795499801635742) {
                            if (input[2] <= 44.0) {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 36.0) {
                                        result[8] = 5.0;
                                    } else {
                                        result[8] = 4.0;
                                    }
                                } else {
                                    if (input[4] <= 18.432499885559082) {
                                        result[8] = 6.857142857142857;
                                    } else {
                                        if (input[0] <= 0.7950000166893005) {
                                            result[8] = 6.0;
                                        } else {
                                            result[8] = 5.076923076923077;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[8] = 6.0;
                                } else {
                                    if (input[3] <= 88.0) {
                                        result[8] = 5.888888888888889;
                                    } else {
                                        result[8] = 7.0;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 112.0) {
                                if (input[1] <= 0.9249999821186066) {
                                    if (input[1] <= 0.550000011920929) {
                                        if (input[4] <= 19.341500282287598) {
                                            result[8] = 5.933333333333334;
                                        } else {
                                            result[8] = 6.642857142857143;
                                        }
                                    } else {
                                        if (input[4] <= 20.32699966430664) {
                                            result[8] = 6.007352941176471;
                                        } else {
                                            result[8] = 5.555555555555555;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[8] = 6.0;
                                    } else {
                                        result[8] = 7.625;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[8] = 6.7;
                                        } else {
                                            result[8] = 6.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[8] = 6.5;
                                        } else {
                                            result[8] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 44.0) {
                                        result[8] = 5.545454545454546;
                                    } else {
                                        if (input[4] <= 19.260499954223633) {
                                            result[8] = 7.5;
                                        } else {
                                            result[8] = 6.222222222222222;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 72.0) {
                                if (input[4] <= 21.802000045776367) {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[4] <= 21.12399959564209) {
                                            result[8] = 5.875;
                                        } else {
                                            result[8] = 5.428571428571429;
                                        }
                                    } else {
                                        result[8] = 6.166666666666667;
                                    }
                                } else {
                                    result[8] = 5.0;
                                }
                            } else {
                                if (input[4] <= 21.5024995803833) {
                                    if (input[0] <= 0.30000000447034836) {
                                        result[8] = 7.0;
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[8] = 6.375;
                                        } else {
                                            result[8] = 5.954545454545454;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.5000000149011612) {
                                        result[8] = 7.0;
                                    } else {
                                        result[8] = 7.25;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.7000000178813934) {
                                if (input[4] <= 21.988999366760254) {
                                    if (input[3] <= 112.0) {
                                        result[8] = 7.0;
                                    } else {
                                        if (input[4] <= 21.435500144958496) {
                                            result[8] = 7.1;
                                        } else {
                                            result[8] = 7.714285714285714;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 112.0) {
                                        result[8] = 7.125;
                                    } else {
                                        result[8] = 8.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 21.92899990081787) {
                                    if (input[4] <= 21.497499465942383) {
                                        if (input[3] <= 88.0) {
                                            result[8] = 6.357142857142857;
                                        } else {
                                            result[8] = 6.904761904761905;
                                        }
                                    } else {
                                        if (input[1] <= 0.7000000178813934) {
                                            result[8] = 7.25;
                                        } else {
                                            result[8] = 7.5;
                                        }
                                    }
                                } else {
                                    result[8] = 5.875;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 29.51550006866455) {
                if (input[3] <= 40.0) {
                    if (input[2] <= 44.0) {
                        if (input[4] <= 25.893500328063965) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 25.547500610351562) {
                                    if (input[3] <= 24.0) {
                                        result[8] = 5.0;
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 5.382352941176471;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 24.0) {
                                        result[8] = 5.0;
                                    } else {
                                        result[8] = 6.0;
                                    }
                                }
                            } else {
                                if (input[3] <= 12.0) {
                                    result[8] = 7.333333333333333;
                                } else {
                                    if (input[4] <= 24.003000259399414) {
                                        if (input[4] <= 22.73900032043457) {
                                            result[8] = 4.75;
                                        } else {
                                            result[8] = 5.56;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[8] = 5.5;
                                        } else {
                                            result[8] = 6.62962962962963;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 24.0) {
                                    if (input[4] <= 26.379499435424805) {
                                        result[8] = 5.285714285714286;
                                    } else {
                                        if (input[4] <= 26.748000144958496) {
                                            result[8] = 5.9;
                                        } else {
                                            result[8] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        result[8] = 6.0;
                                    } else {
                                        if (input[4] <= 27.559499740600586) {
                                            result[8] = 6.0;
                                        } else {
                                            result[8] = 7.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 12.0) {
                                    if (input[4] <= 27.390999794006348) {
                                        result[8] = 5.0;
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[8] = 7.444444444444445;
                                        } else {
                                            result[8] = 5.428571428571429;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[4] <= 26.780500411987305) {
                                            result[8] = 7.714285714285714;
                                        } else {
                                            result[8] = 7.230769230769231;
                                        }
                                    } else {
                                        if (input[4] <= 27.551000595092773) {
                                            result[8] = 6.2;
                                        } else {
                                            result[8] = 6.8;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 27.475500106811523) {
                            if (input[3] <= 24.0) {
                                if (input[2] <= 60.0) {
                                    if (input[4] <= 24.319000244140625) {
                                        if (input[4] <= 23.41599941253662) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 5.526315789473684;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[8] = 6.0;
                                        } else {
                                            result[8] = 6.681818181818182;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 12.0) {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[8] = 6.129032258064516;
                                        } else {
                                            result[8] = 5.625;
                                        }
                                    } else {
                                        if (input[4] <= 23.683500289916992) {
                                            result[8] = 6.25;
                                        } else {
                                            result[8] = 6.966666666666667;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 24.379499435424805) {
                                    if (input[1] <= 0.550000011920929) {
                                        result[8] = 7.083333333333333;
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[8] = 6.086956521739131;
                                        } else {
                                            result[8] = 6.777777777777778;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 60.0) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[8] = 7.08;
                                        } else {
                                            result[8] = 6.5;
                                        }
                                    } else {
                                        if (input[4] <= 25.20949935913086) {
                                            result[8] = 7.0;
                                        } else {
                                            result[8] = 7.833333333333333;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 28.96749973297119) {
                                    if (input[2] <= 60.0) {
                                        if (input[4] <= 27.89550018310547) {
                                            result[8] = 6.142857142857143;
                                        } else {
                                            result[8] = 6.878048780487805;
                                        }
                                    } else {
                                        if (input[3] <= 12.0) {
                                            result[8] = 6.933333333333334;
                                        } else {
                                            result[8] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 60.0) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[8] = 7.25;
                                        } else {
                                            result[8] = 7.7272727272727275;
                                        }
                                    } else {
                                        result[8] = 8.0;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[8] = 8.0;
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[8] = 7.75;
                                    } else {
                                        result[8] = 7.0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[3] <= 72.0) {
                        if (input[4] <= 23.728500366210938) {
                            if (input[2] <= 44.0) {
                                if (input[2] <= 12.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[8] = 5.0;
                                    } else {
                                        result[8] = 6.0;
                                    }
                                } else {
                                    if (input[4] <= 22.766499519348145) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[8] = 5.933333333333334;
                                        } else {
                                            result[8] = 5.428571428571429;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[8] = 5.935064935064935;
                                        } else {
                                            result[8] = 6.833333333333333;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 56.0) {
                                    if (input[2] <= 60.0) {
                                        if (input[2] <= 52.0) {
                                            result[8] = 6.0;
                                        } else {
                                            result[8] = 5.2727272727272725;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[8] = 7.0;
                                        } else {
                                            result[8] = 7.375;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.10000000149011612) {
                                        result[8] = 8.0;
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[8] = 7.285714285714286;
                                        } else {
                                            result[8] = 6.88;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[4] <= 28.94200038909912) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 25.005000114440918) {
                                            result[8] = 5.0;
                                        } else {
                                            result[8] = 6.0;
                                        }
                                    } else {
                                        result[8] = 6.769230769230769;
                                    }
                                } else {
                                    result[8] = 7.0;
                                }
                            } else {
                                if (input[4] <= 26.52299976348877) {
                                    if (input[2] <= 44.0) {
                                        if (input[1] <= 0.75) {
                                            result[8] = 6.928571428571429;
                                        } else {
                                            result[8] = 6.338461538461538;
                                        }
                                    } else {
                                        if (input[2] <= 60.0) {
                                            result[8] = 7.174311926605505;
                                        } else {
                                            result[8] = 7.823529411764706;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 28.0) {
                                            result[8] = 7.235955056179775;
                                        } else {
                                            result[8] = 7.625730994152047;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[8] = 7.25;
                                        } else {
                                            result[8] = 6.861111111111111;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 28.0) {
                                if (input[4] <= 23.925999641418457) {
                                    if (input[3] <= 88.0) {
                                        if (input[4] <= 22.352999687194824) {
                                            result[8] = 5.25;
                                        } else {
                                            result[8] = 6.069767441860465;
                                        }
                                    } else {
                                        if (input[3] <= 112.0) {
                                            result[8] = 6.7560975609756095;
                                        } else {
                                            result[8] = 7.3;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 27.701000213623047) {
                                        if (input[3] <= 112.0) {
                                            result[8] = 7.278761061946903;
                                        } else {
                                            result[8] = 7.957446808510638;
                                        }
                                    } else {
                                        if (input[4] <= 27.875499725341797) {
                                            result[8] = 7.75;
                                        } else {
                                            result[8] = 8.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 23.500999450683594) {
                                    if (input[0] <= 0.30000000447034836) {
                                        if (input[4] <= 22.50749969482422) {
                                            result[8] = 7.7;
                                        } else {
                                            result[8] = 7.982758620689655;
                                        }
                                    } else {
                                        if (input[3] <= 112.0) {
                                            result[8] = 7.163793103448276;
                                        } else {
                                            result[8] = 7.563380281690141;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[4] <= 23.63350009918213) {
                                            result[8] = 7.944444444444445;
                                        } else {
                                            result[8] = 8.0;
                                        }
                                    } else {
                                        if (input[4] <= 24.30150032043457) {
                                            result[8] = 7.24;
                                        } else {
                                            result[8] = 7.976190476190476;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.75) {
                                if (input[4] <= 24.927499771118164) {
                                    if (input[2] <= 36.0) {
                                        if (input[4] <= 22.960000038146973) {
                                            result[8] = 7.0;
                                        } else {
                                            result[8] = 6.181818181818182;
                                        }
                                    } else {
                                        if (input[4] <= 23.502500534057617) {
                                            result[8] = 7.0;
                                        } else {
                                            result[8] = 7.2;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 26.151999473571777) {
                                        result[8] = 7.714285714285714;
                                    } else {
                                        if (input[3] <= 88.0) {
                                            result[8] = 7.083333333333333;
                                        } else {
                                            result[8] = 7.4;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 88.0) {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[2] <= 28.0) {
                                            result[8] = 6.777777777777778;
                                        } else {
                                            result[8] = 6.25;
                                        }
                                    } else {
                                        result[8] = 6.0;
                                    }
                                } else {
                                    if (input[2] <= 32.0) {
                                        if (input[4] <= 23.85300064086914) {
                                            result[8] = 7.6;
                                        } else {
                                            result[8] = 7.0;
                                        }
                                    } else {
                                        if (input[3] <= 112.0) {
                                            result[8] = 6.454545454545454;
                                        } else {
                                            result[8] = 6.666666666666667;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 0.8950000107288361) {
                    if (input[4] <= 33.34749984741211) {
                        if (input[2] <= 36.0) {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 30.62150001525879) {
                                    result[8] = 6.0;
                                } else {
                                    if (input[4] <= 32.767499923706055) {
                                        if (input[4] <= 32.4164981842041) {
                                            result[8] = 7.0;
                                        } else {
                                            result[8] = 7.111111111111111;
                                        }
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[8] = 7.095238095238095;
                                        } else {
                                            result[8] = 7.933333333333334;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 32.4275016784668) {
                                    if (input[3] <= 40.0) {
                                        if (input[2] <= 20.0) {
                                            result[8] = 7.0;
                                        } else {
                                            result[8] = 7.537037037037037;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[8] = 7.704545454545454;
                                        } else {
                                            result[8] = 7.448979591836735;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[8] = 8.0;
                                        } else {
                                            result[8] = 7.714285714285714;
                                        }
                                    } else {
                                        result[8] = 7.555555555555555;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 31.630000114440918) {
                                if (input[4] <= 30.30049991607666) {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[3] <= 12.0) {
                                            result[8] = 8.0;
                                        } else {
                                            result[8] = 7.666666666666667;
                                        }
                                    } else {
                                        if (input[4] <= 29.842000007629395) {
                                            result[8] = 7.75;
                                        } else {
                                            result[8] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 30.670000076293945) {
                                        if (input[4] <= 30.432499885559082) {
                                            result[8] = 7.2592592592592595;
                                        } else {
                                            result[8] = 7.615384615384615;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[8] = 7.526315789473684;
                                        } else {
                                            result[8] = 7.142857142857143;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    result[8] = 8.0;
                                } else {
                                    if (input[4] <= 31.787999153137207) {
                                        result[8] = 7.428571428571429;
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[8] = 8.0;
                                        } else {
                                            result[8] = 7.8;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.8499999940395355) {
                            if (input[0] <= 0.7000000178813934) {
                                result[8] = 8.0;
                            } else {
                                if (input[2] <= 12.0) {
                                    result[8] = 7.666666666666667;
                                } else {
                                    result[8] = 8.0;
                                }
                            }
                        } else {
                            if (input[4] <= 34.282501220703125) {
                                if (input[0] <= 0.7000000178813934) {
                                    if (input[2] <= 20.0) {
                                        if (input[3] <= 12.0) {
                                            result[8] = 7.0;
                                        } else {
                                            result[8] = 7.923076923076923;
                                        }
                                    } else {
                                        result[8] = 8.0;
                                    }
                                } else {
                                    result[8] = 7.142857142857143;
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[8] = 8.0;
                                } else {
                                    if (input[2] <= 20.0) {
                                        result[8] = 7.75;
                                    } else {
                                        result[8] = 8.0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 31.27299976348877) {
                        if (input[4] <= 30.2189998626709) {
                            if (input[1] <= 0.75) {
                                result[8] = 7.0;
                            } else {
                                result[8] = 6.444444444444445;
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[1] <= 0.8499999940395355) {
                                    result[8] = 7.833333333333333;
                                } else {
                                    result[8] = 8.0;
                                }
                            } else {
                                result[8] = 6.625;
                            }
                        }
                    } else {
                        if (input[3] <= 12.0) {
                            if (input[4] <= 31.654000282287598) {
                                result[8] = 6.0;
                            } else {
                                if (input[2] <= 36.0) {
                                    if (input[4] <= 33.178998947143555) {
                                        result[8] = 6.2;
                                    } else {
                                        result[8] = 6.6;
                                    }
                                } else {
                                    result[8] = 7.0;
                                }
                            }
                        } else {
                            if (input[1] <= 0.8499999940395355) {
                                if (input[2] <= 20.0) {
                                    result[8] = 7.0;
                                } else {
                                    result[8] = 7.2;
                                }
                            } else {
                                if (input[4] <= 31.944000244140625) {
                                    result[8] = 6.4;
                                } else {
                                    result[8] = 6.857142857142857;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (input[4] <= 18.403499603271484) {
        if (input[4] <= 12.628000259399414) {
            if (input[4] <= 9.828499794006348) {
                if (input[4] <= 9.334499835968018) {
                    if (input[4] <= 9.266499996185303) {
                        result[9] = 2.0;
                    } else {
                        if (input[2] <= 60.0) {
                            result[9] = 2.0;
                        } else {
                            result[9] = 2.5;
                        }
                    }
                } else {
                    if (input[3] <= 112.0) {
                        if (input[2] <= 52.0) {
                            result[9] = 2.0;
                        } else {
                            if (input[3] <= 56.0) {
                                result[9] = 2.0;
                            } else {
                                if (input[0] <= 0.5000000149011612) {
                                    result[9] = 3.0;
                                } else {
                                    result[9] = 2.4285714285714284;
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.7950000166893005) {
                            result[9] = 3.0;
                        } else {
                            result[9] = 2.0;
                        }
                    }
                }
            } else {
                if (input[3] <= 40.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 12.180999755859375) {
                            if (input[4] <= 11.805500030517578) {
                                result[9] = 2.0;
                            } else {
                                if (input[0] <= 0.5000000149011612) {
                                    result[9] = 3.0;
                                } else {
                                    result[9] = 2.0;
                                }
                            }
                        } else {
                            if (input[0] <= 0.7950000166893005) {
                                result[9] = 3.0;
                            } else {
                                result[9] = 2.0;
                            }
                        }
                    } else {
                        if (input[3] <= 12.0) {
                            result[9] = 2.0;
                        } else {
                            if (input[4] <= 11.138999938964844) {
                                result[9] = 2.8;
                            } else {
                                result[9] = 3.0;
                            }
                        }
                    }
                } else {
                    if (input[4] <= 12.033999919891357) {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 56.0) {
                                if (input[4] <= 10.71500015258789) {
                                    if (input[2] <= 60.0) {
                                        result[9] = 2.0;
                                    } else {
                                        result[9] = 3.0;
                                    }
                                } else {
                                    result[9] = 3.0;
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        result[9] = 2.0833333333333335;
                                    } else {
                                        result[9] = 3.0;
                                    }
                                } else {
                                    if (input[4] <= 9.912000179290771) {
                                        if (input[3] <= 88.0) {
                                            result[9] = 2.4444444444444446;
                                        } else {
                                            result[9] = 3.0;
                                        }
                                    } else {
                                        if (input[4] <= 11.900499820709229) {
                                            result[9] = 3.0;
                                        } else {
                                            result[9] = 3.2857142857142856;
                                        }
                                    }
                                }
                            }
                        } else {
                            result[9] = 2.0;
                        }
                    } else {
                        if (input[3] <= 88.0) {
                            if (input[2] <= 44.0) {
                                result[9] = 3.0;
                            } else {
                                result[9] = 3.1666666666666665;
                            }
                        } else {
                            if (input[0] <= 0.5000000149011612) {
                                result[9] = 4.0;
                            } else {
                                result[9] = 4.857142857142857;
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 16.368499755859375) {
                if (input[3] <= 56.0) {
                    if (input[2] <= 60.0) {
                        if (input[4] <= 15.44249963760376) {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 15.10099983215332) {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[9] = 3.0;
                                    } else {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[9] = 3.125;
                                        } else {
                                            result[9] = 3.0;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 44.0) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[9] = 3.0625;
                                        } else {
                                            result[9] = 3.0;
                                        }
                                    } else {
                                        result[9] = 3.7142857142857144;
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    result[9] = 2.0;
                                } else {
                                    result[9] = 3.0;
                                }
                            }
                        } else {
                            if (input[2] <= 44.0) {
                                if (input[3] <= 40.0) {
                                    result[9] = 3.0;
                                } else {
                                    if (input[2] <= 28.0) {
                                        result[9] = 3.0;
                                    } else {
                                        if (input[1] <= 0.875) {
                                            result[9] = 3.769230769230769;
                                        } else {
                                            result[9] = 4.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[9] = 4.0;
                                } else {
                                    result[9] = 3.0;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[4] <= 15.93049955368042) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[9] = 3.0;
                                } else {
                                    result[9] = 3.142857142857143;
                                }
                            } else {
                                result[9] = 4.0;
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 15.504499912261963) {
                                    result[9] = 4.0;
                                } else {
                                    result[9] = 4.5;
                                }
                            } else {
                                if (input[4] <= 15.177500247955322) {
                                    result[9] = 3.0;
                                } else {
                                    result[9] = 4.1;
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 15.190999984741211) {
                        if (input[2] <= 12.0) {
                            if (input[3] <= 112.0) {
                                result[9] = 3.0;
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    result[9] = 4.0;
                                } else {
                                    result[9] = 3.6;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 44.0) {
                                        if (input[4] <= 14.37000036239624) {
                                            result[9] = 3.0;
                                        } else {
                                            result[9] = 3.909090909090909;
                                        }
                                    } else {
                                        result[9] = 4.0;
                                    }
                                } else {
                                    if (input[2] <= 28.0) {
                                        if (input[3] <= 88.0) {
                                            result[9] = 3.34375;
                                        } else {
                                            result[9] = 4.0;
                                        }
                                    } else {
                                        if (input[4] <= 14.754499912261963) {
                                            result[9] = 4.032846715328467;
                                        } else {
                                            result[9] = 4.6875;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 13.84749984741211) {
                                    if (input[2] <= 52.0) {
                                        result[9] = 3.0;
                                    } else {
                                        if (input[4] <= 13.32200002670288) {
                                            result[9] = 3.0;
                                        } else {
                                            result[9] = 3.1666666666666665;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 88.0) {
                                        if (input[2] <= 60.0) {
                                            result[9] = 3.0;
                                        } else {
                                            result[9] = 3.5;
                                        }
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[9] = 3.409090909090909;
                                        } else {
                                            result[9] = 4.333333333333333;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 28.0) {
                            if (input[3] <= 112.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[9] = 4.0;
                                } else {
                                    if (input[4] <= 16.0314998626709) {
                                        if (input[4] <= 15.637499809265137) {
                                            result[9] = 3.125;
                                        } else {
                                            result[9] = 3.0;
                                        }
                                    } else {
                                        result[9] = 4.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 15.714499950408936) {
                                    result[9] = 4.0;
                                } else {
                                    result[9] = 5.333333333333333;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 40.0) {
                                        result[9] = 4.0;
                                    } else {
                                        result[9] = 5.0;
                                    }
                                } else {
                                    result[9] = 5.0;
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[1] <= 0.75) {
                                        result[9] = 3.4;
                                    } else {
                                        result[9] = 3.875;
                                    }
                                } else {
                                    if (input[4] <= 15.549499988555908) {
                                        result[9] = 4.0;
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[9] = 4.7272727272727275;
                                        } else {
                                            result[9] = 4.285714285714286;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[3] <= 56.0) {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 40.0) {
                            if (input[4] <= 17.91100025177002) {
                                if (input[0] <= 0.8950000107288361) {
                                    result[9] = 3.0;
                                } else {
                                    if (input[2] <= 12.0) {
                                        result[9] = 3.142857142857143;
                                    } else {
                                        result[9] = 3.0;
                                    }
                                }
                            } else {
                                result[9] = 3.25;
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                result[9] = 4.0;
                            } else {
                                if (input[4] <= 18.023999214172363) {
                                    result[9] = 3.0;
                                } else {
                                    result[9] = 3.4285714285714284;
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 60.0) {
                            if (input[1] <= 0.9249999821186066) {
                                if (input[3] <= 40.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[9] = 4.0;
                                    } else {
                                        if (input[4] <= 18.069499969482422) {
                                            result[9] = 3.1724137931034484;
                                        } else {
                                            result[9] = 3.5714285714285716;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 17.27999973297119) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[9] = 4.0;
                                        } else {
                                            result[9] = 3.6666666666666665;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[9] = 4.782608695652174;
                                        } else {
                                            result[9] = 5.6;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 36.0) {
                                    result[9] = 5.9;
                                } else {
                                    if (input[3] <= 40.0) {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[9] = 4.0;
                                        } else {
                                            result[9] = 3.8333333333333335;
                                        }
                                    } else {
                                        result[9] = 4.285714285714286;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 18.184500694274902) {
                                        result[9] = 4.0;
                                    } else {
                                        result[9] = 4.25;
                                    }
                                } else {
                                    result[9] = 5.0;
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    result[9] = 5.0;
                                } else {
                                    result[9] = 6.111111111111111;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 28.0) {
                        if (input[3] <= 88.0) {
                            if (input[3] <= 72.0) {
                                if (input[4] <= 17.0625) {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[9] = 4.0;
                                    } else {
                                        result[9] = 4.428571428571429;
                                    }
                                } else {
                                    if (input[4] <= 17.420499801635742) {
                                        result[9] = 3.5;
                                    } else {
                                        result[9] = 4.0;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.6500000059604645) {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[2] <= 20.0) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 4.0;
                                        }
                                    } else {
                                        result[9] = 5.6;
                                    }
                                } else {
                                    if (input[2] <= 20.0) {
                                        if (input[4] <= 17.06350040435791) {
                                            result[9] = 4.0;
                                        } else {
                                            result[9] = 4.666666666666667;
                                        }
                                    } else {
                                        if (input[4] <= 17.67199993133545) {
                                            result[9] = 3.8;
                                        } else {
                                            result[9] = 4.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 12.0) {
                                if (input[3] <= 112.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[9] = 4.0;
                                    } else {
                                        result[9] = 3.5;
                                    }
                                } else {
                                    if (input[4] <= 17.625500679016113) {
                                        result[9] = 5.0;
                                    } else {
                                        result[9] = 5.125;
                                    }
                                }
                            } else {
                                if (input[4] <= 17.994500160217285) {
                                    result[9] = 5.0;
                                } else {
                                    result[9] = 5.571428571428571;
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 72.0) {
                            if (input[2] <= 44.0) {
                                if (input[4] <= 17.173999786376953) {
                                    result[9] = 3.2857142857142856;
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 36.0) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 4.0;
                                        }
                                    } else {
                                        result[9] = 6.714285714285714;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[1] <= 0.550000011920929) {
                                        result[9] = 5.5;
                                    } else {
                                        if (input[4] <= 17.804499626159668) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 5.142857142857143;
                                        }
                                    }
                                } else {
                                    result[9] = 4.5;
                                }
                            }
                        } else {
                            if (input[4] <= 17.49650001525879) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 17.320500373840332) {
                                        result[9] = 5.0;
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 5.5;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        if (input[4] <= 17.154500007629395) {
                                            result[9] = 6.260869565217392;
                                        } else {
                                            result[9] = 5.142857142857143;
                                        }
                                    } else {
                                        if (input[4] <= 16.67199993133545) {
                                            result[9] = 4.8;
                                        } else {
                                            result[9] = 5.25;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[4] <= 17.537500381469727) {
                                        result[9] = 6.625;
                                    } else {
                                        if (input[4] <= 17.596500396728516) {
                                            result[9] = 4.888888888888889;
                                        } else {
                                            result[9] = 5.966101694915254;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 17.835000038146973) {
                                        result[9] = 5.0;
                                    } else {
                                        if (input[4] <= 17.967000007629395) {
                                            result[9] = 5.8;
                                        } else {
                                            result[9] = 6.0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] <= 22.01849937438965) {
            if (input[3] <= 56.0) {
                if (input[2] <= 28.0) {
                    if (input[4] <= 21.146499633789062) {
                        if (input[4] <= 19.31149959564209) {
                            if (input[3] <= 24.0) {
                                if (input[1] <= 0.8499999940395355) {
                                    result[9] = 3.0;
                                } else {
                                    result[9] = 3.111111111111111;
                                }
                            } else {
                                if (input[2] <= 12.0) {
                                    result[9] = 3.2;
                                } else {
                                    if (input[0] <= 0.5000000149011612) {
                                        result[9] = 4.0;
                                    } else {
                                        result[9] = 4.333333333333333;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[3] <= 40.0) {
                                    result[9] = 4.0;
                                } else {
                                    if (input[4] <= 20.428499221801758) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[9] = 4.142857142857143;
                                        } else {
                                            result[9] = 4.0;
                                        }
                                    } else {
                                        result[9] = 4.833333333333333;
                                    }
                                }
                            } else {
                                if (input[4] <= 20.10949993133545) {
                                    if (input[4] <= 19.744999885559082) {
                                        if (input[4] <= 19.620999336242676) {
                                            result[9] = 5.2;
                                        } else {
                                            result[9] = 4.0;
                                        }
                                    } else {
                                        result[9] = 6.0;
                                    }
                                } else {
                                    if (input[1] <= 0.75) {
                                        result[9] = 4.0;
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 4.333333333333333;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 24.0) {
                            if (input[0] <= 0.8950000107288361) {
                                result[9] = 4.0;
                            } else {
                                if (input[4] <= 21.373499870300293) {
                                    result[9] = 4.0;
                                } else {
                                    result[9] = 5.0;
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                result[9] = 5.0;
                            } else {
                                result[9] = 6.555555555555555;
                            }
                        }
                    }
                } else {
                    if (input[4] <= 20.23449993133545) {
                        if (input[3] <= 40.0) {
                            if (input[2] <= 52.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 24.0) {
                                        result[9] = 4.0;
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[9] = 4.0;
                                        } else {
                                            result[9] = 5.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 18.92400074005127) {
                                        if (input[2] <= 44.0) {
                                            result[9] = 3.4;
                                        } else {
                                            result[9] = 4.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[9] = 5.444444444444445;
                                        } else {
                                            result[9] = 4.4375;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 19.229000091552734) {
                                    if (input[2] <= 60.0) {
                                        if (input[4] <= 18.66800022125244) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 4.166666666666667;
                                        }
                                    } else {
                                        if (input[4] <= 18.727499961853027) {
                                            result[9] = 4.857142857142857;
                                        } else {
                                            result[9] = 5.0;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.75) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 5.875;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 4.125;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 19.04349994659424) {
                                if (input[4] <= 18.499500274658203) {
                                    result[9] = 4.25;
                                } else {
                                    if (input[2] <= 52.0) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[9] = 4.8;
                                        } else {
                                            result[9] = 5.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[9] = 5.2;
                                        } else {
                                            result[9] = 4.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[2] <= 60.0) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[9] = 5.3125;
                                        } else {
                                            result[9] = 5.0;
                                        }
                                    } else {
                                        result[9] = 6.0;
                                    }
                                } else {
                                    if (input[1] <= 0.6500000059604645) {
                                        result[9] = 7.2;
                                    } else {
                                        result[9] = 6.75;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[3] <= 24.0) {
                                if (input[2] <= 40.0) {
                                    result[9] = 4.0;
                                } else {
                                    if (input[2] <= 60.0) {
                                        result[9] = 5.0;
                                    } else {
                                        if (input[3] <= 12.0) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 6.0;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 60.0) {
                                    if (input[2] <= 44.0) {
                                        if (input[4] <= 21.675999641418457) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 5.4;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[9] = 5.777777777777778;
                                        } else {
                                            result[9] = 5.238095238095238;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.10000000149011612) {
                                        result[9] = 6.25;
                                    } else {
                                        result[9] = 6.0;
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 21.687000274658203) {
                                if (input[4] <= 21.263999938964844) {
                                    if (input[3] <= 24.0) {
                                        result[9] = 7.090909090909091;
                                    } else {
                                        if (input[2] <= 44.0) {
                                            result[9] = 5.230769230769231;
                                        } else {
                                            result[9] = 6.461538461538462;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 40.0) {
                                        result[9] = 4.9;
                                    } else {
                                        result[9] = 5.428571428571429;
                                    }
                                }
                            } else {
                                if (input[1] <= 0.7000000178813934) {
                                    result[9] = 5.75;
                                } else {
                                    result[9] = 8.0;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= 28.0) {
                    if (input[3] <= 112.0) {
                        if (input[4] <= 19.564000129699707) {
                            if (input[2] <= 12.0) {
                                if (input[4] <= 19.104999542236328) {
                                    result[9] = 4.0;
                                } else {
                                    if (input[3] <= 72.0) {
                                        result[9] = 4.0;
                                    } else {
                                        result[9] = 5.0;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 88.0) {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 4.285714285714286;
                                        }
                                    } else {
                                        result[9] = 6.0;
                                    }
                                } else {
                                    if (input[3] <= 88.0) {
                                        result[9] = 6.6;
                                    } else {
                                        result[9] = 5.166666666666667;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[2] <= 12.0) {
                                    result[9] = 5.0;
                                } else {
                                    if (input[3] <= 72.0) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[9] = 5.4;
                                        } else {
                                            result[9] = 5.0;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[9] = 6.0;
                                        } else {
                                            result[9] = 5.636363636363637;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 20.69950008392334) {
                                    if (input[4] <= 19.97100067138672) {
                                        result[9] = 5.7;
                                    } else {
                                        if (input[4] <= 20.14349937438965) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 5.375;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 12.0) {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[9] = 6.4;
                                        } else {
                                            result[9] = 5.363636363636363;
                                        }
                                    } else {
                                        if (input[1] <= 0.6500000059604645) {
                                            result[9] = 5.8;
                                        } else {
                                            result[9] = 7.125;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[4] <= 21.316500663757324) {
                            if (input[4] <= 18.87399959564209) {
                                if (input[0] <= 0.4000000134110451) {
                                    result[9] = 6.0;
                                } else {
                                    result[9] = 5.111111111111111;
                                }
                            } else {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[0] <= 0.8950000107288361) {
                                        result[9] = 6.0;
                                    } else {
                                        if (input[4] <= 19.561500549316406) {
                                            result[9] = 7.4;
                                        } else {
                                            result[9] = 7.2;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 12.0) {
                                            result[9] = 6.5;
                                        } else {
                                            result[9] = 6.0;
                                        }
                                    } else {
                                        result[9] = 5.5;
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 20.0) {
                                result[9] = 7.2727272727272725;
                            } else {
                                result[9] = 6.923076923076923;
                            }
                        }
                    }
                } else {
                    if (input[4] <= 20.41699981689453) {
                        if (input[3] <= 112.0) {
                            if (input[4] <= 19.979000091552734) {
                                if (input[1] <= 0.9249999821186066) {
                                    if (input[4] <= 18.527999877929688) {
                                        if (input[3] <= 72.0) {
                                            result[9] = 4.714285714285714;
                                        } else {
                                            result[9] = 5.882352941176471;
                                        }
                                    } else {
                                        if (input[4] <= 18.55500030517578) {
                                            result[9] = 6.8;
                                        } else {
                                            result[9] = 5.824561403508772;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[2] <= 44.0) {
                                            result[9] = 5.833333333333333;
                                        } else {
                                            result[9] = 6.0;
                                        }
                                    } else {
                                        result[9] = 6.928571428571429;
                                    }
                                }
                            } else {
                                if (input[4] <= 20.307499885559082) {
                                    if (input[2] <= 52.0) {
                                        if (input[3] <= 72.0) {
                                            result[9] = 6.75;
                                        } else {
                                            result[9] = 5.923076923076923;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[9] = 6.4;
                                        } else {
                                            result[9] = 7.714285714285714;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 20.388999938964844) {
                                        result[9] = 5.636363636363637;
                                    } else {
                                        result[9] = 6.2;
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 0.8950000107288361) {
                                if (input[4] <= 20.083499908447266) {
                                    result[9] = 6.0;
                                } else {
                                    result[9] = 6.857142857142857;
                                }
                            } else {
                                if (input[4] <= 19.69700050354004) {
                                    if (input[4] <= 18.959500312805176) {
                                        if (input[4] <= 18.63700008392334) {
                                            result[9] = 6.5;
                                        } else {
                                            result[9] = 6.8;
                                        }
                                    } else {
                                        if (input[4] <= 19.239500045776367) {
                                            result[9] = 8.0;
                                        } else {
                                            result[9] = 7.2;
                                        }
                                    }
                                } else {
                                    result[9] = 5.666666666666667;
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 72.0) {
                                if (input[1] <= 0.8499999940395355) {
                                    if (input[2] <= 36.0) {
                                        if (input[4] <= 21.591500282287598) {
                                            result[9] = 6.0;
                                        } else {
                                            result[9] = 5.6;
                                        }
                                    } else {
                                        result[9] = 5.0;
                                    }
                                } else {
                                    result[9] = 6.6;
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[9] = 7.0;
                                        } else {
                                            result[9] = 6.8;
                                        }
                                    } else {
                                        result[9] = 6.0;
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[9] = 7.777777777777778;
                                    } else {
                                        result[9] = 7.142857142857143;
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 112.0) {
                                if (input[4] <= 20.82949924468994) {
                                    if (input[4] <= 20.715499877929688) {
                                        if (input[4] <= 20.52750015258789) {
                                            result[9] = 6.6;
                                        } else {
                                            result[9] = 7.181818181818182;
                                        }
                                    } else {
                                        result[9] = 6.25;
                                    }
                                } else {
                                    if (input[4] <= 21.92899990081787) {
                                        if (input[4] <= 21.84299945831299) {
                                            result[9] = 7.0;
                                        } else {
                                            result[9] = 7.428571428571429;
                                        }
                                    } else {
                                        result[9] = 6.666666666666667;
                                    }
                                }
                            } else {
                                if (input[0] <= 0.10000000149011612) {
                                    result[9] = 8.0;
                                } else {
                                    if (input[1] <= 0.6500000059604645) {
                                        if (input[4] <= 20.83750057220459) {
                                            result[9] = 7.0;
                                        } else {
                                            result[9] = 7.8;
                                        }
                                    } else {
                                        if (input[4] <= 21.598999977111816) {
                                            result[9] = 6.9;
                                        } else {
                                            result[9] = 7.285714285714286;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[4] <= 29.493499755859375) {
                if (input[3] <= 56.0) {
                    if (input[4] <= 25.30900001525879) {
                        if (input[2] <= 60.0) {
                            if (input[2] <= 44.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[3] <= 40.0) {
                                        if (input[4] <= 24.875499725341797) {
                                            result[9] = 5.016597510373444;
                                        } else {
                                            result[9] = 5.257142857142857;
                                        }
                                    } else {
                                        if (input[2] <= 28.0) {
                                            result[9] = 5.083333333333333;
                                        } else {
                                            result[9] = 6.0;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 22.738499641418457) {
                                        if (input[2] <= 28.0) {
                                            result[9] = 4.461538461538462;
                                        } else {
                                            result[9] = 5.0;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[9] = 5.538461538461538;
                                        } else {
                                            result[9] = 6.5813953488372094;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 24.0) {
                                    if (input[4] <= 24.24400043487549) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 5.571428571428571;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[9] = 6.0;
                                        } else {
                                            result[9] = 5.6;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.33300018310547) {
                                        if (input[3] <= 40.0) {
                                            result[9] = 6.044444444444444;
                                        } else {
                                            result[9] = 5.576923076923077;
                                        }
                                    } else {
                                        if (input[2] <= 52.0) {
                                            result[9] = 6.638888888888889;
                                        } else {
                                            result[9] = 6.041666666666667;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 23.288000106811523) {
                                    if (input[3] <= 12.0) {
                                        result[9] = 5.0;
                                    } else {
                                        if (input[4] <= 23.05049991607666) {
                                            result[9] = 6.0;
                                        } else {
                                            result[9] = 5.75;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 23.607500076293945) {
                                        result[9] = 7.5;
                                    } else {
                                        if (input[4] <= 24.007500648498535) {
                                            result[9] = 5.454545454545454;
                                        } else {
                                            result[9] = 7.142857142857143;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 40.0) {
                                    if (input[4] <= 23.465499877929688) {
                                        result[9] = 6.333333333333333;
                                    } else {
                                        result[9] = 7.0;
                                    }
                                } else {
                                    if (input[4] <= 24.11199951171875) {
                                        if (input[4] <= 22.64400005340576) {
                                            result[9] = 7.25;
                                        } else {
                                            result[9] = 7.0;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[9] = 8.0;
                                        } else {
                                            result[9] = 7.75;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 44.0) {
                            if (input[3] <= 40.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 26.28749942779541) {
                                        if (input[2] <= 28.0) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 5.913043478260869;
                                        }
                                    } else {
                                        if (input[3] <= 24.0) {
                                            result[9] = 6.0;
                                        } else {
                                            result[9] = 6.2727272727272725;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 12.0) {
                                        if (input[3] <= 12.0) {
                                            result[9] = 5.0;
                                        } else {
                                            result[9] = 6.6;
                                        }
                                    } else {
                                        if (input[4] <= 27.692999839782715) {
                                            result[9] = 6.51063829787234;
                                        } else {
                                            result[9] = 7.5;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 28.0) {
                                    if (input[0] <= 0.8950000107288361) {
                                        if (input[4] <= 27.971500396728516) {
                                            result[9] = 6.086956521739131;
                                        } else {
                                            result[9] = 6.793103448275862;
                                        }
                                    } else {
                                        result[9] = 7.375;
                                    }
                                } else {
                                    if (input[4] <= 28.416500091552734) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[9] = 7.384615384615385;
                                        } else {
                                            result[9] = 6.846153846153846;
                                        }
                                    } else {
                                        if (input[0] <= 0.5000000149011612) {
                                            result[9] = 8.0;
                                        } else {
                                            result[9] = 7.857142857142857;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 27.469499588012695) {
                                    if (input[2] <= 52.0) {
                                        if (input[4] <= 25.58549976348877) {
                                            result[9] = 6.833333333333333;
                                        } else {
                                            result[9] = 5.774193548387097;
                                        }
                                    } else {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[9] = 6.377049180327869;
                                        } else {
                                            result[9] = 7.538461538461538;
                                        }
                                    }
                                } else {
                                    if (input[2] <= 52.0) {
                                        if (input[4] <= 28.449000358581543) {
                                            result[9] = 6.214285714285714;
                                        } else {
                                            result[9] = 7.15;
                                        }
                                    } else {
                                        if (input[3] <= 12.0) {
                                            result[9] = 7.151898734177215;
                                        } else {
                                            result[9] = 7.822222222222222;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 26.207999229431152) {
                                        if (input[2] <= 60.0) {
                                            result[9] = 7.024390243902439;
                                        } else {
                                            result[9] = 7.846153846153846;
                                        }
                                    } else {
                                        if (input[4] <= 28.58150005340576) {
                                            result[9] = 7.742424242424242;
                                        } else {
                                            result[9] = 7.214285714285714;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.8499999940395355) {
                                        result[9] = 7.0;
                                    } else {
                                        if (input[4] <= 26.308000564575195) {
                                            result[9] = 6.857142857142857;
                                        } else {
                                            result[9] = 6.4;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[4] <= 23.386500358581543) {
                        if (input[3] <= 88.0) {
                            if (input[2] <= 28.0) {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[4] <= 22.962499618530273) {
                                        if (input[0] <= 0.10000000149011612) {
                                            result[9] = 5.833333333333333;
                                        } else {
                                            result[9] = 5.414634146341464;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[9] = 6.0;
                                        } else {
                                            result[9] = 5.666666666666667;
                                        }
                                    }
                                } else {
                                    result[9] = 6.75;
                                }
                            } else {
                                if (input[0] <= 0.10000000149011612) {
                                    if (input[4] <= 22.60099983215332) {
                                        result[9] = 7.571428571428571;
                                    } else {
                                        result[9] = 8.0;
                                    }
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        if (input[0] <= 0.8950000107288361) {
                                            result[9] = 7.025;
                                        } else {
                                            result[9] = 6.428571428571429;
                                        }
                                    } else {
                                        if (input[4] <= 22.649499893188477) {
                                            result[9] = 5.857142857142857;
                                        } else {
                                            result[9] = 6.583333333333333;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= 36.0) {
                                if (input[2] <= 12.0) {
                                    if (input[3] <= 112.0) {
                                        result[9] = 5.857142857142857;
                                    } else {
                                        if (input[4] <= 22.278000831604004) {
                                            result[9] = 7.5;
                                        } else {
                                            result[9] = 6.7272727272727275;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.10000000149011612) {
                                        if (input[3] <= 112.0) {
                                            result[9] = 7.0;
                                        } else {
                                            result[9] = 8.0;
                                        }
                                    } else {
                                        if (input[1] <= 0.75) {
                                            result[9] = 6.921052631578948;
                                        } else {
                                            result[9] = 7.208333333333333;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.8950000107288361) {
                                    if (input[0] <= 0.5000000149011612) {
                                        if (input[0] <= 0.30000000447034836) {
                                            result[9] = 8.0;
                                        } else {
                                            result[9] = 7.741935483870968;
                                        }
                                    } else {
                                        if (input[4] <= 22.67300033569336) {
                                            result[9] = 7.190476190476191;
                                        } else {
                                            result[9] = 7.612244897959184;
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.75) {
                                        result[9] = 7.0;
                                    } else {
                                        if (input[4] <= 22.645499229431152) {
                                            result[9] = 6.75;
                                        } else {
                                            result[9] = 6.25;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.8950000107288361) {
                            if (input[2] <= 12.0) {
                                if (input[4] <= 27.520999908447266) {
                                    if (input[3] <= 112.0) {
                                        if (input[4] <= 26.095999717712402) {
                                            result[9] = 6.083333333333333;
                                        } else {
                                            result[9] = 6.775;
                                        }
                                    } else {
                                        if (input[4] <= 24.850000381469727) {
                                            result[9] = 7.181818181818182;
                                        } else {
                                            result[9] = 8.0;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 72.0) {
                                        result[9] = 7.0;
                                    } else {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[9] = 8.0;
                                        } else {
                                            result[9] = 7.411764705882353;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= 44.0) {
                                    if (input[3] <= 88.0) {
                                        if (input[4] <= 26.142499923706055) {
                                            result[9] = 7.005988023952096;
                                        } else {
                                            result[9] = 7.630208333333333;
                                        }
                                    } else {
                                        if (input[0] <= 0.7000000178813934) {
                                            result[9] = 7.9338235294117645;
                                        } else {
                                            result[9] = 7.5344827586206895;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        result[9] = 8.0;
                                    } else {
                                        if (input[4] <= 23.91950035095215) {
                                            result[9] = 7.533333333333333;
                                        } else {
                                            result[9] = 8.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.75) {
                                if (input[3] <= 72.0) {
                                    if (input[2] <= 28.0) {
                                        if (input[4] <= 27.20400047302246) {
                                            result[9] = 6.6;
                                        } else {
                                            result[9] = 7.0;
                                        }
                                    } else {
                                        if (input[2] <= 36.0) {
                                            result[9] = 7.25;
                                        } else {
                                            result[9] = 7.0;
                                        }
                                    }
                                } else {
                                    if (input[3] <= 112.0) {
                                        if (input[4] <= 25.190500259399414) {
                                            result[9] = 7.733333333333333;
                                        } else {
                                            result[9] = 7.25;
                                        }
                                    } else {
                                        result[9] = 6.666666666666667;
                                    }
                                }
                            } else {
                                if (input[4] <= 24.013999938964844) {
                                    if (input[2] <= 28.0) {
                                        result[9] = 7.636363636363637;
                                    } else {
                                        result[9] = 6.285714285714286;
                                    }
                                } else {
                                    if (input[2] <= 44.0) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[9] = 6.733333333333333;
                                        } else {
                                            result[9] = 6.3428571428571425;
                                        }
                                    } else {
                                        if (input[4] <= 24.696499824523926) {
                                            result[9] = 6.6;
                                        } else {
                                            result[9] = 7.0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 0.8950000107288361) {
                    if (input[4] <= 33.305999755859375) {
                        if (input[3] <= 24.0) {
                            if (input[2] <= 36.0) {
                                if (input[4] <= 30.371000289916992) {
                                    result[9] = 6.0;
                                } else {
                                    if (input[4] <= 32.87649917602539) {
                                        if (input[4] <= 32.5575008392334) {
                                            result[9] = 6.990384615384615;
                                        } else {
                                            result[9] = 7.125;
                                        }
                                    } else {
                                        if (input[2] <= 20.0) {
                                            result[9] = 7.0;
                                        } else {
                                            result[9] = 7.571428571428571;
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 31.57550048828125) {
                                    if (input[2] <= 44.0) {
                                        if (input[4] <= 31.172999382019043) {
                                            result[9] = 7.0;
                                        } else {
                                            result[9] = 7.333333333333333;
                                        }
                                    } else {
                                        if (input[4] <= 29.92199993133545) {
                                            result[9] = 7.88;
                                        } else {
                                            result[9] = 7.481927710843373;
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.7000000178813934) {
                                        if (input[1] <= 0.9249999821186066) {
                                            result[9] = 8.0;
                                        } else {
                                            result[9] = 7.875;
                                        }
                                    } else {
                                        if (input[4] <= 32.11149883270264) {
                                            result[9] = 7.4;
                                        } else {
                                            result[9] = 8.0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 32.3804988861084) {
                                if (input[3] <= 40.0) {
                                    if (input[2] <= 28.0) {
                                        if (input[4] <= 31.734999656677246) {
                                            result[9] = 7.0;
                                        } else {
                                            result[9] = 7.5;
                                        }
                                    } else {
                                        if (input[4] <= 30.498499870300293) {
                                            result[9] = 7.51063829787234;
                                        } else {
                                            result[9] = 7.848484848484849;
                                        }
                                    }
                                } else {
                                    if (input[4] <= 30.380000114440918) {
                                        if (input[4] <= 30.172999382019043) {
                                            result[9] = 7.75;
                                        } else {
                                            result[9] = 7.2727272727272725;
                                        }
                                    } else {
                                        if (input[4] <= 30.49400043487549) {
                                            result[9] = 8.0;
                                        } else {
                                            result[9] = 7.76;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= 0.7000000178813934) {
                                    if (input[2] <= 12.0) {
                                        if (input[1] <= 0.8499999940395355) {
                                            result[9] = 8.0;
                                        } else {
                                            result[9] = 7.8;
                                        }
                                    } else {
                                        result[9] = 8.0;
                                    }
                                } else {
                                    result[9] = 7.8;
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 0.8499999940395355) {
                            if (input[0] <= 0.7000000178813934) {
                                result[9] = 8.0;
                            } else {
                                if (input[1] <= 0.75) {
                                    result[9] = 8.0;
                                } else {
                                    result[9] = 7.75;
                                }
                            }
                        } else {
                            if (input[4] <= 33.903499603271484) {
                                if (input[0] <= 0.30000000447034836) {
                                    result[9] = 8.0;
                                } else {
                                    if (input[1] <= 0.9249999821186066) {
                                        result[9] = 7.111111111111111;
                                    } else {
                                        result[9] = 7.0;
                                    }
                                }
                            } else {
                                if (input[4] <= 34.433000564575195) {
                                    if (input[2] <= 12.0) {
                                        result[9] = 7.625;
                                    } else {
                                        result[9] = 8.0;
                                    }
                                } else {
                                    result[9] = 8.0;
                                }
                            }
                        }
                    }
                } else {
                    if (input[3] <= 12.0) {
                        if (input[2] <= 12.0) {
                            result[9] = 7.25;
                        } else {
                            if (input[2] <= 44.0) {
                                if (input[4] <= 32.110501289367676) {
                                    if (input[4] <= 31.40250015258789) {
                                        result[9] = 6.4;
                                    } else {
                                        result[9] = 6.0;
                                    }
                                } else {
                                    result[9] = 6.333333333333333;
                                }
                            } else {
                                result[9] = 6.8;
                            }
                        }
                    } else {
                        if (input[1] <= 0.8499999940395355) {
                            if (input[3] <= 24.0) {
                                result[9] = 7.0;
                            } else {
                                if (input[2] <= 12.0) {
                                    result[9] = 7.0;
                                } else {
                                    result[9] = 7.3;
                                }
                            }
                        } else {
                            if (input[3] <= 24.0) {
                                if (input[4] <= 31.335000038146973) {
                                    result[9] = 7.4;
                                } else {
                                    result[9] = 7.0;
                                }
                            } else {
                                result[9] = 6.533333333333333;
                            }
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i < 10; i++){
        total += result[i];
    }
    *output = total/10.;
}
