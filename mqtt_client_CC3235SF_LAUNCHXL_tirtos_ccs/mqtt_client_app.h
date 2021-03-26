#ifndef MQTT_CL_APP_H_
#define MQTT_CL_APP_H_

enum{
    APP_MQTT_PUBLISH,
    APP_MQTT_CON_TOGGLE,
    APP_MQTT_DEINIT,
    APP_BTN_HANDLER,
    APP_MQTT_CONN
};

struct msgQueue
{
    int   event;
    char* payload;
};

mqd_t appQueue;

#endif /* MQTT_IF_H_ */
