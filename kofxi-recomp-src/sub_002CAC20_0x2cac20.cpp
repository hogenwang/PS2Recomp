#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CAC20
// Address: 0x2cac20 - 0x2cacc8
void sub_002CAC20_0x2cac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAC20_0x2cac20");
#endif

    switch (ctx->pc) {
        case 0x2cac40u: goto label_2cac40;
        case 0x2cac7cu: goto label_2cac7c;
        case 0x2caca8u: goto label_2caca8;
        default: break;
    }

    ctx->pc = 0x2cac20u;

    // 0x2cac20: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cac24: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2cac24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2cac28: 0x24428550  addiu       $v0, $v0, -0x7AB0
    ctx->pc = 0x2cac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935888));
    // 0x2cac2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2cac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2cac30: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2cac30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2cac34: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC34u;
            // 0x2cac38: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CAC3Cu;
    // 0x2cac3c: 0x0  nop
    ctx->pc = 0x2cac3cu;
    // NOP
label_2cac40:
    // 0x2cac40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cac44: 0x24020804  addiu       $v0, $zero, 0x804
    ctx->pc = 0x2cac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    // 0x2cac48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cac4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cac4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cac54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cac54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cac5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cac5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cac64: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2cac64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cac68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cac6c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CAC6Cu;
    {
        const bool branch_taken_0x2cac6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC6Cu;
            // 0x2cac70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac6c) {
            ctx->pc = 0x2CACACu;
            goto label_2cacac;
        }
    }
    ctx->pc = 0x2CAC74u;
    // 0x2cac74: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2CAC74u;
    SET_GPR_U32(ctx, 31, 0x2CAC7Cu);
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC7Cu; }
        if (ctx->pc != 0x2CAC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAC7Cu; }
        if (ctx->pc != 0x2CAC7Cu) { return; }
    }
    ctx->pc = 0x2CAC7Cu;
label_2cac7c:
    // 0x2cac7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2cac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cac80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac84: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x2cac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
    // 0x2cac88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cac88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cac8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac90: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAC90u;
    {
        const bool branch_taken_0x2cac90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC90u;
            // 0x2cac94: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac90) {
            ctx->pc = 0x2CACACu;
            goto label_2cacac;
        }
    }
    ctx->pc = 0x2CAC98u;
    // 0x2cac98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2cac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cac9c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x2cac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x2caca0: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CACA0u;
    SET_GPR_U32(ctx, 31, 0x2CACA8u);
    ctx->pc = 0x2CACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CACA0u;
            // 0x2caca4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CACA8u; }
        if (ctx->pc != 0x2CACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CACA8u; }
        if (ctx->pc != 0x2CACA8u) { return; }
    }
    ctx->pc = 0x2CACA8u;
label_2caca8:
    // 0x2caca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2caca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cacac:
    // 0x2cacac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cacacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cacb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cacb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cacb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cacb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cacb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cacb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cacbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CACBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CACC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CACBCu;
            // 0x2cacc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CACC4u;
    // 0x2cacc4: 0x0  nop
    ctx->pc = 0x2cacc4u;
    // NOP
    ctx->pc = 0x2cacc8u;
}
