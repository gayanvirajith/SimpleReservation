<div class="order-form-details">
    <div class="panel panel-default">


        <div class="panel-heading">
            <h3 class="panel-title"><?php echo $title; ?></h3>
        </div>
        <div class="panel-body">
            <p><?php echo $summary; ?></p>
            <form action="./" name="reservation-form" method="post" role="form" class="reservation-form">
                <div class="form-group">

                    <div class="col-sm-6">
                        <label class="field-required" for="res_first_name">First name</label>
                        <?php
                        $value = '';$error = false;
                        if (isset($form['fields']['res_first_name']['value'])) $value = $form['fields']['res_first_name']['value'];
                        if (isset($form['fields']['res_first_name']['error'])) $error = $form['fields']['res_first_name']['error'];
                        ?>
                        <input id="res_first_name" type="text" class="form-control" placeholder="" name="res_first_name" value="<?php echo $value?>">
                        <?php if ($error):?><div class="error"><?php echo $error; ?></div><?php endif;?>
                    </div>
                    <div class="col-sm-6">
                        <label class="field-required" for="res_last_name">Last name</label>
                        <?php
                        $value = '';$error = false;
                        if (isset($form['fields']['res_last_name']['value'])) $value = $form['fields']['res_last_name']['value'];
                        if (isset($form['fields']['res_last_name']['error'])) $error = $form['fields']['res_last_name']['error'];
                        ?>
                        <input id="res_last_name" type="text" class="form-control" placeholder="" name="res_last_name"  value="<?php echo $value?>">
                        <?php if ($error):?><div class="error"><?php echo $error; ?></div><?php endif;?>
                    </div>
                </div>
                <div class="form-group">
                    <div class="col-sm-6">
                        <label class="field-required" for="res_daytime_phone">Daytime phone</label>
                        <?php
                        $value = '';$error = false;
                        if (isset($form['fields']['res_daytime_phone']['value'])) $value = $form['fields']['res_daytime_phone']['value'];
                        if (isset($form['fields']['res_daytime_phone']['error'])) $error = $form['fields']['res_daytime_phone']['error'];
                        ?>
                        <input id="res_daytime_phone" type="text" class="form-control" placeholder="" name="res_daytime_phone" value="<?php echo $form['fields']['res_daytime_phone']['value']?>">
                        <?php if ($error):?><div class="error"><?php echo $error; ?></div><?php endif;?>
                    </div>
                    <div class="col-sm-6">
                        <label class="field-required" for="res_email">Email</label>
                        <?php
                        $value = '';$error = false;
                        if (isset($form['fields']['res_email']['value'])) $value = $form['fields']['res_email']['value'];
                        if (isset($form['fields']['res_email']['error'])) $error = $form['fields']['res_email']['error'];
                        ?>
                        <input id="res_email" type="email" class="form-control" placeholder="" name="res_email" value="<?php echo $form['fields']['res_email']['value']?>">
                        <?php if ($error):?><div class="error"><?php echo $error; ?></div><?php endif;?>
                    </div>
                </div>

                <div class="form-group">
                    <div class="col-sm-6">
                        <label class="field-required" for="res_arrival_date"><?php echo $form['fields']['res_arrival_date']['label']?></label>
                        <?php
                        $value = '';$error = false;
                        if (isset($form['fields']['res_arrival_date']['value'])) $value = $form['fields']['res_arrival_date']['value'];
                        if (isset($form['fields']['res_arrival_date']['error'])) $error = $form['fields']['res_arrival_date']['error'];
                        ?>
                        <div class="input-group">
                            <input id="res_arrival_date" type="text" class="form-control date-picker" placeholder="" name="res_arrival_date" value="<?php echo $value; ?>">
                            <label for="res_arrival_date" class="input-group-addon btn"><i class="glyphicon glyphicon-calendar"></i></label>
                        </div>
                        <?php if ($error):?><div class="error"><?php echo $error; ?></div><?php endif;?>
                    </div>

                    <div class="col-sm-6">
                        <label class="field-required" for="res_departure_date"><?php echo $form['fields']['res_departure_date']['label']?></label>
                        <?php
                        $value = '';$error = false;
                        if (isset($form['fields']['res_departure_date']['value'])) $value = $form['fields']['res_departure_date']['value'];
                        if (isset($form['fields']['res_departure_date']['error'])) $error = $form['fields']['res_departure_date']['error'];
                        ?>
                        <div class="input-group" id="departure_date">
                            <input id="res_departure_date" type="text" class="form-control date-picker" placeholder="" name="res_departure_date" value="<?php echo $value; ?>">
                            <label for="res_departure_date" class="input-group-addon btn"><i class="glyphicon glyphicon-calendar"></i></label>
                        </div>
                        <?php if ($error):?><div class="error"><?php echo $error; ?></div><?php endif;?>
                    </div>
                </div>

                <div class="form-group">
                    <div class="col-sm-6">
                        <label class="field-required" for="res_no_of_adults"><?php echo $form['fields']['res_no_of_adults']['label']?></label>
                        <?php
                        $value = '';$error = false;
                        if (isset($form['fields']['res_no_of_adults']['value'])) $value = $form['fields']['res_no_of_adults']['value'];
                        if (isset($form['fields']['res_no_of_adults']['error'])) $error = $form['fields']['res_no_of_adults']['error'];
                        ?>
                        <select name="res_no_of_adults" id="res_no_of_adults" class="form-control">
                            <?php foreach ($noOfAdults as $k => $v): ?>
                                <?php if (isset($value)) $selected = ($value == $k) ? "selected" : ""; ?>
                                <option value="<?php echo $k?>" <?php echo $selected?>><?php echo $v?></option>
                            <?php endforeach; ?>
                        </select>
                        <?php if ($error):?><div class="error"><?php echo $error; ?></div><?php endif;?>
                    </div>
                    <div class="col-sm-6">
                        <label class="field-required" for="res_no_of_children"><?php echo $form['fields']['res_no_of_children']['label']?></label>
                        <?php
                        $value = '';$error = false;
                        if (isset($form['fields']['res_no_of_children']['value'])) $value = $form['fields']['res_no_of_children']['value'];
                        if (isset($form['fields']['res_no_of_children']['error'])) $error = $form['fields']['res_no_of_children']['error'];
                        ?>
                        <select name="res_no_of_children" id="res_no_of_children" class="form-control">
                            <?php foreach ($noOfChildren as $k => $v): ?>
                                <?php if (isset($value)) $selected = ($value == $k) ? "selected" : ""; ?>
                                <option value="<?php echo $k?>" <?php echo $selected?>><?php echo $v?></option>
                            <?php endforeach; ?>
                        </select>
                        <?php if ($error):?><div class="error"><?php echo $error; ?></div><?php endif;?>
                    </div>
                </div>

                <div class="form-group">
                    <div class="col-sm-12">
                        <label for="res_comments"><?php echo $form['fields']['res_comments']['label']?></label>
                        <?php
                        $value = '';$error = false;
                        if (isset($form['fields']['res_comments']['value'])) $value = $form['fields']['res_comments']['value'];
                        if (isset($form['fields']['res_comments']['error'])) $error = $form['fields']['res_comments']['error'];
                        ?>
                        <textarea name="res_comments" id="res_comments" rows="4" class="form-control"><?php echo trim($value); ?></textarea>
                        <?php if ($error):?><div class="error"><?php echo $error; ?></div><?php endif;?>
                    </div>
                </div>

                <div class="form-group no-bottom-margin">
                    <div class="col-sm-12">
                        <input type="submit" name="submit" class="btn btn-primary" value="<?php echo __('Reserve')?>"/>
                        <input type="submit" name="reset" class="btn btn-default" value="<?php echo __('Reset'); ?>"/>
                    </div>
                </div>
            </form>

        </div>
    </div>
</div>