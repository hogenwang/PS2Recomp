#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D85E8
// Address: 0x1d85e8 - 0x1d8678
void sub_001D85E8_0x1d85e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D85E8_0x1d85e8");
#endif

    switch (ctx->pc) {
        case 0x1d8620u: goto label_1d8620;
        case 0x1d8628u: goto label_1d8628;
        case 0x1d8640u: goto label_1d8640;
        default: break;
    }

    ctx->pc = 0x1d85e8u;

    // 0x1d85e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d85e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d85ec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d85ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d85f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d85f4: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1d85f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1d85f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d85f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d85fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d85fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8600: 0x2610e6a8  addiu       $s0, $s0, -0x1958
    ctx->pc = 0x1d8600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960808));
    // 0x1d8604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8608: 0x113180  sll         $a2, $s1, 6
    ctx->pc = 0x1d8608u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1d860c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d860cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d8610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8614: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1d8614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1d8618: 0xc0758fa  jal         func_1D63E8
    ctx->pc = 0x1D8618u;
    SET_GPR_U32(ctx, 31, 0x1D8620u);
    ctx->pc = 0x1D861Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8618u;
            // 0x1d861c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    if (runtime->hasFunction(0x1D63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1D63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8620u; }
        if (ctx->pc != 0x1D8620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D63E8_0x1d63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8620u; }
        if (ctx->pc != 0x1D8620u) { return; }
    }
    ctx->pc = 0x1D8620u;
label_1d8620:
    // 0x1d8620: 0xc0761bc  jal         func_1D86F0
    ctx->pc = 0x1D8620u;
    SET_GPR_U32(ctx, 31, 0x1D8628u);
    ctx->pc = 0x1D8624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8620u;
            // 0x1d8624: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D86F0u;
    if (runtime->hasFunction(0x1D86F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D86F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8628u; }
        if (ctx->pc != 0x1D8628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D86F0_0x1d86f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8628u; }
        if (ctx->pc != 0x1D8628u) { return; }
    }
    ctx->pc = 0x1D8628u;
label_1d8628:
    // 0x1d8628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d8628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d862c: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x1d862cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x1d8630: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8630u;
    {
        const bool branch_taken_0x1d8630 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D8634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8630u;
            // 0x1d8634: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8630) {
            ctx->pc = 0x1D865Cu;
            goto label_1d865c;
        }
    }
    ctx->pc = 0x1D8638u;
    // 0x1d8638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d863c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8640:
    // 0x1d8640: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d8640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d8644: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d8644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d8648: 0x0  nop
    ctx->pc = 0x1d8648u;
    // NOP
    // 0x1d864c: 0x0  nop
    ctx->pc = 0x1d864cu;
    // NOP
    // 0x1d8650: 0x0  nop
    ctx->pc = 0x1d8650u;
    // NOP
    // 0x1d8654: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D8654u;
    {
        const bool branch_taken_0x1d8654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8654u;
            // 0x1d8658: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8654) {
            ctx->pc = 0x1D8640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8640;
        }
    }
    ctx->pc = 0x1D865Cu;
label_1d865c:
    // 0x1d865c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d865cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d866c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D866Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D866Cu;
            // 0x1d8670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8674u;
    // 0x1d8674: 0x0  nop
    ctx->pc = 0x1d8674u;
    // NOP
    ctx->pc = 0x1d8678u;
}
