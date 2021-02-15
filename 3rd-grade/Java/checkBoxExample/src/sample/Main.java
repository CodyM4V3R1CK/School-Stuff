package sample;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.*;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.stage.Stage;

public class Main extends Application {

    public void start(Stage s)
    {
        // set title for the stage
        s.setTitle("PAIN");

        TilePane r = new TilePane();

        Label l = new Label("BEHOLD MY CREATION (not rly)");

        String text[] = { "Cody", "Needs", "Help", "Please", "Save", "Him", ":'(" };

        r.getChildren().add(l);

        for (String value : text) {

            CheckBox c = new CheckBox(value);

            r.getChildren().add(c);

            Label l1 = new Label(" nothing selected :'(");

            EventHandler<ActionEvent> change = e -> {
                if (c.isSelected()) {
                    l1.setText(value + " selected c:");
                    System.out.println("you have selected something OwO");
                } else {
                    l1.setText(value + " deselected :c");
                }
            };

            c.setOnAction(change);

            r.getChildren().add(l1);
        }

        Scene sc = new Scene(r, 200, 300);
        s.setScene(sc);
        s.show();
    }

    public static void main(String args[])
    {
        launch(args);
    }
}
