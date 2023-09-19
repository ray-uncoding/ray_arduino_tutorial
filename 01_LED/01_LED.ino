int LED=13;   // 建立名為【LED】的【整數int】變數->13
char val;     // 建立名為【val】的【字元val】變數   

////////////////////////////////////////////////
///////////////只執行一次的初始設定指令/////////////

void setup() {
  Serial.begin(9600);         //與電腦連接鲍率->(9600)
  Serial.println("ready");    //於monitor列印出ready
  pinMode(LED, OUTPUT);       //設定【LED】為輸出狀態
}

////////////////////////////////////////////////
//////////////////執行多次的主程式/////////////////

void loop() {
  
  if(Serial.available()){    //如果【有接收到訊】
    val=Serial.read();       //就將【訊息】替換至【val】中
  }

  switch(val){               //掃描【val】中的訊息
    case 'L':                       //如果是【L】
        digitalWrite(LED, HIGH);    //輸出【高電壓】至接腳【LED】
        break;                      //跳出迴圈

    case 'B':                       //如果是【B】
        digitalWrite(LED, LOW);     //輸出【低電壓】至接腳【LED】
        break;                      //跳出迴圈
  }
}
