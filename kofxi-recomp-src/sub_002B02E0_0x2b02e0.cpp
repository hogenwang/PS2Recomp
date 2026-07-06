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

// Function: sub_002B02E0
// Address: 0x2b02e0 - 0x2b0340
void sub_002B02E0_0x2b02e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B02E0_0x2b02e0");
#endif

    switch (ctx->pc) {
        case 0x2b02e0u: goto label_2b02e0;
        case 0x2b02e4u: goto label_2b02e4;
        case 0x2b02e8u: goto label_2b02e8;
        case 0x2b02ecu: goto label_2b02ec;
        case 0x2b02f0u: goto label_2b02f0;
        case 0x2b02f4u: goto label_2b02f4;
        case 0x2b02f8u: goto label_2b02f8;
        case 0x2b02fcu: goto label_2b02fc;
        case 0x2b0300u: goto label_2b0300;
        case 0x2b0304u: goto label_2b0304;
        case 0x2b0308u: goto label_2b0308;
        case 0x2b030cu: goto label_2b030c;
        case 0x2b0310u: goto label_2b0310;
        case 0x2b0314u: goto label_2b0314;
        case 0x2b0318u: goto label_2b0318;
        case 0x2b031cu: goto label_2b031c;
        case 0x2b0320u: goto label_2b0320;
        case 0x2b0324u: goto label_2b0324;
        case 0x2b0328u: goto label_2b0328;
        case 0x2b032cu: goto label_2b032c;
        case 0x2b0330u: goto label_2b0330;
        case 0x2b0334u: goto label_2b0334;
        case 0x2b0338u: goto label_2b0338;
        case 0x2b033cu: goto label_2b033c;
        default: break;
    }

    ctx->pc = 0x2b02e0u;

label_2b02e0:
    // 0x2b02e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b02e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b02e4:
    // 0x2b02e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2b02e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b02e8:
    // 0x2b02e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b02e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b02ec:
    // 0x2b02ec: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x2b02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_2b02f0:
    // 0x2b02f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b02f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b02f4:
    // 0x2b02f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2b02f8:
    if (ctx->pc == 0x2B02F8u) {
        ctx->pc = 0x2B02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02F4u;
        // 0x2b02f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B02FCu;
        goto label_2b02fc;
    }
    ctx->pc = 0x2B02F4u;
    {
        const bool branch_taken_0x2b02f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02F4u;
        // 0x2b02f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02f4) {
            ctx->pc = 0x2B0320u;
            goto label_2b0320;
        }
    }
    ctx->pc = 0x2B02FCu;
label_2b02fc:
    // 0x2b02fc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b02fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b0300:
    // 0x2b0300: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x2b0300u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
label_2b0304:
    // 0x2b0304: 0x240500d1  addiu       $a1, $zero, 0xD1
    ctx->pc = 0x2b0304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
label_2b0308:
    // 0x2b0308: 0x240600cf  addiu       $a2, $zero, 0xCF
    ctx->pc = 0x2b0308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
label_2b030c:
    // 0x2b030c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b030cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0310:
    // 0x2b0310: 0xc0a5648  jal         func_295920
label_2b0314:
    if (ctx->pc == 0x2B0314u) {
        ctx->pc = 0x2B0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0310u;
        // 0x2b0314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0318u;
        goto label_2b0318;
    }
    ctx->pc = 0x2B0310u;
    SET_GPR_U32(ctx, 31, 0x2B0318u);
    ctx->pc = 0x2B0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0310u;
    // 0x2b0314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B0310u, 0x2B0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0318u;
label_2b0318:
    // 0x2b0318: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b031c:
    if (ctx->pc == 0x2B031Cu) {
        ctx->pc = 0x2B031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0318u;
        // 0x2b031c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0320u;
        goto label_2b0320;
    }
    ctx->pc = 0x2B0318u;
    {
        const bool branch_taken_0x2b0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0318u;
        // 0x2b031c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0318) {
            ctx->pc = 0x2B0330u;
            goto label_2b0330;
        }
    }
    ctx->pc = 0x2B0320u;
label_2b0320:
    // 0x2b0320: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2b0320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2b0324:
    // 0x2b0324: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b0324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2b0328:
    // 0x2b0328: 0x40f809  jalr        $v0
label_2b032c:
    if (ctx->pc == 0x2B032Cu) {
        ctx->pc = 0x2B032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0328u;
        // 0x2b032c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0330u;
        goto label_2b0330;
    }
    ctx->pc = 0x2B0328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0330u);
        ctx->pc = 0x2B032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0328u;
        // 0x2b032c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0328u, 0x2B0330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0330u;
label_2b0330:
    // 0x2b0330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0334:
    // 0x2b0334: 0x3e00008  jr          $ra
label_2b0338:
    if (ctx->pc == 0x2B0338u) {
        ctx->pc = 0x2B0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0334u;
        // 0x2b0338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B033Cu;
        goto label_2b033c;
    }
    ctx->pc = 0x2B0334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0334u;
        // 0x2b0338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B033Cu;
label_2b033c:
    // 0x2b033c: 0x0  nop
    ctx->pc = 0x2b033cu;
    // NOP
    if (ctx->pc == 0x2b033cu) { ctx->pc = 0x2b0340u; }
}
