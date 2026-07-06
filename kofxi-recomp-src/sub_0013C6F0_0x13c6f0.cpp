#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C6F0
// Address: 0x13c6f0 - 0x13c750
void sub_0013C6F0_0x13c6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C6F0_0x13c6f0");
#endif

    switch (ctx->pc) {
        case 0x13c708u: goto label_13c708;
        case 0x13c720u: goto label_13c720;
        case 0x13c738u: goto label_13c738;
        default: break;
    }

    ctx->pc = 0x13c6f0u;

    // 0x13c6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c6fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c700: 0xc062804  jal         func_18A010
    ctx->pc = 0x13C700u;
    SET_GPR_U32(ctx, 31, 0x13C708u);
    ctx->pc = 0x13C704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C700u;
            // 0x13c704: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C708u; }
        if (ctx->pc != 0x13C708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C708u; }
        if (ctx->pc != 0x13C708u) { return; }
    }
    ctx->pc = 0x13C708u;
label_13c708:
    // 0x13c708: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C708u;
    {
        const bool branch_taken_0x13c708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c708) {
            ctx->pc = 0x13C70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C708u;
            // 0x13c70c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C718u;
            goto label_13c718;
        }
    }
    ctx->pc = 0x13C710u;
    // 0x13c710: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13C710u;
    {
        const bool branch_taken_0x13c710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C710u;
            // 0x13c714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c710) {
            ctx->pc = 0x13C73Cu;
            goto label_13c73c;
        }
    }
    ctx->pc = 0x13C718u;
label_13c718:
    // 0x13c718: 0xc04f880  jal         func_13E200
    ctx->pc = 0x13C718u;
    SET_GPR_U32(ctx, 31, 0x13C720u);
    ctx->pc = 0x13E200u;
    if (runtime->hasFunction(0x13E200u)) {
        auto targetFn = runtime->lookupFunction(0x13E200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C720u; }
        if (ctx->pc != 0x13C720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E200_0x13e200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C720u; }
        if (ctx->pc != 0x13C720u) { return; }
    }
    ctx->pc = 0x13C720u;
label_13c720:
    // 0x13c720: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C720u;
    {
        const bool branch_taken_0x13c720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c720) {
            ctx->pc = 0x13C724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C720u;
            // 0x13c724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C730u;
            goto label_13c730;
        }
    }
    ctx->pc = 0x13C728u;
    // 0x13c728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C728u;
    {
        const bool branch_taken_0x13c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C728u;
            // 0x13c72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c728) {
            ctx->pc = 0x13C73Cu;
            goto label_13c73c;
        }
    }
    ctx->pc = 0x13C730u;
label_13c730:
    // 0x13c730: 0xc05a9ac  jal         func_16A6B0
    ctx->pc = 0x13C730u;
    SET_GPR_U32(ctx, 31, 0x13C738u);
    ctx->pc = 0x16A6B0u;
    if (runtime->hasFunction(0x16A6B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C738u; }
        if (ctx->pc != 0x13C738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A6B0_0x16a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C738u; }
        if (ctx->pc != 0x13C738u) { return; }
    }
    ctx->pc = 0x13C738u;
label_13c738:
    // 0x13c738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c73c:
    // 0x13c73c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c744: 0x3e00008  jr          $ra
    ctx->pc = 0x13C744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C744u;
            // 0x13c748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C74Cu;
    // 0x13c74c: 0x0  nop
    ctx->pc = 0x13c74cu;
    // NOP
    ctx->pc = 0x13c750u;
}
