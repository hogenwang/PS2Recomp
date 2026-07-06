#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FAA18
// Address: 0x1faa18 - 0x1faa88
void sub_001FAA18_0x1faa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAA18_0x1faa18");
#endif

    switch (ctx->pc) {
        case 0x1faa34u: goto label_1faa34;
        case 0x1faa58u: goto label_1faa58;
        case 0x1faa70u: goto label_1faa70;
        default: break;
    }

    ctx->pc = 0x1faa18u;

    // 0x1faa18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1faa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1faa1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1faa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1faa20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1faa20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1faa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1faa28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1faa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1faa2c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FAA2Cu;
    SET_GPR_U32(ctx, 31, 0x1FAA34u);
    ctx->pc = 0x1FAA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA2Cu;
            // 0x1faa30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA34u; }
        if (ctx->pc != 0x1FAA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA34u; }
        if (ctx->pc != 0x1FAA34u) { return; }
    }
    ctx->pc = 0x1FAA34u;
label_1faa34:
    // 0x1faa34: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1faa34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1faa38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAA38u;
    {
        const bool branch_taken_0x1faa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA38u;
            // 0x1faa3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa38) {
            ctx->pc = 0x1FAA58u;
            goto label_1faa58;
        }
    }
    ctx->pc = 0x1FAA40u;
    // 0x1faa40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1faa40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faa44: 0x34a5015b  ori         $a1, $a1, 0x15B
    ctx->pc = 0x1faa44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)347);
    // 0x1faa48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faa48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faa4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faa50: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FAA50u;
    ctx->pc = 0x1FAA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA50u;
            // 0x1faa54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FAA58u;
label_1faa58:
    // 0x1faa58: 0x8e033708  lw          $v1, 0x3708($s0)
    ctx->pc = 0x1faa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
    // 0x1faa5c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAA5Cu;
    {
        const bool branch_taken_0x1faa5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faa5c) {
            ctx->pc = 0x1FAA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA5Cu;
            // 0x1faa60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAA78u;
            goto label_1faa78;
        }
    }
    ctx->pc = 0x1FAA64u;
    // 0x1faa64: 0xac710dd0  sw          $s1, 0xDD0($v1)
    ctx->pc = 0x1faa64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3536), GPR_U32(ctx, 17));
    // 0x1faa68: 0xc07eb08  jal         func_1FAC20
    ctx->pc = 0x1FAA68u;
    SET_GPR_U32(ctx, 31, 0x1FAA70u);
    ctx->pc = 0x1FAA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA68u;
            // 0x1faa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC20u;
    if (runtime->hasFunction(0x1FAC20u)) {
        auto targetFn = runtime->lookupFunction(0x1FAC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA70u; }
        if (ctx->pc != 0x1FAA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAC20_0x1fac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA70u; }
        if (ctx->pc != 0x1FAA70u) { return; }
    }
    ctx->pc = 0x1FAA70u;
label_1faa70:
    // 0x1faa70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1faa70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1faa74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1faa78:
    // 0x1faa78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faa78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faa7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faa80: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA80u;
            // 0x1faa84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FAA88u;
    ctx->pc = 0x1faa88u;
}
