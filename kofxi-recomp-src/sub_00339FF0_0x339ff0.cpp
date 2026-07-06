#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00339FF0
// Address: 0x339ff0 - 0x33a220
void sub_00339FF0_0x339ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339FF0_0x339ff0");
#endif

    ctx->pc = 0x339ff0u;

    // 0x339ff0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x339ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x339ff4: 0x9063b240  lbu         $v1, -0x4DC0($v1)
    ctx->pc = 0x339ff4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x339ff8: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x339FF8u;
    {
        const bool branch_taken_0x339ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339ff8) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A000u;
    // 0x33a000: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a004: 0x9065b241  lbu         $a1, -0x4DBF($v1)
    ctx->pc = 0x33a004u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x33a008: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x33a008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x33a00c: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x33A00Cu;
    {
        const bool branch_taken_0x33a00c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a00c) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A014u;
    // 0x33a014: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33a014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33a018: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33a018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33a01c: 0x24844dc0  addiu       $a0, $a0, 0x4DC0
    ctx->pc = 0x33a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19904));
    // 0x33a020: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33a024: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33a024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a028: 0x600008  jr          $v1
    ctx->pc = 0x33A028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33A030u: goto label_33a030;
            case 0x33A058u: goto label_33a058;
            case 0x33A0E0u: goto label_33a0e0;
            case 0x33A120u: goto label_33a120;
            case 0x33A17Cu: goto label_33a17c;
            case 0x33A20Cu: goto label_33a20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x33A030u;
label_33a030:
    // 0x33a030: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a034: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x33a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33a038: 0x9063b242  lbu         $v1, -0x4DBE($v1)
    ctx->pc = 0x33a038u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947394)));
    // 0x33a03c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A03Cu;
    {
        const bool branch_taken_0x33a03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33a03c) {
            ctx->pc = 0x33A04Cu;
            goto label_33a04c;
        }
    }
    ctx->pc = 0x33A044u;
    // 0x33a044: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x33A044u;
    {
        const bool branch_taken_0x33a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a044) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A04Cu;
label_33a04c:
    // 0x33a04c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a050: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x33A050u;
    {
        const bool branch_taken_0x33a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A050u;
            // 0x33a054: 0xa060b242  sb          $zero, -0x4DBE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947394), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a050) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A058u;
label_33a058:
    // 0x33a058: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a05c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33a060: 0x9065b242  lbu         $a1, -0x4DBE($v1)
    ctx->pc = 0x33a060u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947394)));
    // 0x33a064: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A064u;
    {
        const bool branch_taken_0x33a064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33a064) {
            ctx->pc = 0x33A080u;
            goto label_33a080;
        }
    }
    ctx->pc = 0x33A06Cu;
    // 0x33a06c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33a070: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A070u;
    {
        const bool branch_taken_0x33a070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a070) {
            ctx->pc = 0x33A080u;
            goto label_33a080;
        }
    }
    ctx->pc = 0x33A078u;
    // 0x33a078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33A078u;
    {
        const bool branch_taken_0x33a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a078) {
            ctx->pc = 0x33A088u;
            goto label_33a088;
        }
    }
    ctx->pc = 0x33A080u;
label_33a080:
    // 0x33a080: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a084: 0xa060b242  sb          $zero, -0x4DBE($v1)
    ctx->pc = 0x33a084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947394), (uint8_t)GPR_U32(ctx, 0));
