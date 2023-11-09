#include <iostream>

// Modelo (Model)
class CurrencyConverterModel {
public:
    double usdToEurRate = 0.85;

    double convertUsdToEur(double usd) {
        return usd * usdToEurRate;
    }
};

// Vista (View)
class CurrencyConverterView {
public:
    void displayResult(double eur) {
        std::cout << "Equivalente en euros: " << eur << " EUR" << std::endl;
    }
};

// Controlador (Controller)
class CurrencyConverterController {
private:
    CurrencyConverterModel model;
    CurrencyConverterView view;

public:
    void convertAndShow(double usd) {
        double eur = model.convertUsdToEur(usd);
        view.displayResult(eur);
    }
};

int main() {
    CurrencyConverterController controller;

    controller.convertAndShow(100.0);

    return 0;
}
