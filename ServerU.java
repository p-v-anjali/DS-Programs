import java.net.*;
import java.io.*;

class ServerU {
    public static void main(String args[]) {
        DatagramSocket ds = null;
        DatagramPacket dp = null, reply;
        try {
            ds = new DatagramSocket(1234); // socket creation
            byte b[] = new byte[1000];
            dp = new DatagramPacket(b, b.length);
            ds.receive(dp); // socket fn()
            System.out.println("From Client: " + (new String(dp.getData())));
            System.out.println("Client PORT : " + dp.getPort());
            reply = new DatagramPacket("From Server ok".getBytes(), "From Serverok".length(), dp.getAddress(),
                    dp.getPort());// packet creation
            ds.send(reply);
        } catch (SocketException e) {
            System.out.println("Socket: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("IO: " + e.getMessage());
        } finally {
            if (ds != null)
                ds.close();
        }
    }
}
