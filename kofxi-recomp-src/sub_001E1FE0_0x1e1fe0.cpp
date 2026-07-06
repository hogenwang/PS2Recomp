#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1FE0
// Address: 0x1e1fe0 - 0x1e2040
void sub_001E1FE0_0x1e1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1FE0_0x1e1fe0");
#endif

    switch (ctx->pc) {
        case 0x1e1fe0u: goto label_1e1fe0;
        case 0x1e1fe4u: goto label_1e1fe4;
        case 0x1e1fe8u: goto label_1e1fe8;
        case 0x1e1fecu: goto label_1e1fec;
        case 0x1e1ff0u: goto label_1e1ff0;
        case 0x1e1ff4u: goto label_1e1ff4;
        case 0x1e1ff8u: goto label_1e1ff8;
        case 0x1e1ffcu: goto label_1e1ffc;
        case 0x1e2000u: goto label_1e2000;
        case 0x1e2004u: goto label_1e2004;
        case 0x1e2008u: goto label_1e2008;
        case 0x1e200cu: goto label_1e200c;
        case 0x1e2010u: goto label_1e2010;
        case 0x1e2014u: goto label_1e2014;
        case 0x1e2018u: goto label_1e2018;
        case 0x1e201cu: goto label_1e201c;
        case 0x1e2020u: goto label_1e2020;
        case 0x1e2024u: goto label_1e2024;
        case 0x1e2028u: goto label_1e2028;
        case 0x1e202cu: goto label_1e202c;
        case 0x1e2030u: goto label_1e2030;
        case 0x1e2034u: goto label_1e2034;
        case 0x1e2038u: goto label_1e2038;
        case 0x1e203cu: goto label_1e203c;
        default: break;
    }

    ctx->pc = 0x1e1fe0u;

label_1e1fe0:
    // 0x1e1fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e1fe4:
    // 0x1e1fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e1fe8:
    // 0x1e1fe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e1fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e1fec:
    // 0x1e1fec: 0xc0787f0  jal         func_1E1FC0
label_1e1ff0:
    if (ctx->pc == 0x1E1FF0u) {
        ctx->pc = 0x1E1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FECu;
        // 0x1e1ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FF4u;
        goto label_1e1ff4;
    }
    ctx->pc = 0x1E1FECu;
    SET_GPR_U32(ctx, 31, 0x1E1FF4u);
    ctx->pc = 0x1E1FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1FECu;
    // 0x1e1ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1FC0u, 0x1E1FECu, 0x1E1FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1FF4u;
label_1e1ff4:
    // 0x1e1ff4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1e1ff8:
    // 0x1e1ff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ffc:
    // 0x1e1ffc: 0x8c6214f4  lw          $v0, 0x14F4($v1)
    ctx->pc = 0x1e1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5364)));
label_1e2000:
    // 0x1e2000: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e2004:
    if (ctx->pc == 0x1E2004u) {
        ctx->pc = 0x1E2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2000u;
        // 0x1e2004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2008u;
        goto label_1e2008;
    }
    ctx->pc = 0x1E2000u;
    {
        const bool branch_taken_0x1e2000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2000u;
        // 0x1e2004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2000) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E2008u;
label_1e2008:
    // 0x1e2008: 0x40f809  jalr        $v0
label_1e200c:
    if (ctx->pc == 0x1E200Cu) {
        ctx->pc = 0x1E2010u;
        goto label_1e2010;
    }
    ctx->pc = 0x1E2008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2010u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2008u, 0x1E2010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2010u;
label_1e2010:
    // 0x1e2010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2014:
    // 0x1e2014: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e2014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e2018:
    // 0x1e2018: 0x3e00008  jr          $ra
label_1e201c:
    if (ctx->pc == 0x1E201Cu) {
        ctx->pc = 0x1E201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2018u;
        // 0x1e201c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2020u;
        goto label_1e2020;
    }
    ctx->pc = 0x1E2018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2018u;
        // 0x1e201c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2020u;
label_1e2020:
    // 0x1e2020: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e2020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1e2024:
    // 0x1e2024: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e2024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1e2028:
    // 0x1e2028: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e2028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e202c:
    // 0x1e202c: 0xac4014f4  sw          $zero, 0x14F4($v0)
    ctx->pc = 0x1e202cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5364), GPR_U32(ctx, 0));
label_1e2030:
    // 0x1e2030: 0xac6014f8  sw          $zero, 0x14F8($v1)
    ctx->pc = 0x1e2030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5368), GPR_U32(ctx, 0));
label_1e2034:
    // 0x1e2034: 0x3e00008  jr          $ra
label_1e2038:
    if (ctx->pc == 0x1E2038u) {
        ctx->pc = 0x1E2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2034u;
        // 0x1e2038: 0xac8014fc  sw          $zero, 0x14FC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E203Cu;
        goto label_1e203c;
    }
    ctx->pc = 0x1E2034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2034u;
        // 0x1e2038: 0xac8014fc  sw          $zero, 0x14FC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E203Cu;
label_1e203c:
    // 0x1e203c: 0x0  nop
    ctx->pc = 0x1e203cu;
    // NOP
    if (ctx->pc == 0x1e203cu) { ctx->pc = 0x1e2040u; }
}
