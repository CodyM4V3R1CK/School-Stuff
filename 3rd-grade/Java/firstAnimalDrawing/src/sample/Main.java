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

        Ellipse body = new Ellipse(300, 400, 250, 150);
        body.setFill(Color.WHITE);
        body.setStroke(Color.BLACK);
        body.setStrokeWidth(3.0);

        Circle eye = new Circle(150, 350, 30);
        eye.setFill(Color.BLACK);

        Circle eye2 = new Circle(160, 340, 10);
        eye2.setStroke(Color.BLACK);
        eye2.setFill(Color.WHITE);

        Line tail1 = new Line(550, 400, 700, 200);
        tail1.setStrokeWidth(3.0);

        Line tail2 = new Line(550, 400, 700, 600);
        tail2.setStrokeWidth(3.0);

        Line tail3 = new Line(700, 200, 700, 600);
        tail3.setStrokeWidth(3.0);

//        Line upperTail1 = new Line();
//
//        Line upperTail2 = new Line();
//
//        Line upperTail3 = new Line();
//
//        Line lowerTail1 = new Line();
//
//        Line lowerTail2 = new Line();
//
//        Line lowerTail3 = new Line();

        Group root = new Group(); //Creating a Group
        root.getChildren().addAll(body, eye, eye2, tail1, tail2, tail3); //adding the class object //to the group
        Scene scene = new Scene(root,800,800);
        primaryStage.setScene(scene);
        primaryStage.setTitle("First Animal Drawing");
        primaryStage.show();

    }
    public static void main(String[] args) {
        launch(args);
    }

}