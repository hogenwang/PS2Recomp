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

// Function: sub_0028F2E8
// Address: 0x28f2e8 - 0x28f330
void sub_0028F2E8_0x28f2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F2E8_0x28f2e8");
#endif

    switch (ctx->pc) {
        case 0x28f2e8u: goto label_28f2e8;
        case 0x28f2ecu: goto label_28f2ec;
        case 0x28f2f0u: goto label_28f2f0;
        case 0x28f2f4u: goto label_28f2f4;
        case 0x28f2f8u: goto label_28f2f8;
        case 0x28f2fcu: goto label_28f2fc;
        case 0x28f300u: goto label_28f300;
        case 0x28f304u: goto label_28f304;
        case 0x28f308u: goto label_28f308;
        case 0x28f30cu: goto label_28f30c;
        case 0x28f310u: goto label_28f310;
        case 0x28f314u: goto label_28f314;
        case 0x28f318u: goto label_28f318;
        case 0x28f31cu: goto label_28f31c;
        case 0x28f320u: goto label_28f320;
        case 0x28f324u: goto label_28f324;
        case 0x28f328u: goto label_28f328;
        case 0x28f32cu: goto label_28f32c;
        default: break;
    }

    ctx->pc = 0x28f2e8u;

label_28f2e8:
    // 0x28f2e8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28f2ec:
    // 0x28f2ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f2ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f2f0:
    // 0x28f2f0: 0x8c42467c  lw          $v0, 0x467C($v0)
    ctx->pc = 0x28f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18044)));
label_28f2f4:
    // 0x28f2f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28f2f8:
    if (ctx->pc == 0x28F2F8u) {
        ctx->pc = 0x28F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2F4u;
        // 0x28f2f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F2FCu;
        goto label_28f2fc;
    }
    ctx->pc = 0x28F2F4u;
    {
        const bool branch_taken_0x28f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2F4u;
        // 0x28f2f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2f4) {
            ctx->pc = 0x28F31Cu;
            goto label_28f31c;
        }
    }
    ctx->pc = 0x28F2FCu;
label_28f2fc:
    // 0x28f2fc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28f300:
    // 0x28f300: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x28f300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_28f304:
    // 0x28f304: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28f304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28f308:
    // 0x28f308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f30c:
    // 0x28f30c: 0xc0a5648  jal         func_295920
label_28f310:
    if (ctx->pc == 0x28F310u) {
        ctx->pc = 0x28F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F30Cu;
        // 0x28f310: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F314u;
        goto label_28f314;
    }
    ctx->pc = 0x28F30Cu;
    SET_GPR_U32(ctx, 31, 0x28F314u);
    ctx->pc = 0x28F310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F30Cu;
    // 0x28f310: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28F30Cu, 0x28F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F314u;
label_28f314:
    // 0x28f314: 0x10000003  b           . + 4 + (0x3 << 2)
label_28f318:
    if (ctx->pc == 0x28F318u) {
        ctx->pc = 0x28F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F314u;
        // 0x28f318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F31Cu;
        goto label_28f31c;
    }
    ctx->pc = 0x28F314u;
    {
        const bool branch_taken_0x28f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F314u;
        // 0x28f318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f314) {
            ctx->pc = 0x28F324u;
            goto label_28f324;
        }
    }
    ctx->pc = 0x28F31Cu;
label_28f31c:
    // 0x28f31c: 0x40f809  jalr        $v0
label_28f320:
    if (ctx->pc == 0x28F320u) {
        ctx->pc = 0x28F324u;
        goto label_28f324;
    }
    ctx->pc = 0x28F31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F324u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F31Cu, 0x28F324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F324u;
label_28f324:
    // 0x28f324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f328:
    // 0x28f328: 0x3e00008  jr          $ra
label_28f32c:
    if (ctx->pc == 0x28F32Cu) {
        ctx->pc = 0x28F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F328u;
        // 0x28f32c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F330u;
        goto label_fallthrough_0x28f328;
    }
    ctx->pc = 0x28F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F328u;
        // 0x28f32c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f328:
    ctx->pc = 0x28F330u;
}
