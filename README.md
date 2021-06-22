# stream-deck-with-ic7300-on-mac
This project currently work on macOS only.

# Hardware Preparation:
 1.FTDI Icom CI-V Cat Control Programming Cable. I get it from here. In short, I will call it as FTDI Cable in following paragraph.
 https://www.amazon.com/gp/product/B074JRWYRP/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1
 
 2.macOS
 
 3.IC7300
 
 4.Stream Deck
 
 # Setup:
 1.Plug FTDI Cable to Remote(CI-V) port and macOS computer. Not the common USB CI-V port.
 
 2.IC7300 -> Menu -> Set -> Connectors -> CI-V -> CI-V USB Port -> Unlink From [REMOTE]
 
 3.IC7300 -> Menu -> Set -> Connectors -> CI-V -> CI-V Baud Rate -> 9600 or Auto
 
 4.Open Terminal.app on your macOS (Application folder -> Utilities Folder -> Terminal.app)
 
 5.Run a command line
  
   ls /dev | grep cu
   
   ![Screenshot 2021-06-08 at 10 29 09 PM](https://user-images.githubusercontent.com/39380985/121203905-0ee74d80-c8a9-11eb-840f-e764bae668a3.png)

   
 6.You should see something like this (for my case). This represents your FTDI Icom CI-V cable. It can be vary. Depends on what cable you have bought.
 
   cu.usbserial-AQ00SBWQ
   
   ![Screenshot 2021-06-08 at 10 30 18 PM](https://user-images.githubusercontent.com/39380985/121204148-4524cd00-c8a9-11eb-82e1-b43ad6ff579f.png)
   
 # Create the Controller applications:
 
 1.Download this repository to your prefered location.

 2.Open Teminal.app agian. Use cd cammand to access this repo. For instance 
  
  cd ~/Desktop/stream-deck-with-ic7300-on-mac/
  
  ![Screenshot 2021-06-08 at 10 40 25 PM](https://user-images.githubusercontent.com/39380985/121206086-c29d0d00-c8aa-11eb-8f69-f68f04ce7703.png)
  
  
 3.Look forserial_config.c file and open it in plain text editor. At row 8. look for “dev/your FTDI cable name”. Replace your FTDI cable name here.  After replacement, it should be looked like "/dev/cu.usbserial-AQ00SBWQ", for my case.
 
 ![Screenshot 2021-06-22 at 11 11 26 PM](https://user-images.githubusercontent.com/39380985/122950869-64465300-d3af-11eb-8038-a32c54f5d0e3.png)
 
 4.Run make command. (Kindly noted this command not done yet as the Makefile have't completed. You can't use it now).
  
  make 
 
 ![Screenshot 2021-06-08 at 10 40 52 PM](https://user-images.githubusercontent.com/39380985/121206164-d34d8300-c8aa-11eb-996c-14c29c08ee6b.png)

 5.It will create a "build" folder under "stream-deck-with-ic7300-on-mac" folder, which contains most of the Controllers . Each application is one Controllers. For instance, RIT.app that enables RIT function in your ic7300. RITOff.app will toggle the RIT off.
 
 # Work with Stream Deck 
 
 1.Open Steam Deck.app which preinstalled in your macOS.
 
 2.Under the System Action List, drag the Open Action to the Canvas Aera. 
 
 ![Screenshot 2021-06-08 at 10 57 07 PM](https://user-images.githubusercontent.com/39380985/121208964-0a249880-c8ad-11eb-8df4-7a00a431bd23.png)

 
 3.Under the Open Action attribute, set the App/File path to each controller application. For instance:
  
   ~/Desktop/stream-deck-with-ic7300-on-mac/build/RIT.app
   
 4.Here we go! Enjoy! 
 
 # Feedback
 
 If you are a ham you know how to find my email. Please don't be heistate to me. DE 9V1CL 73
 
 
 
