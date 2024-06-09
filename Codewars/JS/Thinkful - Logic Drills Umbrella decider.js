function takeUmbrella(weather, chance) {
  if (weather === "rainy" || (weather === "cloudy" && chance > 0.2)) {
    return true;
  }

  if (weather === "sunny" && chance > 0.5) {
    return true;
  }

  return false;
}
