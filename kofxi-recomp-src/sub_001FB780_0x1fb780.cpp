#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB780
// Address: 0x1fb780 - 0x1fb820
void sub_001FB780_0x1fb780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB780_0x1fb780");
#endif

    switch (ctx->pc) {
        case 0x1fb7a0u: goto label_1fb7a0;
        case 0x1fb810u: goto label_1fb810;
        default: break;
    }

    ctx->pc = 0x1fb780u;

    // 0x1fb780: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1fb780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb784: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1fb784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1fb788: 0x8d060294  lw          $a2, 0x294($t0)
    ctx->pc = 0x1fb788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 660)));
    // 0x1fb78c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB78Cu;
    {
        const bool branch_taken_0x1fb78c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB78Cu;
            // 0x1fb790: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb78c) {
            ctx->pc = 0x1FB7A0u;
            goto label_1fb7a0;
        }
    }
    ctx->pc = 0x1FB794u;
    // 0x1fb794: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB794u;
            // 0x1fb798: 0xad0a0294  sw          $t2, 0x294($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB79Cu;
    // 0x1fb79c: 0x0  nop
    ctx->pc = 0x1fb79cu;
    // NOP
label_1fb7a0:
    // 0x1fb7a0: 0x1463823  subu        $a3, $t2, $a2
    ctx->pc = 0x1fb7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1fb7a4: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FB7A4u;
    {
        const bool branch_taken_0x1fb7a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7A4u;
            // 0x1fb7a8: 0x3c057fff  lui         $a1, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7a4) {
            ctx->pc = 0x1FB814u;
            goto label_1fb814;
        }
    }
    ctx->pc = 0x1FB7ACu;
    // 0x1fb7ac: 0x8d03029c  lw          $v1, 0x29C($t0)
    ctx->pc = 0x1fb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 668)));
    // 0x1fb7b0: 0x8d0202a0  lw          $v0, 0x2A0($t0)
    ctx->pc = 0x1fb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 672)));
    // 0x1fb7b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1fb7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1fb7b8: 0xe3302a  slt         $a2, $a3, $v1
    ctx->pc = 0x1fb7b8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fb7bc: 0x8d090298  lw          $t1, 0x298($t0)
    ctx->pc = 0x1fb7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 664)));
    // 0x1fb7c0: 0x47202a  slt         $a0, $v0, $a3
    ctx->pc = 0x1fb7c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1fb7c4: 0xe6180a  movz        $v1, $a3, $a2
    ctx->pc = 0x1fb7c4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1fb7c8: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x1fb7c8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1fb7cc: 0xad0a0294  sw          $t2, 0x294($t0)
    ctx->pc = 0x1fb7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 10));
    // 0x1fb7d0: 0xad03029c  sw          $v1, 0x29C($t0)
    ctx->pc = 0x1fb7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 3));
    // 0x1fb7d4: 0x1125000e  beq         $t1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FB7D4u;
    {
        const bool branch_taken_0x1fb7d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FB7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7D4u;
            // 0x1fb7d8: 0xad0202a0  sw          $v0, 0x2A0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7d4) {
            ctx->pc = 0x1FB810u;
            goto label_1fb810;
        }
    }
    ctx->pc = 0x1FB7DCu;
    // 0x1fb7dc: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x1fb7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1fb7e0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FB7E0u;
    {
        const bool branch_taken_0x1fb7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb7e0) {
            ctx->pc = 0x1FB7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7E0u;
            // 0x1fb7e4: 0xad070298  sw          $a3, 0x298($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB814u;
            goto label_1fb814;
        }
    }
    ctx->pc = 0x1FB7E8u;
    // 0x1fb7e8: 0x1271023  subu        $v0, $t1, $a3
    ctx->pc = 0x1fb7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1fb7ec: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x1fb7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1fb7f0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1fb7f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fb7f4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1fb7f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1fb7f8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1fb7f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1fb7fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB7FCu;
    {
        const bool branch_taken_0x1fb7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB7FCu;
            // 0x1fb800: 0x1221023  subu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7fc) {
            ctx->pc = 0x1FB810u;
            goto label_1fb810;
        }
    }
    ctx->pc = 0x1FB804u;
    // 0x1fb804: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB804u;
            // 0x1fb808: 0xad020298  sw          $v0, 0x298($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB80Cu;
    // 0x1fb80c: 0x0  nop
    ctx->pc = 0x1fb80cu;
    // NOP
label_1fb810:
    // 0x1fb810: 0xad070298  sw          $a3, 0x298($t0)
    ctx->pc = 0x1fb810u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 7));
label_1fb814:
    // 0x1fb814: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB81Cu;
    // 0x1fb81c: 0x0  nop
    ctx->pc = 0x1fb81cu;
    // NOP
    ctx->pc = 0x1fb820u;
}
