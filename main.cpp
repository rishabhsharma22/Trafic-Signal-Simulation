#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <list>
#include <stdlib.h>
#include <time.h>
#include <math.h>


using namespace std;

int main()
{
    cout<<"Running Tss_optimized";
    vector<int> traffic_signal_1;
    vector<int> traffic_signal_2;
    vector<int> traffic_signal_3;
    vector<int> traffic_signal_4;


    int wait_time_1 = 0;
    int wait_time_2 = 10;
    int wait_time_3 = 85;
    int wait_time_4 = 165;

    srand(time(NULL));

    int event_indentifier = rand() %4 + 1;
    event_indentifier = 1;    //initializing a traffic signal as green and rest all as red.



    int pass_time_1;
    int pass_time_2;
    int pass_time_3;
    int pass_time_4;
    int car_entry = 0;

    int car = 1;
    //initializing loop_1
    for(int i=0;i<25;i++)
    {

    for(int initialize = 1; initialize<=72000;)
    {

        if(event_indentifier == 1)
        {
            int j=10;
                while(j)
                {
                wait_time_2--;
                wait_time_3--;
                wait_time_4--;

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_1.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_2.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_3.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_4.push_back(1);
                    car_entry--;
                }

                if(traffic_signal_1.size()>0)
                {
                    car_entry = rand()%5;
                    while(car_entry)
                    {
                        if(traffic_signal_1.size()>0)
                        {
                            traffic_signal_1.pop_back();
                        }
                        car_entry--;
                    }
                }


                j--;
                if(j==0)
                {
                    event_indentifier++;
                    wait_time_1 = 180;
                    initialize = initialize+10;
                }
        }
        }


        else if(event_indentifier == 2)
        {

            int j=70;

            while(j)
            {
            wait_time_1--;
            wait_time_3--;
            wait_time_4--;

            car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_1.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_2.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_3.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_4.push_back(1);
                    car_entry--;
                }

                if(traffic_signal_2.size()>0)
                {
                    car_entry = rand()%5;
                    while(car_entry)
                    {
                        if(traffic_signal_2.size()>0)
                        {
                            traffic_signal_2.pop_back();
                        }
                        car_entry--;
                    }
                }
                j--;
            if(j==0)
                {
                    event_indentifier++;
                    wait_time_2 = 180;
                    initialize=initialize+75;
                }

            }
        }


        else if(event_indentifier == 3)
        {

            int j=80;
            while(j)
            {
            wait_time_1--;
            wait_time_2--;
            wait_time_4--;

            car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_1.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_2.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_3.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_4.push_back(1);
                    car_entry--;
                }

                if(traffic_signal_3.size()>0)
                {
                    car_entry = rand()%5;
                    while(car_entry)
                    {
                        if(traffic_signal_3.size()>0)
                        {
                            traffic_signal_3.pop_back();
                        }
                        car_entry--;
                    }
                }
                j--;
            if(j==0)
                {
                    event_indentifier++;
                    wait_time_3 = 180;
                    initialize = initialize+80;
                }
        }
        }


       else  if(event_indentifier == 4)
        {
            int j=75;
            while(j)
            {
            wait_time_1--;
            wait_time_2--;
            wait_time_3--;

            car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_1.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_2.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_3.push_back(1);
                    car_entry--;
                }

                car_entry = rand()%5;
                while(car_entry)
                {
                    traffic_signal_4.push_back(1);
                    car_entry--;
                }

                if(traffic_signal_4.size()>0)
                {
                    car_entry = rand()%5;
                    while(car_entry)
                    {
                        if(traffic_signal_4.size()>0)
                        {
                            traffic_signal_4.pop_back();
                        }
                        car_entry--;
                    }
                }
                j--;
            if(j==0)
                  {
                    event_indentifier=1;
                    wait_time_4 = 180;
                    initialize = initialize+75;
                }
        }
        }

    }

    cout<<endl<<"After 72000 seconds the situation of traffic is"<<endl;
    cout<<"Traffic at first lane: "<<traffic_signal_1.size()<<endl;
    cout<<"Traffic at second lane: "<<traffic_signal_2.size()<<endl;
    cout<<"Traffic at third lane: "<<traffic_signal_3.size()<<endl;
    cout<<"Traffic at fourth lane: "<<traffic_signal_4.size()<<endl;
    //end of loop_1
    }
    cout<<endl<<"After 25 samples the situation of traffic is"<<endl;
    cout<<"Traffic at first lane: "<<traffic_signal_1.size()/25<<endl;
    cout<<"Traffic at second lane: "<<traffic_signal_2.size()/25<<endl;
    cout<<"Traffic at third lane: "<<traffic_signal_3.size()/25<<endl;
    cout<<"Traffic at fourth lane: "<<traffic_signal_4.size()/25<<endl;


    return 0;
}
