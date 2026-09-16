#include <iostream>

struct LinesUI {

	std::string lines;
	bool isUIShowing;
};

class UISet {

public:


	struct UI {

		LinesUI lines;

	};

	UI ui{};

	bool isShowing() const {

		return ui.lines.isUIShowing;
	}

	LinesUI SET() const {

		if (isShowing()) {

			return LinesUI();
		}
	}
};

