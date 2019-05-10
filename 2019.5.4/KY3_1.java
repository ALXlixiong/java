import java.awt.*; 
        import java.awt.event.*; 
        import java.applet.Applet; 
        public class KY3_1 extends Applet implements ActionListener { 
          Label label1=new Label("+"); 
          Label label2=new Label("="); 
         TextField field1=new TextField(6); 
         TextField field2=new TextField(6); 
         TextField field3=new TextField(6); 
         Button button1=new Button("相加"); 
         public void init() { // 初始化 
           add(field1); 
           add(label1); 
           add(field2); 
           add(label2); 
           add(field3); 
           add(button1); 
           button1.addActionListener(this); 
         } 
         public void actionPerformed(ActionEvent e) { // 处理按钮事件 
           int x=Integer.parseInt(field1.getText())+Integer.parseInt(field2.getText()); 
           field3.setText(Integer.toString(x)); // 数值转换为字符串 
           } 
         } 
