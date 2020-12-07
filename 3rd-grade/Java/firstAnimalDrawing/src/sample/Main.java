package sample;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.Group;
import javafx.scene.shape.Line;
import javafx.scene.shape.Ellipse;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

import java.awt.*;

public class Main extends Application{

    @Override
    public void start(Stage primaryStage) throws Exception {
        // TODO Auto-generated method stub

//        Line line = new Line(, , , );
//        Line line2 = new Line(, , ,);

        Ellipse body = new Ellipse(300, 400, 250, 150);
        body.setFill(Color.WHITE);
        body.setStroke(Color.BLACK);

        Group root = new Group(); //Creating a Group
        root.getChildren().addAll(body); //adding the class object //to the group
        Scene scene = new Scene(root,800,800);
        primaryStage.setScene(scene);
        primaryStage.setTitle("First Animal Drawing");
        primaryStage.show();

    }
    public static void main(String[] args) {
        launch(args);
    }

}