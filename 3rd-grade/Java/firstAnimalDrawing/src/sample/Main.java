package sample;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.Group;
import javafx.scene.shape.Line;
import javafx.scene.shape.Ellipse;
import javafx.scene.shape.Circle;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

import java.awt.*;

public class Main extends Application{

    @Override
    public void start(Stage primaryStage) throws Exception {
        // TODO Auto-generated method stub

        //main body

        Ellipse body = new Ellipse(300, 400, 250, 150);
        body.setFill(Color.WHITE);
        body.setStroke(Color.BLACK);
        body.setStrokeWidth(3.0);

        Circle eye = new Circle(150, 350, 30);
        eye.setFill(Color.BLACK);

        Circle eye2 = new Circle(160, 340, 10);
        eye2.setStroke(Color.BLACK);
        eye2.setFill(Color.WHITE);

        //back fin

        Line tail1 = new Line(550, 400, 700, 200);
        tail1.setStrokeWidth(3.0);

        Line tail2 = new Line(550, 400, 700, 600);
        tail2.setStrokeWidth(3.0);

        Line tail3 = new Line(700, 200, 700, 600);
        tail3.setStrokeWidth(3.0);

        //upper fin

        Line upperTail1 = new Line(200, 262, 250, 200);
        upperTail1.setStrokeWidth(3.0);

        Line upperTail2 = new Line(400, 262, 450, 200);
        upperTail2.setStrokeWidth(3.0);

        Line upperTail3 = new Line(250, 200, 450, 200);
        upperTail3.setStrokeWidth(3.0);

        //lower fin

        Line lowerTail1 = new Line(200, 538, 250, 580);
        lowerTail1.setStrokeWidth(3.0);

        Line lowerTail2 = new Line(400, 538, 450 ,580 );
        lowerTail2.setStrokeWidth(3.0);

        Line lowerTail3 = new Line(250, 580, 450, 580);
        lowerTail3.setStrokeWidth(3.0);

        Group root = new Group(); //Creating a Group
        root.getChildren().addAll(body, eye, eye2, tail1, tail2, tail3, upperTail1, upperTail2, upperTail3, lowerTail1, lowerTail2, lowerTail3);
        Scene scene = new Scene(root,800,800);
        primaryStage.setScene(scene);
        primaryStage.setTitle("First Animal Drawing");
        primaryStage.show();

    }
    public static void main(String[] args) {
        launch(args);
    }

}