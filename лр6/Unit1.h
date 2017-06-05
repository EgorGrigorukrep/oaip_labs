//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#endif
#include <vcl.h>

struct TreeItem{
	TreeItem* right;
	TreeItem* left;
	AnsiString text;
	int number;
};

enum SearchMode{
	ByNumber,
	ByText,
	ByBoth
};

class Tree{
	protected: TreeItem* root;
	public:
		Tree();
		TreeItem* getRoot();
		TreeItem** getRootAddress();
		void setRoot(TreeItem* value);
		TreeItem* createNewItem(TEdit* EditNumber, TEdit* EditText);

		TreeItem* add(TreeItem* newItem, TreeItem* tempRoot);
		void find(TreeItem* searchItem, TreeItem* tempRoot, TreeItem** result,SearchMode mode);
		void deleteItem(TreeItem* item,TreeItem* parent);
		void deleteTree(TreeItem* tempRoot);

		void showInTreeView(TTreeView* TreeView);
		void addNodeToTreeView(TTreeView* TreeView,TreeItem* tempRoot, TTreeNode* Node);
		void directDetour(TreeItem* tempRoot, TMemo* Memo);
		void reverseDetour(TreeItem* tempRoot,TMemo* Memo);
		void symmetricDetour(TreeItem* tempRoot,TMemo* Memo);
};

class newTree: public Tree{
	public:

		int maxLevelsAmount(TreeItem* tempRoot,int level);
		void treePassing(int currentLevel,int requiredlevel,TreeItem* tempRoot,int* amount);
		int findLeafsAmount(int level,Tree tree);
};