label_33a088:
    // 0x33a088: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a08c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x33a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33a090: 0x9065b244  lbu         $a1, -0x4DBC($v1)
    ctx->pc = 0x33a090u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947396)));
    // 0x33a094: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x33A094u;
    {
        const bool branch_taken_0x33a094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33a094) {
            ctx->pc = 0x33A0D4u;
            goto label_33a0d4;
        }
    }
    ctx->pc = 0x33A09Cu;
    // 0x33a09c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33a0a0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33A0A0u;
    {
        const bool branch_taken_0x33a0a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a0a0) {
            ctx->pc = 0x33A0D4u;
            goto label_33a0d4;
        }
    }
    ctx->pc = 0x33A0A8u;
    // 0x33a0a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33a0ac: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A0ACu;
    {
        const bool branch_taken_0x33a0ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a0ac) {
            ctx->pc = 0x33A0D4u;
            goto label_33a0d4;
        }
    }
    ctx->pc = 0x33A0B4u;
    // 0x33a0b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33a0b8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A0B8u;
    {
        const bool branch_taken_0x33a0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a0b8) {
            ctx->pc = 0x33A0D4u;
            goto label_33a0d4;
        }
    }
    ctx->pc = 0x33A0C0u;
    // 0x33a0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a0c4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A0C4u;
    {
        const bool branch_taken_0x33a0c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a0c4) {
            ctx->pc = 0x33A0D4u;
            goto label_33a0d4;
        }
    }
    ctx->pc = 0x33A0CCu;
    // 0x33a0cc: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x33A0CCu;
    {
        const bool branch_taken_0x33a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a0cc) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A0D4u;
label_33a0d4:
    // 0x33a0d4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a0d8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x33A0D8u;
    {
        const bool branch_taken_0x33a0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A0D8u;
            // 0x33a0dc: 0xa060b244  sb          $zero, -0x4DBC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947396), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0d8) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A0E0u;
label_33a0e0:
    // 0x33a0e0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a0e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33a0e8: 0x9065b242  lbu         $a1, -0x4DBE($v1)
    ctx->pc = 0x33a0e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947394)));
    // 0x33a0ec: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A0ECu;
    {
        const bool branch_taken_0x33a0ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33a0ec) {
            ctx->pc = 0x33A114u;
            goto label_33a114;
        }
    }
    ctx->pc = 0x33A0F4u;
    // 0x33a0f4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33a0f8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A0F8u;
    {
        const bool branch_taken_0x33a0f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a0f8) {
            ctx->pc = 0x33A114u;
            goto label_33a114;
        }
    }
    ctx->pc = 0x33A100u;
    // 0x33a100: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33a100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33a104: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A104u;
    {
        const bool branch_taken_0x33a104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a104) {
            ctx->pc = 0x33A114u;
            goto label_33a114;
        }
    }
    ctx->pc = 0x33A10Cu;
    // 0x33a10c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x33A10Cu;
    {
        const bool branch_taken_0x33a10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a10c) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A114u;
label_33a114:
    // 0x33a114: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a118: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x33A118u;
    {
        const bool branch_taken_0x33a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A118u;
            // 0x33a11c: 0xa060b242  sb          $zero, -0x4DBE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947394), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a118) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A120u;
label_33a120:
    // 0x33a120: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33a124: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A124u;
    {
        const bool branch_taken_0x33a124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a124) {
            ctx->pc = 0x33A134u;
            goto label_33a134;
        }
    }
    ctx->pc = 0x33A12Cu;
    // 0x33a12c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33A12Cu;
    {
        const bool branch_taken_0x33a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a12c) {
            ctx->pc = 0x33A13Cu;
            goto label_33a13c;
        }
    }
    ctx->pc = 0x33A134u;
label_33a134:
    // 0x33a134: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a138: 0xa060b242  sb          $zero, -0x4DBE($v1)
    ctx->pc = 0x33a138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947394), (uint8_t)GPR_U32(ctx, 0));
label_33a13c:
    // 0x33a13c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a140: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33a140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33a144: 0x9065b242  lbu         $a1, -0x4DBE($v1)
    ctx->pc = 0x33a144u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947394)));
    // 0x33a148: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A148u;
    {
        const bool branch_taken_0x33a148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33a148) {
            ctx->pc = 0x33A170u;
            goto label_33a170;
        }
    }
    ctx->pc = 0x33A150u;
    // 0x33a150: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33a154: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A154u;
    {
        const bool branch_taken_0x33a154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a154) {
            ctx->pc = 0x33A170u;
            goto label_33a170;
        }
    }
    ctx->pc = 0x33A15Cu;
    // 0x33a15c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33a160: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A160u;
    {
        const bool branch_taken_0x33a160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a160) {
            ctx->pc = 0x33A170u;
            goto label_33a170;
        }
    }
    ctx->pc = 0x33A168u;
    // 0x33a168: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x33A168u;
    {
        const bool branch_taken_0x33a168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a168) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A170u;
