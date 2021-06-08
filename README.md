# stream-deck-with-ic7300-on-mac
This project currently work on macOS only.

# Hardware Preparation:
 1.FTDI Icom CI-V Cat Control Programming Cable. I get it from here.
 https://www.amazon.com/gp/product/B074JRWYRP/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1
 
 2.macOS
 
 3.IC7300
 
 # Setup:
 1.Plug it to Remote(CI-V) port and macOS computer. Not the common USB CI-V port.
 
 2.IC7300 -> Menu -> Set -> Connectors -> CI-V -> CI-V USB Port -> Unlink From [REMOTE]
 
 3.IC7300 -> Menu -> Set -> Connectors -> CI-V -> CI-V Baud Rate -> 9600 or Auto
 
 4.Open Terminal.app on your macOS (Application folder -> Utilities Folder -> Terminal.app)
 
 5.Run a command line
  
   ls /dev | grep cu
   
   ![Screenshot 2021-06-08 at 10 29 09 PM](https://user-images.githubusercontent.com/39380985/121203905-0ee74d80-c8a9-11eb-840f-e764bae668a3.png)

   
 6.You should see something like this (for my case). This represents your FTDI Icom CI-V cable. It can be vary. Depends on what cable you have bought.
 
   cu.usbserial-AQ00SBWQ
   
   ![Screenshot 2021-06-08 at 10 30 18 PM](https://user-images.githubusercontent.com/39380985/121204148-4524cd00-c8a9-11eb-82e1-b43ad6ff579f.png)

