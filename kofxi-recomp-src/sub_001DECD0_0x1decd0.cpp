#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DECD0
// Address: 0x1decd0 - 0x1ded78
void sub_001DECD0_0x1decd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DECD0_0x1decd0");
#endif

    switch (ctx->pc) {
        case 0x1ded04u: goto label_1ded04;
        case 0x1ded2cu: goto label_1ded2c;
        case 0x1ded40u: goto label_1ded40;
        case 0x1ded60u: goto label_1ded60;
        default: break;
    }

    ctx->pc = 0x1decd0u;

    // 0x1decd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1decd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1decd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1decd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1decd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1decdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1decdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dece0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dece4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dece8: 0x8e220404  lw          $v0, 0x404($s1)
    ctx->pc = 0x1dece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x1decec: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x1dececu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1decf0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DECF0u;
    {
        const bool branch_taken_0x1decf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECF0u;
            // 0x1decf4: 0x262303f0  addiu       $v1, $s1, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1decf0) {
            ctx->pc = 0x1DED10u;
            goto label_1ded10;
        }
    }
    ctx->pc = 0x1DECF8u;
    // 0x1decf8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1decf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1decfc: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DECFCu;
    SET_GPR_U32(ctx, 31, 0x1DED04u);
    ctx->pc = 0x1DED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECFCu;
            // 0x1ded00: 0x2484c980  addiu       $a0, $a0, -0x3680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED04u; }
        if (ctx->pc != 0x1DED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED04u; }
        if (ctx->pc != 0x1DED04u) { return; }
    }
    ctx->pc = 0x1DED04u;
label_1ded04:
    // 0x1ded04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DED04u;
    {
        const bool branch_taken_0x1ded04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED04u;
            // 0x1ded08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded04) {
            ctx->pc = 0x1DED64u;
            goto label_1ded64;
        }
    }
    ctx->pc = 0x1DED0Cu;
    // 0x1ded0c: 0x0  nop
    ctx->pc = 0x1ded0cu;
    // NOP
label_1ded10:
    // 0x1ded10: 0x4c00014  bltz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DED10u;
    {
        const bool branch_taken_0x1ded10 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1DED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED10u;
            // 0x1ded14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded10) {
            ctx->pc = 0x1DED64u;
            goto label_1ded64;
        }
    }
    ctx->pc = 0x1DED18u;
    // 0x1ded18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ded18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ded1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DED1Cu;
    {
        const bool branch_taken_0x1ded1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ded1c) {
            ctx->pc = 0x1DED38u;
            goto label_1ded38;
        }
    }
    ctx->pc = 0x1DED24u;
    // 0x1ded24: 0xc077b5e  jal         func_1DED78
    ctx->pc = 0x1DED24u;
    SET_GPR_U32(ctx, 31, 0x1DED2Cu);
    ctx->pc = 0x1DED78u;
    if (runtime->hasFunction(0x1DED78u)) {
        auto targetFn = runtime->lookupFunction(0x1DED78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED2Cu; }
        if (ctx->pc != 0x1DED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DED78_0x1ded78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED2Cu; }
        if (ctx->pc != 0x1DED2Cu) { return; }
    }
    ctx->pc = 0x1DED2Cu;
label_1ded2c:
    // 0x1ded2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DED2Cu;
    {
        const bool branch_taken_0x1ded2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED2Cu;
            // 0x1ded30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded2c) {
            ctx->pc = 0x1DED44u;
            goto label_1ded44;
        }
    }
    ctx->pc = 0x1DED34u;
    // 0x1ded34: 0x0  nop
    ctx->pc = 0x1ded34u;
    // NOP
label_1ded38:
    // 0x1ded38: 0xc077b6c  jal         func_1DEDB0
    ctx->pc = 0x1DED38u;
    SET_GPR_U32(ctx, 31, 0x1DED40u);
    ctx->pc = 0x1DED3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED38u;
            // 0x1ded3c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDB0u;
    if (runtime->hasFunction(0x1DEDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DEDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED40u; }
        if (ctx->pc != 0x1DED40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEDB0_0x1dedb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED40u; }
        if (ctx->pc != 0x1DED40u) { return; }
    }
    ctx->pc = 0x1DED40u;
label_1ded40:
    // 0x1ded40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ded40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ded44:
    // 0x1ded44: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DED44u;
    {
        const bool branch_taken_0x1ded44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED44u;
            // 0x1ded48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded44) {
            ctx->pc = 0x1DED60u;
            goto label_1ded60;
        }
    }
    ctx->pc = 0x1DED4Cu;
    // 0x1ded4c: 0x8e220404  lw          $v0, 0x404($s1)
    ctx->pc = 0x1ded4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
    // 0x1ded50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ded50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ded54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ded54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ded58: 0xc077bb6  jal         func_1DEED8
    ctx->pc = 0x1DED58u;
    SET_GPR_U32(ctx, 31, 0x1DED60u);
    ctx->pc = 0x1DED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED58u;
            // 0x1ded5c: 0xac500408  sw          $s0, 0x408($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEED8u;
    if (runtime->hasFunction(0x1DEED8u)) {
        auto targetFn = runtime->lookupFunction(0x1DEED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED60u; }
        if (ctx->pc != 0x1DED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEED8_0x1deed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED60u; }
        if (ctx->pc != 0x1DED60u) { return; }
    }
    ctx->pc = 0x1DED60u;
label_1ded60:
    // 0x1ded60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ded60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ded64:
    // 0x1ded64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ded64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ded68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ded68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ded6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ded6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ded70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DED70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DED74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED70u;
            // 0x1ded74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DED78u;
    ctx->pc = 0x1ded78u;
}
