#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187C20
// Address: 0x187c20 - 0x187ce0
void sub_00187C20_0x187c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187C20_0x187c20");
#endif

    ctx->pc = 0x187c20u;

    // 0x187c20: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x187c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x187c24: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x187c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x187c28: 0x848704c4  lh          $a3, 0x4C4($a0)
    ctx->pc = 0x187c28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1220)));
    // 0x187c2c: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x187c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x187c30: 0x3066000c  andi        $a2, $v1, 0xC
    ctx->pc = 0x187c30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x187c34: 0x64082  srl         $t0, $a2, 2
    ctx->pc = 0x187c34u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x187c38: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x187c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x187c3c: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x187c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x187c40: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x187c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x187c44: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x187c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x187c48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x187c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x187c4c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x187c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x187c50: 0xa48004c4  sh          $zero, 0x4C4($a0)
    ctx->pc = 0x187c50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1220), (uint16_t)GPR_U32(ctx, 0));
    // 0x187c54: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x187c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x187c58: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x187c58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x187c5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x187c60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x187c64: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x187C64u;
    {
        const bool branch_taken_0x187c64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C64u;
            // 0x187c68: 0x2468014c  addiu       $t0, $v1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c64) {
            ctx->pc = 0x187CD4u;
            goto label_187cd4;
        }
    }
    ctx->pc = 0x187C6Cu;
    // 0x187c6c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x187c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x187c70: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x187c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x187c74: 0x8c66d918  lw          $a2, -0x26E8($v1)
    ctx->pc = 0x187c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x187c78: 0x34a30100  ori         $v1, $a1, 0x100
    ctx->pc = 0x187c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x187c7c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x187c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x187c80: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x187C80u;
    {
        const bool branch_taken_0x187c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187c80) {
            ctx->pc = 0x187CD4u;
            goto label_187cd4;
        }
    }
    ctx->pc = 0x187C88u;
    // 0x187c88: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x187c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x187c8c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x187c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x187c90: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x187C90u;
    {
        const bool branch_taken_0x187c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c90) {
            ctx->pc = 0x187CD4u;
            goto label_187cd4;
        }
    }
    ctx->pc = 0x187C98u;
    // 0x187c98: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x187c98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x187c9c: 0x306300a0  andi        $v1, $v1, 0xA0
    ctx->pc = 0x187c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)160);
    // 0x187ca0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x187CA0u;
    {
        const bool branch_taken_0x187ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ca0) {
            ctx->pc = 0x187CD4u;
            goto label_187cd4;
        }
    }
    ctx->pc = 0x187CA8u;
    // 0x187ca8: 0x8503000e  lh          $v1, 0xE($t0)
    ctx->pc = 0x187ca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x187cac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x187cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x187cb0: 0xa503000e  sh          $v1, 0xE($t0)
    ctx->pc = 0x187cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x187cb4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187cb8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187cb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187cbc: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187CBCu;
    {
        const bool branch_taken_0x187cbc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x187cbc) {
            ctx->pc = 0x187CD4u;
            goto label_187cd4;
        }
    }
    ctx->pc = 0x187CC4u;
    // 0x187cc4: 0xa500000e  sh          $zero, 0xE($t0)
    ctx->pc = 0x187cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x187cc8: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x187cc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x187ccc: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x187cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x187cd0: 0xa08304f0  sb          $v1, 0x4F0($a0)
    ctx->pc = 0x187cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1264), (uint8_t)GPR_U32(ctx, 3));
label_187cd4:
    // 0x187cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x187CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187CDCu;
    // 0x187cdc: 0x0  nop
    ctx->pc = 0x187cdcu;
    // NOP
    ctx->pc = 0x187ce0u;
}
