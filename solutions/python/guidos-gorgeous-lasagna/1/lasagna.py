"""Functions used in preparing Guido's gorgeous lasagna."""

EXPECTED_BAKE_TIME = 40
PREPARATION_TIME = 2


def bake_time_remaining(elapsed_bake_time):
    """Calculate the bake time remaining."""
    return EXPECTED_BAKE_TIME - elapsed_bake_time


def preparation_time_in_minutes(layers):
    """Calculate the preparation time for the lasagna."""
    return layers * PREPARATION_TIME


def elapsed_time_in_minutes(layers, elapsed_bake_time):
    """Calculate the total elapsed cooking time (prep + baking)."""
    return preparation_time_in_minutes(layers) + elapsed_bake_time