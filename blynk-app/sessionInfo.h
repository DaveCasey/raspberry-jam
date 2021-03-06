#ifndef CONNECTION_INFO_H
#define CONNECTION_INFO_H

typedef struct ConnectionInfo_T {
   char name[64];
   char ipAddr[20];
   int portOffset;
   int role; 
   int latency;
   int gain;
   int slot;
   char jacktripKillSearch[128];
} ConnectionInfo_T;

typedef struct SessionInfo_T {
   char name[64];
   int inputLevel;
   int outputLevel;
   int sampleRate;
   int monitorGain;
   int inputSelect;
   int micBoost;
} SessionInfo_T;

#endif // CONNECTION_INFO_H

