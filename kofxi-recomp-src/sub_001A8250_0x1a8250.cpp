#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8250
// Address: 0x1a8250 - 0x1a82e0
void sub_001A8250_0x1a8250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8250_0x1a8250");
#endif

    switch (ctx->pc) {
        case 0x1a828cu: goto label_1a828c;
        case 0x1a8298u: goto label_1a8298;
        case 0x1a82b8u: goto label_1a82b8;
        default: break;
    }

    ctx->pc = 0x1a8250u;

    // 0x1a8250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a8250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a8254: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a8254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a8258: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a8258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a825c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a825cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8260: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a8260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a8264: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a8264u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8268: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a8268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a826c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a826cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8270: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a8274: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a8274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8278: 0x3c1101bf  lui         $s1, 0x1BF
    ctx->pc = 0x1a8278u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)447 << 16));
    // 0x1a827c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8280: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a8280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a8284: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8284u;
    SET_GPR_U32(ctx, 31, 0x1A828Cu);
    ctx->pc = 0x1A8288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8284u;
            // 0x1a8288: 0x26303280  addiu       $s0, $s1, 0x3280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (runtime->hasFunction(0x1A7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A828Cu; }
        if (ctx->pc != 0x1A828Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7F60_0x1a7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A828Cu; }
        if (ctx->pc != 0x1A828Cu) { return; }
    }
    ctx->pc = 0x1A828Cu;
label_1a828c:
    // 0x1a828c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a828cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8290: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8290u;
    SET_GPR_U32(ctx, 31, 0x1A8298u);
    ctx->pc = 0x1A8294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8290u;
            // 0x1a8294: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8298u; }
        if (ctx->pc != 0x1A8298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8298u; }
        if (ctx->pc != 0x1A8298u) { return; }
    }
    ctx->pc = 0x1A8298u;
label_1a8298:
    // 0x1a8298: 0xae333280  sw          $s3, 0x3280($s1)
    ctx->pc = 0x1a8298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12928), GPR_U32(ctx, 19));
    // 0x1a829c: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a829cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a82a0: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1a82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1a82a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a82a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82a8: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x1a82a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x1a82ac: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a82acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a82b0: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A82B0u;
    SET_GPR_U32(ctx, 31, 0x1A82B8u);
    ctx->pc = 0x1A82B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82B0u;
            // 0x1a82b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (runtime->hasFunction(0x1A8F78u)) {
        auto targetFn = runtime->lookupFunction(0x1A8F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82B8u; }
        if (ctx->pc != 0x1A82B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8F78_0x1a8f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82B8u; }
        if (ctx->pc != 0x1A82B8u) { return; }
    }
    ctx->pc = 0x1A82B8u;
label_1a82b8:
    // 0x1a82b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a82b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a82bc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a82bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a82c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a82c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a82c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a82c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a82c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a82c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a82cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a82ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a82d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a82d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a82d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A82D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A82D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82D4u;
            // 0x1a82d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A82DCu;
    // 0x1a82dc: 0x0  nop
    ctx->pc = 0x1a82dcu;
    // NOP
    ctx->pc = 0x1a82e0u;
}
