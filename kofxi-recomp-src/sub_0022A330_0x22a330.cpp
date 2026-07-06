#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A330
// Address: 0x22a330 - 0x22a3b0
void sub_0022A330_0x22a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A330_0x22a330");
#endif

    switch (ctx->pc) {
        case 0x22a34cu: goto label_22a34c;
        case 0x22a354u: goto label_22a354;
        case 0x22a360u: goto label_22a360;
        case 0x22a36cu: goto label_22a36c;
        default: break;
    }

    ctx->pc = 0x22a330u;

    // 0x22a330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a334: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a338: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a33c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a340: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22a344: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x22A344u;
    SET_GPR_U32(ctx, 31, 0x22A34Cu);
    ctx->pc = 0x22A348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A344u;
            // 0x22a348: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (runtime->hasFunction(0x22A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x22A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A34Cu; }
        if (ctx->pc != 0x22A34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A3B0_0x22a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A34Cu; }
        if (ctx->pc != 0x22A34Cu) { return; }
    }
    ctx->pc = 0x22A34Cu;
label_22a34c:
    // 0x22a34c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22A34Cu;
    SET_GPR_U32(ctx, 31, 0x22A354u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A354u; }
        if (ctx->pc != 0x22A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A354u; }
        if (ctx->pc != 0x22A354u) { return; }
    }
    ctx->pc = 0x22A354u;
label_22a354:
    // 0x22a354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a358: 0xc098552  jal         func_261548
    ctx->pc = 0x22A358u;
    SET_GPR_U32(ctx, 31, 0x22A360u);
    ctx->pc = 0x22A35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A358u;
            // 0x22a35c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A360u; }
        if (ctx->pc != 0x22A360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A360u; }
        if (ctx->pc != 0x22A360u) { return; }
    }
    ctx->pc = 0x22A360u;
label_22a360:
    // 0x22a360: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a364: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22A364u;
    SET_GPR_U32(ctx, 31, 0x22A36Cu);
    ctx->pc = 0x22A368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A364u;
            // 0x22a368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A36Cu; }
        if (ctx->pc != 0x22A36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A36Cu; }
        if (ctx->pc != 0x22A36Cu) { return; }
    }
    ctx->pc = 0x22A36Cu;
label_22a36c:
    // 0x22a36c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22A36Cu;
    {
        const bool branch_taken_0x22a36c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A36Cu;
            // 0x22a370: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a36c) {
            ctx->pc = 0x22A390u;
            goto label_22a390;
        }
    }
    ctx->pc = 0x22A374u;
    // 0x22a374: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a378: 0xa6320010  sh          $s2, 0x10($s1)
    ctx->pc = 0x22a378u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 18));
    // 0x22a37c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22a380: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x22a380u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x22a384: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22a384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22a388: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22a388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22a38c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x22a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_22a390:
    // 0x22a390: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a398: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a39c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a39cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A3A4u;
            // 0x22a3a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A3ACu;
    // 0x22a3ac: 0x0  nop
    ctx->pc = 0x22a3acu;
    // NOP
    ctx->pc = 0x22a3b0u;
}
