#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5048
// Address: 0x2c5048 - 0x2c50c8
void sub_002C5048_0x2c5048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5048_0x2c5048");
#endif

    switch (ctx->pc) {
        case 0x2c505cu: goto label_2c505c;
        case 0x2c5084u: goto label_2c5084;
        case 0x2c5094u: goto label_2c5094;
        case 0x2c50acu: goto label_2c50ac;
        default: break;
    }

    ctx->pc = 0x2c5048u;

    // 0x2c5048: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c5048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c504c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c5050: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c5050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c5054: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C5054u;
    SET_GPR_U32(ctx, 31, 0x2C505Cu);
    ctx->pc = 0x2C5058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5054u;
            // 0x2c5058: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C505Cu; }
        if (ctx->pc != 0x2C505Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C505Cu; }
        if (ctx->pc != 0x2C505Cu) { return; }
    }
    ctx->pc = 0x2C505Cu;
label_2c505c:
    // 0x2c505c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c505cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5060: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C5060u;
    {
        const bool branch_taken_0x2c5060 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5060u;
            // 0x2c5064: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5060) {
            ctx->pc = 0x2C508Cu;
            goto label_2c508c;
        }
    }
    ctx->pc = 0x2C5068u;
    // 0x2c5068: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c5068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c506c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c506cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c5070: 0x240500db  addiu       $a1, $zero, 0xDB
    ctx->pc = 0x2c5070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x2c5074: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c5074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c5078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c5078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c507c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C507Cu;
    SET_GPR_U32(ctx, 31, 0x2C5084u);
    ctx->pc = 0x2C5080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C507Cu;
            // 0x2c5080: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5084u; }
        if (ctx->pc != 0x2C5084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5084u; }
        if (ctx->pc != 0x2C5084u) { return; }
    }
    ctx->pc = 0x2C5084u;
label_2c5084:
    // 0x2c5084: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C5084u;
    {
        const bool branch_taken_0x2c5084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5084u;
            // 0x2c5088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5084) {
            ctx->pc = 0x2C50B8u;
            goto label_2c50b8;
        }
    }
    ctx->pc = 0x2C508Cu;
label_2c508c:
    // 0x2c508c: 0xc0b09ee  jal         func_2C27B8
    ctx->pc = 0x2C508Cu;
    SET_GPR_U32(ctx, 31, 0x2C5094u);
    ctx->pc = 0x2C27B8u;
    if (runtime->hasFunction(0x2C27B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C27B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5094u; }
        if (ctx->pc != 0x2C5094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C27B8_0x2c27b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5094u; }
        if (ctx->pc != 0x2C5094u) { return; }
    }
    ctx->pc = 0x2C5094u;
label_2c5094:
    // 0x2c5094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5094u;
    {
        const bool branch_taken_0x2c5094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5094u;
            // 0x2c5098: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5094) {
            ctx->pc = 0x2C50A4u;
            goto label_2c50a4;
        }
    }
    ctx->pc = 0x2C509Cu;
    // 0x2c509c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C509Cu;
    {
        const bool branch_taken_0x2c509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C509Cu;
            // 0x2c50a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c509c) {
            ctx->pc = 0x2C50B8u;
            goto label_2c50b8;
        }
    }
    ctx->pc = 0x2C50A4u;
label_2c50a4:
    // 0x2c50a4: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C50A4u;
    SET_GPR_U32(ctx, 31, 0x2C50ACu);
    ctx->pc = 0x2C50A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C50A4u;
            // 0x2c50a8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (runtime->hasFunction(0x281BC8u)) {
        auto targetFn = runtime->lookupFunction(0x281BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50ACu; }
        if (ctx->pc != 0x2C50ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BC8_0x281bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50ACu; }
        if (ctx->pc != 0x2C50ACu) { return; }
    }
    ctx->pc = 0x2C50ACu;
label_2c50ac:
    // 0x2c50ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2c50acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2c50b0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2c50b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2c50b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c50b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c50b8:
    // 0x2c50b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c50b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c50bc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c50bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c50c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C50C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C50C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C50C0u;
            // 0x2c50c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C50C8u;
    ctx->pc = 0x2c50c8u;
}
