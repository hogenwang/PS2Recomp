#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D558
// Address: 0x10d558 - 0x10d5f0
void sub_0010D558_0x10d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D558_0x10d558");
#endif

    switch (ctx->pc) {
        case 0x10d590u: goto label_10d590;
        case 0x10d5a4u: goto label_10d5a4;
        case 0x10d5c0u: goto label_10d5c0;
        case 0x10d5d8u: goto label_10d5d8;
        default: break;
    }

    ctx->pc = 0x10d558u;

    // 0x10d558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d55c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d560: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d56c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10d56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d574: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10d574u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10d578: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d57c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10d57cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10d580: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D580u;
    {
        const bool branch_taken_0x10d580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d580) {
            ctx->pc = 0x10D590u;
            goto label_10d590;
        }
    }
    ctx->pc = 0x10D588u;
    // 0x10d588: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D588u;
    SET_GPR_U32(ctx, 31, 0x10D590u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D590u; }
        if (ctx->pc != 0x10D590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D590u; }
        if (ctx->pc != 0x10D590u) { return; }
    }
    ctx->pc = 0x10D590u;
label_10d590:
    // 0x10d590: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x10d590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x10d594: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x10d594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x10d598: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x10d598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x10d59c: 0xc04352c  jal         func_10D4B0
    ctx->pc = 0x10D59Cu;
    SET_GPR_U32(ctx, 31, 0x10D5A4u);
    ctx->pc = 0x10D5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D59Cu;
            // 0x10d5a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4B0u;
    if (runtime->hasFunction(0x10D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D5A4u; }
        if (ctx->pc != 0x10D5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4B0_0x10d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D5A4u; }
        if (ctx->pc != 0x10D5A4u) { return; }
    }
    ctx->pc = 0x10D5A4u;
label_10d5a4:
    // 0x10d5a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D5A4u;
    {
        const bool branch_taken_0x10d5a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D5A4u;
            // 0x10d5a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5a4) {
            ctx->pc = 0x10D5C0u;
            goto label_10d5c0;
        }
    }
    ctx->pc = 0x10D5ACu;
    // 0x10d5ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d5acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d5b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d5b8: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x10D5B8u;
    ctx->pc = 0x10D5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D5B8u;
            // 0x10d5bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10D5C0u;
label_10d5c0:
    // 0x10d5c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d5c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d5c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10D5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D5CCu;
            // 0x10d5d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D5D4u;
    // 0x10d5d4: 0x0  nop
    ctx->pc = 0x10d5d4u;
    // NOP
label_10d5d8:
    // 0x10d5d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10d5dc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x10d5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x10d5e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10d5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10d5e4: 0x804352c  j           func_10D4B0
    ctx->pc = 0x10D5E4u;
    ctx->pc = 0x10D5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D5E4u;
            // 0x10d5e8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4B0u;
    if (runtime->hasFunction(0x10D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010D4B0_0x10d4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10D5ECu;
    // 0x10d5ec: 0x0  nop
    ctx->pc = 0x10d5ecu;
    // NOP
    ctx->pc = 0x10d5f0u;
}