label_33a170:
    // 0x33a170: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a174: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x33A174u;
    {
        const bool branch_taken_0x33a174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A174u;
            // 0x33a178: 0xa060b242  sb          $zero, -0x4DBE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947394), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a174) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A17Cu;
label_33a17c:
    // 0x33a17c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a180: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33a184: 0x9065b242  lbu         $a1, -0x4DBE($v1)
    ctx->pc = 0x33a184u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947394)));
    // 0x33a188: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A188u;
    {
        const bool branch_taken_0x33a188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33a188) {
            ctx->pc = 0x33A1B0u;
            goto label_33a1b0;
        }
    }
    ctx->pc = 0x33A190u;
    // 0x33a190: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33a190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33a194: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A194u;
    {
        const bool branch_taken_0x33a194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a194) {
            ctx->pc = 0x33A1B0u;
            goto label_33a1b0;
        }
    }
    ctx->pc = 0x33A19Cu;
    // 0x33a19c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33a1a0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A1A0u;
    {
        const bool branch_taken_0x33a1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a1a0) {
            ctx->pc = 0x33A1B0u;
            goto label_33a1b0;
        }
    }
    ctx->pc = 0x33A1A8u;
    // 0x33a1a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33A1A8u;
    {
        const bool branch_taken_0x33a1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a1a8) {
            ctx->pc = 0x33A1B8u;
            goto label_33a1b8;
        }
    }
    ctx->pc = 0x33A1B0u;
label_33a1b0:
    // 0x33a1b0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a1b4: 0xa060b242  sb          $zero, -0x4DBE($v1)
    ctx->pc = 0x33a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947394), (uint8_t)GPR_U32(ctx, 0));
label_33a1b8:
    // 0x33a1b8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a1bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x33a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33a1c0: 0x9065b244  lbu         $a1, -0x4DBC($v1)
    ctx->pc = 0x33a1c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947396)));
    // 0x33a1c4: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x33A1C4u;
    {
        const bool branch_taken_0x33a1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33a1c4) {
            ctx->pc = 0x33A204u;
            goto label_33a204;
        }
    }
    ctx->pc = 0x33A1CCu;
    // 0x33a1cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33a1d0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33A1D0u;
    {
        const bool branch_taken_0x33a1d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a1d0) {
            ctx->pc = 0x33A204u;
            goto label_33a204;
        }
    }
    ctx->pc = 0x33A1D8u;
    // 0x33a1d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33a1dc: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A1DCu;
    {
        const bool branch_taken_0x33a1dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a1dc) {
            ctx->pc = 0x33A204u;
            goto label_33a204;
        }
    }
    ctx->pc = 0x33A1E4u;
    // 0x33a1e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33a1e8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A1E8u;
    {
        const bool branch_taken_0x33a1e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a1e8) {
            ctx->pc = 0x33A204u;
            goto label_33a204;
        }
    }
    ctx->pc = 0x33A1F0u;
    // 0x33a1f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a1f4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A1F4u;
    {
        const bool branch_taken_0x33a1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a1f4) {
            ctx->pc = 0x33A204u;
            goto label_33a204;
        }
    }
    ctx->pc = 0x33A1FCu;
    // 0x33a1fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33A1FCu;
    {
        const bool branch_taken_0x33a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a1fc) {
            ctx->pc = 0x33A20Cu;
            goto label_33a20c;
        }
    }
    ctx->pc = 0x33A204u;
label_33a204:
    // 0x33a204: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a208: 0xa060b244  sb          $zero, -0x4DBC($v1)
    ctx->pc = 0x33a208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947396), (uint8_t)GPR_U32(ctx, 0));
label_33a20c:
    // 0x33a20c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A214u;
    // 0x33a214: 0x0  nop
    ctx->pc = 0x33a214u;
    // NOP
    // 0x33a218: 0x0  nop
    ctx->pc = 0x33a218u;
    // NOP
    // 0x33a21c: 0x0  nop
    ctx->pc = 0x33a21cu;
    // NOP
    ctx->pc = 0x33a220u;
}
