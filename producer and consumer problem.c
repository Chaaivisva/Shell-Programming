void Producer(void){ 

int item; 

Message m; 

while(1){ 

receive(Consumer, &m); 

item = produce(); 

build_message(&m , item ) ; 

send(Consumer, &m); 

} 

} 

void Consumer(void){ 

int item; 

Message m; 

while(1){ 

receive(Producer, &m); 

item = extracted_item(); 

send(Producer, &m); 

consume_item(item); 

} 

} 