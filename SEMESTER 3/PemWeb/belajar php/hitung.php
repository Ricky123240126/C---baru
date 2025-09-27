    <?php
    $name = $_POST["nilai"];
    if($name >= 75)
    {
        echo "Lulus";
    }
    elseif($name <= 75)
    {
        echo "tidak lulus";
    }
    ?>