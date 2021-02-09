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

        // create a tile pane
        TilePane r = new TilePane();

        // create a label
        Label l = new Label("BEHOLD MY CREATION (not rly)");

        // string array
        String text[] = { "Cody", "Needs", "Help", "Please", "Save", "Him", ":'(" };

        // add label
        r.getChildren().add(l);

        for (String value : text) {

            // create a checkbox
            CheckBox c = new CheckBox(value);

            // add checkbox
            r.getChildren().add(c);

            Label l1 = new Label(" nothing selected :'(");

            // create a event handler
            EventHandler<ActionEvent> change = e -> {
                if (c.isSelected()) {
                    l1.setText(value + " selected c:");
                } else {
                    l1.setText(value + " deselected :c");
                }
            };

            // set event to checkbox
            c.setOnAction(change);

            // add label
            r.getChildren().add(l1);
        }

        // create a scene
        Scene sc = new Scene(r, 200, 300);
        s.setScene(sc);
        s.show();
    }

    public static void main(String args[])
    {
        // launch the application
        launch(args);
    }
}
