#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001114D0
// Address: 0x1114d0 - 0x111550
void sub_001114D0_0x1114d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001114D0_0x1114d0");
#endif

    switch (ctx->pc) {
        case 0x1114ecu: goto label_1114ec;
        case 0x1114f4u: goto label_1114f4;
        case 0x111510u: goto label_111510;
        case 0x111534u: goto label_111534;
        default: break;
    }

    ctx->pc = 0x1114d0u;

    // 0x1114d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1114d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1114d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1114d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1114d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1114d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1114dc: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x1114dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x1114e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1114e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1114e4: 0xc044518  jal         func_111460
    ctx->pc = 0x1114E4u;
    SET_GPR_U32(ctx, 31, 0x1114ECu);
    ctx->pc = 0x1114E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1114E4u;
            // 0x1114e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111460u;
    if (runtime->hasFunction(0x111460u)) {
        auto targetFn = runtime->lookupFunction(0x111460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1114ECu; }
        if (ctx->pc != 0x1114ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111460_0x111460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1114ECu; }
        if (ctx->pc != 0x1114ECu) { return; }
    }
    ctx->pc = 0x1114ECu;
label_1114ec:
    // 0x1114ec: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1114ECu;
    SET_GPR_U32(ctx, 31, 0x1114F4u);
    ctx->pc = 0x1114F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1114ECu;
            // 0x1114f0: 0x8e248748  lw          $a0, -0x78B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1114F4u; }
        if (ctx->pc != 0x1114F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1114F4u; }
        if (ctx->pc != 0x1114F4u) { return; }
    }
    ctx->pc = 0x1114F4u;
label_1114f4:
    // 0x1114f4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1114f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1114f8: 0x24659780  addiu       $a1, $v1, -0x6880
    ctx->pc = 0x1114f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940544));
    // 0x1114fc: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x1114fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x111500: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x111500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x111504: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x111504u;
    {
        const bool branch_taken_0x111504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111504u;
            // 0x111508: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111504) {
            ctx->pc = 0x11152Cu;
            goto label_11152c;
        }
    }
    ctx->pc = 0x11150Cu;
    // 0x11150c: 0x0  nop
    ctx->pc = 0x11150cu;
    // NOP
label_111510:
    // 0x111510: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x111510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x111514: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x111514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x111518: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x111518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x11151c: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x11151cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x111520: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x111520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x111524: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111524u;
    {
        const bool branch_taken_0x111524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111524) {
            ctx->pc = 0x111510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111510;
        }
    }
    ctx->pc = 0x11152Cu;
label_11152c:
    // 0x11152c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11152Cu;
    SET_GPR_U32(ctx, 31, 0x111534u);
    ctx->pc = 0x111530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11152Cu;
            // 0x111530: 0x8e248748  lw          $a0, -0x78B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111534u; }
        if (ctx->pc != 0x111534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111534u; }
        if (ctx->pc != 0x111534u) { return; }
    }
    ctx->pc = 0x111534u;
label_111534:
    // 0x111534: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x111534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111538: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x111538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11153c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11153cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111544: 0x3e00008  jr          $ra
    ctx->pc = 0x111544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111544u;
            // 0x111548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11154Cu;
    // 0x11154c: 0x0  nop
    ctx->pc = 0x11154cu;
    // NOP
    ctx->pc = 0x111550u;
}
