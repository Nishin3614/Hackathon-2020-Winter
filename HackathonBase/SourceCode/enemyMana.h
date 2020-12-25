//*************************************************************************************************************
//
// 敵のマネージャー処理[EnemyMana.h]
// Author : Sekine Ikuto
//
//*************************************************************************************************************
#ifndef _ENEMYMANA_H_
#define _ENEMYMANA_H_

//-------------------------------------------------------------------------------------------------------------
// インクルードファイル
//-------------------------------------------------------------------------------------------------------------
#include "Mylibrary.h"

//-------------------------------------------------------------------------------------------------------------
// マクロ定義
//-------------------------------------------------------------------------------------------------------------
#define COUPLE_MAX		(9)
#define NEWLYWED_MAX	(2)
#define STUDENT_MAX		(30)

//-------------------------------------------------------------------------------------------------------------
// クラス定義
//-------------------------------------------------------------------------------------------------------------
class CEnemyMana
{
public:
	CEnemyMana();							// コンストラクタ
	~CEnemyMana();							// デストラクタ

	static CEnemyMana * Create(void);		// 生成
	void Init(void);						// 初期化
	void Uninit(void);						// 終了
	void Update(void);						// 更新
	void Draw(void);						// 描画

private:

};

#endif